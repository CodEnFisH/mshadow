#include "./dist_async_sum-inl.h"
int main(int argc, char *argv[]) {
  return Run<mshadow::cpu>(argc, argv);
}