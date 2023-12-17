#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028;
struct GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F;
struct GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3;
struct GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948;
struct GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791;
struct GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Token_tF5F8AF62F32CB565CECB5B4ADB4A0E7DABC84DC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral13114A10702C59B7459B7FFB94B3EC9814AED612;
IL2CPP_EXTERN_C String_t* _stringLiteral2478869FE087903451AEBC85CA33DBDF081CCAF9;
IL2CPP_EXTERN_C String_t* _stringLiteral4013E5E88C2171694988C9818C0339FDA4E6B30F;
IL2CPP_EXTERN_C String_t* _stringLiteral43F467B57F117AB9881882BD47460419D59340FD;
IL2CPP_EXTERN_C String_t* _stringLiteral8F88ED9B30F2AB64825F279EE35E3EE38153DDCF;
IL2CPP_EXTERN_C String_t* _stringLiteral97E1360CCA07F4C93334C1ACF7ADEA68AFAC743F;
IL2CPP_EXTERN_C String_t* _stringLiteralA211FD6F9DC081A1311C02E414175007CA919044;
IL2CPP_EXTERN_C String_t* _stringLiteralBF666DC28A44A677A8B7129A21CFC5D281CF7DE4;
IL2CPP_EXTERN_C String_t* _stringLiteralCBC8EA794C7E2E6B3E854B5482BBB1C0DDD0D67C;
IL2CPP_EXTERN_C String_t* _stringLiteralE697DBBAC6F5DC17B8F0F13A9F1560E8F8404117;
IL2CPP_EXTERN_C String_t* _stringLiteralF226672299FAF2A220099C0767092B56B36F869A;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GifStream_ReadGraphicsControl_m8A8BC1A78C0A66074624C29292BBBBA1E060A7F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GifStream_ReadHeader_m802605B0A77E678E400B9A7E34572A62128FA218_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GifStream_ReadImage_m966A3B6748D0EF6B3A3B4E871120AF499391A053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GifStream_SkipToken_mEE39D7CD3B0F42091186BB2F2AEDCA64F65F6A31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var;
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tEBB047F14326BC2B16C3B96AE3154012B1FC8904 
{
};
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct BitUtils_tDAE91775AF6F77789525230E47CC57F947162DB1  : public RuntimeObject
{
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F  : public RuntimeObject
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream;
	int32_t ___currentByte;
	int32_t ___currentBitPosition;
	int32_t ___currentBufferPosition;
	int32_t ___currentBufferSize;
	bool ___endReached;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer;
};
struct GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948  : public RuntimeObject
{
	bool ___userInput;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors;
	int32_t ___delay;
};
struct GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___dictionaryEntryOffsets;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___dictionaryEntrySizes;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dictionaryHeap;
	int32_t ___dictionarySize;
	int32_t ___dictionaryHeapPosition;
	int32_t ___initialDictionarySize;
	int32_t ___initialLzwCodeSize;
	int32_t ___initialDictionaryHeapPosition;
	int32_t ___nextLzwCodeGrowth;
	int32_t ___currentMinLzwCodeSize;
	int32_t ___codeSize;
	int32_t ___clearCodeId;
	int32_t ___stopCodeId;
	int32_t ___lastCodeId;
	bool ___isFull;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 
{
	bool ___userInput;
	int32_t ___disposalMethod;
	int32_t ___delayTime;
	bool ___hasTransparency;
	int32_t ___transparentColorIndex;
};
struct GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_pinvoke
{
	int32_t ___userInput;
	int32_t ___disposalMethod;
	int32_t ___delayTime;
	int32_t ___hasTransparency;
	int32_t ___transparentColorIndex;
};
struct GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_com
{
	int32_t ___userInput;
	int32_t ___disposalMethod;
	int32_t ___delayTime;
	int32_t ___hasTransparency;
	int32_t ___transparentColorIndex;
};
struct GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 
{
	int32_t ___version;
	int32_t ___width;
	int32_t ___height;
	bool ___hasGlobalColorTable;
	int32_t ___globalColorTableSize;
	int32_t ___transparentColorIndex;
	bool ___sortColors;
	int32_t ___colorResolution;
	int32_t ___pixelAspectRatio;
};
struct GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_pinvoke
{
	int32_t ___version;
	int32_t ___width;
	int32_t ___height;
	int32_t ___hasGlobalColorTable;
	int32_t ___globalColorTableSize;
	int32_t ___transparentColorIndex;
	int32_t ___sortColors;
	int32_t ___colorResolution;
	int32_t ___pixelAspectRatio;
};
struct GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_com
{
	int32_t ___version;
	int32_t ___width;
	int32_t ___height;
	int32_t ___hasGlobalColorTable;
	int32_t ___globalColorTableSize;
	int32_t ___transparentColorIndex;
	int32_t ___sortColors;
	int32_t ___colorResolution;
	int32_t ___pixelAspectRatio;
};
struct GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 
{
	int32_t ___left;
	int32_t ___top;
	int32_t ___width;
	int32_t ___height;
	bool ___isInterlaced;
	bool ___hasLocalColorTable;
	int32_t ___localColorTableSize;
};
struct GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_pinvoke
{
	int32_t ___left;
	int32_t ___top;
	int32_t ___width;
	int32_t ___height;
	int32_t ___isInterlaced;
	int32_t ___hasLocalColorTable;
	int32_t ___localColorTableSize;
};
struct GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_com
{
	int32_t ___left;
	int32_t ___top;
	int32_t ___width;
	int32_t ___height;
	int32_t ___isInterlaced;
	int32_t ___hasLocalColorTable;
	int32_t ___localColorTableSize;
};
struct GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___palette;
	int32_t ___size;
	bool ___isGlobal;
};
struct GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_pinvoke
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___palette;
	int32_t ___size;
	int32_t ___isGlobal;
};
struct GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_com
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___palette;
	int32_t ___size;
	int32_t ___isGlobal;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
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
struct U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10 
{
	GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* ___U3CU3E4__this;
	int32_t ___y;
	int32_t ___x;
	int32_t ___currentRow;
	int32_t ___width;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3  : public RuntimeObject
{
	bool ___U3CFlipVerticallyU3Ek__BackingField;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___U3CBackgroundColorU3Ek__BackingField;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___canvasColors;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___revertDisposalBuffer;
	int32_t ___canvasWidth;
	int32_t ___canvasHeight;
	bool ___canvasIsEmpty;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___framePalette;
	int32_t ___frameDisposalMethod;
	int32_t ___frameCanvasPosition;
	int32_t ___frameCanvasRowEndPosition;
	int32_t ___frameTransparentColorIndex;
	int32_t ___frameRowCurrent;
	int32_t ___frameX;
	int32_t ___frameY;
	int32_t ___frameWidth;
	int32_t ___frameHeight;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___frameRowStart;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___frameRowEnd;
};
struct GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A 
{
	int32_t ___left;
	int32_t ___top;
	int32_t ___width;
	int32_t ___height;
	int32_t ___charWidth;
	int32_t ___charHeight;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___backgroundColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___foregroundColor;
	String_t* ___text;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors;
};
struct GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_pinvoke
{
	int32_t ___left;
	int32_t ___top;
	int32_t ___width;
	int32_t ___height;
	int32_t ___charWidth;
	int32_t ___charHeight;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___backgroundColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___foregroundColor;
	char* ___text;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors;
};
struct GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_com
{
	int32_t ___left;
	int32_t ___top;
	int32_t ___width;
	int32_t ___height;
	int32_t ___charWidth;
	int32_t ___charHeight;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___backgroundColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___foregroundColor;
	Il2CppChar* ___text;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors;
};
struct GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD  : public RuntimeObject
{
	bool ___U3CDrawPlainTextBackgroundU3Ek__BackingField;
	int32_t ___U3CCurrentTokenU3Ek__BackingField;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___currentStream;
	int64_t ___headerStartPosition;
	int64_t ___firstFrameStartPosition;
	GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 ___header;
	GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 ___graphicControl;
	GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 ___imageDescriptor;
	GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* ___canvas;
	GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* ___lzwDictionary;
	GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* ___blockReader;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___globalColorTable;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___localColorTable;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___headerBuffer;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___colorTableBuffer;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extensionApplicationBuffer;
	bool ___nextPaletteIsGlobal;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
};
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_ReadNextBlock_m0E3D388FA5D6D102A8F545AD3F532223E9A9B96F (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_Reset_m03BAEC5C778EA7523B2B3C3D07490E8FFADE4A66 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_FillWithColor_m7B9E75DBA61CF4B87BAE1B5E07671CFD7ED1748B (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___4_color, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_RouteFrameDrawing_mAE8E7934F50B6A4BA75E583A904432FEA3DA5034 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, bool ___4_deinterlace, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GifCanvas_get_FlipVertically_m5814DF98E608124EBE23157E643B524AFF578EC4_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_row, U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* ___1_p, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary__ctor_m45C86D2EE11A949D518D5B8CBCE04C7258E26BC3 (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas__ctor_mC55FD64F83BF41DFA5371390ACDF3109BAB97AE8 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader__ctor_mBA6AC05F45C018CE4C93967FBA821C9FAC9304E3 (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream__ctor_m6F7C893E33AE780712D3C127B6C26C45D5FC0D59 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SetStream_m7F61EC21293580F829D95522BD62364BE517BB5A (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, bool ___1_disposePrevious, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifStream_set_CurrentToken_m27028DAAFD0B0CBDF5552D7550A1CDB4EBA333F9_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifBitBlockReader_SetStream_mBA7BAFA29C27A70E00B9326561E97B06610325A3_inline (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 GifStream_ReadHeader_m802605B0A77E678E400B9A7E34572A62128FA218 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 GifStream_ReadPalette_mDD3AA284A8A45F600C45E20FC19CF4C3C360B7E7 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 GifStream_ReadGraphicsControl_m8A8BC1A78C0A66074624C29292BBBBA1E060A7F7 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 GifStream_ReadImageDescriptor_mFCD5C52CF431F05B34EC092741E3D2F0EF02EE45 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* GifStream_ReadImage_m966A3B6748D0EF6B3A3B4E871120AF499391A053 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipComment_m8C9F60E0B968B2971085E8E27233268284F6CF42 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipPlainText_m5218A8BD99A1BA407DA84E917829BB574D47D0EA (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipNetscapeExtension_mA379B5306260922DDC09823683FD9FEBF60A238C (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipApplicationExtension_m53BD3252324088F8695E5FE3E3622F0167035E05 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitUtils_CheckString_m4576B20F61F98DB5C7287A7F28E2233F4BF5CB8D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, String_t* ___1_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_GetBitsFromByte_m425F942AA28070AC80981FC044C3B51664FC389F (uint8_t ___0_b, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_GetColorTableSize_m0182A8D368C1072B1686362526DF5EE5EF2C55DF (int32_t ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0 (uint8_t ___0_b, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_SetSize_mCF0E7261846E27A115A7B362A72156BAD3D3C37D (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, int32_t ___1_expectedValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_DecodeLzwImageToCanvas_m7C581346C2EE3C82016A2724C3BF3388CFB5E822 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_lzwMinCodeSize, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___5_colorTable, int32_t ___6_transparentColorIndex, bool ___7_isInterlaced, int32_t ___8_disposalMethod, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifImage__ctor_mCE252161928621A19D7534A36A77905A3E3A80FB (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* GifCanvas_get_Colors_mB86B2B82A2ACBA7F0DF0697BEE61BD1CB48E4AB2_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipBlock_mE331E17D537E2B4F051E8629A68AE015D05ABDA6 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitUtils_ReadGifBlocks_m9A068F0FB3C99E5BF362075674F9BA601DAAD19E (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GifStream_get_DrawPlainTextBackground_m0708BFF2D05BE4DA2C05B953DE611100A9002FAA_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_FillPlainTextBackground_m9D9C028D42F5885FE8BE4BB3B3F30C0879455682 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A ___0_text, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A GifStream_ReadPlainText_m56BE17B2053DAB7AFDA6599EFFC7DD6893A15A16 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifCanvas_set_BackgroundColor_m1957BD48CA2C39BE26FDBB6DEAA2A226C6336675_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_BeginNewFrame_m8527EA6DA98073F5AD60E2613A35C1A3A303665A (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___4_palette, int32_t ___5_transparentColorIndex, bool ___6_isInterlaced, int32_t ___7_disposalMethod, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary_InitWithWordSize_m6EB670CB50780C303EA50B4E09D651A3FBDDE52C (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, int32_t ___0_minLzwCodeSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_StartNewReading_mE9EA1508974B1D1568624B10F83F0C35195B401F (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary_DecodeStream_m282A91A032D123465F3B40EFF235A00D1A97A73B (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* ___0_reader, GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* ___1_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_FinishReading_m46CB518BF425B45BB2F5610311E53AB31721491D (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitUtils_SkipGifBlocks_m0855EB727D126CA398FECABBF94CBF935096D39A (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m154EAE9BDAE2A8EB0EE6714D881FA7075628C582 (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared)(__this, method);
}
inline void List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_gshared)(__this, ___0_collection, method);
}
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary_Clear_m1169FBCD8A2D4F227BBA0B53749FE91D6205E56B (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifBitBlockReader_ReadBits_m709349EC1361339B4B75A084A64398E5532CE98E (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifLzwDictionary_CreateNewCode_mE1498C73E05273533BB8E39A82A149489F3205EE (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, int32_t ___0_baseEntry, int32_t ___1_deriveEntry, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_OutputPixel_mAD73C3414E247E66802826F19AAFFA3083D10BE9 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_color, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline void Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**, int32_t, const RuntimeMethod*))Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_gshared)(___0_array, ___1_newSize, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader__ctor_mBA6AC05F45C018CE4C93967FBA821C9FAC9304E3 (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_SetStream_mBA7BAFA29C27A70E00B9326561E97B06610325A3 (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		__this->___stream = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stream), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_StartNewReading_mE9EA1508974B1D1568624B10F83F0C35195B401F (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) 
{
	{
		__this->___currentByte = 0;
		__this->___currentBitPosition = 8;
		GifBitBlockReader_ReadNextBlock_m0E3D388FA5D6D102A8F545AD3F532223E9A9B96F(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_FinishReading_m46CB518BF425B45BB2F5610311E53AB31721491D (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) 
{
	{
		goto IL_0008;
	}

IL_0002:
	{
		GifBitBlockReader_ReadNextBlock_m0E3D388FA5D6D102A8F545AD3F532223E9A9B96F(__this, NULL);
	}

IL_0008:
	{
		bool L_0 = __this->___endReached;
		if (!L_0)
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifBitBlockReader_ReadBits_m709349EC1361339B4B75A084A64398E5532CE98E (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B9_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___0_count;
		V_1 = L_0;
		V_2 = 0;
		int32_t L_1 = __this->___currentBitPosition;
		V_3 = ((int32_t)il2cpp_codegen_subtract(8, L_1));
		goto IL_00bf;
	}

IL_0014:
	{
		int32_t L_2 = __this->___currentBitPosition;
		if ((((int32_t)L_2) < ((int32_t)8)))
		{
			goto IL_006c;
		}
	}
	{
		__this->___currentBitPosition = 0;
		V_3 = 8;
		bool L_3 = __this->___endReached;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		__this->___currentByte = 0;
		goto IL_006c;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___buffer;
		int32_t L_5 = __this->___currentBufferPosition;
		V_6 = L_5;
		int32_t L_6 = V_6;
		__this->___currentBufferPosition = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_6;
		NullCheck(L_4);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		__this->___currentByte = L_9;
		int32_t L_10 = __this->___currentBufferPosition;
		int32_t L_11 = __this->___currentBufferSize;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_006c;
		}
	}
	{
		GifBitBlockReader_ReadNextBlock_m0E3D388FA5D6D102A8F545AD3F532223E9A9B96F(__this, NULL);
	}

IL_006c:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = __this->___currentBitPosition;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_12&((int32_t)31))))), 1))<<((int32_t)(L_13&((int32_t)31))))));
		int32_t L_14 = V_3;
		int32_t L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_16 = V_1;
		G_B9_0 = L_16;
		goto IL_0089;
	}

IL_0088:
	{
		int32_t L_17 = V_3;
		G_B9_0 = L_17;
	}

IL_0089:
	{
		V_5 = G_B9_0;
		int32_t L_18 = V_0;
		uint8_t L_19 = V_4;
		int32_t L_20 = __this->___currentByte;
		int32_t L_21 = __this->___currentBitPosition;
		int32_t L_22 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_19&L_20))>>((int32_t)(L_21&((int32_t)31)))))<<((int32_t)(L_22&((int32_t)31)))))));
		int32_t L_23 = __this->___currentBitPosition;
		int32_t L_24 = V_5;
		__this->___currentBitPosition = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		int32_t L_25 = V_1;
		int32_t L_26 = V_5;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_25, L_26));
		int32_t L_27 = V_2;
		int32_t L_28 = V_5;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, L_28));
	}

IL_00bf:
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_30 = V_0;
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_ReadNextBlock_m0E3D388FA5D6D102A8F545AD3F532223E9A9B96F (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___stream;
		uint8_t L_1;
		L_1 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_0, NULL);
		__this->___currentBufferSize = L_1;
		__this->___currentBufferPosition = 0;
		int32_t L_2 = __this->___currentBufferSize;
		__this->___endReached = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = __this->___endReached;
		if (L_3)
		{
			goto IL_0048;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___buffer;
		int32_t L_6 = __this->___currentBufferSize;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30, L_4, L_5, 0, L_6);
	}

IL_0048:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* GifCanvas_get_Colors_mB86B2B82A2ACBA7F0DF0697BEE61BD1CB48E4AB2 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = __this->___canvasColors;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GifCanvas_get_FlipVertically_m5814DF98E608124EBE23157E643B524AFF578EC4 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CFlipVerticallyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = __this->___U3CBackgroundColorU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_set_BackgroundColor_m1957BD48CA2C39BE26FDBB6DEAA2A226C6336675 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_value;
		__this->___U3CBackgroundColorU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas__ctor_mC55FD64F83BF41DFA5371390ACDF3109BAB97AE8 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CFlipVerticallyU3Ek__BackingField = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___canvasIsEmpty = (bool)1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_SetSize_mCF0E7261846E27A115A7B362A72156BAD3D3C37D (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_width;
		int32_t L_1 = __this->___canvasWidth;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___1_height;
		int32_t L_3 = __this->___canvasHeight;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_004f;
		}
	}

IL_0012:
	{
		int32_t L_4 = ___0_width;
		int32_t L_5 = ___1_height;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_4, L_5));
		int32_t L_6 = V_0;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_7 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___canvasColors = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvasColors), (void*)L_7);
		int32_t L_8 = ___1_height;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->___frameRowStart = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frameRowStart), (void*)L_9);
		int32_t L_10 = ___1_height;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->___frameRowEnd = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frameRowEnd), (void*)L_11);
		__this->___revertDisposalBuffer = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___revertDisposalBuffer), (void*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)NULL);
		int32_t L_12 = ___0_width;
		__this->___canvasWidth = L_12;
		int32_t L_13 = ___1_height;
		__this->___canvasHeight = L_13;
	}

IL_004f:
	{
		GifCanvas_Reset_m03BAEC5C778EA7523B2B3C3D07490E8FFADE4A66(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_Reset_m03BAEC5C778EA7523B2B3C3D07490E8FFADE4A66 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		__this->___frameDisposalMethod = 0;
		__this->___frameX = 0;
		__this->___frameY = 0;
		int32_t L_0 = __this->___canvasWidth;
		__this->___frameWidth = L_0;
		int32_t L_1 = __this->___canvasHeight;
		__this->___frameHeight = L_1;
		bool L_2 = __this->___canvasIsEmpty;
		if (L_2)
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_3 = __this->___canvasWidth;
		int32_t L_4 = __this->___canvasHeight;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5;
		L_5 = GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline(__this, NULL);
		uint8_t L_6 = L_5.___r;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7;
		L_7 = GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline(__this, NULL);
		uint8_t L_8 = L_7.___g;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9;
		L_9 = GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline(__this, NULL);
		uint8_t L_10 = L_9.___b;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_11), L_6, L_8, L_10, (uint8_t)0, NULL);
		GifCanvas_FillWithColor_m7B9E75DBA61CF4B87BAE1B5E07671CFD7ED1748B(__this, 0, 0, L_3, L_4, L_11, NULL);
		__this->___canvasIsEmpty = (bool)1;
	}

IL_0077:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_BeginNewFrame_m8527EA6DA98073F5AD60E2613A35C1A3A303665A (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___4_palette, int32_t ___5_transparentColorIndex, bool ___6_isInterlaced, int32_t ___7_disposalMethod, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___frameDisposalMethod;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0077;
	}

IL_0011:
	{
		int32_t L_3 = __this->___frameX;
		int32_t L_4 = __this->___frameY;
		int32_t L_5 = __this->___frameWidth;
		int32_t L_6 = __this->___frameHeight;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7;
		L_7 = GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline(__this, NULL);
		uint8_t L_8 = L_7.___r;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9;
		L_9 = GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline(__this, NULL);
		uint8_t L_10 = L_9.___g;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_11;
		L_11 = GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline(__this, NULL);
		uint8_t L_12 = L_11.___b;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13;
		memset((&L_13), 0, sizeof(L_13));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_13), L_8, L_10, L_12, (uint8_t)0, NULL);
		GifCanvas_FillWithColor_m7B9E75DBA61CF4B87BAE1B5E07671CFD7ED1748B(__this, L_3, L_4, L_5, L_6, L_13, NULL);
		goto IL_0077;
	}

IL_0058:
	{
		int32_t L_14 = ___7_disposalMethod;
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_15 = __this->___revertDisposalBuffer;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_16 = __this->___canvasColors;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_17 = __this->___revertDisposalBuffer;
		NullCheck(L_17);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, 0, ((int32_t)(((RuntimeArray*)L_17)->max_length)), NULL);
	}

IL_0077:
	{
		int32_t L_18 = ___7_disposalMethod;
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_00b2;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_19 = __this->___revertDisposalBuffer;
		if (L_19)
		{
			goto IL_0097;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_20 = __this->___canvasColors;
		NullCheck(L_20);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_21 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)));
		__this->___revertDisposalBuffer = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___revertDisposalBuffer), (void*)L_21);
	}

IL_0097:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_22 = __this->___canvasColors;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_23 = __this->___revertDisposalBuffer;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_24 = __this->___revertDisposalBuffer;
		NullCheck(L_24);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, 0, ((int32_t)(((RuntimeArray*)L_24)->max_length)), NULL);
	}

IL_00b2:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_25 = ___4_palette;
		__this->___framePalette = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___framePalette), (void*)L_25);
		int32_t L_26 = ___7_disposalMethod;
		__this->___frameDisposalMethod = L_26;
		__this->___canvasIsEmpty = (bool)0;
		int32_t L_27 = ___2_width;
		__this->___frameWidth = L_27;
		int32_t L_28 = ___3_height;
		__this->___frameHeight = L_28;
		int32_t L_29 = ___0_x;
		__this->___frameX = L_29;
		int32_t L_30 = ___1_y;
		__this->___frameY = L_30;
		__this->___frameCanvasPosition = 0;
		__this->___frameRowCurrent = (-1);
		__this->___frameCanvasRowEndPosition = (-1);
		int32_t L_31 = ___5_transparentColorIndex;
		__this->___frameTransparentColorIndex = L_31;
		int32_t L_32 = ___0_x;
		int32_t L_33 = ___1_y;
		int32_t L_34 = ___2_width;
		int32_t L_35 = ___3_height;
		bool L_36 = ___6_isInterlaced;
		GifCanvas_RouteFrameDrawing_mAE8E7934F50B6A4BA75E583A904432FEA3DA5034(__this, L_32, L_33, L_34, L_35, L_36, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_OutputPixel_mAD73C3414E247E66802826F19AAFFA3083D10BE9 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_color, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___frameCanvasPosition;
		int32_t L_1 = __this->___frameCanvasRowEndPosition;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_2 = __this->___frameRowCurrent;
		__this->___frameRowCurrent = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___frameRowStart;
		int32_t L_4 = __this->___frameRowCurrent;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->___frameCanvasPosition = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___frameRowEnd;
		int32_t L_8 = __this->___frameRowCurrent;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->___frameCanvasRowEndPosition = L_10;
	}

IL_0042:
	{
		int32_t L_11 = ___0_color;
		int32_t L_12 = __this->___frameTransparentColorIndex;
		if ((((int32_t)L_11) == ((int32_t)L_12)))
		{
			goto IL_0068;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_13 = __this->___canvasColors;
		int32_t L_14 = __this->___frameCanvasPosition;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_15 = __this->___framePalette;
		int32_t L_16 = ___0_color;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_18);
	}

IL_0068:
	{
		int32_t L_19 = __this->___frameCanvasPosition;
		__this->___frameCanvasPosition = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_FillWithColor_m7B9E75DBA61CF4B87BAE1B5E07671CFD7ED1748B (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___4_color, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___2_width;
		int32_t L_1 = __this->___canvasWidth;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_2 = ___3_height;
		int32_t L_3 = __this->___canvasHeight;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0037;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_4 = __this->___canvasColors;
		NullCheck(L_4);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1));
		goto IL_0032;
	}

IL_0020:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_5 = __this->___canvasColors;
		int32_t L_6 = V_0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7 = ___4_color;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0037:
	{
		bool L_10;
		L_10 = GifCanvas_get_FlipVertically_m5814DF98E608124EBE23157E643B524AFF578EC4_inline(__this, NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_11 = __this->___canvasHeight;
		int32_t L_12 = ___1_y;
		int32_t L_13 = __this->___canvasWidth;
		int32_t L_14 = ___0_x;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_11, L_12)), L_13)), L_14));
		int32_t L_15 = V_2;
		int32_t L_16 = __this->___canvasWidth;
		int32_t L_17 = ___3_height;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)il2cpp_codegen_multiply(L_16, L_17))));
		goto IL_0076;
	}

IL_005f:
	{
		int32_t L_18 = ___1_y;
		int32_t L_19 = __this->___canvasWidth;
		int32_t L_20 = ___0_x;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_18, L_19)), L_20));
		int32_t L_21 = V_1;
		int32_t L_22 = ___3_height;
		int32_t L_23 = __this->___canvasWidth;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23))));
	}

IL_0076:
	{
		int32_t L_24 = V_1;
		V_3 = L_24;
		goto IL_00a8;
	}

IL_007a:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = ___2_width;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
		int32_t L_27 = V_3;
		V_5 = L_27;
		goto IL_0099;
	}

IL_0084:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_28 = __this->___canvasColors;
		int32_t L_29 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_30 = ___4_color;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_30);
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0099:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_34 = V_3;
		int32_t L_35 = __this->___canvasWidth;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, L_35));
	}

IL_00a8:
	{
		int32_t L_36 = V_3;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_007a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_RouteFrameDrawing_mAE8E7934F50B6A4BA75E583A904432FEA3DA5034 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, bool ___4_deinterlace, const RuntimeMethod* method) 
{
	U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		(&V_0)->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this), (void*)__this);
		int32_t L_0 = ___1_y;
		(&V_0)->___y = L_0;
		int32_t L_1 = ___0_x;
		(&V_0)->___x = L_1;
		int32_t L_2 = ___2_width;
		(&V_0)->___width = L_2;
		(&V_0)->___currentRow = 0;
		bool L_3 = ___4_deinterlace;
		if (!L_3)
		{
			goto IL_008a;
		}
	}
	{
		V_1 = 0;
		goto IL_003d;
	}

IL_0030:
	{
		int32_t L_4 = V_1;
		GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A(__this, L_4, (&V_0), NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 8));
	}

IL_003d:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = ___3_height;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0030;
		}
	}
	{
		V_2 = 4;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_8 = V_2;
		GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A(__this, L_8, (&V_0), NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 8));
	}

IL_0053:
	{
		int32_t L_10 = V_2;
		int32_t L_11 = ___3_height;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		V_3 = 2;
		goto IL_0069;
	}

IL_005c:
	{
		int32_t L_12 = V_3;
		GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A(__this, L_12, (&V_0), NULL);
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_0069:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = ___3_height;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_005c;
		}
	}
	{
		V_4 = 1;
		goto IL_0083;
	}

IL_0073:
	{
		int32_t L_16 = V_4;
		GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A(__this, L_16, (&V_0), NULL);
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 2));
	}

IL_0083:
	{
		int32_t L_18 = V_4;
		int32_t L_19 = ___3_height;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_008a:
	{
		V_5 = 0;
		goto IL_009f;
	}

IL_008f:
	{
		int32_t L_20 = V_5;
		GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A(__this, L_20, (&V_0), NULL);
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_009f:
	{
		int32_t L_22 = V_5;
		int32_t L_23 = ___3_height;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_008f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_row, U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* ___1_p, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = GifCanvas_get_FlipVertically_m5814DF98E608124EBE23157E643B524AFF578EC4_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_1 = ___1_p;
		int32_t L_2 = L_1->___y;
		int32_t L_3 = ___0_row;
		int32_t L_4 = __this->___canvasWidth;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_5 = ___1_p;
		int32_t L_6 = L_5->___x;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_2, L_3)), L_4)), L_6));
		goto IL_003f;
	}

IL_0020:
	{
		int32_t L_7 = __this->___canvasHeight;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_8 = ___1_p;
		int32_t L_9 = L_8->___y;
		int32_t L_10 = ___0_row;
		int32_t L_11 = __this->___canvasWidth;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_12 = ___1_p;
		int32_t L_13 = L_12->___x;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_7, 1)), ((int32_t)il2cpp_codegen_add(L_9, L_10)))), L_11)), L_13));
	}

IL_003f:
	{
		V_0 = G_B3_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___frameRowStart;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_15 = ___1_p;
		int32_t L_16 = L_15->___currentRow;
		int32_t L_17 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)L_17);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___frameRowEnd;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_19 = ___1_p;
		int32_t L_20 = L_19->___currentRow;
		int32_t L_21 = V_0;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_22 = ___1_p;
		int32_t L_23 = L_22->___width;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (int32_t)((int32_t)il2cpp_codegen_add(L_21, L_23)));
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_24 = ___1_p;
		int32_t L_25 = L_24->___currentRow;
		V_1 = L_25;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_26 = ___1_p;
		int32_t L_27 = V_1;
		L_26->___currentRow = ((int32_t)il2cpp_codegen_add(L_27, 1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GifStream_get_DrawPlainTextBackground_m0708BFF2D05BE4DA2C05B953DE611100A9002FAA (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CDrawPlainTextBackgroundU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 GifStream_get_Header_m7276A6A6F32364A1B54AFB6EBA1E54FDCB62D19B (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 L_0 = __this->___header;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GifStream_get_HasMoreData_mDE4AECF1D3480208FA4A5B1B279F0FE5F583C658 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline(__this, NULL);
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)((int32_t)9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCurrentTokenU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_set_CurrentToken_m27028DAAFD0B0CBDF5552D7550A1CDB4EBA333F9 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCurrentTokenU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream__ctor_m6F7C893E33AE780712D3C127B6C26C45D5FC0D59 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* L_0 = (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791*)il2cpp_codegen_object_new(GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791_il2cpp_TypeInfo_var);
		GifLzwDictionary__ctor_m45C86D2EE11A949D518D5B8CBCE04C7258E26BC3(L_0, NULL);
		__this->___lzwDictionary = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lzwDictionary), (void*)L_0);
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_1 = (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3*)il2cpp_codegen_object_new(GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3_il2cpp_TypeInfo_var);
		GifCanvas__ctor_mC55FD64F83BF41DFA5371390ACDF3109BAB97AE8(L_1, NULL);
		__this->___canvas = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas), (void*)L_1);
		GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* L_2 = (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F*)il2cpp_codegen_object_new(GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F_il2cpp_TypeInfo_var);
		GifBitBlockReader__ctor_mBA6AC05F45C018CE4C93967FBA821C9FAC9304E3(L_2, NULL);
		__this->___blockReader = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blockReader), (void*)L_2);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_3 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___globalColorTable = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___globalColorTable), (void*)L_3);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_4 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___localColorTable = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localColorTable), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___headerBuffer = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___headerBuffer), (void*)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		__this->___extensionApplicationBuffer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___extensionApplicationBuffer), (void*)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)768));
		__this->___colorTableBuffer = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTableBuffer), (void*)L_7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream__ctor_m5D79AD1F0EC34C906CDBF14B8A20DD3A5F94F985 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		GifStream__ctor_m6F7C893E33AE780712D3C127B6C26C45D5FC0D59(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		GifStream_SetStream_m7F61EC21293580F829D95522BD62364BE517BB5A(__this, L_0, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SetStream_m7F61EC21293580F829D95522BD62364BE517BB5A (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, bool ___1_disposePrevious, const RuntimeMethod* method) 
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B3_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B2_0 = NULL;
	{
		bool L_0 = ___1_disposePrevious;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___currentStream;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = L_1;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_000f;
		}
		G_B2_0 = L_2;
	}
	{
		goto IL_0014;
	}

IL_000f:
	{
		NullCheck(G_B3_0);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(G_B3_0, NULL);
	}

IL_0014:
	{
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_3 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		il2cpp_codegen_initobj(L_3, sizeof(GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6));
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_4 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		il2cpp_codegen_initobj(L_4, sizeof(GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798));
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_5 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		il2cpp_codegen_initobj(L_5, sizeof(GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_stream;
		__this->___currentStream = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentStream), (void*)L_6);
		GifStream_set_CurrentToken_m27028DAAFD0B0CBDF5552D7550A1CDB4EBA333F9_inline(__this, 0, NULL);
		GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* L_7 = __this->___blockReader;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = ___0_stream;
		NullCheck(L_7);
		GifBitBlockReader_SetStream_mBA7BAFA29C27A70E00B9326561E97B06610325A3_inline(L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_Dispose_m29EDB2507103ABC3A440D8EF2B4F3E8258807EF4 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B2_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B1_0 = NULL;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___currentStream;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
		G_B1_0 = L_1;
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipToken_mEE39D7CD3B0F42091186BB2F2AEDCA64F65F6A31 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0033;
			}
			case 1:
			{
				goto IL_003b;
			}
			case 2:
			{
				goto IL_0043;
			}
			case 3:
			{
				goto IL_004b;
			}
			case 4:
			{
				goto IL_0053;
			}
			case 5:
			{
				goto IL_005b;
			}
			case 6:
			{
				goto IL_0062;
			}
			case 7:
			{
				goto IL_0069;
			}
			case 8:
			{
				goto IL_0070;
			}
		}
	}
	{
		goto IL_0077;
	}

IL_0033:
	{
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 L_2;
		L_2 = GifStream_ReadHeader_m802605B0A77E678E400B9A7E34572A62128FA218(__this, NULL);
		return;
	}

IL_003b:
	{
		GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 L_3;
		L_3 = GifStream_ReadPalette_mDD3AA284A8A45F600C45E20FC19CF4C3C360B7E7(__this, NULL);
		return;
	}

IL_0043:
	{
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 L_4;
		L_4 = GifStream_ReadGraphicsControl_m8A8BC1A78C0A66074624C29292BBBBA1E060A7F7(__this, NULL);
		return;
	}

IL_004b:
	{
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 L_5;
		L_5 = GifStream_ReadImageDescriptor_mFCD5C52CF431F05B34EC092741E3D2F0EF02EE45(__this, NULL);
		return;
	}

IL_0053:
	{
		GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* L_6;
		L_6 = GifStream_ReadImage_m966A3B6748D0EF6B3A3B4E871120AF499391A053(__this, NULL);
		return;
	}

IL_005b:
	{
		GifStream_SkipComment_m8C9F60E0B968B2971085E8E27233268284F6CF42(__this, NULL);
		return;
	}

IL_0062:
	{
		GifStream_SkipPlainText_m5218A8BD99A1BA407DA84E917829BB574D47D0EA(__this, NULL);
		return;
	}

IL_0069:
	{
		GifStream_SkipNetscapeExtension_mA379B5306260922DDC09823683FD9FEBF60A238C(__this, NULL);
		return;
	}

IL_0070:
	{
		GifStream_SkipApplicationExtension_m53BD3252324088F8695E5FE3E3622F0167035E05(__this, NULL);
		return;
	}

IL_0077:
	{
		int32_t L_7;
		L_7 = GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline(__this, NULL);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Token_tF5F8AF62F32CB565CECB5B4ADB4A0E7DABC84DC7_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF666DC28A44A677A8B7129A21CFC5D281CF7DE4)), L_9, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GifStream_SkipToken_mEE39D7CD3B0F42091186BB2F2AEDCA64F65F6A31_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 GifStream_ReadHeader_m802605B0A77E678E400B9A7E34572A62128FA218 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA211FD6F9DC081A1311C02E414175007CA919044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF226672299FAF2A220099C0767092B56B36F869A);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 0, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___currentStream;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_0);
		__this->___headerStartPosition = L_1;
		__this->___firstFrameStartPosition = ((int64_t)(-1));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___currentStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___headerBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___headerBuffer;
		NullCheck(L_4);
		NullCheck(L_2);
		int32_t L_5;
		L_5 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30, L_2, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___headerBuffer;
		bool L_7;
		L_7 = BitUtils_CheckString_m4576B20F61F98DB5C7287A7F28E2233F4BF5CB8D(L_6, _stringLiteralF226672299FAF2A220099C0767092B56B36F869A, NULL);
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_8 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		L_8->___version = 1;
		goto IL_0086;
	}

IL_005b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___headerBuffer;
		bool L_10;
		L_10 = BitUtils_CheckString_m4576B20F61F98DB5C7287A7F28E2233F4BF5CB8D(L_9, _stringLiteralA211FD6F9DC081A1311C02E414175007CA919044, NULL);
		if (!L_10)
		{
			goto IL_007b;
		}
	}
	{
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_11 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		L_11->___version = 0;
		goto IL_0086;
	}

IL_007b:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBC8EA794C7E2E6B3E854B5482BBB1C0DDD0D67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GifStream_ReadHeader_m802605B0A77E678E400B9A7E34572A62128FA218_RuntimeMethod_var)));
	}

IL_0086:
	{
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_13 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = __this->___currentStream;
		int32_t L_15;
		L_15 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_14, NULL);
		L_13->___width = L_15;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_16 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_17 = __this->___currentStream;
		int32_t L_18;
		L_18 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_17, NULL);
		L_16->___height = L_18;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_19 = __this->___currentStream;
		uint8_t L_20;
		L_20 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_19, NULL);
		V_0 = L_20;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_21 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		uint8_t L_22 = V_0;
		int32_t L_23;
		L_23 = BitUtils_GetBitsFromByte_m425F942AA28070AC80981FC044C3B51664FC389F(L_22, 0, 3, NULL);
		int32_t L_24;
		L_24 = BitUtils_GetColorTableSize_m0182A8D368C1072B1686362526DF5EE5EF2C55DF(L_23, NULL);
		L_21->___globalColorTableSize = L_24;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_25 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		uint8_t L_26 = V_0;
		bool L_27;
		L_27 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_26, 3, NULL);
		L_25->___sortColors = L_27;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_28 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		uint8_t L_29 = V_0;
		int32_t L_30;
		L_30 = BitUtils_GetBitsFromByte_m425F942AA28070AC80981FC044C3B51664FC389F(L_29, 4, 3, NULL);
		L_28->___colorResolution = L_30;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_31 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		uint8_t L_32 = V_0;
		bool L_33;
		L_33 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_32, 7, NULL);
		L_31->___hasGlobalColorTable = L_33;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_34 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_35 = __this->___currentStream;
		uint8_t L_36;
		L_36 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_35, NULL);
		L_34->___transparentColorIndex = L_36;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_37 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_38 = __this->___currentStream;
		uint8_t L_39;
		L_39 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_38, NULL);
		L_37->___pixelAspectRatio = L_39;
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_40 = __this->___canvas;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_41 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		int32_t L_42 = L_41->___width;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_43 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		int32_t L_44 = L_43->___height;
		NullCheck(L_40);
		GifCanvas_SetSize_mCF0E7261846E27A115A7B362A72156BAD3D3C37D(L_40, L_42, L_44, NULL);
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_45 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		bool L_46 = L_45->___hasGlobalColorTable;
		if (!L_46)
		{
			goto IL_0178;
		}
	}
	{
		int32_t L_47;
		L_47 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 1, NULL);
		__this->___nextPaletteIsGlobal = (bool)1;
		goto IL_017f;
	}

IL_0178:
	{
		int32_t L_48;
		L_48 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
	}

IL_017f:
	{
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 L_49 = __this->___header;
		return L_49;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 GifStream_ReadPalette_mDD3AA284A8A45F600C45E20FC19CF4C3C360B7E7 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B3_0 = 0;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* G_B6_0 = NULL;
	{
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 1, NULL);
		bool L_0 = __this->___nextPaletteIsGlobal;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_1 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		int32_t L_2 = L_1->___localColorTableSize;
		G_B3_0 = L_2;
		goto IL_0027;
	}

IL_001c:
	{
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_3 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		int32_t L_4 = L_3->___globalColorTableSize;
		G_B3_0 = L_4;
	}

IL_0027:
	{
		V_0 = G_B3_0;
		bool L_5 = __this->___nextPaletteIsGlobal;
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = __this->___localColorTable;
		G_B6_0 = L_6;
		goto IL_003e;
	}

IL_0038:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_7 = __this->___globalColorTable;
		G_B6_0 = L_7;
	}

IL_003e:
	{
		V_1 = G_B6_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = __this->___currentStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___colorTableBuffer;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		int32_t L_11;
		L_11 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30, L_8, L_9, 0, ((int32_t)il2cpp_codegen_multiply(L_10, 3)));
		V_2 = 0;
		V_3 = 0;
		goto IL_0094;
	}

IL_005b:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_12 = V_1;
		int32_t L_13 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___colorTableBuffer;
		int32_t L_15 = V_2;
		int32_t L_16 = L_15;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___colorTableBuffer;
		int32_t L_20 = V_2;
		int32_t L_21 = L_20;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		NullCheck(L_19);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___colorTableBuffer;
		int32_t L_25 = V_2;
		int32_t L_26 = L_25;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		NullCheck(L_24);
		int32_t L_27 = L_26;
		uint8_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_29;
		memset((&L_29), 0, sizeof(L_29));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_29), L_18, L_23, L_28, (uint8_t)((int32_t)255), NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_29);
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0094:
	{
		int32_t L_31 = V_3;
		int32_t L_32 = V_0;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_005b;
		}
	}
	{
		bool L_33 = __this->___nextPaletteIsGlobal;
		if (!L_33)
		{
			goto IL_00ba;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_34 = __this->___currentStream;
		NullCheck(L_34);
		int64_t L_35;
		L_35 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_34);
		__this->___firstFrameStartPosition = L_35;
		int32_t L_36;
		L_36 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		goto IL_00c2;
	}

IL_00ba:
	{
		int32_t L_37;
		L_37 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 4, NULL);
	}

IL_00c2:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891));
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_38 = V_1;
		(&V_4)->___palette = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_4)->___palette), (void*)L_38);
		int32_t L_39 = V_0;
		(&V_4)->___size = L_39;
		bool L_40 = __this->___nextPaletteIsGlobal;
		(&V_4)->___isGlobal = L_40;
		GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 L_41 = V_4;
		return L_41;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 GifStream_ReadGraphicsControl_m8A8BC1A78C0A66074624C29292BBBBA1E060A7F7 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	{
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 2, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___currentStream;
		BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3(L_0, 4, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___currentStream;
		uint8_t L_2;
		L_2 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_1, NULL);
		V_0 = L_2;
		uint8_t L_3 = V_0;
		int32_t L_4;
		L_4 = BitUtils_GetBitsFromByte_m425F942AA28070AC80981FC044C3B51664FC389F(L_3, 2, 3, NULL);
		V_1 = L_4;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_5 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		uint8_t L_6 = V_0;
		bool L_7;
		L_7 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_6, 0, NULL);
		L_5->___hasTransparency = L_7;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_8 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		uint8_t L_9 = V_0;
		bool L_10;
		L_10 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_9, 1, NULL);
		L_8->___userInput = L_10;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_11 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = __this->___currentStream;
		int32_t L_13;
		L_13 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_12, NULL);
		L_11->___delayTime = L_13;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_14 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15 = __this->___currentStream;
		uint8_t L_16;
		L_16 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_15, NULL);
		L_14->___transparentColorIndex = L_16;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_17 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		bool L_18 = L_17->___hasTransparency;
		if (L_18)
		{
			goto IL_0091;
		}
	}
	{
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_19 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		L_19->___transparentColorIndex = (-1);
	}

IL_0091:
	{
		int32_t L_20 = V_1;
		switch (L_20)
		{
			case 0:
			{
				goto IL_00a9;
			}
			case 1:
			{
				goto IL_00a9;
			}
			case 2:
			{
				goto IL_00b7;
			}
			case 3:
			{
				goto IL_00c5;
			}
		}
	}
	{
		goto IL_00d3;
	}

IL_00a9:
	{
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_21 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		L_21->___disposalMethod = 0;
		goto IL_00e9;
	}

IL_00b7:
	{
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_22 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		L_22->___disposalMethod = 1;
		goto IL_00e9;
	}

IL_00c5:
	{
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_23 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		L_23->___disposalMethod = 2;
		goto IL_00e9;
	}

IL_00d3:
	{
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		RuntimeObject* L_26 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_25);
		String_t* L_27;
		L_27 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97E1360CCA07F4C93334C1ACF7ADEA68AFAC743F)), L_26, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_28 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GifStream_ReadGraphicsControl_m8A8BC1A78C0A66074624C29292BBBBA1E060A7F7_RuntimeMethod_var)));
	}

IL_00e9:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_29 = __this->___currentStream;
		BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3(L_29, 0, NULL);
		int32_t L_30;
		L_30 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 L_31 = __this->___graphicControl;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 GifStream_ReadImageDescriptor_mFCD5C52CF431F05B34EC092741E3D2F0EF02EE45 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 3, NULL);
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_0 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___currentStream;
		int32_t L_2;
		L_2 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_1, NULL);
		L_0->___left = L_2;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_3 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___currentStream;
		int32_t L_5;
		L_5 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_4, NULL);
		L_3->___top = L_5;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_6 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___currentStream;
		int32_t L_8;
		L_8 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_7, NULL);
		L_6->___width = L_8;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_9 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = __this->___currentStream;
		int32_t L_11;
		L_11 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_10, NULL);
		L_9->___height = L_11;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = __this->___currentStream;
		uint8_t L_13;
		L_13 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_12, NULL);
		V_0 = L_13;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_14 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		uint8_t L_15 = V_0;
		int32_t L_16;
		L_16 = BitUtils_GetBitsFromByte_m425F942AA28070AC80981FC044C3B51664FC389F(L_15, 0, 3, NULL);
		int32_t L_17;
		L_17 = BitUtils_GetColorTableSize_m0182A8D368C1072B1686362526DF5EE5EF2C55DF(L_16, NULL);
		L_14->___localColorTableSize = L_17;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_18 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		uint8_t L_19 = V_0;
		bool L_20;
		L_20 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_19, 6, NULL);
		L_18->___isInterlaced = L_20;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_21 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		uint8_t L_22 = V_0;
		bool L_23;
		L_23 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_22, 7, NULL);
		L_21->___hasLocalColorTable = L_23;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_24 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		bool L_25 = L_24->___hasLocalColorTable;
		if (!L_25)
		{
			goto IL_00c5;
		}
	}
	{
		__this->___nextPaletteIsGlobal = (bool)0;
		int32_t L_26;
		L_26 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 1, NULL);
		goto IL_00cd;
	}

IL_00c5:
	{
		int32_t L_27;
		L_27 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 4, NULL);
	}

IL_00cd:
	{
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 L_28 = __this->___imageDescriptor;
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* GifStream_ReadImage_m966A3B6748D0EF6B3A3B4E871120AF499391A053 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_0 = NULL;
	uint8_t V_1 = 0x0;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* G_B3_0 = NULL;
	{
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 4, NULL);
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_0 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		bool L_1 = L_0->___hasLocalColorTable;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_2 = __this->___globalColorTable;
		G_B3_0 = L_2;
		goto IL_0022;
	}

IL_001c:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_3 = __this->___localColorTable;
		G_B3_0 = L_3;
	}

IL_0022:
	{
		V_0 = G_B3_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___currentStream;
		uint8_t L_5;
		L_5 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_4, NULL);
		V_1 = L_5;
		uint8_t L_6 = V_1;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		uint8_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)8)))
		{
			goto IL_0041;
		}
	}

IL_0036:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral43F467B57F117AB9881882BD47460419D59340FD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GifStream_ReadImage_m966A3B6748D0EF6B3A3B4E871120AF499391A053_RuntimeMethod_var)));
	}

IL_0041:
	{
		uint8_t L_9 = V_1;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_10 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		int32_t L_11 = L_10->___left;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_12 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		int32_t L_13 = L_12->___top;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_14 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		int32_t L_15 = L_14->___width;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_16 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		int32_t L_17 = L_16->___height;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_18 = V_0;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_19 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		int32_t L_20 = L_19->___transparentColorIndex;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_21 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		bool L_22 = L_21->___isInterlaced;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_23 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		int32_t L_24 = L_23->___disposalMethod;
		GifStream_DecodeLzwImageToCanvas_m7C581346C2EE3C82016A2724C3BF3388CFB5E822(__this, L_9, L_11, L_13, L_15, L_17, L_18, L_20, L_22, L_24, NULL);
		int32_t L_25;
		L_25 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* L_26 = (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948*)il2cpp_codegen_object_new(GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948_il2cpp_TypeInfo_var);
		GifImage__ctor_mCE252161928621A19D7534A36A77905A3E3A80FB(L_26, NULL);
		GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* L_27 = L_26;
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_28 = __this->___canvas;
		NullCheck(L_28);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_29;
		L_29 = GifCanvas_get_Colors_mB86B2B82A2ACBA7F0DF0697BEE61BD1CB48E4AB2_inline(L_28, NULL);
		NullCheck(L_27);
		L_27->___colors = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___colors), (void*)L_29);
		GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* L_30 = L_27;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_31 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		bool L_32 = L_31->___userInput;
		NullCheck(L_30);
		L_30->___userInput = L_32;
		GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* L_33 = L_30;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_34 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		int32_t L_35 = L_34->___delayTime;
		NullCheck(L_33);
		L_33->___delay = L_35;
		return L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipComment_m8C9F60E0B968B2971085E8E27233268284F6CF42 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		GifStream_SkipBlock_mE331E17D537E2B4F051E8629A68AE015D05ABDA6(__this, 5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A GifStream_ReadPlainText_m56BE17B2053DAB7AFDA6599EFFC7DD6893A15A16 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 6, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___currentStream;
		BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3(L_0, ((int32_t)12), NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___currentStream;
		int32_t L_2;
		L_2 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_1, NULL);
		(&V_0)->___left = L_2;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->___currentStream;
		int32_t L_4;
		L_4 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_3, NULL);
		(&V_0)->___top = L_4;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->___currentStream;
		int32_t L_6;
		L_6 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_5, NULL);
		(&V_0)->___width = L_6;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___currentStream;
		int32_t L_8;
		L_8 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_7, NULL);
		(&V_0)->___height = L_8;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = __this->___currentStream;
		uint8_t L_10;
		L_10 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_9, NULL);
		(&V_0)->___charWidth = L_10;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = __this->___currentStream;
		uint8_t L_12;
		L_12 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_11, NULL);
		(&V_0)->___charHeight = L_12;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_13 = __this->___globalColorTable;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = __this->___currentStream;
		uint8_t L_15;
		L_15 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_14, NULL);
		NullCheck(L_13);
		uint8_t L_16 = L_15;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		(&V_0)->___foregroundColor = L_17;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_18 = __this->___globalColorTable;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_19 = __this->___currentStream;
		uint8_t L_20;
		L_20 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_19, NULL);
		NullCheck(L_18);
		uint8_t L_21 = L_20;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_22 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		(&V_0)->___backgroundColor = L_22;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_23;
		L_23 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24 = __this->___currentStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = BitUtils_ReadGifBlocks_m9A068F0FB3C99E5BF362075674F9BA601DAAD19E(L_24, NULL);
		NullCheck(L_23);
		String_t* L_26;
		L_26 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34, L_23, L_25);
		(&V_0)->___text = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___text), (void*)L_26);
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_27 = __this->___canvas;
		NullCheck(L_27);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_28;
		L_28 = GifCanvas_get_Colors_mB86B2B82A2ACBA7F0DF0697BEE61BD1CB48E4AB2_inline(L_27, NULL);
		(&V_0)->___colors = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___colors), (void*)L_28);
		bool L_29;
		L_29 = GifStream_get_DrawPlainTextBackground_m0708BFF2D05BE4DA2C05B953DE611100A9002FAA_inline(__this, NULL);
		if (!L_29)
		{
			goto IL_00ff;
		}
	}
	{
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_30 = V_0;
		GifStream_FillPlainTextBackground_m9D9C028D42F5885FE8BE4BB3B3F30C0879455682(__this, L_30, NULL);
	}

IL_00ff:
	{
		int32_t L_31;
		L_31 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_32 = V_0;
		return L_32;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipPlainText_m5218A8BD99A1BA407DA84E917829BB574D47D0EA (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = GifStream_get_DrawPlainTextBackground_m0708BFF2D05BE4DA2C05B953DE611100A9002FAA_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_1;
		L_1 = GifStream_ReadPlainText_m56BE17B2053DAB7AFDA6599EFFC7DD6893A15A16(__this, NULL);
		return;
	}

IL_0010:
	{
		GifStream_SkipBlock_mE331E17D537E2B4F051E8629A68AE015D05ABDA6(__this, 6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipNetscapeExtension_mA379B5306260922DDC09823683FD9FEBF60A238C (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		GifStream_SkipBlock_mE331E17D537E2B4F051E8629A68AE015D05ABDA6(__this, 7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipApplicationExtension_m53BD3252324088F8695E5FE3E3622F0167035E05 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		GifStream_SkipBlock_mE331E17D537E2B4F051E8629A68AE015D05ABDA6(__this, 8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_DecodeLzwImageToCanvas_m7C581346C2EE3C82016A2724C3BF3388CFB5E822 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_lzwMinCodeSize, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___5_colorTable, int32_t ___6_transparentColorIndex, bool ___7_isInterlaced, int32_t ___8_disposalMethod, const RuntimeMethod* method) 
{
	{
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_0 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		bool L_1 = L_0->___hasGlobalColorTable;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_2 = __this->___canvas;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_3 = __this->___globalColorTable;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_4 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		int32_t L_5 = L_4->___transparentColorIndex;
		NullCheck(L_3);
		int32_t L_6 = L_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		GifCanvas_set_BackgroundColor_m1957BD48CA2C39BE26FDBB6DEAA2A226C6336675_inline(L_2, L_7, NULL);
	}

IL_002e:
	{
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_8 = __this->___canvas;
		int32_t L_9 = ___1_x;
		int32_t L_10 = ___2_y;
		int32_t L_11 = ___3_width;
		int32_t L_12 = ___4_height;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_13 = ___5_colorTable;
		int32_t L_14 = ___6_transparentColorIndex;
		bool L_15 = ___7_isInterlaced;
		int32_t L_16 = ___8_disposalMethod;
		NullCheck(L_8);
		GifCanvas_BeginNewFrame_m8527EA6DA98073F5AD60E2613A35C1A3A303665A(L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, NULL);
		GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* L_17 = __this->___lzwDictionary;
		int32_t L_18 = ___0_lzwMinCodeSize;
		NullCheck(L_17);
		GifLzwDictionary_InitWithWordSize_m6EB670CB50780C303EA50B4E09D651A3FBDDE52C(L_17, L_18, NULL);
		GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* L_19 = __this->___blockReader;
		NullCheck(L_19);
		GifBitBlockReader_StartNewReading_mE9EA1508974B1D1568624B10F83F0C35195B401F(L_19, NULL);
		GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* L_20 = __this->___lzwDictionary;
		GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* L_21 = __this->___blockReader;
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_22 = __this->___canvas;
		NullCheck(L_20);
		GifLzwDictionary_DecodeStream_m282A91A032D123465F3B40EFF235A00D1A97A73B(L_20, L_21, L_22, NULL);
		GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* L_23 = __this->___blockReader;
		NullCheck(L_23);
		GifBitBlockReader_FinishReading_m46CB518BF425B45BB2F5610311E53AB31721491D(L_23, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13114A10702C59B7459B7FFB94B3EC9814AED612);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t G_B17_0 = 0;

IL_0000:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___currentStream;
		uint8_t L_1;
		L_1 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_0, NULL);
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)33))))
		{
			goto IL_0026;
		}
	}
	{
		uint8_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)44))))
		{
			goto IL_00c3;
		}
	}
	{
		uint8_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)59))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_00d4;
	}

IL_0026:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->___currentStream;
		uint8_t L_6;
		L_6 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_5, NULL);
		V_1 = L_6;
		uint8_t L_7 = V_1;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)249)))))
		{
			goto IL_0048;
		}
	}
	{
		uint8_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0062;
		}
	}
	{
		uint8_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)249))))
		{
			goto IL_006a;
		}
	}
	{
		goto IL_00b3;
	}

IL_0048:
	{
		uint8_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)254))))
		{
			goto IL_005a;
		}
	}
	{
		uint8_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)255))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_00b3;
	}

IL_005a:
	{
		int32_t L_12;
		L_12 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 5, NULL);
		return L_12;
	}

IL_0062:
	{
		int32_t L_13;
		L_13 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 6, NULL);
		return L_13;
	}

IL_006a:
	{
		int32_t L_14;
		L_14 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 2, NULL);
		return L_14;
	}

IL_0072:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15 = __this->___currentStream;
		BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3(L_15, ((int32_t)11), NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16 = __this->___currentStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___extensionApplicationBuffer;
		NullCheck(L_16);
		int32_t L_18;
		L_18 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30, L_16, L_17, 0, ((int32_t)11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___extensionApplicationBuffer;
		bool L_20;
		L_20 = BitUtils_CheckString_m4576B20F61F98DB5C7287A7F28E2233F4BF5CB8D(L_19, _stringLiteral13114A10702C59B7459B7FFB94B3EC9814AED612, NULL);
		if (L_20)
		{
			goto IL_00a9;
		}
	}
	{
		G_B17_0 = 8;
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B17_0 = 7;
	}

IL_00aa:
	{
		V_2 = G_B17_0;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, L_21, NULL);
		return L_22;
	}

IL_00b3:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_23 = __this->___currentStream;
		BitUtils_SkipGifBlocks_m0855EB727D126CA398FECABBF94CBF935096D39A(L_23, NULL);
		goto IL_0000;
	}

IL_00c3:
	{
		int32_t L_24;
		L_24 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 3, NULL);
		return L_24;
	}

IL_00cb:
	{
		int32_t L_25;
		L_25 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, ((int32_t)9), NULL);
		return L_25;
	}

IL_00d4:
	{
		uint8_t L_26 = V_0;
		uint8_t L_27 = L_26;
		RuntimeObject* L_28 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)), &L_27);
		String_t* L_29;
		L_29 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F88ED9B30F2AB64825F279EE35E3EE38153DDCF)), L_28, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_30 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_30, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_token, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_token;
		GifStream_set_CurrentToken_m27028DAAFD0B0CBDF5552D7550A1CDB4EBA333F9_inline(__this, L_0, NULL);
		int32_t L_1 = ___0_token;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_FillPlainTextBackground_m9D9C028D42F5885FE8BE4BB3B3F30C0879455682 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A ___0_text, const RuntimeMethod* method) 
{
	{
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_0 = __this->___canvas;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_1 = ___0_text;
		int32_t L_2 = L_1.___left;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_3 = ___0_text;
		int32_t L_4 = L_3.___top;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_5 = ___0_text;
		int32_t L_6 = L_5.___width;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_7 = ___0_text;
		int32_t L_8 = L_7.___height;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_9 = __this->___globalColorTable;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_10 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		int32_t L_11 = L_10->___transparentColorIndex;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_12 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		bool L_13 = L_12->___isInterlaced;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_14 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		int32_t L_15 = L_14->___disposalMethod;
		NullCheck(L_0);
		GifCanvas_BeginNewFrame_m8527EA6DA98073F5AD60E2613A35C1A3A303665A(L_0, L_2, L_4, L_6, L_8, L_9, L_11, L_13, L_15, NULL);
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_16 = __this->___canvas;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_17 = ___0_text;
		int32_t L_18 = L_17.___left;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_19 = ___0_text;
		int32_t L_20 = L_19.___top;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_21 = ___0_text;
		int32_t L_22 = L_21.___width;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_23 = ___0_text;
		int32_t L_24 = L_23.___height;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_25 = ___0_text;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_26 = L_25.___backgroundColor;
		NullCheck(L_16);
		GifCanvas_FillWithColor_m7B9E75DBA61CF4B87BAE1B5E07671CFD7ED1748B(L_16, L_18, L_20, L_22, L_24, L_26, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_token, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline(__this, NULL);
		int32_t L_1 = ___0_token;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_2;
		L_2 = GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline(__this, NULL);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Token_tF5F8AF62F32CB565CECB5B4ADB4A0E7DABC84DC7_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2478869FE087903451AEBC85CA33DBDF081CCAF9)), L_4, NULL);
		int32_t L_6 = ___0_token;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Token_tF5F8AF62F32CB565CECB5B4ADB4A0E7DABC84DC7_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE697DBBAC6F5DC17B8F0F13A9F1560E8F8404117)), L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, L_9, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5_RuntimeMethod_var)));
	}

IL_0039:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipBlock_mE331E17D537E2B4F051E8629A68AE015D05ABDA6 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_token, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_token;
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, L_0, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___currentStream;
		BitUtils_SkipGifBlocks_m0855EB727D126CA398FECABBF94CBF935096D39A(L_1, NULL);
		int32_t L_2;
		L_2 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitUtils_CheckString_m4576B20F61F98DB5C7287A7F28E2233F4BF5CB8D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, String_t* ___1_s, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		String_t* L_4 = ___1_s;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		if ((((int32_t)L_3) == ((int32_t)L_6)))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0016:
	{
		int32_t L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_array;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_reader;
		uint8_t L_1;
		L_1 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_0, NULL);
		V_0 = L_1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_reader;
		uint8_t L_3;
		L_3 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_2, NULL);
		uint8_t L_4 = V_0;
		return ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3<<8)), (int32_t)L_4));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_reader;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(32, L_0);
		int32_t L_2 = L_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
		G_B1_0 = L_2;
	}
	{
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_3 = (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)));
		EndOfStreamException__ctor_m154EAE9BDAE2A8EB0EE6714D881FA7075628C582(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF_RuntimeMethod_var)));
	}

IL_0010:
	{
		return (uint8_t)((int32_t)(uint8_t)G_B2_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, int32_t ___1_expectedValue, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_reader;
		uint8_t L_1;
		L_1 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_0, NULL);
		V_0 = L_1;
		uint8_t L_2 = V_0;
		int32_t L_3 = ___1_expectedValue;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = ___1_expectedValue;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_5);
		uint8_t L_7 = V_0;
		uint8_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4013E5E88C2171694988C9818C0339FDA4E6B30F)), L_6, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3_RuntimeMethod_var)));
	}

IL_0027:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_GetColorTableSize_m0182A8D368C1072B1686362526DF5EE5EF2C55DF (int32_t ___0_data, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_data;
		return ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_add(L_0, 1))&((int32_t)31)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_GetBitsFromByte_m425F942AA28070AC80981FC044C3B51664FC389F (uint8_t ___0_b, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0021;
	}

IL_0006:
	{
		int32_t L_0 = V_0;
		uint8_t L_1 = ___0_b;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = V_1;
		bool L_4;
		L_4 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3)), NULL);
		if (L_4)
		{
			G_B3_0 = L_0;
			goto IL_0015;
		}
		G_B2_0 = L_0;
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_0016;
	}

IL_0015:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0016:
	{
		int32_t L_5 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(G_B4_1, ((int32_t)(G_B4_0<<((int32_t)(L_5&((int32_t)31)))))));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0021:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ___2_count;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0 (uint8_t ___0_b, int32_t ___1_offset, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_b;
		int32_t L_1 = ___1_offset;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)(1<<((int32_t)(L_1&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitUtils_ReadGifBlocks_m9A068F0FB3C99E5BF362075674F9BA601DAAD19E (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	uint8_t V_1 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_0, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_0 = L_0;
	}

IL_0006:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_reader;
		uint8_t L_2;
		L_2 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_1, NULL);
		V_1 = L_2;
		uint8_t L_3 = V_1;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		uint8_t L_4 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_2 = L_5;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_reader;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_2;
		NullCheck(L_8);
		NullCheck(L_6);
		int32_t L_9;
		L_9 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30, L_6, L_7, 0, ((int32_t)(((RuntimeArray*)L_8)->max_length)));
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
		NullCheck(L_10);
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_10, (RuntimeObject*)L_11, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		goto IL_0006;
	}

IL_002c:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitUtils_SkipGifBlocks_m0855EB727D126CA398FECABBF94CBF935096D39A (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;

IL_0000:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_reader;
		uint8_t L_1;
		L_1 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_0, NULL);
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___0_reader;
		uint8_t L_4 = V_0;
		NullCheck(L_3);
		int64_t L_5;
		L_5 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(29, L_3, ((int64_t)(uint64_t)L_4), 1);
		goto IL_0000;
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
IL2CPP_EXTERN_C void GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshal_pinvoke(const GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5& unmarshaled, GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_pinvoke& marshaled)
{
	marshaled.___userInput = static_cast<int32_t>(unmarshaled.___userInput);
	marshaled.___disposalMethod = unmarshaled.___disposalMethod;
	marshaled.___delayTime = unmarshaled.___delayTime;
	marshaled.___hasTransparency = static_cast<int32_t>(unmarshaled.___hasTransparency);
	marshaled.___transparentColorIndex = unmarshaled.___transparentColorIndex;
}
IL2CPP_EXTERN_C void GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshal_pinvoke_back(const GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_pinvoke& marshaled, GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5& unmarshaled)
{
	bool unmarshaleduserInput_temp_0 = false;
	unmarshaleduserInput_temp_0 = static_cast<bool>(marshaled.___userInput);
	unmarshaled.___userInput = unmarshaleduserInput_temp_0;
	int32_t unmarshaleddisposalMethod_temp_1 = 0;
	unmarshaleddisposalMethod_temp_1 = marshaled.___disposalMethod;
	unmarshaled.___disposalMethod = unmarshaleddisposalMethod_temp_1;
	int32_t unmarshaleddelayTime_temp_2 = 0;
	unmarshaleddelayTime_temp_2 = marshaled.___delayTime;
	unmarshaled.___delayTime = unmarshaleddelayTime_temp_2;
	bool unmarshaledhasTransparency_temp_3 = false;
	unmarshaledhasTransparency_temp_3 = static_cast<bool>(marshaled.___hasTransparency);
	unmarshaled.___hasTransparency = unmarshaledhasTransparency_temp_3;
	int32_t unmarshaledtransparentColorIndex_temp_4 = 0;
	unmarshaledtransparentColorIndex_temp_4 = marshaled.___transparentColorIndex;
	unmarshaled.___transparentColorIndex = unmarshaledtransparentColorIndex_temp_4;
}
IL2CPP_EXTERN_C void GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshal_pinvoke_cleanup(GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshal_com(const GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5& unmarshaled, GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_com& marshaled)
{
	marshaled.___userInput = static_cast<int32_t>(unmarshaled.___userInput);
	marshaled.___disposalMethod = unmarshaled.___disposalMethod;
	marshaled.___delayTime = unmarshaled.___delayTime;
	marshaled.___hasTransparency = static_cast<int32_t>(unmarshaled.___hasTransparency);
	marshaled.___transparentColorIndex = unmarshaled.___transparentColorIndex;
}
IL2CPP_EXTERN_C void GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshal_com_back(const GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_com& marshaled, GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5& unmarshaled)
{
	bool unmarshaleduserInput_temp_0 = false;
	unmarshaleduserInput_temp_0 = static_cast<bool>(marshaled.___userInput);
	unmarshaled.___userInput = unmarshaleduserInput_temp_0;
	int32_t unmarshaleddisposalMethod_temp_1 = 0;
	unmarshaleddisposalMethod_temp_1 = marshaled.___disposalMethod;
	unmarshaled.___disposalMethod = unmarshaleddisposalMethod_temp_1;
	int32_t unmarshaleddelayTime_temp_2 = 0;
	unmarshaleddelayTime_temp_2 = marshaled.___delayTime;
	unmarshaled.___delayTime = unmarshaleddelayTime_temp_2;
	bool unmarshaledhasTransparency_temp_3 = false;
	unmarshaledhasTransparency_temp_3 = static_cast<bool>(marshaled.___hasTransparency);
	unmarshaled.___hasTransparency = unmarshaledhasTransparency_temp_3;
	int32_t unmarshaledtransparentColorIndex_temp_4 = 0;
	unmarshaledtransparentColorIndex_temp_4 = marshaled.___transparentColorIndex;
	unmarshaled.___transparentColorIndex = unmarshaledtransparentColorIndex_temp_4;
}
IL2CPP_EXTERN_C void GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshal_com_cleanup(GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshal_pinvoke(const GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6& unmarshaled, GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_pinvoke& marshaled)
{
	marshaled.___version = unmarshaled.___version;
	marshaled.___width = unmarshaled.___width;
	marshaled.___height = unmarshaled.___height;
	marshaled.___hasGlobalColorTable = static_cast<int32_t>(unmarshaled.___hasGlobalColorTable);
	marshaled.___globalColorTableSize = unmarshaled.___globalColorTableSize;
	marshaled.___transparentColorIndex = unmarshaled.___transparentColorIndex;
	marshaled.___sortColors = static_cast<int32_t>(unmarshaled.___sortColors);
	marshaled.___colorResolution = unmarshaled.___colorResolution;
	marshaled.___pixelAspectRatio = unmarshaled.___pixelAspectRatio;
}
IL2CPP_EXTERN_C void GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshal_pinvoke_back(const GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_pinvoke& marshaled, GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6& unmarshaled)
{
	int32_t unmarshaledversion_temp_0 = 0;
	unmarshaledversion_temp_0 = marshaled.___version;
	unmarshaled.___version = unmarshaledversion_temp_0;
	int32_t unmarshaledwidth_temp_1 = 0;
	unmarshaledwidth_temp_1 = marshaled.___width;
	unmarshaled.___width = unmarshaledwidth_temp_1;
	int32_t unmarshaledheight_temp_2 = 0;
	unmarshaledheight_temp_2 = marshaled.___height;
	unmarshaled.___height = unmarshaledheight_temp_2;
	bool unmarshaledhasGlobalColorTable_temp_3 = false;
	unmarshaledhasGlobalColorTable_temp_3 = static_cast<bool>(marshaled.___hasGlobalColorTable);
	unmarshaled.___hasGlobalColorTable = unmarshaledhasGlobalColorTable_temp_3;
	int32_t unmarshaledglobalColorTableSize_temp_4 = 0;
	unmarshaledglobalColorTableSize_temp_4 = marshaled.___globalColorTableSize;
	unmarshaled.___globalColorTableSize = unmarshaledglobalColorTableSize_temp_4;
	int32_t unmarshaledtransparentColorIndex_temp_5 = 0;
	unmarshaledtransparentColorIndex_temp_5 = marshaled.___transparentColorIndex;
	unmarshaled.___transparentColorIndex = unmarshaledtransparentColorIndex_temp_5;
	bool unmarshaledsortColors_temp_6 = false;
	unmarshaledsortColors_temp_6 = static_cast<bool>(marshaled.___sortColors);
	unmarshaled.___sortColors = unmarshaledsortColors_temp_6;
	int32_t unmarshaledcolorResolution_temp_7 = 0;
	unmarshaledcolorResolution_temp_7 = marshaled.___colorResolution;
	unmarshaled.___colorResolution = unmarshaledcolorResolution_temp_7;
	int32_t unmarshaledpixelAspectRatio_temp_8 = 0;
	unmarshaledpixelAspectRatio_temp_8 = marshaled.___pixelAspectRatio;
	unmarshaled.___pixelAspectRatio = unmarshaledpixelAspectRatio_temp_8;
}
IL2CPP_EXTERN_C void GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshal_pinvoke_cleanup(GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshal_com(const GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6& unmarshaled, GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_com& marshaled)
{
	marshaled.___version = unmarshaled.___version;
	marshaled.___width = unmarshaled.___width;
	marshaled.___height = unmarshaled.___height;
	marshaled.___hasGlobalColorTable = static_cast<int32_t>(unmarshaled.___hasGlobalColorTable);
	marshaled.___globalColorTableSize = unmarshaled.___globalColorTableSize;
	marshaled.___transparentColorIndex = unmarshaled.___transparentColorIndex;
	marshaled.___sortColors = static_cast<int32_t>(unmarshaled.___sortColors);
	marshaled.___colorResolution = unmarshaled.___colorResolution;
	marshaled.___pixelAspectRatio = unmarshaled.___pixelAspectRatio;
}
IL2CPP_EXTERN_C void GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshal_com_back(const GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_com& marshaled, GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6& unmarshaled)
{
	int32_t unmarshaledversion_temp_0 = 0;
	unmarshaledversion_temp_0 = marshaled.___version;
	unmarshaled.___version = unmarshaledversion_temp_0;
	int32_t unmarshaledwidth_temp_1 = 0;
	unmarshaledwidth_temp_1 = marshaled.___width;
	unmarshaled.___width = unmarshaledwidth_temp_1;
	int32_t unmarshaledheight_temp_2 = 0;
	unmarshaledheight_temp_2 = marshaled.___height;
	unmarshaled.___height = unmarshaledheight_temp_2;
	bool unmarshaledhasGlobalColorTable_temp_3 = false;
	unmarshaledhasGlobalColorTable_temp_3 = static_cast<bool>(marshaled.___hasGlobalColorTable);
	unmarshaled.___hasGlobalColorTable = unmarshaledhasGlobalColorTable_temp_3;
	int32_t unmarshaledglobalColorTableSize_temp_4 = 0;
	unmarshaledglobalColorTableSize_temp_4 = marshaled.___globalColorTableSize;
	unmarshaled.___globalColorTableSize = unmarshaledglobalColorTableSize_temp_4;
	int32_t unmarshaledtransparentColorIndex_temp_5 = 0;
	unmarshaledtransparentColorIndex_temp_5 = marshaled.___transparentColorIndex;
	unmarshaled.___transparentColorIndex = unmarshaledtransparentColorIndex_temp_5;
	bool unmarshaledsortColors_temp_6 = false;
	unmarshaledsortColors_temp_6 = static_cast<bool>(marshaled.___sortColors);
	unmarshaled.___sortColors = unmarshaledsortColors_temp_6;
	int32_t unmarshaledcolorResolution_temp_7 = 0;
	unmarshaledcolorResolution_temp_7 = marshaled.___colorResolution;
	unmarshaled.___colorResolution = unmarshaledcolorResolution_temp_7;
	int32_t unmarshaledpixelAspectRatio_temp_8 = 0;
	unmarshaledpixelAspectRatio_temp_8 = marshaled.___pixelAspectRatio;
	unmarshaled.___pixelAspectRatio = unmarshaledpixelAspectRatio_temp_8;
}
IL2CPP_EXTERN_C void GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshal_com_cleanup(GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifImage__ctor_mCE252161928621A19D7534A36A77905A3E3A80FB (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C void GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshal_pinvoke(const GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798& unmarshaled, GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_pinvoke& marshaled)
{
	marshaled.___left = unmarshaled.___left;
	marshaled.___top = unmarshaled.___top;
	marshaled.___width = unmarshaled.___width;
	marshaled.___height = unmarshaled.___height;
	marshaled.___isInterlaced = static_cast<int32_t>(unmarshaled.___isInterlaced);
	marshaled.___hasLocalColorTable = static_cast<int32_t>(unmarshaled.___hasLocalColorTable);
	marshaled.___localColorTableSize = unmarshaled.___localColorTableSize;
}
IL2CPP_EXTERN_C void GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshal_pinvoke_back(const GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_pinvoke& marshaled, GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798& unmarshaled)
{
	int32_t unmarshaledleft_temp_0 = 0;
	unmarshaledleft_temp_0 = marshaled.___left;
	unmarshaled.___left = unmarshaledleft_temp_0;
	int32_t unmarshaledtop_temp_1 = 0;
	unmarshaledtop_temp_1 = marshaled.___top;
	unmarshaled.___top = unmarshaledtop_temp_1;
	int32_t unmarshaledwidth_temp_2 = 0;
	unmarshaledwidth_temp_2 = marshaled.___width;
	unmarshaled.___width = unmarshaledwidth_temp_2;
	int32_t unmarshaledheight_temp_3 = 0;
	unmarshaledheight_temp_3 = marshaled.___height;
	unmarshaled.___height = unmarshaledheight_temp_3;
	bool unmarshaledisInterlaced_temp_4 = false;
	unmarshaledisInterlaced_temp_4 = static_cast<bool>(marshaled.___isInterlaced);
	unmarshaled.___isInterlaced = unmarshaledisInterlaced_temp_4;
	bool unmarshaledhasLocalColorTable_temp_5 = false;
	unmarshaledhasLocalColorTable_temp_5 = static_cast<bool>(marshaled.___hasLocalColorTable);
	unmarshaled.___hasLocalColorTable = unmarshaledhasLocalColorTable_temp_5;
	int32_t unmarshaledlocalColorTableSize_temp_6 = 0;
	unmarshaledlocalColorTableSize_temp_6 = marshaled.___localColorTableSize;
	unmarshaled.___localColorTableSize = unmarshaledlocalColorTableSize_temp_6;
}
IL2CPP_EXTERN_C void GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshal_pinvoke_cleanup(GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshal_com(const GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798& unmarshaled, GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_com& marshaled)
{
	marshaled.___left = unmarshaled.___left;
	marshaled.___top = unmarshaled.___top;
	marshaled.___width = unmarshaled.___width;
	marshaled.___height = unmarshaled.___height;
	marshaled.___isInterlaced = static_cast<int32_t>(unmarshaled.___isInterlaced);
	marshaled.___hasLocalColorTable = static_cast<int32_t>(unmarshaled.___hasLocalColorTable);
	marshaled.___localColorTableSize = unmarshaled.___localColorTableSize;
}
IL2CPP_EXTERN_C void GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshal_com_back(const GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_com& marshaled, GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798& unmarshaled)
{
	int32_t unmarshaledleft_temp_0 = 0;
	unmarshaledleft_temp_0 = marshaled.___left;
	unmarshaled.___left = unmarshaledleft_temp_0;
	int32_t unmarshaledtop_temp_1 = 0;
	unmarshaledtop_temp_1 = marshaled.___top;
	unmarshaled.___top = unmarshaledtop_temp_1;
	int32_t unmarshaledwidth_temp_2 = 0;
	unmarshaledwidth_temp_2 = marshaled.___width;
	unmarshaled.___width = unmarshaledwidth_temp_2;
	int32_t unmarshaledheight_temp_3 = 0;
	unmarshaledheight_temp_3 = marshaled.___height;
	unmarshaled.___height = unmarshaledheight_temp_3;
	bool unmarshaledisInterlaced_temp_4 = false;
	unmarshaledisInterlaced_temp_4 = static_cast<bool>(marshaled.___isInterlaced);
	unmarshaled.___isInterlaced = unmarshaledisInterlaced_temp_4;
	bool unmarshaledhasLocalColorTable_temp_5 = false;
	unmarshaledhasLocalColorTable_temp_5 = static_cast<bool>(marshaled.___hasLocalColorTable);
	unmarshaled.___hasLocalColorTable = unmarshaledhasLocalColorTable_temp_5;
	int32_t unmarshaledlocalColorTableSize_temp_6 = 0;
	unmarshaledlocalColorTableSize_temp_6 = marshaled.___localColorTableSize;
	unmarshaled.___localColorTableSize = unmarshaledlocalColorTableSize_temp_6;
}
IL2CPP_EXTERN_C void GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshal_com_cleanup(GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshal_pinvoke(const GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891& unmarshaled, GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___palette != NULL)
	{
		il2cpp_array_size_t _unmarshaledpalette_Length = (unmarshaled.___palette)->max_length;
		marshaled.___palette = il2cpp_codegen_marshal_allocate_array<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(_unmarshaledpalette_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledpalette_Length); i++)
		{
			(marshaled.___palette)[i] = (unmarshaled.___palette)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___palette = NULL;
	}
	marshaled.___size = unmarshaled.___size;
	marshaled.___isGlobal = static_cast<int32_t>(unmarshaled.___isGlobal);
}
IL2CPP_EXTERN_C void GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshal_pinvoke_back(const GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_pinvoke& marshaled, GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___palette != NULL)
	{
		if (unmarshaled.___palette == NULL)
		{
			unmarshaled.___palette = reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___palette), (void*)reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___palette)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___palette)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___palette)[i]);
		}
	}
	int32_t unmarshaledsize_temp_1 = 0;
	unmarshaledsize_temp_1 = marshaled.___size;
	unmarshaled.___size = unmarshaledsize_temp_1;
	bool unmarshaledisGlobal_temp_2 = false;
	unmarshaledisGlobal_temp_2 = static_cast<bool>(marshaled.___isGlobal);
	unmarshaled.___isGlobal = unmarshaledisGlobal_temp_2;
}
IL2CPP_EXTERN_C void GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshal_pinvoke_cleanup(GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_pinvoke& marshaled)
{
	if (marshaled.___palette != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___palette);
		marshaled.___palette = NULL;
	}
}
IL2CPP_EXTERN_C void GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshal_com(const GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891& unmarshaled, GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_com& marshaled)
{
	if (unmarshaled.___palette != NULL)
	{
		il2cpp_array_size_t _unmarshaledpalette_Length = (unmarshaled.___palette)->max_length;
		marshaled.___palette = il2cpp_codegen_marshal_allocate_array<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(_unmarshaledpalette_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledpalette_Length); i++)
		{
			(marshaled.___palette)[i] = (unmarshaled.___palette)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___palette = NULL;
	}
	marshaled.___size = unmarshaled.___size;
	marshaled.___isGlobal = static_cast<int32_t>(unmarshaled.___isGlobal);
}
IL2CPP_EXTERN_C void GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshal_com_back(const GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_com& marshaled, GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___palette != NULL)
	{
		if (unmarshaled.___palette == NULL)
		{
			unmarshaled.___palette = reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___palette), (void*)reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___palette)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___palette)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___palette)[i]);
		}
	}
	int32_t unmarshaledsize_temp_1 = 0;
	unmarshaledsize_temp_1 = marshaled.___size;
	unmarshaled.___size = unmarshaledsize_temp_1;
	bool unmarshaledisGlobal_temp_2 = false;
	unmarshaledisGlobal_temp_2 = static_cast<bool>(marshaled.___isGlobal);
	unmarshaled.___isGlobal = unmarshaledisGlobal_temp_2;
}
IL2CPP_EXTERN_C void GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshal_com_cleanup(GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_com& marshaled)
{
	if (marshaled.___palette != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___palette);
		marshaled.___palette = NULL;
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
IL2CPP_EXTERN_C void GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshal_pinvoke(const GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A& unmarshaled, GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_pinvoke& marshaled)
{
	marshaled.___left = unmarshaled.___left;
	marshaled.___top = unmarshaled.___top;
	marshaled.___width = unmarshaled.___width;
	marshaled.___height = unmarshaled.___height;
	marshaled.___charWidth = unmarshaled.___charWidth;
	marshaled.___charHeight = unmarshaled.___charHeight;
	marshaled.___backgroundColor = unmarshaled.___backgroundColor;
	marshaled.___foregroundColor = unmarshaled.___foregroundColor;
	marshaled.___text = il2cpp_codegen_marshal_string(unmarshaled.___text);
	if (unmarshaled.___colors != NULL)
	{
		il2cpp_array_size_t _unmarshaledcolors_Length = (unmarshaled.___colors)->max_length;
		marshaled.___colors = il2cpp_codegen_marshal_allocate_array<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(_unmarshaledcolors_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledcolors_Length); i++)
		{
			(marshaled.___colors)[i] = (unmarshaled.___colors)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___colors = NULL;
	}
}
IL2CPP_EXTERN_C void GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshal_pinvoke_back(const GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_pinvoke& marshaled, GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledleft_temp_0 = 0;
	unmarshaledleft_temp_0 = marshaled.___left;
	unmarshaled.___left = unmarshaledleft_temp_0;
	int32_t unmarshaledtop_temp_1 = 0;
	unmarshaledtop_temp_1 = marshaled.___top;
	unmarshaled.___top = unmarshaledtop_temp_1;
	int32_t unmarshaledwidth_temp_2 = 0;
	unmarshaledwidth_temp_2 = marshaled.___width;
	unmarshaled.___width = unmarshaledwidth_temp_2;
	int32_t unmarshaledheight_temp_3 = 0;
	unmarshaledheight_temp_3 = marshaled.___height;
	unmarshaled.___height = unmarshaledheight_temp_3;
	int32_t unmarshaledcharWidth_temp_4 = 0;
	unmarshaledcharWidth_temp_4 = marshaled.___charWidth;
	unmarshaled.___charWidth = unmarshaledcharWidth_temp_4;
	int32_t unmarshaledcharHeight_temp_5 = 0;
	unmarshaledcharHeight_temp_5 = marshaled.___charHeight;
	unmarshaled.___charHeight = unmarshaledcharHeight_temp_5;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B unmarshaledbackgroundColor_temp_6;
	memset((&unmarshaledbackgroundColor_temp_6), 0, sizeof(unmarshaledbackgroundColor_temp_6));
	unmarshaledbackgroundColor_temp_6 = marshaled.___backgroundColor;
	unmarshaled.___backgroundColor = unmarshaledbackgroundColor_temp_6;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B unmarshaledforegroundColor_temp_7;
	memset((&unmarshaledforegroundColor_temp_7), 0, sizeof(unmarshaledforegroundColor_temp_7));
	unmarshaledforegroundColor_temp_7 = marshaled.___foregroundColor;
	unmarshaled.___foregroundColor = unmarshaledforegroundColor_temp_7;
	unmarshaled.___text = il2cpp_codegen_marshal_string_result(marshaled.___text);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___text), (void*)il2cpp_codegen_marshal_string_result(marshaled.___text));
	if (marshaled.___colors != NULL)
	{
		if (unmarshaled.___colors == NULL)
		{
			unmarshaled.___colors = reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___colors), (void*)reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___colors)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___colors)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___colors)[i]);
		}
	}
}
IL2CPP_EXTERN_C void GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshal_pinvoke_cleanup(GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___text);
	marshaled.___text = NULL;
	if (marshaled.___colors != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___colors);
		marshaled.___colors = NULL;
	}
}
IL2CPP_EXTERN_C void GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshal_com(const GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A& unmarshaled, GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_com& marshaled)
{
	marshaled.___left = unmarshaled.___left;
	marshaled.___top = unmarshaled.___top;
	marshaled.___width = unmarshaled.___width;
	marshaled.___height = unmarshaled.___height;
	marshaled.___charWidth = unmarshaled.___charWidth;
	marshaled.___charHeight = unmarshaled.___charHeight;
	marshaled.___backgroundColor = unmarshaled.___backgroundColor;
	marshaled.___foregroundColor = unmarshaled.___foregroundColor;
	marshaled.___text = il2cpp_codegen_marshal_bstring(unmarshaled.___text);
	if (unmarshaled.___colors != NULL)
	{
		il2cpp_array_size_t _unmarshaledcolors_Length = (unmarshaled.___colors)->max_length;
		marshaled.___colors = il2cpp_codegen_marshal_allocate_array<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(_unmarshaledcolors_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledcolors_Length); i++)
		{
			(marshaled.___colors)[i] = (unmarshaled.___colors)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___colors = NULL;
	}
}
IL2CPP_EXTERN_C void GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshal_com_back(const GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_com& marshaled, GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledleft_temp_0 = 0;
	unmarshaledleft_temp_0 = marshaled.___left;
	unmarshaled.___left = unmarshaledleft_temp_0;
	int32_t unmarshaledtop_temp_1 = 0;
	unmarshaledtop_temp_1 = marshaled.___top;
	unmarshaled.___top = unmarshaledtop_temp_1;
	int32_t unmarshaledwidth_temp_2 = 0;
	unmarshaledwidth_temp_2 = marshaled.___width;
	unmarshaled.___width = unmarshaledwidth_temp_2;
	int32_t unmarshaledheight_temp_3 = 0;
	unmarshaledheight_temp_3 = marshaled.___height;
	unmarshaled.___height = unmarshaledheight_temp_3;
	int32_t unmarshaledcharWidth_temp_4 = 0;
	unmarshaledcharWidth_temp_4 = marshaled.___charWidth;
	unmarshaled.___charWidth = unmarshaledcharWidth_temp_4;
	int32_t unmarshaledcharHeight_temp_5 = 0;
	unmarshaledcharHeight_temp_5 = marshaled.___charHeight;
	unmarshaled.___charHeight = unmarshaledcharHeight_temp_5;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B unmarshaledbackgroundColor_temp_6;
	memset((&unmarshaledbackgroundColor_temp_6), 0, sizeof(unmarshaledbackgroundColor_temp_6));
	unmarshaledbackgroundColor_temp_6 = marshaled.___backgroundColor;
	unmarshaled.___backgroundColor = unmarshaledbackgroundColor_temp_6;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B unmarshaledforegroundColor_temp_7;
	memset((&unmarshaledforegroundColor_temp_7), 0, sizeof(unmarshaledforegroundColor_temp_7));
	unmarshaledforegroundColor_temp_7 = marshaled.___foregroundColor;
	unmarshaled.___foregroundColor = unmarshaledforegroundColor_temp_7;
	unmarshaled.___text = il2cpp_codegen_marshal_bstring_result(marshaled.___text);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___text), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___text));
	if (marshaled.___colors != NULL)
	{
		if (unmarshaled.___colors == NULL)
		{
			unmarshaled.___colors = reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___colors), (void*)reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___colors)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___colors)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___colors)[i]);
		}
	}
}
IL2CPP_EXTERN_C void GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshal_com_cleanup(GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___text);
	marshaled.___text = NULL;
	if (marshaled.___colors != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___colors);
		marshaled.___colors = NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary__ctor_m45C86D2EE11A949D518D5B8CBCE04C7258E26BC3 (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___dictionaryEntryOffsets = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dictionaryEntryOffsets), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___dictionaryEntrySizes = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dictionaryEntrySizes), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32768));
		__this->___dictionaryHeap = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dictionaryHeap), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary_InitWithWordSize_m6EB670CB50780C303EA50B4E09D651A3FBDDE52C (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, int32_t ___0_minLzwCodeSize, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___currentMinLzwCodeSize;
		int32_t L_1 = ___0_minLzwCodeSize;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_2 = ___0_minLzwCodeSize;
		__this->___currentMinLzwCodeSize = L_2;
		__this->___dictionaryHeapPosition = 0;
		__this->___dictionarySize = 0;
		int32_t L_3 = ___0_minLzwCodeSize;
		V_0 = ((int32_t)(1<<((int32_t)(L_3&((int32_t)31)))));
		V_1 = 0;
		goto IL_0061;
	}

IL_002c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___dictionaryEntryOffsets;
		int32_t L_5 = V_1;
		int32_t L_6 = __this->___dictionaryHeapPosition;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___dictionaryEntrySizes;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___dictionaryHeap;
		int32_t L_10 = __this->___dictionaryHeapPosition;
		V_2 = L_10;
		int32_t L_11 = V_2;
		__this->___dictionaryHeapPosition = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = V_2;
		int32_t L_13 = V_1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)((int32_t)(uint8_t)L_13));
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0061:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_17 = V_0;
		__this->___initialDictionarySize = ((int32_t)il2cpp_codegen_add(L_17, 2));
		int32_t L_18 = ___0_minLzwCodeSize;
		__this->___initialLzwCodeSize = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = __this->___dictionaryHeapPosition;
		__this->___initialDictionaryHeapPosition = L_19;
		int32_t L_20 = V_0;
		__this->___clearCodeId = L_20;
		int32_t L_21 = V_0;
		__this->___stopCodeId = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0093:
	{
		GifLzwDictionary_Clear_m1169FBCD8A2D4F227BBA0B53749FE91D6205E56B(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary_Clear_m1169FBCD8A2D4F227BBA0B53749FE91D6205E56B (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___initialLzwCodeSize;
		__this->___codeSize = L_0;
		int32_t L_1 = __this->___initialDictionarySize;
		__this->___dictionarySize = L_1;
		int32_t L_2 = __this->___initialDictionaryHeapPosition;
		__this->___dictionaryHeapPosition = L_2;
		int32_t L_3 = __this->___codeSize;
		__this->___nextLzwCodeGrowth = ((int32_t)(1<<((int32_t)(L_3&((int32_t)31)))));
		__this->___isFull = (bool)0;
		__this->___lastCodeId = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary_DecodeStream_m282A91A032D123465F3B40EFF235A00D1A97A73B (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* ___0_reader, GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* ___1_c, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;

IL_0000:
	{
		GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* L_0 = ___0_reader;
		int32_t L_1 = __this->___codeSize;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = GifBitBlockReader_ReadBits_m709349EC1361339B4B75A084A64398E5532CE98E(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___clearCodeId;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		GifLzwDictionary_Clear_m1169FBCD8A2D4F227BBA0B53749FE91D6205E56B(__this, NULL);
		goto IL_0000;
	}

IL_001e:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->___stopCodeId;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0028;
		}
	}
	{
		return;
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___dictionarySize;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_9 = __this->___lastCodeId;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = __this->___lastCodeId;
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = GifLzwDictionary_CreateNewCode_mE1498C73E05273533BB8E39A82A149489F3205EE(__this, L_10, L_11, NULL);
	}

IL_0048:
	{
		int32_t L_13 = V_0;
		__this->___lastCodeId = L_13;
		goto IL_0069;
	}

IL_0051:
	{
		int32_t L_14 = __this->___lastCodeId;
		int32_t L_15 = __this->___lastCodeId;
		int32_t L_16;
		L_16 = GifLzwDictionary_CreateNewCode_mE1498C73E05273533BB8E39A82A149489F3205EE(__this, L_14, L_15, NULL);
		__this->___lastCodeId = L_16;
	}

IL_0069:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->___dictionaryEntryOffsets;
		int32_t L_18 = __this->___lastCodeId;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___dictionaryEntrySizes;
		int32_t L_22 = __this->___lastCodeId;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_1 = L_24;
		int32_t L_25 = L_20;
		int32_t L_26 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
		V_3 = L_25;
		goto IL_009d;
	}

IL_008b:
	{
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_27 = ___1_c;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___dictionaryHeap;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_27);
		GifCanvas_OutputPixel_mAD73C3414E247E66802826F19AAFFA3083D10BE9(L_27, L_31, NULL);
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_009d:
	{
		int32_t L_33 = V_3;
		int32_t L_34 = V_2;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0000;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifLzwDictionary_CreateNewCode_mE1498C73E05273533BB8E39A82A149489F3205EE (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, int32_t ___0_baseEntry, int32_t ___1_deriveEntry, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t G_B12_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B12_1 = NULL;
	int32_t G_B11_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B11_1 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B13_2 = NULL;
	GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* G_B16_0 = NULL;
	GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* G_B15_0 = NULL;
	int32_t G_B17_0 = 0;
	GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* G_B17_1 = NULL;
	{
		bool L_0 = __this->___isFull;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___dictionaryEntryOffsets;
		int32_t L_2 = ___0_baseEntry;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___dictionaryEntrySizes;
		int32_t L_6 = ___0_baseEntry;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		int32_t L_9 = __this->___dictionaryHeapPosition;
		V_2 = L_9;
		int32_t L_10 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___dictionaryHeap;
		NullCheck(L_13);
		int32_t L_14 = V_4;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))) >= ((int32_t)L_14)))
		{
			goto IL_0054;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)(&__this->___dictionaryHeap);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___dictionaryHeap;
		NullCheck(L_16);
		int32_t L_17 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_16)->max_length)), 2)), L_17, NULL);
		Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297(L_15, L_18, Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var);
	}

IL_0054:
	{
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)12))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		V_6 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		int32_t L_22 = V_0;
		V_7 = L_22;
		goto IL_008d;
	}

IL_0063:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___dictionaryHeap;
		int32_t L_24 = __this->___dictionaryHeapPosition;
		V_8 = L_24;
		int32_t L_25 = V_8;
		__this->___dictionaryHeapPosition = ((int32_t)il2cpp_codegen_add(L_25, 1));
		int32_t L_26 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___dictionaryHeap;
		int32_t L_28 = V_7;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (uint8_t)L_30);
		int32_t L_31 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_008d:
	{
		int32_t L_32 = V_7;
		int32_t L_33 = V_6;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0063;
		}
	}
	{
		goto IL_00bc;
	}

IL_0095:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___dictionaryHeap;
		int32_t L_35 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___dictionaryHeap;
		int32_t L_37 = __this->___dictionaryHeapPosition;
		int32_t L_38 = V_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_34, L_35, (RuntimeArray*)L_36, L_37, L_38, NULL);
		int32_t L_39 = __this->___dictionaryHeapPosition;
		int32_t L_40 = V_1;
		__this->___dictionaryHeapPosition = ((int32_t)il2cpp_codegen_add(L_39, L_40));
	}

IL_00bc:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = __this->___dictionaryHeap;
		int32_t L_42 = __this->___dictionaryHeapPosition;
		V_8 = L_42;
		int32_t L_43 = V_8;
		__this->___dictionaryHeapPosition = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_8;
		int32_t L_45 = ___1_deriveEntry;
		int32_t L_46 = __this->___initialDictionarySize;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			G_B12_0 = L_44;
			G_B12_1 = L_41;
			goto IL_00f0;
		}
		G_B11_0 = L_44;
		G_B11_1 = L_41;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___dictionaryHeap;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = __this->___dictionaryEntryOffsets;
		int32_t L_49 = ___1_deriveEntry;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		int32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_47);
		int32_t L_52 = L_51;
		uint8_t L_53 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		G_B13_0 = ((int32_t)(L_53));
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_00f2;
	}

IL_00f0:
	{
		int32_t L_54 = ___1_deriveEntry;
		G_B13_0 = ((int32_t)(uint8_t)L_54);
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_00f2:
	{
		NullCheck(G_B13_2);
		(G_B13_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B13_1), (uint8_t)G_B13_0);
		int32_t L_55 = __this->___dictionarySize;
		V_8 = L_55;
		int32_t L_56 = V_8;
		__this->___dictionarySize = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = V_8;
		V_5 = L_57;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = __this->___dictionaryEntryOffsets;
		int32_t L_59 = V_5;
		int32_t L_60 = V_2;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (int32_t)L_60);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = __this->___dictionaryEntrySizes;
		int32_t L_62 = V_5;
		int32_t L_63 = V_3;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (int32_t)L_63);
		int32_t L_64 = __this->___dictionarySize;
		int32_t L_65 = __this->___nextLzwCodeGrowth;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_015b;
		}
	}
	{
		int32_t L_66 = __this->___codeSize;
		__this->___codeSize = ((int32_t)il2cpp_codegen_add(L_66, 1));
		int32_t L_67 = __this->___codeSize;
		if ((((int32_t)L_67) == ((int32_t)((int32_t)12))))
		{
			G_B16_0 = __this;
			goto IL_0151;
		}
		G_B15_0 = __this;
	}
	{
		int32_t L_68 = __this->___codeSize;
		G_B17_0 = ((int32_t)(1<<((int32_t)(L_68&((int32_t)31)))));
		G_B17_1 = G_B15_0;
		goto IL_0156;
	}

IL_0151:
	{
		G_B17_0 = ((int32_t)2147483647LL);
		G_B17_1 = G_B16_0;
	}

IL_0156:
	{
		NullCheck(G_B17_1);
		G_B17_1->___nextLzwCodeGrowth = G_B17_0;
	}

IL_015b:
	{
		int32_t L_69 = __this->___dictionarySize;
		if ((((int32_t)L_69) < ((int32_t)((int32_t)4096))))
		{
			goto IL_016f;
		}
	}
	{
		__this->___isFull = (bool)1;
	}

IL_016f:
	{
		int32_t L_70 = V_5;
		return L_70;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = __this->___U3CBackgroundColorU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) 
{
	{
		__this->___rgba = 0;
		uint8_t L_0 = ___0_r;
		__this->___r = L_0;
		uint8_t L_1 = ___1_g;
		__this->___g = L_1;
		uint8_t L_2 = ___2_b;
		__this->___b = L_2;
		uint8_t L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GifCanvas_get_FlipVertically_m5814DF98E608124EBE23157E643B524AFF578EC4_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CFlipVerticallyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCurrentTokenU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifStream_set_CurrentToken_m27028DAAFD0B0CBDF5552D7550A1CDB4EBA333F9_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCurrentTokenU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifBitBlockReader_SetStream_mBA7BAFA29C27A70E00B9326561E97B06610325A3_inline (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		__this->___stream = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stream), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* GifCanvas_get_Colors_mB86B2B82A2ACBA7F0DF0697BEE61BD1CB48E4AB2_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = __this->___canvasColors;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GifStream_get_DrawPlainTextBackground_m0708BFF2D05BE4DA2C05B953DE611100A9002FAA_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CDrawPlainTextBackgroundU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifCanvas_set_BackgroundColor_m1957BD48CA2C39BE26FDBB6DEAA2A226C6336675_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_value;
		__this->___U3CBackgroundColorU3Ek__BackingField = L_0;
		return;
	}
}
