#include <iostream>
#include <string>
#include "message.pb.h"

int main(int argc, char **argv)
{
    std::string output;

    {
        message::Message msgOut;

        msgOut.set_commandtype(message::Message::REQ_1);

        message::Request1 *req1 = new message::Request1();
        req1->set_arg1("Test string");
        req1->set_arg2("Another string arg");

        msgOut.set_allocated_request1(req1);

        std::cout << "msg IsInitialized() " << msgOut.IsInitialized() << "\n"
                  << "DebugString():\n" << msgOut.DebugString()
                  << "SerializeToString() returns " << msgOut.SerializeToString(&output) << std::endl;

    }

    {
        message::Message msgIn;
        bool result = msgIn.ParseFromString(output);

        std::cout << "ParseFromString() returns " << result << "\n"
                  << "DebugString():\n" << msgIn.DebugString() << std::endl;

    }
    
}
