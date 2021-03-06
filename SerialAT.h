#ifndef SerialAT_h
#define SerialAT_h

#include <Arduino.h>
#include <SoftwareSerial.h>

#define CRLF "\r\n"

// Module roles
#define SLAVE 0
#define MASTER 1
#define SLAVE_LOOP 2

class SerialAT: public SoftwareSerial
{
  public:
    bool test();
    void reset();
    String version();
    void restore();
    String address();
    String name();
    void name(String);
    String remoteName(String);
    byte role();
    void role(byte);
    uint32_t type();
    void type(uint32_t);
};

#endif
