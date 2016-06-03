include(../common.pri)

LIBS += -L../src -lmylib

HEADERS += \
    firsttestsuite.h

TEST_HEADERS = $$find(HEADERS, .*testsuite.h)

generate_tests.name = "Generate CxxTests"
generate_tests.input = TEST_HEADERS
generate_tests.output =  $$PWD/runner.cc
generate_tests.commands = cxxtestgen --root --fog --xunit-printer -o ${QMAKE_FILE_OUT} ${QMAKE_FILE_IN}
generate_tests.CONFIG += no_link target_predeps combine
generate_tests.clean += ${QMAKE_FILE_OUT}
generate_tests.variable_out = GENERATED_SOURCES

QMAKE_EXTRA_COMPILERS += generate_tests
