#include "Arduino.h"

void print64(unsigned long long val) {
    if (val < 10) {
        Serial.print((unsigned int) val);
    } else {
        unsigned long long subproblem = val / 10;
        int remainder = val % 10;
        print64(subproblem);
        Serial.print(remainder);
    }
}

void int_print64(long long val) {
    long long positive = val;
    if (val < 0) {
        Serial.print("-");
        positive *= -1;
    }
    print64(positive);
}
