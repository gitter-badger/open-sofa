#pragma once
#include <string>

namespace OpenSofa
{

  class Client
  {
    public:
      Client();
      void sendMessage(const std::string&);
  };
}
