#include "WiFiEspSecureClient.h"

int WiFiEspSecureClient::connect(const char* host, uint16_t port)
{
        return connect(host, port, SSL_MODE);
}

int WiFiEspSecureClient::connect(IPAddress ip, uint16_t port)
{
        char s[16];
        sprintf_P(s, PSTR("%d.%d.%d.%d"), ip[0], ip[1], ip[2], ip[3]);
        return connect(s, port, SSL_MODE);
}
