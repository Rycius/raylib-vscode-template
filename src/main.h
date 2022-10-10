#include <cstdint>

#include "raylib.h"
#include "raymath.h"

#define STB_DS_IMPLEMENTATION
#include "stb_ds.h"


#define int8   int8_t
#define uint8  uint8_t
#define int16  int16_t
#define uint16 uint16_t
#define int32  int32_t
#define uint32 uint32_t
#define int64  int64_t 
#define uint64 uint64_t


#define v2 Vector2
#define v3 Vector3
#define v4 Vector4

#if MY_DEBUG
// coppied from HandmadeHero project. Sorry 
#define Assert(Expression) if(!(Expression)) {*(volatile int *)0 = 0;}
#else
#define Assert(Expression)
#endif

#define ArrayCount(Array) (sizeof(Array) / sizeof((Array)[0]))

inline v2 Vec2()
{
    return (v2){0.0f, 0.0f};
}

inline v2 Vec2(float x, float y)
{
    return (v2){x, y};
}

inline v3 Vec3(float x, float y, float z)
{
    return (v3){x, y, z};
}

inline v4 Vec4(float x, float y, float z, float w)
{
    return (v4){x, y, z, w};
}

inline Rectangle Rec(int x, int y, int width, int height)
{
    return (Rectangle){x, y, width, height};
}

inline int Clamp(int value, int min, int max)
{
    if(value < min) return min;
    if(value > max) return max;
    return value;
}

