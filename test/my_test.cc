#include "gtest/gtest.h"
#include "lib/testobj.h"
#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;

#define NUM_THREADS 5

void* PrintHello(void *threadid) {
   long tid;
   tid = (long)threadid;
   printf("Hello World! Thread ID, %d", tid);
   pthread_exit(NULL);
   return nullptr;
}

TEST(SampleTest, Sample) {
  testobjects::TestObject obj(2);
  EXPECT_EQ(obj.ReturnMem(), 2);
  EXPECT_EQ(1, 1);
  EXPECT_NE(1, 3);
  pthread_t threads[NUM_THREADS];
  int rc;
  int i;

  for (i = 0; i < NUM_THREADS; i++) {
    cout << "main() : creating thread, " << i << endl;
    rc = pthread_create(&threads[i], NULL, PrintHello, (void *)i);

    if (rc) {
      cout << "Error:unable to create thread," << rc << endl;
      exit(-1);
    }
  }
  pthread_exit(NULL);
}
