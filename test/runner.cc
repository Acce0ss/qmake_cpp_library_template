/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <fstream>
#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XUnitPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    std::ofstream ofstr("TEST-cxxtest.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_FirstTestSuite_init = false;
#include "firsttestsuite.h"

static FirstTestSuite suite_FirstTestSuite;

static CxxTest::List Tests_FirstTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_FirstTestSuite( "firsttestsuite.h", 7, "FirstTestSuite", suite_FirstTestSuite, Tests_FirstTestSuite );

static class TestDescription_suite_FirstTestSuite_testAddition : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FirstTestSuite_testAddition() : CxxTest::RealTestDescription( Tests_FirstTestSuite, suiteDescription_FirstTestSuite, 10, "testAddition" ) {}
 void runTest() { suite_FirstTestSuite.testAddition(); }
} testDescription_suite_FirstTestSuite_testAddition;

static class TestDescription_suite_FirstTestSuite_testAdd2Plus3Is5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FirstTestSuite_testAdd2Plus3Is5() : CxxTest::RealTestDescription( Tests_FirstTestSuite, suiteDescription_FirstTestSuite, 15, "testAdd2Plus3Is5" ) {}
 void runTest() { suite_FirstTestSuite.testAdd2Plus3Is5(); }
} testDescription_suite_FirstTestSuite_testAdd2Plus3Is5;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
