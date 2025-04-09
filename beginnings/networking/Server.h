

#ifndef Server_h
#define Server_h

#include <netinet/in.h> //Internet addresses
#include <sys/socket.h> //Socket creation and networking

struct Server {
  int domain;       // Internet Protocol (e.g., IPv4)
  int service;      // Socket type (e.g., TCP)
  int protocol;     // Usually 0 to select default
  u_long interface; // IP address to bind to (e.g., 0.0.0.0)
  int port;         // Port to listen on
  int backlog;      // Max connections to wait in queue

  struct sockaddr_in address; // Full address info

  int socket;

  void (*launch)(
      struct Server *); // Pointer to a function that starts the server
};

struct Server server_constructor(int domain, int service, int protocol,
                                 u_long interface, int port, int backlog,
                                 void (*launch)(struct Server *server));

#endif /* Server_h */
