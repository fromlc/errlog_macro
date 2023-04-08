//------------------------------------------------------------------------------
// errlog.h
// 
// #define USE_ERRLOG in each compilation unit (.cpp file), 
// or add USE_ERRLOG to your project's preprocessor definitions
// 
// ERRLOG macro displays:
//  - passed message
//  - source file name where macro is being invoked
//  - function and line number in this source file 
//  - date and time of the last modification of this source file
//------------------------------------------------------------------------------
#pragma once

#ifdef USE_ERRLOG
#include <iostream>
#define ERRLOG(msg) std::cerr << msg << '\n' << __FILE__ \
    << "\nin function " << __FUNCTION__ << "() at line " << __LINE__ \
    << "\nfile last modified " << __TIMESTAMP__ << "\n\n"
#else
#define ERRLOG(msg)
#endif




