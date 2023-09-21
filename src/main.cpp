#include <bits/stdc++.h>
#include <gflags/gflags.h>
#include <glog/logging.h>

#include <algorithm>
#include <iostream>
#include <string>

DEFINE_bool(gpu, false, "Use GPU to brew Caffe");

void Fun() {
  using namespace std;
  cout << "main Test Fun" << endl;
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