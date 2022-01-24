//Modified for multiple IR
#ifndef CPPLIST_H
#define CPPLIST_H

#if !defined(IR_MAXCOUNTIR)
#define IR_MAXCOUNTIR 20
#endif

//#include "IRremoteInt.h"
#include "IRrecv.h"

class CppList
{
public:
  CppList();
  void Add(volatile irparams_t *item);
  int GetCount();
  volatile irparams_t* GetItem(int index);
  int GetIndex(volatile irparams_t *item);
private:
  bool Exists(volatile irparams_t *item);
  int _count, _maxCount;
  volatile irparams_t* _arr[IR_MAXCOUNTIR];
  void PrepareArray(int nextSize);
};

#endif // #ifndef CPPLIST_H
#pragma once