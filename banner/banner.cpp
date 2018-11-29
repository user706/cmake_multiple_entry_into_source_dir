#include "banner.h"
#include <iostream>

void banner()
{
#ifdef UPPER
    std::cout << "BANNER" << std::endl;
#else
    std::cout << "banner" << std::endl;
#endif
}
