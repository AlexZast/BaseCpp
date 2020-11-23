#include "categorizer.hpp"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** args)
{
    unsigned int histogramm[256];
    char PGM_hdr1[2];
    int wight, height;

    fstream f;
    if (argc == 1){
        cout << "Pleas specify input file(s)" << endl;
        return 1;
    }

    for (int i = 1; i < argc; i++){
        f.open(args[i], ios::binary|ios::in);

        if (!f.is_open()){
             cout << "File: " << args[i] << " is not accessible!"<< endl;
             continue;
        }
        cout << "File " << args[i] << " opened." << endl;
        f.read(PGM_hdr1, 2);
        if (PGM_hdr1[0] != 0x50 || PGM_hdr1[1] != 0x35) continue;

        cout << "PGM_hdr detected" << endl;

        GettingSize(&f, wight, height);
        BuildDiagramm(&f, histogramm, wight, height);
        PrintToFile(histogramm, wight, height, args[i]);
        }

    f.close();
    return 0;					
}

//Получение размера изображения в переданные по адресу в переменные wight и height
void GettingSize(std::fstream *f, int &wight, int &height){
    int alfabet[256];

    wight = 0;
    height = 0;

    f->seekg(static_cast<unsigned int>(f->tellg())+1);
    unsigned int digit_b = static_cast<unsigned int>(f->tellg());
    char sym;
    do {
        f->read(&sym,1);
    } while (sym != 0x20);

    unsigned int digit_e = static_cast<unsigned int>(f->tellg())-2;
    int j = 0;
    for(int d = '0'; d<='9'; d++, j++) alfabet[d] = j;
    int c = 1;
    for(j=digit_e; j>= digit_b; j--, c *= 10){
    f->seekg(j);
    f->read(&sym, 1);
    wight += alfabet[sym] * c;
    }
    cout << "Weight1: " << wight << endl;

    digit_b = digit_e + 2;
    c = 1;
    do {
        f->read(&sym,1);
    } while (sym != 0x0A);

    digit_e = static_cast<unsigned int>(f->tellg())-2;
    for(j=digit_e; j>= digit_b; j--, c *= 10){
    f->seekg(j);
    f->read(&sym, 1);
    height += alfabet[sym] * c;
    }
    cout << "Height1: " << wight << endl;
}

// Построение диаграммы
void BuildDiagramm(std::fstream *f, unsigned int *histogramm, int &wight, int &height){
    char sym;
    for(int d = 0; d < 256; ++d) histogramm[d] = 0;
    unsigned int digit_e = static_cast<unsigned int>(f->tellg());
    f->seekg(digit_e + 6);

    for (int d = 0; d < (wight * height); ++d){
        if(f->eof()) break;
        f->read(&sym, 1);
        histogramm[static_cast<unsigned char>(sym)] += 1;
    }
}

// Печать диаграммы в файл
void PrintToFile(unsigned int *histogramm, int &wight, int &height, char *args){
    ofstream out("histogramm.txt");
    out << "File : " << args << endl;
    out << "Wight: " << wight << "\t Height1: " << height << endl;
    for(int j=0; j<256; j++){
       out << "[" << j << "] ";
        for (int c = 0; c<histogramm[j]; c++)
           out << "|";
        out << endl;
    }
    out << "End of file " << args << endl << endl;
    out.close();
}






