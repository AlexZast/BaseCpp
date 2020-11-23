#ifndef CATEGORIZEN_HPP
#define CATEGORIZEN_HPP

#include <iostream>
#include <fstream>

void GettingSize(std::fstream *f, int &wight, int &height);
void BuildDiagramm(std::fstream *f, unsigned int *histogramm, int &wight, int &height);
void PrintToFile(unsigned int *histogramm, int &wight, int &height, char *args);






#endif
