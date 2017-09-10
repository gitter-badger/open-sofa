#pragma once
#include <cstddef>

namespace OpenSofa
{
  class ConnectionListener
  {
    public:
      virtual void onConnected(unsigned int id) = 0;
      virtual void onDisconnected(unsigned int id) = 0;
  };

  class Server
  {
    public:
      virtual void start() = 0;
      virtual void send(const void * buffer, std::size_t bufferSize, unsigned int dst) = 0;
      virtual void setConnectionListener(ConnectionListener* listener) = 0;
  };

}
