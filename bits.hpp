#ifndef __MORLOC_BITS_HPP__
#define __MORLOC_BITS_HPP__

#include <cstdint>

template <typename T>
T morloc_and(T x, T y) {
    return x & y;
}

template <typename T>
T morloc_or(T x, T y) {
    return x | y;
}

template <typename T>
T morloc_xor(T x, T y) {
    return x ^ y;
}

template <typename T>
T morloc_shiftl(T x, int n) {
    return x << n;
}

template <typename T>
T morloc_shiftr(T x, int n) {
    return x >> n;
}

template <typename T>
T morloc_bnot(T x) {
    return ~x;
}

template <typename T>
bool morloc_testBit(T x, int n) {
    return (x >> n) & 1;
}

template <typename T>
T morloc_setBit(T x, int n) {
    return x | (static_cast<T>(1) << n);
}

template <typename T>
T morloc_clearBit(T x, int n) {
    return x & ~(static_cast<T>(1) << n);
}

template <typename T>
T morloc_flipBit(T x, int n) {
    return x ^ (static_cast<T>(1) << n);
}

template <typename T>
int morloc_popcount(T x) {
    return __builtin_popcountll(static_cast<unsigned long long>(x));
}

#endif
