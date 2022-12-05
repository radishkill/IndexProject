#include <bits/stdc++.h>
#include <gflags/gflags.h>
#include <glog/logging.h>

#include <algorithm>
#include <iostream>
#include <string>

DEFINE_bool(gpu, false, "Use GPU to brew Caffe");

void comb(int N, int K)
{
  std::string bitmask(K, 1);  // K leading 1's
  bitmask.resize(N, 0);       // N-K trailing 0's

  // print integers and permute bitmask
  do
  {
    for (int i = 0; i < N; ++i)  // [0..N-1] integers
    {
      if (bitmask[i])
        std::cout << " " << i;
    }
    std::cout << std::endl;
  } while (std::prev_permutation(bitmask.begin(), bitmask.end()));
}

int main(int argc, char** argv)
{
  using namespace std;
  gflags::ParseCommandLineFlags(&argc, &argv, true);

  FLAGS_log_dir = "./";

  google::InitGoogleLogging(argv[0]);
  google::LogToStderr();
  LOG(INFO) << "test";
#ifdef USE_GPU
  LOG(INFO) << "Add use GPU : " << USE_GPU;
#endif

  google::FlushLogFiles(google::GLOG_INFO);
  gflags::ShutDownCommandLineFlags();
  return 0;
}