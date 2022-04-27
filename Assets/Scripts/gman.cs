using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//Rise and shine, Mr. Freeman...
//Rise, and smell the ashes.
/*
Some stuff about the game:
Enemy types:
~Recon - Jumpjet - Limited to light machine gun. Warns everyone. Works in tandem with rocketeers. Jumps across small gaps for a surprise attack. Can't fly. Fire in rapid bursts.
~Rocketeer - Increased Fuel - Flies quite often. Immediately takes to the air to try to aerially bombard you if recon spots you. Doesn't check for fuel.
~Blockadesman - Armor - Heavy duty, can even take a rocket to the face. Rather slow though.
~Bombadier - Firepower Upgrade - Fires arcing rockets. Attempts to bombard from their position based on Recon intel. Fires in trios.
~Rocketman - None. - Only rockets. Uses standard AI, with no special gimmicks.
Light - None. - Only machine gun. Uses standard AI, with no special gimmicks.
~Medium - None. - Both rockets and machine gun. Uses standard AI, with no special gimmicks.

Powerup descriptions:
~Jumpjet - Air control, increased speed in air, spends once and must recharge.
Increased Fuel - Triples your fuel and doubles the recharge time.
Armor - Doubles your health. Lets you sustain all but direct hits.
~Firepower Upgrade - Lets you fire 4 rockets in rapid succession, before needing to do a lengthy reload.

Refills by current defaults:
Jumpjet:3.75 seconds.
Jetpack:40 seconds 
Jetpack(INCREASED):60 seconds.
Firepower:12 seconds.

Had to rewrite large sections of this to simplify things. Things with ~ are scrapped.
 */
public class gman : MonoBehaviour
{
    //Internals
    private int itemCount = 0; //Generic value.
    private float playerHP = 100; //Generic value.
    private int playerMaxHP = 100; //Generic value.
    private int playerHPBeginRecharge = 3000; //How many milliseconds before you begin to recharge health?
    private float playerHPRefill = 3f; //How much health do you regain per second?'
    private bool hUpgrade = false; // Health upgrade. Didn't fit in any other category.

    //Recharge delatimers
    private float fRecharge = 0f; //How much deltatime has it been since jetpack(Flying) usage.
    private float mRecharge = 0f; //How much deltatime has it been since Machinegun usage.
    private float hRecharge = 0f; //How long has it been since you took damage?

    //Jetpack handling.
    private bool jetPackActive = false; //Whether or not the jetpack is active at this current moment.
    private float playerFuel = 20f; //Done in seconds.
    private float fuelRefill = 0.5f; //How much per second?
    private float fuelMinimum = 3f; //How many seconds of fuel minimum to take off.
    private float fuelMax = 20f; //What's your maximum fuel?
    private int fBeginRecharge = 965; //How long in milliseconds before you begin regaining fuel?
    private bool fUpgrade = false;

    //Machine gun handling.
    private int mFireSpeed = 80; //How many milliseconds before firing another shot.
    private int mReload = 2400; //How many milliseconds for a reload?
    private int mMax = 30; //How many rounds in the magazine max?
    private int mLoaded = 30; //How many rounds in the magazine now?
    private bool mReloadNow = false;
    private bool mReady = true;

    //Some strings
    private string HealthLabel = "HEALTH";
    private string AmmunitionLabel = "AMMUNITION";
    public float miscDBG1;
    public float miscDBG2;
    public float miscDBG3;

    private byte win = 4;


    //Externals
    public int items //Item counter.
    {
        get { return itemCount; }
        set
        { 
           itemCount = value;
            Debug.LogFormat("Item count: {0}", itemCount);
        } 
    }

    public int health //Your current HP.
    {
        get { return (int)playerHP; }
        set
        {
            playerHP = value;
            hRecharge = 0.0f;
            Debug.LogFormat("HP is at: {0}", playerHP);
        }
    }

    public bool checkJetpack //Checks the current jetpack fuel, and turns on or off the drain.
    {
        get { 
            if ((jetPackActive == true && playerFuel < 0) || (jetPackActive == false && playerFuel < fuelMinimum)) { jetPackActive = false; return false; }
            return true;
            }
        set {
            jetPackActive = value;
        }
    }

    public bool fireBullet
    {
        get
        {
            if (mLoaded > 0 && mReady == true) { mLoaded = mLoaded - 1; mRecharge = 0; mReady = false;} else { return false; } //Not returning if true, not yet.
            if (mLoaded == 0) { mReloadNow = true; } //Reload if we literally just ran out of bullets.
            return true; //And now we return.
        }
        set
        {
            if (mLoaded < mMax && mReloadNow == false) {
                mRecharge = 0f;
                mLoaded = 0;
                mReady = false;
                mReloadNow = true;
            }
        }
    }

    public void giveItem(byte itemType) //Gives the item of choice. 
    { 
        switch(itemType)
        {
            case 1: // Armor upgrade.
                if (hUpgrade == false) {
                    Debug.Log("Armor armed!");
                    hRecharge = 0f;
                    playerMaxHP = playerMaxHP * 2;
                    hUpgrade = true;
                }
                break;
            case 2: // Rocket upgrade.
                break;
            case 3: // Jumpjet upgrade.
                break;
            case 4: // Jetpack upgrade.
                if (fUpgrade == false) {
                    Debug.Log("Jetpack ready!");
                    fRecharge = 0f;
                    fUpgrade = true;
                    fuelMax = fuelMax * 3;
                    fuelRefill = fuelRefill * 2;
                }
                break;
            default:
                Debug.Log("Something called to give an item, but there's no compatible itemtype.");
                break;
        }
    }

    void Start()
    {
        
    }

    // Update is called once per frame
    /*void Update()
    {
        
    }*/
    void Update()
    {
        //Debug.Log("Deltatime currently is:" + Time.deltaTime * 100);
        fRecharge = fRecharge + Time.deltaTime;
        mRecharge = mRecharge + Time.deltaTime;
        hRecharge = hRecharge + Time.deltaTime;
        //Debug.Log((float)fBeginRecharge / 1000 + " < " + fRecharge);

        if (((float)fBeginRecharge / 1000) < fRecharge && playerFuel < fuelMax) { playerFuel = playerFuel + Time.deltaTime; } else if (fBeginRecharge > fRecharge && playerFuel > fuelMax) { playerFuel = fuelMax; } //Refuel over time after landing.
        
        if (((float)playerHPBeginRecharge /1000) < hRecharge && playerHP < playerMaxHP) { playerHP = playerHP + (playerHPRefill * Time.deltaTime); } else if (playerHPBeginRecharge > hRecharge  && playerHP > playerMaxHP) { playerHP = playerMaxHP; } //Horrendous health system

        if (((float)mReload/ 1000) < mRecharge && mReloadNow) { mReady = true; mLoaded = mMax; mReloadNow = false; } //Reloads the machinegun.

        if (((float)mFireSpeed / 1000) < mRecharge) { mReady = true; } //Likewise, readies the bull!

        if (jetPackActive == true) //Drain the fuel of the player.
        {
            fRecharge = 0f;
            if (checkJetpack == true) { playerFuel = playerFuel - Time.deltaTime; } else { jetPackActive = false; }
        }
    }

    void OnGUI()
    {
        GUI.Box(new Rect(20, 20, 150, 25), "HEALTH:" + (int)playerHP);
        GUI.Box(new Rect(20, 50, 150, 25), "FUEL:" + playerFuel);
        //GUI.Box(new Rect(20, 90, 150, 25), "JUMPJET:" + jFuel);
        GUI.Box(new Rect(20, 80, 150, 25), "MACHINE GUN:" + mLoaded + "/" + mMax);
        //GUI.Box(new Rect(20, 80, 150, 25), "ROCKETS:" + rLoaded);

        if (hUpgrade == true && fUpgrade == true)
        {
            GUI.Label(new Rect(Screen.width / 2 - 100, Screen.height - 50, 300, 50), "Congratulations, you win!");
        } else {
            GUI.Label(new Rect(Screen.width / 2 - 100, Screen.height - 50, 300, 50), "You have not yet collected all of the powerups.");
         }

        //Debug of the day!
        int DotD = 1080; //DotD Offset
        GUI.Box(new Rect(DotD, 10, 150, 25), "DEBUG OF THE DAY");
        int DotDo = 0; //DotD Offset
        //Rocketpack
        /*GUI.Box(new Rect(DotD + (DotDo * 150), 40, 150, 25), "Rocketpack");
        GUI.Box(new Rect(DotD + (DotDo * 150), 70, 150, 25), "dTime:" + fRecharge);
        GUI.Box(new Rect(DotD + (DotDo * 150), 100, 150, 25), "Refill:" + fuelRefill);
        GUI.Box(new Rect(DotD + (DotDo * 150), 130, 150, 25), "Max:" + fuelMax);
        GUI.Box(new Rect(DotD + (DotDo * 150), 160, 150, 25), "C.Refill:" + (fuelRefill*Time.deltaTime));
        GUI.Box(new Rect(DotD + (DotDo * 150), 190, 150, 25), "Is Active:" + jetPackActive);
        GUI.Box(new Rect(DotD + (DotDo * 150), 220, 150, 25), "Min:" + fuelMinimum);
        GUI.Box(new Rect(DotD + (DotDo * 150), 250, 150, 25), "Recharge:" + fBeginRecharge +"/"+((float)fBeginRecharge/1000));
        GUI.Box(new Rect(DotD + (DotDo * 150), 280, 150, 25), "Heightcheck:" + miscDBG1);*/
        //Health
        /*GUI.Box(new Rect(DotD + (DotDo * 150), 40, 150, 25), "Health handling");
        GUI.Box(new Rect(DotD + (DotDo * 150), 70, 150, 25), "dTime:" + hRecharge);
        GUI.Box(new Rect(DotD + (DotDo * 150), 100, 150, 25), "Refill:" + playerHPRefill);
        GUI.Box(new Rect(DotD + (DotDo * 150), 130, 150, 25), "Max:" + playerMaxHP);
        GUI.Box(new Rect(DotD + (DotDo * 150), 160, 150, 25), "Refill Time:" + (hRecharge - ((float)playerHPBeginRecharge / 1000)));
        GUI.Box(new Rect(DotD + (DotDo * 150), 190, 150, 25), "Recharge:" + playerHPBeginRecharge+"/" + ((float)playerHPBeginRecharge / 1000));
        GUI.Box(new Rect(DotD + (DotDo * 150), 220, 150, 25), "True Health:" + playerHP);*/
        //Rockets
        /*GUI.Box(new Rect(DotD + (DotDo * 150), 40, 150, 25), "Rockets");
        GUI.Box(new Rect(DotD + (DotDo * 150), 70, 150, 25), "dTime:" + rRecharge);
        GUI.Box(new Rect(DotD + (DotDo * 150), 100, 150, 25), "Refill:" + rBeginRecharge);
        GUI.Box(new Rect(DotD + (DotDo * 150), 130, 150, 25), "Max:" + rMax);
        GUI.Box(new Rect(DotD + (DotDo * 150), 160, 150, 25), "Argh:" + (((float)rReload) / 1000) + "/" + rLastReload) ;
        GUI.Box(new Rect(DotD + (DotDo * 150), 190, 150, 25), "Is Ready:" + rReady);
        GUI.Box(new Rect(DotD + (DotDo * 150), 220, 150, 25), "Last Reload:" + rLastReload);
        GUI.Box(new Rect(DotD + (DotDo * 150), 250, 150, 25), "Recharge:" + rBeginRecharge + "/" + ((float)rBeginRecharge / 1000));
        GUI.Box(new Rect(DotD + (DotDo * 150), 280, 150, 25), "Load time:" + rReload + "/" + ((float)rReload / 1000));
        DotDo = 1;
        GUI.Box(new Rect(DotD + (DotDo * 150), 40, 150, 25), "Machine Gun");
        GUI.Box(new Rect(DotD + (DotDo * 150), 70, 150, 25), "dTime:" + mRecharge);
        GUI.Box(new Rect(DotD + (DotDo * 150), 100, 150, 25), "Fire:" + mFireSpeed + "/" + ((float)mFireSpeed));
        GUI.Box(new Rect(DotD + (DotDo * 150), 130, 150, 25), "Reload:" + mReload + "/" + ((float)mReload));*/
    }
}
