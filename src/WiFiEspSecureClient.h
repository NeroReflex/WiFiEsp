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

#ifndef WiFiEspSecureClient_h
#define WiFiEspSecureClient_h

#include "WiFiEspClient.h"

class WiFiEspSecureClient : public WiFiEspClient {
public:
 /*
  * Connect to the specified IP address and port using SSL. The return value indicates success or failure.
  * Returns true if the connection succeeds, false if not.
  */
  virtual int connect(IPAddress ip, uint16_t port);

  /*
  * Connect to the specified host and port using SSL. The return value indicates success or failure.
  * Returns true if the connection succeeds, false if not.
  */
  virtual int connect(const char *host, uint16_t port);

};

#endif
