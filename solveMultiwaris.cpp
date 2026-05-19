#include <iostream>
using namespace std;

class orang {
public:
    int Umur;

    orang (int pUmur):
      Umur(pUmur)
    {
        cout  << "orang dibuat dengan umur" << Umur << "\n" << endl;
    }
};

class pekerja : public orang {
public:
    pekerja(int pUmur):
        orang (pUmur)
    {
        cout << "pekerja dibuat\n" << endl;
    }
};

class pelajar : public orang {
public:
    pelajar(int pUmur) :
        orang(pUmur)
    {
        cout << "pelajar di buat\n" << endl;
    }
};

class budi : public pekerja, public pelajar{
public:
    budi(int pUmur):
        pekerja(pUmur),
        pelajar(pUmur)
    {
        cout << "budi dibuat\n" << endl;
    }
};

int main() {
    budi a(12);
    return 0;
}