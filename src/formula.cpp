#include "formula.h"

#include <iostream>

#include <unistd.h>

int pTestT(void *, void*) {
  return 10;
}

int Formula::bla(int arg1)
{
  return arg1 * 2;
}

bool Formula::Foo() {
  int *p = nullptr;
  *p = 1000;
  return true;
}

int Formula::Add(int a, int b)
{
  return a + b;
}