#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED

// Диапазон
template <class T>
struct Range {
  T* from, to;
  Range(T* from = NULL, T* to = NULL) {}
};

#endif // COMMON_H_INCLUDED
