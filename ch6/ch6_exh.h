#ifndef _TIME_H_
#define _TIME_H_
#include <iostream>
#define HOUR_SEC 3600
#define MIN_SEC 60
using namespace std;

unsigned int CalSecond(const unsigned int hour, const unsigned int min, const unsigned int sec);
bool CalSecond(short int *totalsec, const short int hour, const short int min, const short int sec);
bool CalTime(const int sec, int *h, int *m, int *s);

#else
#endif