#include <stdint.h>

// Blackcoin: needed when linking transaction.cpp, since we are not going to pull real GetAdjustedTimeSeconds() from timedata.cpp
int64_t GetAdjustedTimeSeconds()
{
    return 0;
}
