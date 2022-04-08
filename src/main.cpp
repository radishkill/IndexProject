#include <unistd.h>
#include <pthread.h>

#include "formula.h"

#include <iostream>
#include <cmath>
#include <thread>
// #include <future>
#include <functional>
#include <chrono>



__gthrw(pTestT)

    static inline int __gTestT(__gthread_key_t *__key, void *__dtor)
{
  return __gthrw_(pTestT)(__key, __dtor);
}

    // static __typeof(pfwoeijf) _t_gthrw_pthread_key_create __attribute__((__weakref__("pfwoeijf"), __copy__(pfwoeijf)));
    // __gthrw_pragma(weak type)

    // unique function to avoid disambiguating the std::pow overload set
    int f(int x, int y)
{
  return std::pow(x, y);
}

// void task_lambda()
// {
//   std::packaged_task<int(int, int)> task([](int a, int b)
//                                          {
//                                            std::cout << "running" << std::endl;
//                                            return std::pow(a, b); });
//   std::future<int> result = task.get_future();

//   std::cout << "1\n";
//   task(2, 9);
//   std::cout << "2\n";

//   std::cout << "task_lambda:\t" << result.get() << '\n';
// }

int main()
{
  // _t_gthrw_pthread_key_create();
  // __gthread_active_p();
  std::cout << pTestT(nullptr, nullptr) << std::endl; 
  int a = errno;

  static void *const __gthread_active_ptr = __extension__(void *) & __gthrw_pTestT;
  std::cout << a << " " << __gthread_active_ptr << std::endl;
  // task_lambda();
  return 0;
}