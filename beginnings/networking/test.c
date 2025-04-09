

#include "Server.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void launch(struct Server *server) {
  char buffer[30000];
  printf("======= WAITING FOR CONNECTION =======");
  int address_legnth = sizeof(server->address);
  int new_socket = accept(server->socket, (struct sockaddr *)&server->address,
                          (socklen_t *)&address_legnth);
  read(new_socket, buffer, 30000);
  printf("%s\n", buffer);
  char *hello =
      "HTTP/1.1 200 OK\r\n"
      "Date: Mon, 27 Jul 2009 12:28:53 GMT\r\n"
      "Server: Apache/2.2.14 (Win32)\r\n"
      "Content-Length: 88\r\n"
      "Content-Type: text/html\r\n"
      "Connection: Closed\r\n"
      "\r\n"
      "<html><body><h1>Hackin in C</h1><h2> *badly xD</h2></body></html>";
  write(new_socket, hello, strlen(hello));
  close(new_socket);
}

int main()

{
  struct Server server =
      server_constructor(AF_INET, SOCK_STREAM, 0, INADDR_ANY, 80, 10, launch);
  server.launch(&server);
}
