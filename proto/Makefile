CXX = g++
CFLAGS = `pkg-config --cflags protobuf`
LFLAGS = `pkg-config --libs protobuf`

message.pb.cc:	message.proto
	protoc --cpp_out=. --python_out=../python message.proto

request1.pb.cc: request1.proto
	protoc --cpp_out=. --python_out=../python request1.proto

request2.pb.cc: request2.proto
	protoc --cpp_out=. --python_out=../python request2.proto

message.pb.o:	message.pb.cc
	$(CXX) -g -c $(CFLAGS) -o message.pb.o message.pb.cc

request1.pb.o:	request1.pb.cc
	$(CXX) -g -c $(CFLAGS) -o request1.pb.o request1.pb.cc

request2.pb.o:	request2.pb.cc
	$(CXX) -g -c $(CFLAGS) -o request2.pb.o request2.pb.cc

test.o: test.cpp
	$(CXX) -g -c $(CFLAGS) -o test.o test.cpp 

testapp:	test.o message.pb.o
	$(CXX) -g $(LFLAGS) -o testapp test.o message.pb.o request1.pb.o request2.pb.o
