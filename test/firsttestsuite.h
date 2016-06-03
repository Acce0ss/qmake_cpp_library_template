#ifndef FIRSTTESTSUITE_H
#define FIRSTTESTSUITE_H

#include <cxxtest/TestSuite.h>
#include "../src/myclass.h"

class FirstTestSuite : public CxxTest::TestSuite
{
  public:
    void testAddition(void)
    {
      TS_ASSERT_EQUALS(testObj.addition(1,1), 2);
    }

    void testAdd2Plus3Is5()
    {
      TS_ASSERT_EQUALS(testObj.addition(2,3), 5);
    }

    MyClass testObj;
};


#endif // FIRSTTESTSUITE_H
