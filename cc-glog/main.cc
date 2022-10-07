#include <glog/logging.h>

int main(int argc, char *argv[]) {
  // Initialize Google’s logging library.
  google::InitGoogleLogging(argv[0]);

  // send log to stderr
  // otherwise, glog will send stdout to
  // /tmp/\<program-name\>.\<hostname\>.\<user-name\>.log.\<severity-level\>.\<date\>-\<time\>.\<pid\>
  FLAGS_logtostderr = 1;

  // INFO = 0, WARNING = 1, ERROR = 2, FATAL = 3
  FLAGS_minloglevel = 0;

  int num_cookies = 99;
  LOG(INFO) << "INFO: Found " << num_cookies << " cookies";
  LOG(WARNING) << "WARNING: Found " << num_cookies << " cookies";
  LOG(ERROR) << "ERROR: Found " << num_cookies << " cookies";
}
