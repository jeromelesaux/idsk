#include <iostream>
#include <cstdlib>
using namespace std;
#include "endianPPC.h"

#ifndef _MSC_VER
#ifndef __APPLE__
#include <sys/param.h>
#include <endian.h>
#endif
#endif

bool isBigEndian(void)
{
#ifdef BYTE_ORDER
    	return BYTE_ORDER == BIG_ENDIAN;
#elif defined _MSC_VER
	return true; // It doesn't run on anything except x86, right?
#else
    return __BYTE_ORDER == __BIG_ENDIAN;
#endif
}
