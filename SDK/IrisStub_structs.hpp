#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// ScriptStruct IrisStub.NetSerializerConfig
struct FNetSerializerConfig
{
public:
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IrisStub.PolymorphicStructNetSerializerConfig
struct FPolymorphicStructNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_1A8D[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IrisStub.PolymorphicArrayStructNetSerializerConfig
struct FPolymorphicArrayStructNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_1A8F[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


