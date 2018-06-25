/*--------------------------------------------------------------------
This file is part of the Arduino WiFiEsp library.

The Arduino WiFiEsp library is free software: you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation, either version 3 of the
License, or (at your option) any later version.

The Arduino WiFiEsp library is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with The Arduino WiFiEsp library.  If not, see
<http://www.gnu.org/licenses/>.
--------------------------------------------------------------------*/

#include <inttypes.h>

#include "WiFiEsp.h"
#include "WiFiEspSecureClient.h"
#include "WiFiEspServer.h"

#include "utility/EspDrv.h"
#include "utility/debug.h"

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
