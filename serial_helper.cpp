#include "serial_helper.h"

void write_int(Stream& serial, int val)
{
  serial.write((uint8_t)(val & 0x00ff));
  serial.write((uint8_t)(val & 0xff00));
}

void write_float(Stream& serial, float val)
{
  union _float
  {
    float   val;
    uint8_t bytes[4];

    _float(float val) : val(val) {}
  };

  _float _val(val);

  for(int i=0; i < 4; i++)
    serial.write(_val.bytes[i]);
}
