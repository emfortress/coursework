#include <iostream>
#include <string>
#include <cpp_httplib/httplib.h>
using namespace httplib;

extern const std::string DATA_FOLDER;

namespace RouteRoot {
   void Handler(const Request& req, Response& res);
}

#include "root.cpp"