#include <iostream>
#include <bitset>
#include <cassert>

int main() {
  std::bitset<8> x{"00000010"};
  assert(x == 0b0010);

  return 0;
}