#ifndef SERIAL_HELPER_H
#define SERIAL_HELPER_H

#include<Arduino.h>

void write_int(Stream& serial, int val);
void write_float(Stream& serial, float val);

#endif
