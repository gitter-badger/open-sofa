#include "client.hpp"
#include <iostream>
#include <string>

namespace OpenSofa
{

  Client::Client()
  {
  }

  void Client::sendMessage(const std::string& s)
  {
    std::cout << s << std::endl;
  }
}
