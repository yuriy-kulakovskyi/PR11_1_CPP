if(EXISTS "/Users/yura_kulakovskyi/Documents/C++/AP/PR11/PR11_1_CPP/cmake-build-debug/PR11_1_tests[1]_tests.cmake")
  include("/Users/yura_kulakovskyi/Documents/C++/AP/PR11/PR11_1_CPP/cmake-build-debug/PR11_1_tests[1]_tests.cmake")
else()
  add_test(PR11_1_tests_NOT_BUILT PR11_1_tests_NOT_BUILT)
endif()
