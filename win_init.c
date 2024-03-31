#include <stdio.h>
#include <winsock2.h>

// Win only. This is ignored when using gcc, use -lws2_32
#pragma comment(lib, "ws2_32.lib")

int main()
{
  WSADATA d;

  if (WSAStartup(MAKEWORD(2, 2), &d))
  {
    printf("WSAStartup failed.\n");
    return -1;
  }

  WSACleanup();
  printf("Ok.\n");
  return 0;
}