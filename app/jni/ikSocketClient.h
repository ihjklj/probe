
#ifndef __C_SOCKET_CLIENT_H__
#define __C_SOCKET_CLIENT_H__

#include "ikUtil.h"

class CSocketClient {
public:
    CSocketClient();
    CSocketClient(char *host, int port);
    ~CSocketClient();

    int init(char *host, int port);
    bool connectTo();
    void closeTo();
    int sendToServer(QOSCMD *msg);

protected:
    int     mSocketFd;
    int     mPort;
    bool    mIsConnected;
    char*   mHost;
};
















#endif /* __C_SOCKET_CLIENT_H__ */

