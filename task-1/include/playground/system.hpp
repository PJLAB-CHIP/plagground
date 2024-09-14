#pragma once

#include <cstddef>
#include <cstdint>
#include <cuda_fp16.h>

#ifdef _MSC_VER
    // Inline
    #define PG_INLINE inline
    // Force Inline
    #define PG_FINLINE __forceinline
    // No Inline
    #define PG_NOINLINE __declspec(noinline)
#else
    // Inline
    #define PG_INLINE inline
    // Force Inline
    #define PG_FINLINE inline __attribute__((always_inline))
    // No Inline
    #define PG_NOINLINE __attribute__((noinline))
#endif

namespace playground
{

using int64_t = std::int64_t;
using uint64_t = std::uint64_t;
using int32_t = std::int32_t;
using uint32_t = std::uint32_t;
using int16_t = std::int16_t;
using uint16_t = std::uint16_t;
using int8_t = std::int8_t;
using uint8_t = std::uint8_t;
using size_t = std::size_t;

using float64_t = double;
static_assert(sizeof(float64_t) == 8, "float64_t must be 8 bytes");
using float32_t = float;
static_assert(sizeof(float32_t) == 4, "float32_t must be 4 bytes");
using float16_t = half;
static_assert(sizeof(float16_t) == 2, "float16_t must be 2 bytes");

}  // namespace playground