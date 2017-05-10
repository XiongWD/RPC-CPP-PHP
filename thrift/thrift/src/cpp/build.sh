ROOT_PATH=../../lib/cpp/

g++ -g  -I$ROOT_PATH/src/ -I$ROOT_PATH/src/thrift -L$ROOT_PATH/.libs -lthrift -lm -pthread -lz -lrt -lssl  gen-cpp/Calculator.cpp gen-cpp/SharedService.cpp gen-cpp/shared_constants.cpp gen-cpp/shared_types.cpp gen-cpp/tutorial_constants.cpp gen-cpp/tutorial_types.cpp CppServer.cpp -o server1

LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/data/package/thrift/lib/cpp/.libs
