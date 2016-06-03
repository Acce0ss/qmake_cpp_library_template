# qmake_cpp_library_template
A template project for a dynamically linked library project using Qt projects qmake. Supports automated tests.

# building
Use following commands in project root directory:
qmake
make

# running tests
The template depends on cxxtest (http://cxxtest.com) for generating tests.

In project root after compiling:
env LD_LIBRARY_PATH=src/ ./test/test
