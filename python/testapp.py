#!/usr/bin/python

import sys

from message_pb2 import Message
from request1_pb2 import Request1

msg = Message()
req1 = Request1()

msg.commandType = Message.REQ_1
msg.request1.arg1 = "Test string#1"
msg.request1.arg2 = "Blah blah blah"

print(msg.__str__())
