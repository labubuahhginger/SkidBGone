#ifndef UTILS_H
#define UTILS_H
#include <Arduino.h>

inline void printBrandName(const char* funcName) {
  const char* name = funcName;
  if (strncmp(name, "send", 4) == 0) name += 4;
  for (int i = 0; name[i] != '\0'; i++) {
    if (i > 0 && islower(name[i-1]) && isupper(name[i])) {
      Serial.print(' ');
    }
    Serial.print(name[i]);
  }
}
#endif
