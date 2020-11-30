#ifndef HW3_HPP
#define HW3_HPP

#include <iostream>
#include <ctime>

using namespace std;

// Оперделяем среду сборки
#if defined (__WIN32__)
char* env = "Win32";
#elif (__WIN64__)
char* env = "Win64";
#elif (LINUX)
char* env = "Linux";
#else
char* env = "Other";
#endif

#endif HW3_HPP