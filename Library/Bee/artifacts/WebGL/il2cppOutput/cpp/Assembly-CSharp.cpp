﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// bulletbehavior
struct bulletbehavior_tE8E20C775E87BDA69B2BC2A2321E46AA805B5FCD;
// cameracharacter
struct cameracharacter_t6C51E41EA99C99E50E06823ED1E01B2BBFE7838F;
// characterenemy
struct characterenemy_t5578804BFD1DFDA60A4BECB1238CFBB7BDA122BE;
// characterplayer
struct characterplayer_tD4F1269E795B72353586C0F769B63AE415654577;
// explorercam
struct explorercam_tB2775B42E257D154ECE24BA8251172B6E26E1172;
// gman
struct gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299;
// pickupbehavior
struct pickupbehavior_tF813D41DCD5C91677F3DCFC45243BC1954F938CA;
// rocketbehavior
struct rocketbehavior_tD2010995988200E26B92CA0DCBE4E0C03696AFAE;
// rocketexplosion
struct rocketexplosion_t32A153B3F2ABBBCDDEDCB204F537FFA0FE46ECD5;
// utilities
struct utilities_tF487F0FFB2AC5614AB3AAF1DC6F9A25D0E81CB37;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cameracharacter_t6C51E41EA99C99E50E06823ED1E01B2BBFE7838F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03B90C6C6AA5B60210A64132C0B9C09458E9C31C;
IL2CPP_EXTERN_C String_t* _stringLiteral0688E856CD319FDF8B125D9E9171EB84B346B30D;
IL2CPP_EXTERN_C String_t* _stringLiteral06FD5B512FDE4E53BBA58BCDC22FC1910EE20F23;
IL2CPP_EXTERN_C String_t* _stringLiteral0C630CE3BB006EC215F206E9CA4703D078F835E3;
IL2CPP_EXTERN_C String_t* _stringLiteral15AC41C71538C4B3C56405832FC624BF1E370425;
IL2CPP_EXTERN_C String_t* _stringLiteral1779FF744E07924132444CA637A71034F12A87B5;
IL2CPP_EXTERN_C String_t* _stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A;
IL2CPP_EXTERN_C String_t* _stringLiteral1CFDEE8FB24740AC75BECF044775783BF848E303;
IL2CPP_EXTERN_C String_t* _stringLiteral2266523965E5A5CA35B94B7B8DCC010B4890FFC8;
IL2CPP_EXTERN_C String_t* _stringLiteral23DD2195C8C20B70C6B7F13B6511B41E659E55D5;
IL2CPP_EXTERN_C String_t* _stringLiteral24786BFD37763AE72E7BF9BC3C6202A721A8AEA1;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2C868CE6641E0607052FCD1AEC262AD9D72B5056;
IL2CPP_EXTERN_C String_t* _stringLiteral3A4BF4761E31A337B98498084E02FA672B0DDFB8;
IL2CPP_EXTERN_C String_t* _stringLiteral3C907D411272975AFE98760F81495D14DDC25815;
IL2CPP_EXTERN_C String_t* _stringLiteral46316EEAF205E0AD88ADC437DBE003BE29E60973;
IL2CPP_EXTERN_C String_t* _stringLiteral4E2D96F100D09C41048AA923D70A52C4EB0DBE60;
IL2CPP_EXTERN_C String_t* _stringLiteral53646DA519CF5E53B8AD6319DE4CEB5E3655D3DE;
IL2CPP_EXTERN_C String_t* _stringLiteral5488658B9661DC47112A6667A1ABBA2B8790D055;
IL2CPP_EXTERN_C String_t* _stringLiteral5D95CF88441E5E0FF7F6BFB93DF4589E90D5A6A6;
IL2CPP_EXTERN_C String_t* _stringLiteral5E55E9426ABB19B7D72F5B33AF15F9DE3048F5B8;
IL2CPP_EXTERN_C String_t* _stringLiteral6BF3DE6771F9295CCC30F8B010BE92BC9BA3FA41;
IL2CPP_EXTERN_C String_t* _stringLiteral6D0066FC9B8664BF1C6543EFBB3BF0580A6D253B;
IL2CPP_EXTERN_C String_t* _stringLiteral71C23BE1B122B49767BF0D891D6AB1CFC222EF6A;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C String_t* _stringLiteral7F57F5F19D9C93517CC7EFEB78E659C1D635185C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral85EA2B8AA9FC25A45EC9E3BA45F20ADB78851307;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0;
IL2CPP_EXTERN_C String_t* _stringLiteral88C4CE8184BC1280616820CAD60D3E70F5402F76;
IL2CPP_EXTERN_C String_t* _stringLiteral9411BEF8FA499A95DF165C3C84938ACB86D5DA67;
IL2CPP_EXTERN_C String_t* _stringLiteralA95CFFF7DEF13AC6A33B22A1FDED945E17A23BA2;
IL2CPP_EXTERN_C String_t* _stringLiteralAAD427A90128BF057107000ED0BB663002F2E2CB;
IL2CPP_EXTERN_C String_t* _stringLiteralABB3CA21F7773642B5FBA8F6B9EF1EC83D8AF188;
IL2CPP_EXTERN_C String_t* _stringLiteralB47ABE05C7C325CDC60990977985BF947E57F0C9;
IL2CPP_EXTERN_C String_t* _stringLiteralBA4D4BF58010065FE9A3B6A28A945CA55CC590AA;
IL2CPP_EXTERN_C String_t* _stringLiteralBCE2BACACF5AAC1B71CA898A830BCA944F3175B5;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC24B5AEA8B375273B4A5967D511FD9B45AEE7908;
IL2CPP_EXTERN_C String_t* _stringLiteralCD503E948E61D33894C3D83AC55ACCB578E3C635;
IL2CPP_EXTERN_C String_t* _stringLiteralE06B9013DB7E722B92EB3AF5D7E157E6BE8517BF;
IL2CPP_EXTERN_C String_t* _stringLiteralE18A018932E893672358F6D410459324CF9B30A8;
IL2CPP_EXTERN_C String_t* _stringLiteralE479E8283AE6975B22C85362C2A8C4543BA36B71;
IL2CPP_EXTERN_C String_t* _stringLiteralE62B4BC2F21F687B0DF9DCF42322A1544EEDCCE1;
IL2CPP_EXTERN_C String_t* _stringLiteralEE0771CF11BBE127E8D9C6C7D541FC623ED19B3E;
IL2CPP_EXTERN_C String_t* _stringLiteralF10C0F7F767570CC63052248BA548DC96122CE27;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF60972F217158A6D0F388023D95BA56AF9B5B629;
IL2CPP_EXTERN_C String_t* _stringLiteralFA30B2C51D2E049C52BC9E1FD1AFC0C96B9428EF;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisgman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299_mA66F1D853DFA3FE066CA2AB06D8F1CD17D275CA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.ForceMode
struct ForceMode_t603F3ECB085E4FDD30C91273A469047EA64F4459 
{
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___2;
};

// UnityEngine.KeyCode
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.QueryTriggerInteraction
struct QueryTriggerInteraction_t5AA443202C8B671F391534A002B7CF48A1412D23 
{
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___2;
};

// UnityEngine.Space
struct Space_tF043E93E06B702DD05199C28C6F779049B38A969 
{
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;
};

// cameracharacter/currentAction
struct currentAction_t43CD42E763B9644325BA8E49490C4C99B3C03626 
{
	// System.Int32 cameracharacter/currentAction::value__
	int32_t ___value___2;
};

// characterplayer/currentAction
struct currentAction_t68A5D075FAC234F23574AE7A746BFB4298DAACDE 
{
	// System.Int32 characterplayer/currentAction::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// bulletbehavior
struct bulletbehavior_tE8E20C775E87BDA69B2BC2A2321E46AA805B5FCD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single bulletbehavior::projectileSpeed
	float ___projectileSpeed_4;
	// System.Single bulletbehavior::finalTime
	float ___finalTime_5;
	// UnityEngine.Rigidbody bulletbehavior::rB
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rB_6;
};

// cameracharacter
struct cameracharacter_t6C51E41EA99C99E50E06823ED1E01B2BBFE7838F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 cameracharacter::viewOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___viewOffset_5;
	// UnityEngine.Transform cameracharacter::targetObj
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetObj_6;
};

struct cameracharacter_t6C51E41EA99C99E50E06823ED1E01B2BBFE7838F_StaticFields
{
	// UnityEngine.Vector3 cameracharacter::defOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defOffset_4;
};

// characterenemy
struct characterenemy_t5578804BFD1DFDA60A4BECB1238CFBB7BDA122BE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform characterenemy::patrolParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___patrolParent_4;
	// System.UInt16 characterenemy::patrolRouteCount
	uint16_t ___patrolRouteCount_5;
	// System.Boolean characterenemy::patrolReverse
	bool ___patrolReverse_6;
	// System.UInt16 characterenemy::nodeCount
	uint16_t ___nodeCount_7;
	// System.Int32 characterenemy::patrolEnd
	int32_t ___patrolEnd_8;
	// System.Single characterenemy::patrolTime
	float ___patrolTime_9;
	// System.Collections.Generic.List`1<UnityEngine.Transform> characterenemy::patrolLocations
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___patrolLocations_10;
	// System.Collections.Generic.List`1<UnityEngine.Transform> characterenemy::patrolList
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___patrolList_11;
	// System.UInt16 characterenemy::patrolIndex
	uint16_t ___patrolIndex_12;
	// UnityEngine.AI.NavMeshAgent characterenemy::navAgent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___navAgent_13;
	// UnityEngine.Transform characterenemy::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_14;
	// System.Boolean characterenemy::chaseMode
	bool ___chaseMode_15;
	// gman characterenemy::Manager
	gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* ___Manager_16;
	// System.Int32 characterenemy::enemyHP
	int32_t ___enemyHP_17;
};

// characterplayer
struct characterplayer_tD4F1269E795B72353586C0F769B63AE415654577  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single characterplayer::movementSpeed
	float ___movementSpeed_4;
	// System.Single characterplayer::rotationSpeed
	float ___rotationSpeed_5;
	// System.Single characterplayer::jumpSpeed
	float ___jumpSpeed_6;
	// System.Single characterplayer::jetpackSpeed
	float ___jetpackSpeed_7;
	// System.Single characterplayer::speedLimiter
	float ___speedLimiter_8;
	// gman characterplayer::Manager
	gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* ___Manager_9;
	// System.Single characterplayer::groundDistance
	float ___groundDistance_10;
	// UnityEngine.LayerMask characterplayer::groundLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundLayer_11;
	// UnityEngine.GameObject characterplayer::playerProjectile
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerProjectile_12;
	// UnityEngine.GameObject characterplayer::altProjectile
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___altProjectile_13;
	// System.Boolean characterplayer::activeJetpack
	bool ___activeJetpack_14;
	// System.Boolean characterplayer::airControl
	bool ___airControl_15;
	// System.Single characterplayer::airMovementX
	float ___airMovementX_16;
	// System.Single characterplayer::softAltCap
	float ___softAltCap_17;
	// System.Single characterplayer::hardAltCap
	float ___hardAltCap_18;
	// System.Single characterplayer::verticalIn
	float ___verticalIn_19;
	// System.Single characterplayer::horizontalIn
	float ___horizontalIn_20;
	// UnityEngine.Rigidbody characterplayer::rB
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rB_21;
	// UnityEngine.Collider characterplayer::colliding
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___colliding_22;
};

// explorercam
struct explorercam_tB2775B42E257D154ECE24BA8251172B6E26E1172  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single explorercam::Speed
	float ___Speed_4;
	// System.Single explorercam::RotationLR
	float ___RotationLR_5;
	// System.Single explorercam::RotationUD
	float ___RotationUD_6;
	// UnityEngine.Vector3 explorercam::resetPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___resetPos_7;
	// UnityEngine.Vector2 explorercam::resetRot
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___resetRot_8;
};

// gman
struct gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 gman::itemCount
	int32_t ___itemCount_4;
	// System.Single gman::playerHP
	float ___playerHP_5;
	// System.Int32 gman::playerMaxHP
	int32_t ___playerMaxHP_6;
	// System.Int32 gman::playerHPBeginRecharge
	int32_t ___playerHPBeginRecharge_7;
	// System.Single gman::playerHPRefill
	float ___playerHPRefill_8;
	// System.Boolean gman::hUpgrade
	bool ___hUpgrade_9;
	// System.Boolean gman::death
	bool ___death_10;
	// System.Single gman::fRecharge
	float ___fRecharge_11;
	// System.Single gman::mRecharge
	float ___mRecharge_12;
	// System.Single gman::hRecharge
	float ___hRecharge_13;
	// System.Boolean gman::jetPackActive
	bool ___jetPackActive_14;
	// System.Single gman::playerFuel
	float ___playerFuel_15;
	// System.Single gman::fuelRefill
	float ___fuelRefill_16;
	// System.Single gman::fuelMinimum
	float ___fuelMinimum_17;
	// System.Single gman::fuelMax
	float ___fuelMax_18;
	// System.Int32 gman::fBeginRecharge
	int32_t ___fBeginRecharge_19;
	// System.Boolean gman::fUpgrade
	bool ___fUpgrade_20;
	// System.Int32 gman::mFireSpeed
	int32_t ___mFireSpeed_21;
	// System.Int32 gman::mReload
	int32_t ___mReload_22;
	// System.Int32 gman::mMax
	int32_t ___mMax_23;
	// System.Int32 gman::mLoaded
	int32_t ___mLoaded_24;
	// System.Boolean gman::mReloadNow
	bool ___mReloadNow_25;
	// System.Boolean gman::mReady
	bool ___mReady_26;
	// System.String gman::HealthLabel
	String_t* ___HealthLabel_27;
	// System.String gman::AmmunitionLabel
	String_t* ___AmmunitionLabel_28;
	// System.Single gman::miscDBG1
	float ___miscDBG1_29;
	// System.Single gman::miscDBG2
	float ___miscDBG2_30;
	// System.Single gman::miscDBG3
	float ___miscDBG3_31;
	// System.Byte gman::win
	uint8_t ___win_32;
};

// pickupbehavior
struct pickupbehavior_tF813D41DCD5C91677F3DCFC45243BC1954F938CA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject pickupbehavior::GHands
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GHands_4;
	// gman pickupbehavior::Manager
	gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* ___Manager_5;
	// System.Byte pickupbehavior::itemType
	uint8_t ___itemType_6;
};

// rocketbehavior
struct rocketbehavior_tD2010995988200E26B92CA0DCBE4E0C03696AFAE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single rocketbehavior::projectileMaxSpeed
	float ___projectileMaxSpeed_4;
	// System.Single rocketbehavior::projectileVelocity
	float ___projectileVelocity_5;
	// System.Single rocketbehavior::projectileSpeed
	float ___projectileSpeed_6;
	// System.Single rocketbehavior::finalTime
	float ___finalTime_7;
	// System.Int32 rocketbehavior::speedCount
	int32_t ___speedCount_8;
	// System.Int32 rocketbehavior::primeTime
	int32_t ___primeTime_9;
	// UnityEngine.Rigidbody rocketbehavior::rB
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rB_10;
	// UnityEngine.GameObject rocketbehavior::explosionObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___explosionObject_11;
};

// rocketexplosion
struct rocketexplosion_t32A153B3F2ABBBCDDEDCB204F537FFA0FE46ECD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single rocketexplosion::finalSize
	float ___finalSize_4;
	// System.Single rocketexplosion::size
	float ___size_5;
	// System.Single rocketexplosion::increaseSpeed
	float ___increaseSpeed_6;
	// System.Single rocketexplosion::time
	float ___time_7;
	// System.Int32 rocketexplosion::timeFinal
	int32_t ___timeFinal_8;
};

// utilities
struct utilities_tF487F0FFB2AC5614AB3AAF1DC6F9A25D0E81CB37  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct utilities_tF487F0FFB2AC5614AB3AAF1DC6F9A25D0E81CB37_StaticFields
{
	// System.UInt16 utilities::playerDeathCount
	uint16_t ___playerDeathCount_4;
	// System.UInt16 utilities::enemyDeathCount
	uint16_t ___enemyDeathCount_5;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType**/Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType**/Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType**/Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;

// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType**/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody__ctor_mB4E21922228AED3B52D8696D54F5B514F922CB07 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType**/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void characterenemy::initPatrolList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void characterenemy_initPatrolList_mEB24B406E3D9A2422C00D91DBBAECBB0D34D2FAF (characterenemy_t5578804BFD1DFDA60A4BECB1238CFBB7BDA122BE* __this, const RuntimeMethod* method) ;
// System.Void characterenemy::initNewPatrol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void characterenemy_initNewPatrol_m063399C3A754DB884C6D361B108D37D69504A889 (characterenemy_t5578804BFD1DFDA60A4BECB1238CFBB7BDA122BE* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<gman>()
inline gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* GameObject_GetComponent_Tisgman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299_mA66F1D853DFA3FE066CA2AB06D8F1CD17D275CA6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType**/Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Single UnityEngine.AI.NavMeshAgent::get_remainingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::get_pathPending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_get_pathPending_mA806A4DC1E06CA32A4E7E71B6846B516EC8C2487 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// System.Void characterenemy::nextPatrolPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void characterenemy_nextPatrolPoint_mC7790212C4AEB017491E38593041142C880B5EC4 (characterenemy_t5578804BFD1DFDA60A4BECB1238CFBB7BDA122BE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_destination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_destination_m5F0A8E4C8ED93798D6B9CE496B10FCE5B7461B95 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 gman::get_health()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t gman_get_health_mDF3871A907D6275AB142B9C89AE3A51D63A3BA98 (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, const RuntimeMethod* method) ;
// System.Void gman::set_health(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gman_set_health_m042074E212E0D0FEBEDFC61C50633BE501891B0F (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.String System.UInt16::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_m57629B7E74D92A54414073D5C27D6827C93A4DD5 (uint16_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline (int32_t ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType**/Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType**/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_GetMask_mB1925EDF21896C48C8E2AE1C11BB1944F279181E (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___layerNames0, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922 (int32_t ___intVal0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Boolean characterplayer::checkGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool characterplayer_checkGround_m75A7D08F4B1CED9A9D2CE48FE0A7FD5D77C1CF36 (characterplayer_tD4F1269E795B72353586C0F769B63AE415654577* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean gman::get_fireBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool gman_get_fireBullet_m09A105162184FE4D1AC1848B803F0892DCBFD7B2 (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void gman::set_fireBullet(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gman_set_fireBullet_mF91668C72448C8912D3611BFC28E71CFF218A5BC (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088 (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Rigidbody_get_rotation_m07882A7024FB3F96BA13EC577A96163BBB621AA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot0, const RuntimeMethod* method) ;
// System.Boolean gman::get_checkJetpack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool gman_get_checkJetpack_m0575F030CEBD587D50A41EC91A6ED8769248AD87 (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, const RuntimeMethod* method) ;
// System.Void gman::set_checkJetpack(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void gman_set_checkJetpack_m9D16624C16AFBA27BC5BD36C3E56E82AA95A7535_inline (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single characterplayer::heightCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float characterplayer_heightCheck_mACB965401FB2F5DF7584C2E39A2B6151453FA72C (characterplayer_tD4F1269E795B72353586C0F769B63AE415654577* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CheckCapsule(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckCapsule_mBB973BB9EFAAC95006AC3FDD0D26FA37AAD7F936 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, float ___radius2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_m1E4D5FE4B7911725059CE0A2674B88CFAD279365 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m92B7A836FB5463F20951B6BD9DB8F3B1BA56763C (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Void utilities::levelRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void utilities_levelRestart_mC50D6141BC80ADADA0ACF6B287F9B4EBC826AC55 (const RuntimeMethod* method) ;
// System.Void gman::giveItem(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gman_giveItem_mE7C07312827DE5D6F5D73C211B1A73A84F14C9FE (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, uint8_t ___itemType0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void bulletbehavior::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bulletbehavior_Start_m546B61CD02A297715D14048B7106469834475F30 (bulletbehavior_tE8E20C775E87BDA69B2BC2A2321E46AA805B5FCD* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0);
		s_Il2CppMethodInitialized = true;
	}
{
		// name = "Bullet"; //Renames to a generic rocket, so the enemy can't distinguish them. They're blind.
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(__this, _stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0, NULL);
		// rB = GetComponent<Rigidbody>(); // Get the rigidbody of our new projectile.
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rB_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rB_6), (void*)L_0);
		// transform.Rotate(90f, transform.rotation.y, 0f, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		float L_4 = L_3.___y_1;
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_1, (90.0f), L_4, (0.0f), 1, NULL);
		// rB.velocity = transform.up * (projectileSpeed); //Add the initial velocity.
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___rB_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_6, NULL);
		float L_8 = __this->___projectileSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_7, L_8, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_5, L_9, NULL);
		// }
		return;
	}
}
// System.Void bulletbehavior::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bulletbehavior_OnCollisionEnter_mBCD0B26D245CE78760752032A0F29B2FC73656DF (bulletbehavior_tE8E20C775E87BDA69B2BC2A2321E46AA805B5FCD* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___item0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15AC41C71538C4B3C56405832FC624BF1E370425);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9411BEF8FA499A95DF165C3C84938ACB86D5DA67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD503E948E61D33894C3D83AC55ACCB578E3C635);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		// Debug.Log("Bullet hit " + item.gameObject.name + ".");
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___item0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral15AC41C71538C4B3C56405832FC624BF1E370425, L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// switch (item.gameObject.name)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_4 = ___item0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		V_2 = L_6;
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0, NULL);
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A, NULL);
		if (L_10)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralCD503E948E61D33894C3D83AC55ACCB578E3C635, NULL);
		if (L_12)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral9411BEF8FA499A95DF165C3C84938ACB86D5DA67, NULL);
		if (L_14)
		{
			goto IL_0085;
		}
	}
	{
		goto IL_00a7;
	}

IL_0061:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_15, NULL);
		// break;
		return;
	}

IL_006d:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_16, NULL);
		// break;
		return;
	}

IL_0079:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_17, NULL);
		// break;
		return;
	}

IL_0085:
	{
		// if (finalTime/4 > 0.2f) { finalTime = 0.2f; }
		float L_18 = __this->___finalTime_5;
		if ((!(((float)((float)(L_18/(4.0f)))) > ((float)(0.200000003f)))))
		{
			goto IL_0141;
		}
	}
	{
		// if (finalTime/4 > 0.2f) { finalTime = 0.2f; }
		__this->___finalTime_5 = (0.200000003f);
		// break;
		return;
	}

IL_00a7:
	{
		// Vector2 richoangle = new Vector2(Random.value *finalTime- 0.7f, Random.value * -finalTime - 0.7f);
		float L_19;
		L_19 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		float L_20 = __this->___finalTime_5;
		float L_21;
		L_21 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		float L_22 = __this->___finalTime_5;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_19, L_20)), (0.699999988f))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_21, ((-L_22)))), (0.699999988f))), NULL);
		// Quaternion richochet = new Quaternion();
		il2cpp_codegen_initobj((&V_1), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		// richochet = Quaternion.Inverse(transform.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_24, NULL);
		V_1 = L_25;
		// richochet.x = richochet.x * richoangle.x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = V_1;
		float L_27 = L_26.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_0;
		float L_29 = L_28.___x_0;
		(&V_1)->___x_0 = ((float)il2cpp_codegen_multiply(L_27, L_29));
		// richochet.z = richochet.z * richoangle.y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = V_1;
		float L_31 = L_30.___z_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_0;
		float L_33 = L_32.___y_1;
		(&V_1)->___z_2 = ((float)il2cpp_codegen_multiply(L_31, L_33));
		// transform.rotation = richochet;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35 = V_1;
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_34, L_35, NULL);
		// rB.velocity = transform.up * (projectileSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_36 = __this->___rB_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_37, NULL);
		float L_39 = __this->___projectileSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_38, L_39, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_36, L_40, NULL);
	}

IL_0141:
	{
		// }
		return;
	}
}
// System.Void bulletbehavior::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bulletbehavior_Update_mB3E3EF60C756D4BA1608BE854A4AAE365F48AA64 (bulletbehavior_tE8E20C775E87BDA69B2BC2A2321E46AA805B5FCD* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// finalTime = finalTime - Time.deltaTime;
		float L_0 = __this->___finalTime_5;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___finalTime_5 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (finalTime/4 > 0) { rB.velocity = transform.up * (projectileSpeed) * finalTime/4; } else if (finalTime < 0) { Destroy(gameObject); }
		float L_2 = __this->___finalTime_5;
		if ((!(((float)((float)(L_2/(4.0f)))) > ((float)(0.0f)))))
		{
			goto IL_005c;
		}
	}
	{
		// if (finalTime/4 > 0) { rB.velocity = transform.up * (projectileSpeed) * finalTime/4; } else if (finalTime < 0) { Destroy(gameObject); }
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rB_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_4, NULL);
		float L_6 = __this->___projectileSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_5, L_6, NULL);
		float L_8 = __this->___finalTime_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_9, (4.0f), NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_3, L_10, NULL);
		return;
	}

IL_005c:
	{
		// if (finalTime/4 > 0) { rB.velocity = transform.up * (projectileSpeed) * finalTime/4; } else if (finalTime < 0) { Destroy(gameObject); }
		float L_11 = __this->___finalTime_5;
		if ((!(((float)L_11) < ((float)(0.0f)))))
		{
			goto IL_0074;
		}
	}
	{
		// if (finalTime/4 > 0) { rB.velocity = transform.up * (projectileSpeed) * finalTime/4; } else if (finalTime < 0) { Destroy(gameObject); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_12, NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void bulletbehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bulletbehavior__ctor_mAD3969FADDD741D275885BE2A94F5E733BD2F672 (bulletbehavior_tE8E20C775E87BDA69B2BC2A2321E46AA805B5FCD* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// public float projectileSpeed = 4f; //Our projectile speed.
		__this->___projectileSpeed_4 = (4.0f);
		// public float finalTime = 1f; // The delay before deletion, no matter what.
		__this->___finalTime_5 = (1.0f);
		// Rigidbody rB = new Rigidbody(); //Init the rigid body.
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)il2cpp_codegen_object_new(Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var);
		Rigidbody__ctor_mB4E21922228AED3B52D8696D54F5B514F922CB07(L_0, /*hidden argument*/NULL);
		__this->___rB_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rB_6), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void cameracharacter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameracharacter_Start_m6237818F14678C68E4DC145736C35EB435A50003 (cameracharacter_t6C51E41EA99C99E50E06823ED1E01B2BBFE7838F* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE479E8283AE6975B22C85362C2A8C4543BA36B71);
		s_Il2CppMethodInitialized = true;
	}
{
		// targetObj = GameObject.Find("Character_Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralE479E8283AE6975B22C85362C2A8C4543BA36B71, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___targetObj_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetObj_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void cameracharacter::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameracharacter_LateUpdate_mD394F51F84B554A4FB0A10AFEAE62C09FAA02E41 (cameracharacter_t6C51E41EA99C99E50E06823ED1E01B2BBFE7838F* __this, const RuntimeMethod* method) 
{
{
		// transform.position = targetObj.TransformPoint(viewOffset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___targetObj_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___viewOffset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_2, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_3, NULL);
		// transform.LookAt(targetObj);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___targetObj_6;
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void cameracharacter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameracharacter__ctor_m0ABD07A07BDACE6B5ACE0B187A1E8537EF31BDB3 (cameracharacter_t6C51E41EA99C99E50E06823ED1E01B2BBFE7838F* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&cameracharacter_t6C51E41EA99C99E50E06823ED1E01B2BBFE7838F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// public Vector3 viewOffset = defOffset;
		il2cpp_codegen_runtime_class_init_inline(cameracharacter_t6C51E41EA99C99E50E06823ED1E01B2BBFE7838F_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((cameracharacter_t6C51E41EA99C99E50E06823ED1E01B2BBFE7838F_StaticFields*)il2cpp_codegen_static_fields_for(cameracharacter_t6C51E41EA99C99E50E06823ED1E01B2BBFE7838F_il2cpp_TypeInfo_var))->___defOffset_4;
		__this->___viewOffset_5 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void cameracharacter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameracharacter__cctor_m1123C8F01D7D7F7B396FA02AA5CA7F2F1808031C (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&cameracharacter_t6C51E41EA99C99E50E06823ED1E01B2BBFE7838F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// public static Vector3 defOffset = new Vector3(0f, 1.6f, -8f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (1.60000002f), (-8.0f), /*hidden argument*/NULL);
		((cameracharacter_t6C51E41EA99C99E50E06823ED1E01B2BBFE7838F_StaticFields*)il2cpp_codegen_static_fields_for(cameracharacter_t6C51E41EA99C99E50E06823ED1E01B2BBFE7838F_il2cpp_TypeInfo_var))->___defOffset_4 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void characterenemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void characterenemy_Start_mC07C7B642610ACA2F1821756EBA0E6405680EC4B (characterenemy_t5578804BFD1DFDA60A4BECB1238CFBB7BDA122BE* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisgman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299_mA66F1D853DFA3FE066CA2AB06D8F1CD17D275CA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9411BEF8FA499A95DF165C3C84938ACB86D5DA67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE479E8283AE6975B22C85362C2A8C4543BA36B71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE62B4BC2F21F687B0DF9DCF42322A1544EEDCCE1);
		s_Il2CppMethodInitialized = true;
	}
{
		// name = "Character_Enemy"; //Renames to a generic enemy, so the enemy can't distinguish them. Bullets don't have eyes to distinguish this!
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(__this, _stringLiteral9411BEF8FA499A95DF165C3C84938ACB86D5DA67, NULL);
		// navAgent = GetComponent<UnityEngine.AI.NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0;
		L_0 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		__this->___navAgent_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___navAgent_13), (void*)L_0);
		// target = GameObject.Find("Character_Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralE479E8283AE6975B22C85362C2A8C4543BA36B71, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		__this->___target_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_14), (void*)L_2);
		// initPatrolList();
		characterenemy_initPatrolList_mEB24B406E3D9A2422C00D91DBBAECBB0D34D2FAF(__this, NULL);
		// initNewPatrol();
		characterenemy_initNewPatrol_m063399C3A754DB884C6D361B108D37D69504A889(__this, NULL);
		// Manager = GameObject.Find("GHands").GetComponent<gman>(); //Assign Gman's hands to handle everything.
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralE62B4BC2F21F687B0DF9DCF42322A1544EEDCCE1, NULL);
		gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* L_4;
		L_4 = GameObject_GetComponent_Tisgman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299_mA66F1D853DFA3FE066CA2AB06D8F1CD17D275CA6(L_3, GameObject_GetComponent_Tisgman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299_mA66F1D853DFA3FE066CA2AB06D8F1CD17D275CA6_RuntimeMethod_var);
		__this->___Manager_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Manager_16), (void*)L_4);
		// }
		return;
	}
}
// System.Void characterenemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void characterenemy_Update_mAF65CF75FAA83BEC2D0EFE471ACC77B0DD65E4F9 (characterenemy_t5578804BFD1DFDA60A4BECB1238CFBB7BDA122BE* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C23BE1B122B49767BF0D891D6AB1CFC222EF6A);
		s_Il2CppMethodInitialized = true;
	}
{
		// patrolTime = patrolTime + Time.deltaTime; // Update the current patrol time
		float L_0 = __this->___patrolTime_9;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___patrolTime_9 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (patrolTime >= patrolEnd) {
		float L_2 = __this->___patrolTime_9;
		int32_t L_3 = __this->___patrolEnd_8;
		if ((!(((float)L_2) >= ((float)((float)L_3)))))
		{
			goto IL_0031;
		}
	}
	{
		// Debug.Log("My patrol is up. Time to register a new one.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral71C23BE1B122B49767BF0D891D6AB1CFC222EF6A, NULL);
		// initNewPatrol();
		characterenemy_initNewPatrol_m063399C3A754DB884C6D361B108D37D69504A889(__this, NULL);
	}

IL_0031:
	{
		// if (navAgent.remainingDistance < 0.4f && !navAgent.pathPending && !chaseMode)
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_4 = __this->___navAgent_13;
		float L_5;
		L_5 = NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A(L_4, NULL);
		if ((!(((float)L_5) < ((float)(0.400000006f)))))
		{
			goto IL_005f;
		}
	}
	{
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_6 = __this->___navAgent_13;
		bool L_7;
		L_7 = NavMeshAgent_get_pathPending_mA806A4DC1E06CA32A4E7E71B6846B516EC8C2487(L_6, NULL);
		if (L_7)
		{
			goto IL_005f;
		}
	}
	{
		bool L_8 = __this->___chaseMode_15;
		if (L_8)
		{
			goto IL_005f;
		}
	}
	{
		// nextPatrolPoint();
		characterenemy_nextPatrolPoint_mC7790212C4AEB017491E38593041142C880B5EC4(__this, NULL);
		return;
	}

IL_005f:
	{
		// } else if (chaseMode)
		bool L_9 = __this->___chaseMode_15;
		if (!L_9)
		{
			goto IL_007d;
		}
	}
	{
		// navAgent.destination = target.position;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_10 = __this->___navAgent_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___target_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		NavMeshAgent_set_destination_m5F0A8E4C8ED93798D6B9CE496B10FCE5B7461B95(L_10, L_12, NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void characterenemy::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void characterenemy_LateUpdate_m8CB71A7428AFFAC22316B88456FFB9AEEBC7BE74 (characterenemy_t5578804BFD1DFDA60A4BECB1238CFBB7BDA122BE* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA95CFFF7DEF13AC6A33B22A1FDED945E17A23BA2);
		s_Il2CppMethodInitialized = true;
	}
{
		// if (enemyHP <= 0)
		int32_t L_0 = __this->___enemyHP_17;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// Debug.Log("I'm DEAD!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralA95CFFF7DEF13AC6A33B22A1FDED945E17A23BA2, NULL);
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_1, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void characterenemy::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void characterenemy_OnTriggerEnter_mA2D20C9339DBBDF41D01408A035C315AE03B688E (characterenemy_t5578804BFD1DFDA60A4BECB1238CFBB7BDA122BE* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___item0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03B90C6C6AA5B60210A64132C0B9C09458E9C31C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46316EEAF205E0AD88ADC437DBE003BE29E60973);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D95CF88441E5E0FF7F6BFB93DF4589E90D5A6A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABB3CA21F7773642B5FBA8F6B9EF1EC83D8AF188);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCE2BACACF5AAC1B71CA898A830BCA944F3175B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD503E948E61D33894C3D83AC55ACCB578E3C635);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE479E8283AE6975B22C85362C2A8C4543BA36B71);
		s_Il2CppMethodInitialized = true;
	}
String_t* V_0 = NULL;
	{
		// switch (item.name) {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___item0;
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralE479E8283AE6975B22C85362C2A8C4543BA36B71, NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A, NULL);
		if (L_5)
		{
			goto IL_005a;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCD503E948E61D33894C3D83AC55ACCB578E3C635, NULL);
		if (L_7)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0, NULL);
		if (L_9)
		{
			goto IL_0070;
		}
	}
	{
		goto IL_007b;
	}

IL_003d:
	{
		// Debug.Log("Player has entered the zone!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral03B90C6C6AA5B60210A64132C0B9C09458E9C31C, NULL);
		// patrolTime = 0.0f;
		__this->___patrolTime_9 = (0.0f);
		// chaseMode = true;
		__this->___chaseMode_15 = (bool)1;
		// break;
		return;
	}

IL_005a:
	{
		// Debug.Log("There was an explosion somewhere around me!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral5D95CF88441E5E0FF7F6BFB93DF4589E90D5A6A6, NULL);
		// break;
		return;
	}

IL_0065:
	{
		// Debug.Log("A rocket has entered my hearing range!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralABB3CA21F7773642B5FBA8F6B9EF1EC83D8AF188, NULL);
		// break;
		return;
	}

IL_0070:
	{
		// Debug.Log("A bullet whizzed past me!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral46316EEAF205E0AD88ADC437DBE003BE29E60973, NULL);
		// break;
		return;
	}

IL_007b:
	{
		// Debug.Log("Something unimportant has entered the zone. " + item.name);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10 = ___item0;
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralBCE2BACACF5AAC1B71CA898A830BCA944F3175B5, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_12, NULL);
		// }
		return;
	}
}
// System.Void characterenemy::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void characterenemy_OnTriggerExit_mDFCAE2B6972E4E25AA759B9CB6ADE23E6636E70D (characterenemy_t5578804BFD1DFDA60A4BECB1238CFBB7BDA122BE* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___item0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2266523965E5A5CA35B94B7B8DCC010B4890FFC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BF3DE6771F9295CCC30F8B010BE92BC9BA3FA41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA4D4BF58010065FE9A3B6A28A945CA55CC590AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD503E948E61D33894C3D83AC55ACCB578E3C635);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE479E8283AE6975B22C85362C2A8C4543BA36B71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF10C0F7F767570CC63052248BA548DC96122CE27);
		s_Il2CppMethodInitialized = true;
	}
String_t* V_0 = NULL;
	{
		// switch (item.name)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___item0;
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralE479E8283AE6975B22C85362C2A8C4543BA36B71, NULL);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteralCD503E948E61D33894C3D83AC55ACCB578E3C635, NULL);
		if (L_5)
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0, NULL);
		if (L_7)
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0063;
	}

IL_0030:
	{
		// Debug.Log("Player has exited the zone!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral2266523965E5A5CA35B94B7B8DCC010B4890FFC8, NULL);
		// chaseMode = false;
		__this->___chaseMode_15 = (bool)0;
		// patrolTime = 0.0f;
		__this->___patrolTime_9 = (0.0f);
		// break;
		return;
	}

IL_004d:
	{
		// Debug.Log("Relaxing, the rocket has left my range.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralBA4D4BF58010065FE9A3B6A28A945CA55CC590AA, NULL);
		// break;
		return;
	}

IL_0058:
	{
		// Debug.Log("Where did it go?");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF10C0F7F767570CC63052248BA548DC96122CE27, NULL);
		// break;
		return;
	}

IL_0063:
	{
		// Debug.Log("Something unimportant has exited the zone. " + item.name);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = ___item0;
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral6BF3DE6771F9295CCC30F8B010BE92BC9BA3FA41, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_10, NULL);
		// }
		return;
	}
}
// System.Void characterenemy::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void characterenemy_OnCollisionEnter_m8128C2F599E90671DC8DA26D22779041982FBCE0 (characterenemy_t5578804BFD1DFDA60A4BECB1238CFBB7BDA122BE* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___item0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C630CE3BB006EC215F206E9CA4703D078F835E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E2D96F100D09C41048AA923D70A52C4EB0DBE60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA95CFFF7DEF13AC6A33B22A1FDED945E17A23BA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE479E8283AE6975B22C85362C2A8C4543BA36B71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE0771CF11BBE127E8D9C6C7D541FC623ED19B3E);
		s_Il2CppMethodInitialized = true;
	}
String_t* V_0 = NULL;
	{
		// switch (item.gameObject.name)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___item0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralE479E8283AE6975B22C85362C2A8C4543BA36B71, NULL);
		if (L_4)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A, NULL);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0, NULL);
		if (L_8)
		{
			goto IL_0075;
		}
	}
	{
		goto IL_008e;
	}

IL_0035:
	{
		// Debug.Log("GOTCHA!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral4E2D96F100D09C41048AA923D70A52C4EB0DBE60, NULL);
		// Manager.health = Manager.health - 15;
		gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* L_9 = __this->___Manager_16;
		gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* L_10 = __this->___Manager_16;
		int32_t L_11;
		L_11 = gman_get_health_mDF3871A907D6275AB142B9C89AE3A51D63A3BA98(L_10, NULL);
		gman_set_health_m042074E212E0D0FEBEDFC61C50633BE501891B0F(L_9, ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)15))), NULL);
		// patrolTime = 0.0f;
		__this->___patrolTime_9 = (0.0f);
		// break;
		return;
	}

IL_0064:
	{
		// Debug.Log("I'm DEAD!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralA95CFFF7DEF13AC6A33B22A1FDED945E17A23BA2, NULL);
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(__this, NULL);
		// break;
		return;
	}

IL_0075:
	{
		// Debug.Log("I've been wounded!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral0C630CE3BB006EC215F206E9CA4703D078F835E3, NULL);
		// enemyHP -= 1;
		int32_t L_12 = __this->___enemyHP_17;
		__this->___enemyHP_17 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		// break;
		return;
	}

IL_008e:
	{
		// Debug.Log("Someone touched me but I'm not dead. " + item.gameObject.name);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_13 = ___item0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_13, NULL);
		String_t* L_15;
		L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralEE0771CF11BBE127E8D9C6C7D541FC623ED19B3E, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_16, NULL);
		// }
		return;
	}
}
// System.Void characterenemy::initPatrolList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void characterenemy_initPatrolList_mEB24B406E3D9A2422C00D91DBBAECBB0D34D2FAF (characterenemy_t5578804BFD1DFDA60A4BECB1238CFBB7BDA122BE* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1779FF744E07924132444CA637A71034F12A87B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F57F5F19D9C93517CC7EFEB78E659C1D635185C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF60972F217158A6D0F388023D95BA56AF9B5B629);
		s_Il2CppMethodInitialized = true;
	}
RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	{
		// Debug.Log("Loading patrol lists in: " + patrolParent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___patrolParent_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = _stringLiteral1779FF744E07924132444CA637A71034F12A87B5;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = _stringLiteral1779FF744E07924132444CA637A71034F12A87B5;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0017;
	}

IL_0012:
	{
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_0017:
	{
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B3_1, G_B3_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// patrolList = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_4 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_4, /*hidden argument*/List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___patrolList_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___patrolList_11), (void*)L_4);
		// foreach (Transform child in patrolParent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___patrolParent_4;
		RuntimeObject* L_6;
		L_6 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_5, NULL);
		V_0 = L_6;
	}

IL_0038:
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0087:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_8 = V_2;
					if (!L_8)
					{
						goto IL_0097;
					}
				}

IL_0091:
				{
					RuntimeObject* L_9 = V_2;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_0097:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007d;
			}

IL_003a:
			{
				// foreach (Transform child in patrolParent)
				RuntimeObject* L_10 = V_0;
				RuntimeObject* L_11;
				L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_11, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// Debug.Log("Patrol: " + child);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_1;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = L_12;
				G_B6_0 = L_13;
				G_B6_1 = _stringLiteral7F57F5F19D9C93517CC7EFEB78E659C1D635185C;
				if (L_13)
				{
					G_B7_0 = L_13;
					G_B7_1 = _stringLiteral7F57F5F19D9C93517CC7EFEB78E659C1D635185C;
					goto IL_0053;
				}
			}

IL_004f:
			{
				G_B8_0 = ((String_t*)(NULL));
				G_B8_1 = G_B6_1;
				goto IL_0058;
			}

IL_0053:
			{
				String_t* L_14;
				L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B7_0);
				G_B8_0 = L_14;
				G_B8_1 = G_B7_1;
			}

IL_0058:
			{
				String_t* L_15;
				L_15 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B8_1, G_B8_0, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_15, NULL);
				// patrolList.Add(child);
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_16 = __this->___patrolList_11;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_1;
				List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_16, L_17, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
				// patrolRouteCount += (ushort)1;
				uint16_t L_18 = __this->___patrolRouteCount_5;
				__this->___patrolRouteCount_5 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, 1)));
			}

IL_007d:
			{
				// foreach (Transform child in patrolParent)
				RuntimeObject* L_19 = V_0;
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_003a;
				}
			}

IL_0085:
			{
				goto IL_0098;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0098:
	{
		// Debug.Log("Patrol count:" + patrolRouteCount);
		uint16_t* L_21 = (&__this->___patrolRouteCount_5);
		String_t* L_22;
		L_22 = UInt16_ToString_m57629B7E74D92A54414073D5C27D6827C93A4DD5(L_21, NULL);
		String_t* L_23;
		L_23 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralF60972F217158A6D0F388023D95BA56AF9B5B629, L_22, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_23, NULL);
		// }
		return;
	}
}
// System.Void characterenemy::initNewPatrol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void characterenemy_initNewPatrol_m063399C3A754DB884C6D361B108D37D69504A889 (characterenemy_t5578804BFD1DFDA60A4BECB1238CFBB7BDA122BE* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAD427A90128BF057107000ED0BB663002F2E2CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_3 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	String_t* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_3 = NULL;
	{
		// int patrolCount = (int)patrolRouteCount * 2;
		uint16_t L_0 = __this->___patrolRouteCount_5;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, 2));
		// patrolLocations = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_1, /*hidden argument*/List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___patrolLocations_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___patrolLocations_10), (void*)L_1);
		// nodeCount = 0;
		__this->___nodeCount_7 = (uint16_t)0;
		// patrolEnd = Random.Range(6, 720);
		int32_t L_2;
		L_2 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(6, ((int32_t)720), NULL);
		__this->___patrolEnd_8 = L_2;
		// int patrolCast = Random.Range(1, patrolCount);
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, L_3, NULL);
		V_1 = L_4;
		// if ((patrolCast%2) == 0) { patrolReverse = true; patrolCast = patrolCast / 2;  } else { patrolReverse = false; patrolCast = Mathf.Abs(patrolCast - patrolRouteCount); }
		int32_t L_5 = V_1;
		if (((int32_t)(L_5%2)))
		{
			goto IL_0046;
		}
	}
	{
		// if ((patrolCast%2) == 0) { patrolReverse = true; patrolCast = patrolCast / 2;  } else { patrolReverse = false; patrolCast = Mathf.Abs(patrolCast - patrolRouteCount); }
		__this->___patrolReverse_6 = (bool)1;
		// if ((patrolCast%2) == 0) { patrolReverse = true; patrolCast = patrolCast / 2;  } else { patrolReverse = false; patrolCast = Mathf.Abs(patrolCast - patrolRouteCount); }
		int32_t L_6 = V_1;
		V_1 = ((int32_t)(L_6/2));
		goto IL_005b;
	}

IL_0046:
	{
		// if ((patrolCast%2) == 0) { patrolReverse = true; patrolCast = patrolCast / 2;  } else { patrolReverse = false; patrolCast = Mathf.Abs(patrolCast - patrolRouteCount); }
		__this->___patrolReverse_6 = (bool)0;
		// if ((patrolCast%2) == 0) { patrolReverse = true; patrolCast = patrolCast / 2;  } else { patrolReverse = false; patrolCast = Mathf.Abs(patrolCast - patrolRouteCount); }
		int32_t L_7 = V_1;
		uint16_t L_8 = __this->___patrolRouteCount_5;
		int32_t L_9;
		L_9 = Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline(((int32_t)il2cpp_codegen_subtract(L_7, (int32_t)L_8)), NULL);
		V_1 = L_9;
	}

IL_005b:
	{
		// foreach (Transform child in patrolList[patrolCast])
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_10 = __this->___patrolList_11;
		int32_t L_11 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_10, L_11, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		RuntimeObject* L_13;
		L_13 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_12, NULL);
		V_2 = L_13;
	}

IL_006d:
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_14 = V_2;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_14, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_15 = V_4;
					if (!L_15)
					{
						goto IL_00b3;
					}
				}

IL_00ac:
				{
					RuntimeObject* L_16 = V_4;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_16);
				}

IL_00b3:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0096;
			}

IL_006f:
			{
				// foreach (Transform child in patrolList[patrolCast])
				RuntimeObject* L_17 = V_2;
				RuntimeObject* L_18;
				L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				V_3 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_18, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// patrolLocations.Add(child);
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_19 = __this->___patrolLocations_10;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = V_3;
				List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_19, L_20, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
				// nodeCount += (ushort)1;
				uint16_t L_21 = __this->___nodeCount_7;
				__this->___nodeCount_7 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, 1)));
			}

IL_0096:
			{
				// foreach (Transform child in patrolList[patrolCast])
				RuntimeObject* L_22 = V_2;
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_006f;
				}
			}

IL_009e:
			{
				goto IL_00b4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b4:
	{
		// Debug.Log("Patrol Info:" + patrolCast + "," + patrolEnd + "," + patrolReverse + "," + patrolList[patrolCast]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		ArrayElementTypeCheck (L_25, _stringLiteralAAD427A90128BF057107000ED0BB663002F2E2CB);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralAAD427A90128BF057107000ED0BB663002F2E2CB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		String_t* L_27;
		L_27 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_27);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_26;
		ArrayElementTypeCheck (L_28, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		int32_t* L_30 = (&__this->___patrolEnd_8);
		String_t* L_31;
		L_31 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_30, NULL);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_31);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_29;
		ArrayElementTypeCheck (L_32, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		bool* L_34 = (&__this->___patrolReverse_6);
		String_t* L_35;
		L_35 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_34, NULL);
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_35);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_33;
		ArrayElementTypeCheck (L_36, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_38 = __this->___patrolList_11;
		int32_t L_39 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_38, L_39, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = L_40;
		G_B12_0 = L_41;
		G_B12_1 = 7;
		G_B12_2 = L_37;
		G_B12_3 = L_37;
		if (L_41)
		{
			G_B13_0 = L_41;
			G_B13_1 = 7;
			G_B13_2 = L_37;
			G_B13_3 = L_37;
			goto IL_0115;
		}
	}
	{
		G_B14_0 = ((String_t*)(NULL));
		G_B14_1 = G_B12_1;
		G_B14_2 = G_B12_2;
		G_B14_3 = G_B12_3;
		goto IL_011a;
	}

IL_0115:
	{
		String_t* L_42;
		L_42 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B13_0);
		G_B14_0 = L_42;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}

IL_011a:
	{
		ArrayElementTypeCheck (G_B14_2, G_B14_0);
		(G_B14_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B14_1), (String_t*)G_B14_0);
		String_t* L_43;
		L_43 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(G_B14_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_43, NULL);
		// }
		return;
	}
}
// System.Void characterenemy::nextPatrolPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void characterenemy_nextPatrolPoint_mC7790212C4AEB017491E38593041142C880B5EC4 (characterenemy_t5578804BFD1DFDA60A4BECB1238CFBB7BDA122BE* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		// if (patrolReverse == true)
		bool L_0 = __this->___patrolReverse_6;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// internalPatrolIndex = Mathf.Abs(patrolIndex - nodeCount + 1);
		uint16_t L_1 = __this->___patrolIndex_12;
		uint16_t L_2 = __this->___nodeCount_7;
		int32_t L_3;
		L_3 = Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)), 1)), NULL);
		V_0 = L_3;
		goto IL_0026;
	}

IL_001f:
	{
		// internalPatrolIndex = patrolIndex;
		uint16_t L_4 = __this->___patrolIndex_12;
		V_0 = L_4;
	}

IL_0026:
	{
		// navAgent.destination = patrolLocations[internalPatrolIndex].position;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_5 = __this->___navAgent_13;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_6 = __this->___patrolLocations_10;
		int32_t L_7 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_6, L_7, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		NavMeshAgent_set_destination_m5F0A8E4C8ED93798D6B9CE496B10FCE5B7461B95(L_5, L_9, NULL);
		// patrolIndex += 1;
		uint16_t L_10 = __this->___patrolIndex_12;
		__this->___patrolIndex_12 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, 1)));
		// if (patrolIndex > nodeCount - 1) { patrolIndex = 0; }
		uint16_t L_11 = __this->___patrolIndex_12;
		uint16_t L_12 = __this->___nodeCount_7;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 1)))))
		{
			goto IL_0068;
		}
	}
	{
		// if (patrolIndex > nodeCount - 1) { patrolIndex = 0; }
		__this->___patrolIndex_12 = (uint16_t)0;
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void characterenemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void characterenemy__ctor_m42124E5B55C23795710F8897295B6F98A68229C1 (characterenemy_t5578804BFD1DFDA60A4BECB1238CFBB7BDA122BE* __this, const RuntimeMethod* method) 
{
{
		// private int enemyHP = 20;
		__this->___enemyHP_17 = ((int32_t)20);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void characterplayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void characterplayer_Start_mEC1B6A7AA1E5B640B74B611BF71B7467B79999C0 (characterplayer_tD4F1269E795B72353586C0F769B63AE415654577* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisgman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299_mA66F1D853DFA3FE066CA2AB06D8F1CD17D275CA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE62B4BC2F21F687B0DF9DCF42322A1544EEDCCE1);
		s_Il2CppMethodInitialized = true;
	}
{
		// rB = GetComponent<Rigidbody>(); //Grabs the Rigidbody component and puts it into rB.
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rB_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rB_21), (void*)L_0);
		// colliding = GetComponent<CapsuleCollider>(); //Likewise, grabs the collider to put into col. Renamed to colliding because of Intellisense.
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_1;
		L_1 = Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E(__this, Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		__this->___colliding_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colliding_22), (void*)L_1);
		// groundLayer = LayerMask.GetMask("Ground"); //And now I don't have to care about what's going into this. groundLayer is GROUND.
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		int32_t L_4;
		L_4 = LayerMask_GetMask_mB1925EDF21896C48C8E2AE1C11BB1944F279181E(L_3, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922(L_4, NULL);
		__this->___groundLayer_11 = L_5;
		// Manager = GameObject.Find("GHands").GetComponent<gman>(); //Assign Gman's hands to handle everything.
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralE62B4BC2F21F687B0DF9DCF42322A1544EEDCCE1, NULL);
		gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* L_7;
		L_7 = GameObject_GetComponent_Tisgman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299_mA66F1D853DFA3FE066CA2AB06D8F1CD17D275CA6(L_6, GameObject_GetComponent_Tisgman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299_mA66F1D853DFA3FE066CA2AB06D8F1CD17D275CA6_RuntimeMethod_var);
		__this->___Manager_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Manager_9), (void*)L_7);
		// }
		return;
	}
}
// System.Void characterplayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void characterplayer_Update_m628876E85CCA2B239DB3811A686A4F9B3EB5D326 (characterplayer_tD4F1269E795B72353586C0F769B63AE415654577* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// verticalIn = Input.GetAxis("Vertical") * movementSpeed * speedLimiter; //* Time.deltaTime;
		float L_0;
		L_0 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		float L_1 = __this->___movementSpeed_4;
		float L_2 = __this->___speedLimiter_8;
		__this->___verticalIn_19 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2));
		// horizontalIn = Input.GetAxis("Horizontal") * rotationSpeed * speedLimiter; //* Time.deltaTime;
		float L_3;
		L_3 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_4 = __this->___rotationSpeed_5;
		float L_5 = __this->___speedLimiter_8;
		__this->___horizontalIn_20 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5));
		// if (checkGround() && Input.GetKeyDown(KeyCode.Space))
		bool L_6;
		L_6 = characterplayer_checkGround_m75A7D08F4B1CED9A9D2CE48FE0A7FD5D77C1CF36(__this, NULL);
		if (!L_6)
		{
			goto IL_0070;
		}
	}
	{
		bool L_7;
		L_7 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)32), NULL);
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		// rB.AddForce(Vector3.up * (jumpSpeed * speedLimiter), ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->___rB_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_10 = __this->___jumpSpeed_6;
		float L_11 = __this->___speedLimiter_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_9, ((float)il2cpp_codegen_multiply(L_10, L_11)), NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_8, L_12, 1, NULL);
	}

IL_0070:
	{
		// if (Input.GetMouseButton(0))
		bool L_13;
		L_13 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(0, NULL);
		if (!L_13)
		{
			goto IL_00e5;
		}
	}
	{
		// if (Manager.fireBullet == true)
		gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* L_14 = __this->___Manager_9;
		bool L_15;
		L_15 = gman_get_fireBullet_m09A105162184FE4D1AC1848B803F0892DCBFD7B2(L_14, NULL);
		if (!L_15)
		{
			goto IL_00e5;
		}
	}
	{
		// Vector3 offset = new Vector3(transform.right.x * 0.65f, 0f, transform.right.z * 0.65f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_16, NULL);
		float L_18 = L_17.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_19, NULL);
		float L_21 = L_20.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)il2cpp_codegen_multiply(L_18, (0.649999976f))), (0.0f), ((float)il2cpp_codegen_multiply(L_21, (0.649999976f))), NULL);
		// GameObject newProjectile = Instantiate(altProjectile, transform.position + offset, transform.rotation) as GameObject; //Huh... this seems familiar.
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___altProjectile_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_24, L_25, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_22, L_26, L_28, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
	}

IL_00e5:
	{
		// if (Input.GetKeyDown(KeyCode.R)) { Manager.fireBullet = true; }
		bool L_30;
		L_30 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)114), NULL);
		if (!L_30)
		{
			goto IL_00fa;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.R)) { Manager.fireBullet = true; }
		gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* L_31 = __this->___Manager_9;
		gman_set_fireBullet_mF91668C72448C8912D3611BFC28E71CFF218A5BC(L_31, (bool)1, NULL);
	}

IL_00fa:
	{
		// if (Input.GetKeyDown(KeyCode.Z) && activeJetpack == false) { activeJetpack = true; } else if (Input.GetKeyDown(KeyCode.Z) && activeJetpack == true) { activeJetpack = false; }
		bool L_32;
		L_32 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)122), NULL);
		if (!L_32)
		{
			goto IL_0113;
		}
	}
	{
		bool L_33 = __this->___activeJetpack_14;
		if (L_33)
		{
			goto IL_0113;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.Z) && activeJetpack == false) { activeJetpack = true; } else if (Input.GetKeyDown(KeyCode.Z) && activeJetpack == true) { activeJetpack = false; }
		__this->___activeJetpack_14 = (bool)1;
		return;
	}

IL_0113:
	{
		// if (Input.GetKeyDown(KeyCode.Z) && activeJetpack == false) { activeJetpack = true; } else if (Input.GetKeyDown(KeyCode.Z) && activeJetpack == true) { activeJetpack = false; }
		bool L_34;
		L_34 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)122), NULL);
		if (!L_34)
		{
			goto IL_012b;
		}
	}
	{
		bool L_35 = __this->___activeJetpack_14;
		if (!L_35)
		{
			goto IL_012b;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.Z) && activeJetpack == false) { activeJetpack = true; } else if (Input.GetKeyDown(KeyCode.Z) && activeJetpack == true) { activeJetpack = false; }
		__this->___activeJetpack_14 = (bool)0;
	}

IL_012b:
	{
		// }
		return;
	}
}
// System.Void characterplayer::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void characterplayer_FixedUpdate_m156D61FF4CF66CBC55315F033FD10B53B11B83C6 (characterplayer_tD4F1269E795B72353586C0F769B63AE415654577* __this, const RuntimeMethod* method) 
{
Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (checkGround() == false && airControl == false) //Disables air control if you're in the air and lack the jumpjet.
		bool L_0;
		L_0 = characterplayer_checkGround_m75A7D08F4B1CED9A9D2CE48FE0A7FD5D77C1CF36(__this, NULL);
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		bool L_1 = __this->___airControl_15;
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		// verticalIn = airMovementX;
		float L_2 = __this->___airMovementX_16;
		__this->___verticalIn_19 = L_2;
		// horizontalIn = 0;
		__this->___horizontalIn_20 = (0.0f);
		goto IL_0035;
	}

IL_0029:
	{
		// airMovementX = verticalIn;
		float L_3 = __this->___verticalIn_19;
		__this->___airMovementX_16 = L_3;
	}

IL_0035:
	{
		// Vector3 rotVec = Vector3.up * horizontalIn;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_5 = __this->___horizontalIn_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_4, L_5, NULL);
		// Quaternion angleRot = Quaternion.Euler(rotVec * Time.fixedDeltaTime);
		float L_7;
		L_7 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_6, L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_8, NULL);
		V_0 = L_9;
		// rB.MovePosition(transform.position + transform.forward * verticalIn * Time.fixedDeltaTime);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___rB_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_13, NULL);
		float L_15 = __this->___verticalIn_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_14, L_15, NULL);
		float L_17;
		L_17 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_16, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_12, L_18, NULL);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_10, L_19, NULL);
		// rB.MoveRotation(rB.rotation * angleRot);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_20 = __this->___rB_21;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_21 = __this->___rB_21;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Rigidbody_get_rotation_m07882A7024FB3F96BA13EC577A96163BBB621AA1(L_21, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_22, L_23, NULL);
		Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D(L_20, L_24, NULL);
		// if (activeJetpack == true && Manager.checkJetpack == true)
		bool L_25 = __this->___activeJetpack_14;
		if (!L_25)
		{
			goto IL_0107;
		}
	}
	{
		gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* L_26 = __this->___Manager_9;
		bool L_27;
		L_27 = gman_get_checkJetpack_m0575F030CEBD587D50A41EC91A6ED8769248AD87(L_26, NULL);
		if (!L_27)
		{
			goto IL_0107;
		}
	}
	{
		// Manager.checkJetpack = true;
		gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* L_28 = __this->___Manager_9;
		gman_set_checkJetpack_m9D16624C16AFBA27BC5BD36C3E56E82AA95A7535_inline(L_28, (bool)1, NULL);
		// airControl = true;
		__this->___airControl_15 = (bool)1;
		// rB.AddForce(Vector3.up * jetpackSpeed * speedLimiter * heightCheck(), ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_29 = __this->___rB_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_31 = __this->___jetpackSpeed_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_30, L_31, NULL);
		float L_33 = __this->___speedLimiter_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_32, L_33, NULL);
		float L_35;
		L_35 = characterplayer_heightCheck_mACB965401FB2F5DF7584C2E39A2B6151453FA72C(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_34, L_35, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_29, L_36, 1, NULL);
		return;
	}

IL_0107:
	{
		// activeJetpack = false; Manager.checkJetpack = false; airControl = false;
		__this->___activeJetpack_14 = (bool)0;
		// activeJetpack = false; Manager.checkJetpack = false; airControl = false;
		gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* L_37 = __this->___Manager_9;
		gman_set_checkJetpack_m9D16624C16AFBA27BC5BD36C3E56E82AA95A7535_inline(L_37, (bool)0, NULL);
		// activeJetpack = false; Manager.checkJetpack = false; airControl = false;
		__this->___airControl_15 = (bool)0;
		// }
		return;
	}
}
// System.Boolean characterplayer::checkGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool characterplayer_checkGround_m75A7D08F4B1CED9A9D2CE48FE0A7FD5D77C1CF36 (characterplayer_tD4F1269E795B72353586C0F769B63AE415654577* __this, const RuntimeMethod* method) 
{
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 itemBottom = new Vector3(colliding.bounds.center.x, colliding.bounds.min.y, colliding.bounds.center.z);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___colliding_22;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1;
		L_1 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_0, NULL);
		V_1 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		float L_3 = L_2.___x_2;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = __this->___colliding_22;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_5;
		L_5 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_4, NULL);
		V_1 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&V_1), NULL);
		float L_7 = L_6.___y_3;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = __this->___colliding_22;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_9;
		L_9 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_8, NULL);
		V_1 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		float L_11 = L_10.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_3, L_7, L_11, NULL);
		// bool state = Physics.CheckCapsule(colliding.bounds.center, itemBottom, groundDistance, groundLayer, QueryTriggerInteraction.Ignore);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_12 = __this->___colliding_22;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_13;
		L_13 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_12, NULL);
		V_1 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		float L_16 = __this->___groundDistance_10;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_17 = __this->___groundLayer_11;
		int32_t L_18;
		L_18 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_17, NULL);
		bool L_19;
		L_19 = Physics_CheckCapsule_mBB973BB9EFAAC95006AC3FDD0D26FA37AAD7F936(L_14, L_15, L_16, L_18, 1, NULL);
		// return state;
		return L_19;
	}
}
// System.Single characterplayer::heightCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float characterplayer_heightCheck_mACB965401FB2F5DF7584C2E39A2B6151453FA72C (characterplayer_tD4F1269E795B72353586C0F769B63AE415654577* __this, const RuntimeMethod* method) 
{
{
		// return 1f;
		return (1.0f);
	}
}
// System.Void characterplayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void characterplayer__ctor_m540F29B0C7E5E01B8130B292B15E77EE7EC1D294 (characterplayer_tD4F1269E795B72353586C0F769B63AE415654577* __this, const RuntimeMethod* method) 
{
{
		// public float movementSpeed = 16f; //A little call back, ROBLOXians move at 16 studs a second.
		__this->___movementSpeed_4 = (16.0f);
		// public float rotationSpeed = 96f; //For now, a slow, but manageable speed. I don't want a cap, I want mouse control in the future. Very important given the verticality of my game.
		__this->___rotationSpeed_5 = (96.0f);
		// public float jumpSpeed = 48f; //How much velocity to add to our jump height.
		__this->___jumpSpeed_6 = (48.0f);
		// public float jetpackSpeed = 1.7f; //How fast the jetpack actually is.
		__this->___jetpackSpeed_7 = (1.70000005f);
		// private float speedLimiter = .5f; //A speed limiter applied to everything EXCEPT the jetpack.
		__this->___speedLimiter_8 = (0.5f);
		// public float groundDistance = 0.1f; // ... I don't know what this is.
		__this->___groundDistance_10 = (0.100000001f);
		// private float softAltCap = 32f;
		__this->___softAltCap_17 = (32.0f);
		// private float hardAltCap = 128f;
		__this->___hardAltCap_18 = (128.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void explorercam::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void explorercam_Start_mF23415DC6675860231E35F4565ADC59DD7FD9787 (explorercam_tB2775B42E257D154ECE24BA8251172B6E26E1172* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0688E856CD319FDF8B125D9E9171EB84B346B30D);
		s_Il2CppMethodInitialized = true;
	}
{
		// Debug.Log("Exploration camera loaded! RLR, RUD, rP, rR!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral0688E856CD319FDF8B125D9E9171EB84B346B30D, NULL);
		// RotationLR = transform.eulerAngles.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		float L_2 = L_1.___y_3;
		__this->___RotationLR_5 = L_2;
		// RotationUD = transform.eulerAngles.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_3, NULL);
		float L_5 = L_4.___x_2;
		__this->___RotationUD_6 = L_5;
		// resetPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		__this->___resetPos_7 = L_7;
		// resetRot = new Vector2(RotationUD, RotationLR); //Crappy fix for a really annoying problem.
		float L_8 = __this->___RotationUD_6;
		float L_9 = __this->___RotationLR_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_8, L_9, /*hidden argument*/NULL);
		__this->___resetRot_8 = L_10;
		// Debug.Log(RotationLR);
		float L_11 = __this->___RotationLR_5;
		float L_12 = L_11;
		RuntimeObject* L_13 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_12);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_13, NULL);
		// Debug.Log(RotationUD);
		float L_14 = __this->___RotationUD_6;
		float L_15 = L_14;
		RuntimeObject* L_16 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_15);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_16, NULL);
		// Debug.Log(resetPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___resetPos_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_17;
		RuntimeObject* L_19 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_18);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_19, NULL);
		// Debug.Log(resetRot);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = __this->___resetRot_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = L_20;
		RuntimeObject* L_22 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_21);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_22, NULL);
		// }
		return;
	}
}
// System.Void explorercam::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void explorercam_Update_m9F9756D8F4F83D1E9189108B9C0B5F334DE30F3F (explorercam_tB2775B42E257D154ECE24BA8251172B6E26E1172* __this, const RuntimeMethod* method) 
{
{
		// transform.rotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_1, NULL);
		// transform.Rotate(RotationUD, RotationLR, 0f, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_3 = __this->___RotationUD_6;
		float L_4 = __this->___RotationLR_5;
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_2, L_3, L_4, (0.0f), 1, NULL);
		// if (Input.GetKey(KeyCode.Escape))
		bool L_5;
		L_5 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)27), NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
	}

IL_003b:
	{
		// if (Input.GetKey(KeyCode.W))
		bool L_6;
		L_6 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)119), NULL);
		if (!L_6)
		{
			goto IL_015b;
		}
	}
	{
		// transform.position += (Vector3.forward * Time.deltaTime * 8f * Speed) * Mathf.Cos(RotationLR * Time.deltaTime * 8f * Speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		float L_11;
		L_11 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, (8.0f), NULL);
		float L_14 = __this->___Speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_13, L_14, NULL);
		float L_16 = __this->___RotationLR_5;
		float L_17;
		L_17 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_18 = __this->___Speed_4;
		float L_19;
		L_19 = cosf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_16, L_17)), (8.0f))), L_18)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_15, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_9, L_20, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_21, NULL);
		// transform.position += (Vector3.left * Time.deltaTime * 8f * Speed) * Mathf.Sin(-RotationLR * Time.deltaTime * 8f * Speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = L_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		float L_26;
		L_26 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_25, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_27, (8.0f), NULL);
		float L_29 = __this->___Speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_28, L_29, NULL);
		float L_31 = __this->___RotationLR_5;
		float L_32;
		L_32 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_33 = __this->___Speed_4;
		float L_34;
		L_34 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((-L_31)), L_32)), (8.0f))), L_33)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_30, L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_24, L_35, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_23, L_36, NULL);
		// transform.position += (Vector3.up * Time.deltaTime * 8f * Speed) * (-RotationUD * Time.deltaTime * 8f * Speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = L_37;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_41;
		L_41 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_40, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_42, (8.0f), NULL);
		float L_44 = __this->___Speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_43, L_44, NULL);
		float L_46 = __this->___RotationUD_6;
		float L_47;
		L_47 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_48 = __this->___Speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_45, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((-L_46)), L_47)), (8.0f))), L_48)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_39, L_49, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_38, L_50, NULL);
	}

IL_015b:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_51;
		L_51 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)115), NULL);
		if (!L_51)
		{
			goto IL_027a;
		}
	}
	{
		// transform.position += (Vector3.back * Time.deltaTime * 8f * Speed) * Mathf.Cos(-RotationLR * Time.deltaTime * 4f * Speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53 = L_52;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_53, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline(NULL);
		float L_56;
		L_56 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_55, L_56, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_57, (8.0f), NULL);
		float L_59 = __this->___Speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_58, L_59, NULL);
		float L_61 = __this->___RotationLR_5;
		float L_62;
		L_62 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_63 = __this->___Speed_4;
		float L_64;
		L_64 = cosf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((-L_61)), L_62)), (4.0f))), L_63)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_60, L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_54, L_65, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_53, L_66, NULL);
		// transform.position += (Vector3.right* Time.deltaTime * 8f * Speed) * Mathf.Sin(RotationLR * Time.deltaTime * 4f * Speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68 = L_67;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_68, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		float L_71;
		L_71 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_70, L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_72, (8.0f), NULL);
		float L_74 = __this->___Speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_73, L_74, NULL);
		float L_76 = __this->___RotationLR_5;
		float L_77;
		L_77 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_78 = __this->___Speed_4;
		float L_79;
		L_79 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_76, L_77)), (4.0f))), L_78)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_75, L_79, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_69, L_80, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_68, L_81, NULL);
		// transform.position += (Vector3.up * Time.deltaTime * 8f * Speed) * (RotationUD * Time.deltaTime * 4f * Speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82;
		L_82 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83 = L_82;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_83, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_86;
		L_86 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_85, L_86, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_87, (8.0f), NULL);
		float L_89 = __this->___Speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_88, L_89, NULL);
		float L_91 = __this->___RotationUD_6;
		float L_92;
		L_92 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_93 = __this->___Speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_90, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_91, L_92)), (4.0f))), L_93)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_84, L_94, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_83, L_95, NULL);
	}

IL_027a:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_96;
		L_96 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)97), NULL);
		if (!L_96)
		{
			goto IL_02a2;
		}
	}
	{
		// RotationLR = RotationLR + (-45f * Time.deltaTime * Speed);
		float L_97 = __this->___RotationLR_5;
		float L_98;
		L_98 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_99 = __this->___Speed_4;
		__this->___RotationLR_5 = ((float)il2cpp_codegen_add(L_97, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-45.0f), L_98)), L_99))));
	}

IL_02a2:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_100;
		L_100 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)100), NULL);
		if (!L_100)
		{
			goto IL_02ca;
		}
	}
	{
		// RotationLR = RotationLR + (45f * Time.deltaTime * Speed);
		float L_101 = __this->___RotationLR_5;
		float L_102;
		L_102 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_103 = __this->___Speed_4;
		__this->___RotationLR_5 = ((float)il2cpp_codegen_add(L_101, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((45.0f), L_102)), L_103))));
	}

IL_02ca:
	{
		// if (Input.GetKey(KeyCode.UpArrow))
		bool L_104;
		L_104 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)273), NULL);
		if (!L_104)
		{
			goto IL_02f5;
		}
	}
	{
		// RotationUD = RotationUD + (-45f * Time.deltaTime * Speed);
		float L_105 = __this->___RotationUD_6;
		float L_106;
		L_106 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_107 = __this->___Speed_4;
		__this->___RotationUD_6 = ((float)il2cpp_codegen_add(L_105, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-45.0f), L_106)), L_107))));
	}

IL_02f5:
	{
		// if (Input.GetKey(KeyCode.DownArrow))
		bool L_108;
		L_108 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)274), NULL);
		if (!L_108)
		{
			goto IL_0320;
		}
	}
	{
		// RotationUD = RotationUD + (45f * Time.deltaTime * Speed);
		float L_109 = __this->___RotationUD_6;
		float L_110;
		L_110 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_111 = __this->___Speed_4;
		__this->___RotationUD_6 = ((float)il2cpp_codegen_add(L_109, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((45.0f), L_110)), L_111))));
	}

IL_0320:
	{
		// if (Input.GetKey(KeyCode.LeftArrow))
		bool L_112;
		L_112 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)276), NULL);
		if (!L_112)
		{
			goto IL_033e;
		}
	}
	{
		// Speed = Speed - Time.deltaTime;
		float L_113 = __this->___Speed_4;
		float L_114;
		L_114 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___Speed_4 = ((float)il2cpp_codegen_subtract(L_113, L_114));
	}

IL_033e:
	{
		// if (Input.GetKey(KeyCode.RightArrow))
		bool L_115;
		L_115 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)275), NULL);
		if (!L_115)
		{
			goto IL_035c;
		}
	}
	{
		// Speed = Speed + Time.deltaTime;
		float L_116 = __this->___Speed_4;
		float L_117;
		L_117 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___Speed_4 = ((float)il2cpp_codegen_add(L_116, L_117));
	}

IL_035c:
	{
		// if (Input.GetKey(KeyCode.KeypadPlus))
		bool L_118;
		L_118 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)270), NULL);
		if (!L_118)
		{
			goto IL_038a;
		}
	}
	{
		// RotationLR = resetRot.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_119 = (&__this->___resetRot_8);
		float L_120 = L_119->___y_1;
		__this->___RotationLR_5 = L_120;
		// RotationUD = resetRot.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_121 = (&__this->___resetRot_8);
		float L_122 = L_121->___x_0;
		__this->___RotationUD_6 = L_122;
	}

IL_038a:
	{
		// if (Input.GetKey(KeyCode.KeypadMinus))
		bool L_123;
		L_123 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)269), NULL);
		if (!L_123)
		{
			goto IL_03a1;
		}
	}
	{
		// Speed = 1f;
		__this->___Speed_4 = (1.0f);
	}

IL_03a1:
	{
		// if (Input.GetKey(KeyCode.KeypadEnter))
		bool L_124;
		L_124 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)271), NULL);
		if (!L_124)
		{
			goto IL_03be;
		}
	}
	{
		// transform.position = resetPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_125;
		L_125 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = __this->___resetPos_7;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_125, L_126, NULL);
	}

IL_03be:
	{
		// if (Input.GetKey(KeyCode.Keypad7))
		bool L_127;
		L_127 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)263), NULL);
		if (!L_127)
		{
			goto IL_03e0;
		}
	}
	{
		// RotationLR = 0;
		__this->___RotationLR_5 = (0.0f);
		// RotationUD = 0;
		__this->___RotationUD_6 = (0.0f);
	}

IL_03e0:
	{
		// if (Input.GetKey(KeyCode.Keypad4))
		bool L_128;
		L_128 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)260), NULL);
		if (!L_128)
		{
			goto IL_03fd;
		}
	}
	{
		// transform.position = resetPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_129;
		L_129 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130 = __this->___resetPos_7;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_129, L_130, NULL);
	}

IL_03fd:
	{
		// if (Mathf.Abs(RotationLR) > 360f)
		float L_131 = __this->___RotationLR_5;
		float L_132;
		L_132 = fabsf(L_131);
		if ((!(((float)L_132) > ((float)(360.0f)))))
		{
			goto IL_041a;
		}
	}
	{
		// RotationLR = 0f;
		__this->___RotationLR_5 = (0.0f);
	}

IL_041a:
	{
		// if (Mathf.Abs(RotationUD) > 360f)
		float L_133 = __this->___RotationUD_6;
		float L_134;
		L_134 = fabsf(L_133);
		if ((!(((float)L_134) > ((float)(360.0f)))))
		{
			goto IL_0437;
		}
	}
	{
		// RotationUD = 0f;
		__this->___RotationUD_6 = (0.0f);
	}

IL_0437:
	{
		// }
		return;
	}
}
// System.Void explorercam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void explorercam__ctor_m27C70663DDD970D81B09741AC1FBDD81655E2F53 (explorercam_tB2775B42E257D154ECE24BA8251172B6E26E1172* __this, const RuntimeMethod* method) 
{
{
		// public float Speed = 1f; //Public speed!
		__this->___Speed_4 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 gman::get_items()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t gman_get_items_m057A65E7F78E7F93DF89BBC5D2E58C90CE2CE37A (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, const RuntimeMethod* method) 
{
{
		// get { return itemCount; }
		int32_t L_0 = __this->___itemCount_4;
		return L_0;
	}
}
// System.Void gman::set_items(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gman_set_items_m712D9C1CBA70CBBA7BE19AA5DE1EAE27A6D986ED (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, int32_t ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DD2195C8C20B70C6B7F13B6511B41E659E55D5);
		s_Il2CppMethodInitialized = true;
	}
{
		// itemCount = value;
		int32_t L_0 = ___value0;
		__this->___itemCount_4 = L_0;
		// Debug.LogFormat("Item count: {0}", itemCount);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = __this->___itemCount_4;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral23DD2195C8C20B70C6B7F13B6511B41E659E55D5, L_2, NULL);
		// }
		return;
	}
}
// System.Int32 gman::get_health()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t gman_get_health_mDF3871A907D6275AB142B9C89AE3A51D63A3BA98 (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, const RuntimeMethod* method) 
{
{
		// get { return (int)playerHP; }
		float L_0 = __this->___playerHP_5;
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_0);
	}
}
// System.Void gman::set_health(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gman_set_health_m042074E212E0D0FEBEDFC61C50633BE501891B0F (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, int32_t ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE18A018932E893672358F6D410459324CF9B30A8);
		s_Il2CppMethodInitialized = true;
	}
{
		// playerHP = value;
		int32_t L_0 = ___value0;
		__this->___playerHP_5 = ((float)L_0);
		// hRecharge = 0.0f;
		__this->___hRecharge_13 = (0.0f);
		// Debug.LogFormat("HP is at: {0}", playerHP);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		float L_3 = __this->___playerHP_5;
		float L_4 = L_3;
		RuntimeObject* L_5 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteralE18A018932E893672358F6D410459324CF9B30A8, L_2, NULL);
		// }
		return;
	}
}
// System.Boolean gman::get_checkJetpack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool gman_get_checkJetpack_m0575F030CEBD587D50A41EC91A6ED8769248AD87 (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, const RuntimeMethod* method) 
{
{
		// if ((jetPackActive == true && playerFuel < 0) || (jetPackActive == false && playerFuel < fuelMinimum)) { jetPackActive = false; return false; }
		bool L_0 = __this->___jetPackActive_14;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		float L_1 = __this->___playerFuel_15;
		if ((((float)L_1) < ((float)(0.0f))))
		{
			goto IL_002b;
		}
	}

IL_0015:
	{
		bool L_2 = __this->___jetPackActive_14;
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		float L_3 = __this->___playerFuel_15;
		float L_4 = __this->___fuelMinimum_17;
		if ((!(((float)L_3) < ((float)L_4))))
		{
			goto IL_0034;
		}
	}

IL_002b:
	{
		// if ((jetPackActive == true && playerFuel < 0) || (jetPackActive == false && playerFuel < fuelMinimum)) { jetPackActive = false; return false; }
		__this->___jetPackActive_14 = (bool)0;
		// if ((jetPackActive == true && playerFuel < 0) || (jetPackActive == false && playerFuel < fuelMinimum)) { jetPackActive = false; return false; }
		return (bool)0;
	}

IL_0034:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void gman::set_checkJetpack(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gman_set_checkJetpack_m9D16624C16AFBA27BC5BD36C3E56E82AA95A7535 (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, bool ___value0, const RuntimeMethod* method) 
{
{
		// jetPackActive = value;
		bool L_0 = ___value0;
		__this->___jetPackActive_14 = L_0;
		// }
		return;
	}
}
// System.Boolean gman::get_fireBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool gman_get_fireBullet_m09A105162184FE4D1AC1848B803F0892DCBFD7B2 (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, const RuntimeMethod* method) 
{
{
		// if (mLoaded > 0 && mReady == true) { mLoaded = mLoaded - 1; mRecharge = 0; mReady = false;} else { return false; } //Not returning if true, not yet.
		int32_t L_0 = __this->___mLoaded_24;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		bool L_1 = __this->___mReady_26;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// if (mLoaded > 0 && mReady == true) { mLoaded = mLoaded - 1; mRecharge = 0; mReady = false;} else { return false; } //Not returning if true, not yet.
		int32_t L_2 = __this->___mLoaded_24;
		__this->___mLoaded_24 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// if (mLoaded > 0 && mReady == true) { mLoaded = mLoaded - 1; mRecharge = 0; mReady = false;} else { return false; } //Not returning if true, not yet.
		__this->___mRecharge_12 = (0.0f);
		// if (mLoaded > 0 && mReady == true) { mLoaded = mLoaded - 1; mRecharge = 0; mReady = false;} else { return false; } //Not returning if true, not yet.
		__this->___mReady_26 = (bool)0;
		goto IL_0035;
	}

IL_0033:
	{
		// if (mLoaded > 0 && mReady == true) { mLoaded = mLoaded - 1; mRecharge = 0; mReady = false;} else { return false; } //Not returning if true, not yet.
		return (bool)0;
	}

IL_0035:
	{
		// if (mLoaded == 0) { mReloadNow = true; } //Reload if we literally just ran out of bullets.
		int32_t L_3 = __this->___mLoaded_24;
		if (L_3)
		{
			goto IL_0044;
		}
	}
	{
		// if (mLoaded == 0) { mReloadNow = true; } //Reload if we literally just ran out of bullets.
		__this->___mReloadNow_25 = (bool)1;
	}

IL_0044:
	{
		// return true; //And now we return.
		return (bool)1;
	}
}
// System.Void gman::set_fireBullet(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gman_set_fireBullet_mF91668C72448C8912D3611BFC28E71CFF218A5BC (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, bool ___value0, const RuntimeMethod* method) 
{
{
		// if (mLoaded < mMax && mReloadNow == false) {
		int32_t L_0 = __this->___mLoaded_24;
		int32_t L_1 = __this->___mMax_23;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0036;
		}
	}
	{
		bool L_2 = __this->___mReloadNow_25;
		if (L_2)
		{
			goto IL_0036;
		}
	}
	{
		// mRecharge = 0f;
		__this->___mRecharge_12 = (0.0f);
		// mLoaded = 0;
		__this->___mLoaded_24 = 0;
		// mReady = false;
		__this->___mReady_26 = (bool)0;
		// mReloadNow = true;
		__this->___mReloadNow_25 = (bool)1;
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void gman::giveItem(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gman_giveItem_mE7C07312827DE5D6F5D73C211B1A73A84F14C9FE (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, uint8_t ___itemType0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C907D411272975AFE98760F81495D14DDC25815);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53646DA519CF5E53B8AD6319DE4CEB5E3655D3DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC24B5AEA8B375273B4A5967D511FD9B45AEE7908);
		s_Il2CppMethodInitialized = true;
	}
{
		uint8_t L_0 = ___itemType0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_001a;
			}
			case 1:
			{
				goto IL_00a0;
			}
			case 2:
			{
				goto IL_00a0;
			}
			case 3:
			{
				goto IL_004d;
			}
		}
	}
	{
		goto IL_0096;
	}

IL_001a:
	{
		// if (hUpgrade == false) {
		bool L_1 = __this->___hUpgrade_9;
		if (L_1)
		{
			goto IL_00a0;
		}
	}
	{
		// Debug.Log("Armor armed!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral3C907D411272975AFE98760F81495D14DDC25815, NULL);
		// hRecharge = 0f;
		__this->___hRecharge_13 = (0.0f);
		// playerMaxHP = playerMaxHP * 2;
		int32_t L_2 = __this->___playerMaxHP_6;
		__this->___playerMaxHP_6 = ((int32_t)il2cpp_codegen_multiply(L_2, 2));
		// hUpgrade = true;
		__this->___hUpgrade_9 = (bool)1;
		// break;
		return;
	}

IL_004d:
	{
		// if (fUpgrade == false) {
		bool L_3 = __this->___fUpgrade_20;
		if (L_3)
		{
			goto IL_00a0;
		}
	}
	{
		// Debug.Log("Jetpack ready!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral53646DA519CF5E53B8AD6319DE4CEB5E3655D3DE, NULL);
		// fRecharge = 0f;
		__this->___fRecharge_11 = (0.0f);
		// fUpgrade = true;
		__this->___fUpgrade_20 = (bool)1;
		// fuelMax = fuelMax * 3;
		float L_4 = __this->___fuelMax_18;
		__this->___fuelMax_18 = ((float)il2cpp_codegen_multiply(L_4, (3.0f)));
		// fuelRefill = fuelRefill * 2;
		float L_5 = __this->___fuelRefill_16;
		__this->___fuelRefill_16 = ((float)il2cpp_codegen_multiply(L_5, (2.0f)));
		// break;
		return;
	}

IL_0096:
	{
		// Debug.Log("Something called to give an item, but there's no compatible itemtype.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralC24B5AEA8B375273B4A5967D511FD9B45AEE7908, NULL);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void gman::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gman_Start_m09E1EFA3277218887F274B04F4E8530C77896D8E (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, const RuntimeMethod* method) 
{
{
		// Time.timeScale = 1.0f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// }
		return;
	}
}
// System.Void gman::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gman_Update_m20D64DC8F46B005D52D6541D0E9C42C0391DE262 (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, const RuntimeMethod* method) 
{
{
		// fRecharge = fRecharge + Time.deltaTime;
		float L_0 = __this->___fRecharge_11;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___fRecharge_11 = ((float)il2cpp_codegen_add(L_0, L_1));
		// mRecharge = mRecharge + Time.deltaTime;
		float L_2 = __this->___mRecharge_12;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___mRecharge_12 = ((float)il2cpp_codegen_add(L_2, L_3));
		// hRecharge = hRecharge + Time.deltaTime;
		float L_4 = __this->___hRecharge_13;
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___hRecharge_13 = ((float)il2cpp_codegen_add(L_4, L_5));
		// if (((float)fBeginRecharge / 1000) < fRecharge && playerFuel < fuelMax) { playerFuel = playerFuel + Time.deltaTime; } else if (fBeginRecharge > fRecharge && playerFuel > fuelMax) { playerFuel = fuelMax; } //Refuel over time after landing.
		int32_t L_6 = __this->___fBeginRecharge_19;
		float L_7 = __this->___fRecharge_11;
		if ((!(((float)((float)(((float)L_6)/(1000.0f)))) < ((float)L_7))))
		{
			goto IL_006d;
		}
	}
	{
		float L_8 = __this->___playerFuel_15;
		float L_9 = __this->___fuelMax_18;
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_006d;
		}
	}
	{
		// if (((float)fBeginRecharge / 1000) < fRecharge && playerFuel < fuelMax) { playerFuel = playerFuel + Time.deltaTime; } else if (fBeginRecharge > fRecharge && playerFuel > fuelMax) { playerFuel = fuelMax; } //Refuel over time after landing.
		float L_10 = __this->___playerFuel_15;
		float L_11;
		L_11 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___playerFuel_15 = ((float)il2cpp_codegen_add(L_10, L_11));
		goto IL_0096;
	}

IL_006d:
	{
		// if (((float)fBeginRecharge / 1000) < fRecharge && playerFuel < fuelMax) { playerFuel = playerFuel + Time.deltaTime; } else if (fBeginRecharge > fRecharge && playerFuel > fuelMax) { playerFuel = fuelMax; } //Refuel over time after landing.
		int32_t L_12 = __this->___fBeginRecharge_19;
		float L_13 = __this->___fRecharge_11;
		if ((!(((float)((float)L_12)) > ((float)L_13))))
		{
			goto IL_0096;
		}
	}
	{
		float L_14 = __this->___playerFuel_15;
		float L_15 = __this->___fuelMax_18;
		if ((!(((float)L_14) > ((float)L_15))))
		{
			goto IL_0096;
		}
	}
	{
		// if (((float)fBeginRecharge / 1000) < fRecharge && playerFuel < fuelMax) { playerFuel = playerFuel + Time.deltaTime; } else if (fBeginRecharge > fRecharge && playerFuel > fuelMax) { playerFuel = fuelMax; } //Refuel over time after landing.
		float L_16 = __this->___fuelMax_18;
		__this->___playerFuel_15 = L_16;
	}

IL_0096:
	{
		// if (((float)playerHPBeginRecharge /1000) < hRecharge && playerHP < playerMaxHP) { playerHP = playerHP + (playerHPRefill * Time.deltaTime); } else if (playerHPBeginRecharge > hRecharge  && playerHP > playerMaxHP) { playerHP = playerMaxHP; } //Horrendous health system
		int32_t L_17 = __this->___playerHPBeginRecharge_7;
		float L_18 = __this->___hRecharge_13;
		if ((!(((float)((float)(((float)L_17)/(1000.0f)))) < ((float)L_18))))
		{
			goto IL_00d5;
		}
	}
	{
		float L_19 = __this->___playerHP_5;
		int32_t L_20 = __this->___playerMaxHP_6;
		if ((!(((float)L_19) < ((float)((float)L_20)))))
		{
			goto IL_00d5;
		}
	}
	{
		// if (((float)playerHPBeginRecharge /1000) < hRecharge && playerHP < playerMaxHP) { playerHP = playerHP + (playerHPRefill * Time.deltaTime); } else if (playerHPBeginRecharge > hRecharge  && playerHP > playerMaxHP) { playerHP = playerMaxHP; } //Horrendous health system
		float L_21 = __this->___playerHP_5;
		float L_22 = __this->___playerHPRefill_8;
		float L_23;
		L_23 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___playerHP_5 = ((float)il2cpp_codegen_add(L_21, ((float)il2cpp_codegen_multiply(L_22, L_23))));
		goto IL_0100;
	}

IL_00d5:
	{
		// if (((float)playerHPBeginRecharge /1000) < hRecharge && playerHP < playerMaxHP) { playerHP = playerHP + (playerHPRefill * Time.deltaTime); } else if (playerHPBeginRecharge > hRecharge  && playerHP > playerMaxHP) { playerHP = playerMaxHP; } //Horrendous health system
		int32_t L_24 = __this->___playerHPBeginRecharge_7;
		float L_25 = __this->___hRecharge_13;
		if ((!(((float)((float)L_24)) > ((float)L_25))))
		{
			goto IL_0100;
		}
	}
	{
		float L_26 = __this->___playerHP_5;
		int32_t L_27 = __this->___playerMaxHP_6;
		if ((!(((float)L_26) > ((float)((float)L_27)))))
		{
			goto IL_0100;
		}
	}
	{
		// if (((float)playerHPBeginRecharge /1000) < hRecharge && playerHP < playerMaxHP) { playerHP = playerHP + (playerHPRefill * Time.deltaTime); } else if (playerHPBeginRecharge > hRecharge  && playerHP > playerMaxHP) { playerHP = playerMaxHP; } //Horrendous health system
		int32_t L_28 = __this->___playerMaxHP_6;
		__this->___playerHP_5 = ((float)L_28);
	}

IL_0100:
	{
		// if (((float)mReload/ 1000) < mRecharge && mReloadNow) { mReady = true; mLoaded = mMax; mReloadNow = false; } //Reloads the machinegun.
		int32_t L_29 = __this->___mReload_22;
		float L_30 = __this->___mRecharge_12;
		if ((!(((float)((float)(((float)L_29)/(1000.0f)))) < ((float)L_30))))
		{
			goto IL_0137;
		}
	}
	{
		bool L_31 = __this->___mReloadNow_25;
		if (!L_31)
		{
			goto IL_0137;
		}
	}
	{
		// if (((float)mReload/ 1000) < mRecharge && mReloadNow) { mReady = true; mLoaded = mMax; mReloadNow = false; } //Reloads the machinegun.
		__this->___mReady_26 = (bool)1;
		// if (((float)mReload/ 1000) < mRecharge && mReloadNow) { mReady = true; mLoaded = mMax; mReloadNow = false; } //Reloads the machinegun.
		int32_t L_32 = __this->___mMax_23;
		__this->___mLoaded_24 = L_32;
		// if (((float)mReload/ 1000) < mRecharge && mReloadNow) { mReady = true; mLoaded = mMax; mReloadNow = false; } //Reloads the machinegun.
		__this->___mReloadNow_25 = (bool)0;
	}

IL_0137:
	{
		// if (((float)mFireSpeed / 1000) < mRecharge) { mReady = true; } //Likewise, readies the bull!
		int32_t L_33 = __this->___mFireSpeed_21;
		float L_34 = __this->___mRecharge_12;
		if ((!(((float)((float)(((float)L_33)/(1000.0f)))) < ((float)L_34))))
		{
			goto IL_0153;
		}
	}
	{
		// if (((float)mFireSpeed / 1000) < mRecharge) { mReady = true; } //Likewise, readies the bull!
		__this->___mReady_26 = (bool)1;
	}

IL_0153:
	{
		// if (jetPackActive == true) //Drain the fuel of the player.
		bool L_35 = __this->___jetPackActive_14;
		if (!L_35)
		{
			goto IL_0189;
		}
	}
	{
		// fRecharge = 0f;
		__this->___fRecharge_11 = (0.0f);
		// if (checkJetpack == true) { playerFuel = playerFuel - Time.deltaTime; } else { jetPackActive = false; }
		bool L_36;
		L_36 = gman_get_checkJetpack_m0575F030CEBD587D50A41EC91A6ED8769248AD87(__this, NULL);
		if (!L_36)
		{
			goto IL_0182;
		}
	}
	{
		// if (checkJetpack == true) { playerFuel = playerFuel - Time.deltaTime; } else { jetPackActive = false; }
		float L_37 = __this->___playerFuel_15;
		float L_38;
		L_38 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___playerFuel_15 = ((float)il2cpp_codegen_subtract(L_37, L_38));
		goto IL_0189;
	}

IL_0182:
	{
		// if (checkJetpack == true) { playerFuel = playerFuel - Time.deltaTime; } else { jetPackActive = false; }
		__this->___jetPackActive_14 = (bool)0;
	}

IL_0189:
	{
		// if (playerHP <= 0) // Stop the game if you've run out of health.
		float L_39 = __this->___playerHP_5;
		if ((!(((float)L_39) <= ((float)(0.0f)))))
		{
			goto IL_01a8;
		}
	}
	{
		// playerHP = 0;
		__this->___playerHP_5 = (0.0f);
		// death = true;
		__this->___death_10 = (bool)1;
	}

IL_01a8:
	{
		// }
		return;
	}
}
// System.Void gman::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gman_OnGUI_m03852E8B00D7B6B44B862E4D95745A704E7BBEA0 (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CFDEE8FB24740AC75BECF044775783BF848E303);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24786BFD37763AE72E7BF9BC3C6202A721A8AEA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C868CE6641E0607052FCD1AEC262AD9D72B5056);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D0066FC9B8664BF1C6543EFBB3BF0580A6D253B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88C4CE8184BC1280616820CAD60D3E70F5402F76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA30B2C51D2E049C52BC9E1FD1AFC0C96B9428EF);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		// GUI.Box(new Rect(20, 20, 150, 25), "HEALTH:" + (int)playerHP);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (20.0f), (20.0f), (150.0f), (25.0f), /*hidden argument*/NULL);
		float L_1 = __this->___playerHP_5;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral6D0066FC9B8664BF1C6543EFBB3BF0580A6D253B, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Box_m1E4D5FE4B7911725059CE0A2674B88CFAD279365(L_0, L_3, NULL);
		// GUI.Box(new Rect(20, 50, 150, 25), "FUEL:" + playerFuel);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		memset((&L_4), 0, sizeof(L_4));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_4), (20.0f), (50.0f), (150.0f), (25.0f), /*hidden argument*/NULL);
		float* L_5 = (&__this->___playerFuel_15);
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1CFDEE8FB24740AC75BECF044775783BF848E303, L_6, NULL);
		GUI_Box_m1E4D5FE4B7911725059CE0A2674B88CFAD279365(L_4, L_7, NULL);
		// GUI.Box(new Rect(20, 80, 150, 25), "MACHINE GUN:" + mLoaded + "/" + mMax);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_8), (20.0f), (80.0f), (150.0f), (25.0f), /*hidden argument*/NULL);
		int32_t* L_9 = (&__this->___mLoaded_24);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_9, NULL);
		int32_t* L_11 = (&__this->___mMax_23);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralFA30B2C51D2E049C52BC9E1FD1AFC0C96B9428EF, L_10, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_12, NULL);
		GUI_Box_m1E4D5FE4B7911725059CE0A2674B88CFAD279365(L_8, L_13, NULL);
		// if (hUpgrade == true && fUpgrade == true)
		bool L_14 = __this->___hUpgrade_9;
		if (!L_14)
		{
			goto IL_00f6;
		}
	}
	{
		bool L_15 = __this->___fUpgrade_20;
		if (!L_15)
		{
			goto IL_00f6;
		}
	}
	{
		// GUI.Label(new Rect(Screen.width / 2 - 100, Screen.height - 50, 300, 50), "Congratulations, you win!");
		int32_t L_16;
		L_16 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_17;
		L_17 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_18;
		memset((&L_18), 0, sizeof(L_18));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_18), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_16/2)), ((int32_t)100)))), ((float)((int32_t)il2cpp_codegen_subtract(L_17, ((int32_t)50)))), (300.0f), (50.0f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7(L_18, _stringLiteral88C4CE8184BC1280616820CAD60D3E70F5402F76, NULL);
		// Time.timeScale = 0.0f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		goto IL_0123;
	}

IL_00f6:
	{
		// GUI.Label(new Rect(Screen.width / 2 - 100, Screen.height - 50, 300, 50), "You have not yet collected all of the powerups.");
		int32_t L_19;
		L_19 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_20;
		L_20 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_21;
		memset((&L_21), 0, sizeof(L_21));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_21), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_19/2)), ((int32_t)100)))), ((float)((int32_t)il2cpp_codegen_subtract(L_20, ((int32_t)50)))), (300.0f), (50.0f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7(L_21, _stringLiteral2C868CE6641E0607052FCD1AEC262AD9D72B5056, NULL);
	}

IL_0123:
	{
		// if (death)
		bool L_22 = __this->___death_10;
		if (!L_22)
		{
			goto IL_016b;
		}
	}
	{
		// Time.timeScale = 0.0f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// if (GUI.Button(new Rect(Screen.width / 2 - 100, Screen.height / 2 - 50, 200, 100), "You've lost. Retry?"))
		int32_t L_23;
		L_23 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_24;
		L_24 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_25;
		memset((&L_25), 0, sizeof(L_25));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_25), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_23/2)), ((int32_t)100)))), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_24/2)), ((int32_t)50)))), (200.0f), (100.0f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = GUI_Button_m92B7A836FB5463F20951B6BD9DB8F3B1BA56763C(L_25, _stringLiteral24786BFD37763AE72E7BF9BC3C6202A721A8AEA1, NULL);
		if (!L_26)
		{
			goto IL_016b;
		}
	}
	{
		// utilities.levelRestart();
		utilities_levelRestart_mC50D6141BC80ADADA0ACF6B287F9B4EBC826AC55(NULL);
	}

IL_016b:
	{
		// }
		return;
	}
}
// System.Void gman::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gman__ctor_mD6B5C4AAF9969164F5AA0842BF91C48785968FC9 (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06FD5B512FDE4E53BBA58BCDC22FC1910EE20F23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE06B9013DB7E722B92EB3AF5D7E157E6BE8517BF);
		s_Il2CppMethodInitialized = true;
	}
{
		// private float playerHP = 100; //Generic value.
		__this->___playerHP_5 = (100.0f);
		// private int playerMaxHP = 100; //Generic value.
		__this->___playerMaxHP_6 = ((int32_t)100);
		// private int playerHPBeginRecharge = 3000; //How many milliseconds before you begin to recharge health?
		__this->___playerHPBeginRecharge_7 = ((int32_t)3000);
		// private float playerHPRefill = 3f; //How much health do you regain per second?'
		__this->___playerHPRefill_8 = (3.0f);
		// private float playerFuel = 20f; //Done in seconds.
		__this->___playerFuel_15 = (20.0f);
		// private float fuelRefill = 0.5f; //How much per second?
		__this->___fuelRefill_16 = (0.5f);
		// private float fuelMinimum = 3f; //How many seconds of fuel minimum to take off.
		__this->___fuelMinimum_17 = (3.0f);
		// private float fuelMax = 20f; //What's your maximum fuel?
		__this->___fuelMax_18 = (20.0f);
		// private int fBeginRecharge = 965; //How long in milliseconds before you begin regaining fuel?
		__this->___fBeginRecharge_19 = ((int32_t)965);
		// private int mFireSpeed = 80; //How many milliseconds before firing another shot.
		__this->___mFireSpeed_21 = ((int32_t)80);
		// private int mReload = 2400; //How many milliseconds for a reload?
		__this->___mReload_22 = ((int32_t)2400);
		// private int mMax = 30; //How many rounds in the magazine max?
		__this->___mMax_23 = ((int32_t)30);
		// private int mLoaded = 30; //How many rounds in the magazine now?
		__this->___mLoaded_24 = ((int32_t)30);
		// private bool mReady = true;
		__this->___mReady_26 = (bool)1;
		// private string HealthLabel = "HEALTH";
		__this->___HealthLabel_27 = _stringLiteral06FD5B512FDE4E53BBA58BCDC22FC1910EE20F23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HealthLabel_27), (void*)_stringLiteral06FD5B512FDE4E53BBA58BCDC22FC1910EE20F23);
		// private string AmmunitionLabel = "AMMUNITION";
		__this->___AmmunitionLabel_28 = _stringLiteralE06B9013DB7E722B92EB3AF5D7E157E6BE8517BF;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AmmunitionLabel_28), (void*)_stringLiteralE06B9013DB7E722B92EB3AF5D7E157E6BE8517BF);
		// private byte win = 4;
		__this->___win_32 = (uint8_t)4;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void pickupbehavior::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pickupbehavior_Start_mFA9A9E5D51B5E7796081CE9FBC8D8DB1F70002E5 (pickupbehavior_tF813D41DCD5C91677F3DCFC45243BC1954F938CA* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisgman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299_mA66F1D853DFA3FE066CA2AB06D8F1CD17D275CA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE62B4BC2F21F687B0DF9DCF42322A1544EEDCCE1);
		s_Il2CppMethodInitialized = true;
	}
{
		// Manager = GameObject.Find("GHands").GetComponent<gman>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralE62B4BC2F21F687B0DF9DCF42322A1544EEDCCE1, NULL);
		gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* L_1;
		L_1 = GameObject_GetComponent_Tisgman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299_mA66F1D853DFA3FE066CA2AB06D8F1CD17D275CA6(L_0, GameObject_GetComponent_Tisgman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299_mA66F1D853DFA3FE066CA2AB06D8F1CD17D275CA6_RuntimeMethod_var);
		__this->___Manager_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Manager_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void pickupbehavior::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pickupbehavior_Update_m43B85999594FCCADB071E68235E355DD0F6DBE5F (pickupbehavior_tF813D41DCD5C91677F3DCFC45243BC1954F938CA* __this, const RuntimeMethod* method) 
{
{
		// }
		return;
	}
}
// System.Void pickupbehavior::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pickupbehavior_OnCollisionEnter_mE69DEFEB6DC5D4844660E1B8F299D3A5A69E8A74 (pickupbehavior_tF813D41DCD5C91677F3DCFC45243BC1954F938CA* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE479E8283AE6975B22C85362C2A8C4543BA36B71);
		s_Il2CppMethodInitialized = true;
	}
{
		// switch (collision.gameObject.name)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralE479E8283AE6975B22C85362C2A8C4543BA36B71, NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		// Manager.giveItem(itemType);
		gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* L_4 = __this->___Manager_5;
		uint8_t L_5 = __this->___itemType_6;
		gman_giveItem_mE7C07312827DE5D6F5D73C211B1A73A84F14C9FE(L_4, L_5, NULL);
		// Destroy(transform.parent.gameObject); //Destroys the parent.
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void pickupbehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pickupbehavior__ctor_m6EC8D6D5EFE4602C39B58D61CFB7AFEF7A6BE818 (pickupbehavior_tF813D41DCD5C91677F3DCFC45243BC1954F938CA* __this, const RuntimeMethod* method) 
{
{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void rocketbehavior::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rocketbehavior_Start_m56F738045799FCE41C287670A7D78A4A514D3FA2 (rocketbehavior_tD2010995988200E26B92CA0DCBE4E0C03696AFAE* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD503E948E61D33894C3D83AC55ACCB578E3C635);
		s_Il2CppMethodInitialized = true;
	}
{
		// name = "Rocket"; //Renames to a generic rocket, so the enemy can't distinguish them. They're blind.
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(__this, _stringLiteralCD503E948E61D33894C3D83AC55ACCB578E3C635, NULL);
		// projectileSpeed = projectileMaxSpeed / 30f;
		float L_0 = __this->___projectileMaxSpeed_4;
		__this->___projectileSpeed_6 = ((float)(L_0/(30.0f)));
		// rB = GetComponent<Rigidbody>(); // Get the rigidbody of our new projectile.
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rB_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rB_10), (void*)L_1);
		// rB.velocity = transform.forward * (projectileSpeed); //Add the initial velocity.
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___rB_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_3, NULL);
		float L_5 = __this->___projectileSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_4, L_5, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_2, L_6, NULL);
		// Destroy(gameObject, finalTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		float L_8 = __this->___finalTime_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void rocketbehavior::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rocketbehavior_OnCollisionEnter_m5EB2631A0214318E17E329292EAF530EA7BC8E87 (rocketbehavior_tD2010995988200E26B92CA0DCBE4E0C03696AFAE* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___item0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A4BF4761E31A337B98498084E02FA672B0DDFB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E55E9426ABB19B7D72F5B33AF15F9DE3048F5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85EA2B8AA9FC25A45EC9E3BA45F20ADB78851307);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		// if (primeTime < speedCount)
		int32_t L_0 = __this->___primeTime_9;
		int32_t L_1 = __this->___speedCount_8;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_005b;
		}
	}
	{
		// Debug.Log("Rocket hit " + item.gameObject.name + ".");
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_2 = ___item0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_2, NULL);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral5E55E9426ABB19B7D72F5B33AF15F9DE3048F5B8, L_4, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// GameObject newExplosion = Instantiate(explosionObject, transform.position, transform.rotation) as GameObject; // Create my explosion.
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___explosionObject_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_6, L_8, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Destroy(gameObject); //And destroy the rocket, so it doesn't interfere with the explosion.
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_12, NULL);
		return;
	}

IL_005b:
	{
		// int mistake = primeTime - speedCount;
		int32_t L_13 = __this->___primeTime_9;
		int32_t L_14 = __this->___speedCount_8;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, L_14));
		// Debug.Log("Rocket hit " + item.gameObject.name + " but prime time was " + mistake + " cycles away from explosions!"); // There's a certain amount of cycles before an explosion can occur.
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		ArrayElementTypeCheck (L_16, _stringLiteral5E55E9426ABB19B7D72F5B33AF15F9DE3048F5B8);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral5E55E9426ABB19B7D72F5B33AF15F9DE3048F5B8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_18 = ___item0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_18, NULL);
		String_t* L_20;
		L_20 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_19, NULL);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_17;
		ArrayElementTypeCheck (L_21, _stringLiteral3A4BF4761E31A337B98498084E02FA672B0DDFB8);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3A4BF4761E31A337B98498084E02FA672B0DDFB8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_22;
		ArrayElementTypeCheck (L_24, _stringLiteral85EA2B8AA9FC25A45EC9E3BA45F20ADB78851307);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral85EA2B8AA9FC25A45EC9E3BA45F20ADB78851307);
		String_t* L_25;
		L_25 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_25, NULL);
		// }
		return;
	}
}
// System.Void rocketbehavior::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rocketbehavior_FixedUpdate_mA74ABFCDFE67EA88C8EA43D8B9A9DF9C71D556D8 (rocketbehavior_tD2010995988200E26B92CA0DCBE4E0C03696AFAE* __this, const RuntimeMethod* method) 
{
{
		// if (projectileMaxSpeed > projectileSpeed && speedCount > primeTime)
		float L_0 = __this->___projectileMaxSpeed_4;
		float L_1 = __this->___projectileSpeed_6;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_2 = __this->___speedCount_8;
		int32_t L_3 = __this->___primeTime_9;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_007d;
		}
	}
	{
		// rB.isKinematic = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___rB_10;
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_4, (bool)0, NULL);
		// speedCount = speedCount + 1;
		int32_t L_5 = __this->___speedCount_8;
		__this->___speedCount_8 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// projectileSpeed = projectileSpeed + (Mathf.Pow(projectileVelocity, speedCount) * Time.fixedDeltaTime);
		float L_6 = __this->___projectileSpeed_6;
		float L_7 = __this->___projectileVelocity_5;
		int32_t L_8 = __this->___speedCount_8;
		float L_9;
		L_9 = powf(L_7, ((float)L_8));
		float L_10;
		L_10 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		__this->___projectileSpeed_6 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		// rB.velocity = transform.forward * (projectileSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = __this->___rB_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_12, NULL);
		float L_14 = __this->___projectileSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_13, L_14, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_11, L_15, NULL);
		return;
	}

IL_007d:
	{
		// speedCount = speedCount + 1;
		int32_t L_16 = __this->___speedCount_8;
		__this->___speedCount_8 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		// projectileSpeed = projectileSpeed + (Mathf.Pow(projectileVelocity, speedCount) * Time.fixedDeltaTime);
		float L_17 = __this->___projectileSpeed_6;
		float L_18 = __this->___projectileVelocity_5;
		int32_t L_19 = __this->___speedCount_8;
		float L_20;
		L_20 = powf(L_18, ((float)L_19));
		float L_21;
		L_21 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		__this->___projectileSpeed_6 = ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(L_20, L_21))));
		// transform.position += transform.forward * projectileSpeed * Time.fixedDeltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = L_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_25, NULL);
		float L_27 = __this->___projectileSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_26, L_27, NULL);
		float L_29;
		L_29 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_28, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_24, L_30, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_23, L_31, NULL);
		// }
		return;
	}
}
// System.Void rocketbehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rocketbehavior__ctor_mCA41594157E6D73018969A9255BFFA848FEE20C0 (rocketbehavior_tD2010995988200E26B92CA0DCBE4E0C03696AFAE* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// public float projectileMaxSpeed = 64f; //Our projectile max speed.
		__this->___projectileMaxSpeed_4 = (64.0f);
		// public float projectileVelocity = 1.01f; //The exponential increase of this from 1/15th of the max speed.
		__this->___projectileVelocity_5 = (1.00999999f);
		// public float finalTime = 48f; // The delay before deletion, no matter what.
		__this->___finalTime_7 = (48.0f);
		// public int primeTime = 100; //At what point should the speedcount prime the explosion?
		__this->___primeTime_9 = ((int32_t)100);
		// Rigidbody rB = new Rigidbody(); //Init the rigid body.
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)il2cpp_codegen_object_new(Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var);
		Rigidbody__ctor_mB4E21922228AED3B52D8696D54F5B514F922CB07(L_0, /*hidden argument*/NULL);
		__this->___rB_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rB_10), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void rocketexplosion::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rocketexplosion_Start_m0F28D5AA04ECC8443DC4FF4C0484C050461CCD99 (rocketexplosion_t32A153B3F2ABBBCDDEDCB204F537FFA0FE46ECD5* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB47ABE05C7C325CDC60990977985BF947E57F0C9);
		s_Il2CppMethodInitialized = true;
	}
{
		// name = "Explosion"; //This oughta wake 'em up.
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(__this, _stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A, NULL);
		// Debug.Log("Begin explosion.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralB47ABE05C7C325CDC60990977985BF947E57F0C9, NULL);
		// size = transform.localScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		__this->___size_5 = L_2;
		// timeFinal = timeFinal / 1000;
		int32_t L_3 = __this->___timeFinal_8;
		__this->___timeFinal_8 = ((int32_t)(L_3/((int32_t)1000)));
		// }
		return;
	}
}
// System.Void rocketexplosion::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rocketexplosion_FixedUpdate_m20E580F8F5438D736F79A6E0E4C99910EA0D695E (rocketexplosion_t32A153B3F2ABBBCDDEDCB204F537FFA0FE46ECD5* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// if (finalSize > size)
		float L_0 = __this->___finalSize_4;
		float L_1 = __this->___size_5;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_004b;
		}
	}
	{
		// size = size + (increaseSpeed * Time.fixedDeltaTime);
		float L_2 = __this->___size_5;
		float L_3 = __this->___increaseSpeed_6;
		float L_4;
		L_4 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		__this->___size_5 = ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(L_3, L_4))));
		// transform.localScale= new Vector3(size, size, size);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_6 = __this->___size_5;
		float L_7 = __this->___size_5;
		float L_8 = __this->___size_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_9, NULL);
		goto IL_007f;
	}

IL_004b:
	{
		// time = time + Time.fixedDeltaTime;
		float L_10 = __this->___time_7;
		float L_11;
		L_11 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		__this->___time_7 = ((float)il2cpp_codegen_add(L_10, L_11));
		// transform.localScale = new Vector3(finalSize, finalSize, finalSize);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_13 = __this->___finalSize_4;
		float L_14 = __this->___finalSize_4;
		float L_15 = __this->___finalSize_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_13, L_14, L_15, /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_12, L_16, NULL);
	}

IL_007f:
	{
		// if (time > timeFinal) {
		float L_17 = __this->___time_7;
		int32_t L_18 = __this->___timeFinal_8;
		if ((!(((float)L_17) > ((float)((float)L_18)))))
		{
			goto IL_0099;
		}
	}
	{
		// Destroy(gameObject); //The explosion is complete. Nothing more must be done.
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_19, NULL);
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void rocketexplosion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rocketexplosion__ctor_mB368B09B25B2CAC018A726AD42C0E75593F01E6F (rocketexplosion_t32A153B3F2ABBBCDDEDCB204F537FFA0FE46ECD5* __this, const RuntimeMethod* method) 
{
{
		// public float finalSize = 5.5f; //The final spheroid size.
		__this->___finalSize_4 = (5.5f);
		// public float increaseSpeed = 20f; //The constant rate which the size is increased.
		__this->___increaseSpeed_6 = (20.0f);
		// public int timeFinal = 300; //The amount of time in milliseconds.
		__this->___timeFinal_8 = ((int32_t)300);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void utilities::levelRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void utilities_levelRestart_mC50D6141BC80ADADA0ACF6B287F9B4EBC826AC55 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5488658B9661DC47112A6667A1ABBA2B8790D055);
		s_Il2CppMethodInitialized = true;
	}
{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(0, NULL);
		// Debug.Log("START!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral5488658B9661DC47112A6667A1ABBA2B8790D055, NULL);
		// }
		return;
	}
}
// System.Void utilities::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void utilities_Start_m55970E26414EBDC45498A5DFBA70C9E564F402BD (utilities_tF487F0FFB2AC5614AB3AAF1DC6F9A25D0E81CB37* __this, const RuntimeMethod* method) 
{
{
		// }
		return;
	}
}
// System.Void utilities::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void utilities_Update_m5B092E09534E5473B5A004F7E96EA8A420C5F448 (utilities_tF487F0FFB2AC5614AB3AAF1DC6F9A25D0E81CB37* __this, const RuntimeMethod* method) 
{
{
		// }
		return;
	}
}
// System.Void utilities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void utilities__ctor_mCEF49B91CD924D1DBCC1EE157A2078C39F1494D4 (utilities_tF487F0FFB2AC5614AB3AAF1DC6F9A25D0E81CB37* __this, const RuntimeMethod* method) 
{
{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline (int32_t ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = il2cpp_codegen_abs(L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void gman_set_checkJetpack_m9D16624C16AFBA27BC5BD36C3E56E82AA95A7535_inline (gman_t31F7BDEA11CFD0F2E7E33365E4E95F05224B8299* __this, bool ___value0, const RuntimeMethod* method) 
{
{
		// jetPackActive = value;
		bool L_0 = ___value0;
		__this->___jetPackActive_14 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
