#ifndef TESTOBJ_H
#define TESTOBJ_H

namespace testobjects {
class TestObject {
 public:
  TestObject(int i) : mem(i) {}
  int ReturnMem();

 private:
  int mem;
};
}  // namespace testobjects
#endif  // SCOPEDARRAY_H