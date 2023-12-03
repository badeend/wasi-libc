#ifndef __wasilibc___header_sys_socket_h
#define __wasilibc___header_sys_socket_h

#include <__struct_msghdr.h>
#include <__struct_sockaddr.h>
#include <__struct_sockaddr_storage.h>

#include <wasi/api.h>

#define SHUT_RD __WASI_SDFLAGS_RD
#define SHUT_WR __WASI_SDFLAGS_WR
#define SHUT_RDWR (SHUT_RD | SHUT_WR)

#define MSG_DONTWAIT  0x0040
#define MSG_PEEK __WASI_RIFLAGS_RECV_PEEK
#define MSG_WAITALL __WASI_RIFLAGS_RECV_WAITALL
#define MSG_TRUNC __WASI_ROFLAGS_RECV_DATA_TRUNCATED

#define SOCK_DGRAM __WASI_FILETYPE_SOCKET_DGRAM
#define SOCK_STREAM __WASI_FILETYPE_SOCKET_STREAM

#define SOCK_NONBLOCK (0x00004000)
#define SOCK_CLOEXEC (0x00002000)

#define SOL_SOCKET 0x7fffffff
#define SOL_IP     0
#define SOL_TCP    6
#define SOL_UDP    17
#define SOL_IPV6   41

#define SO_TYPE 3
#define SO_ERROR 4
#define SO_SNDBUF 7
#define SO_RCVBUF 8
#define SO_KEEPALIVE 9
#define SO_ACCEPTCONN 30
#define SO_PROTOCOL 38
#define SO_DOMAIN 39

#if __LONG_MAX == 0x7fffffff
#define SO_RCVTIMEO     66
#define SO_SNDTIMEO     67
#else
#define SO_RCVTIMEO     20
#define SO_SNDTIMEO     21
#endif

// TODO: These should be in <netinet/tcp.h>
#define TCP_KEEPIDLE   4
#define TCP_KEEPINTVL  5
#define TCP_KEEPCNT    6

#define PF_UNSPEC 0
#define PF_INET 1
#define PF_INET6 2

#define AF_UNSPEC PF_UNSPEC
#define AF_INET PF_INET
#define AF_INET6 PF_INET6
#define AF_UNIX 3

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif
