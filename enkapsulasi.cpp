#include <iostream>
using namespace std;

class remoteLampu{
private:
    string SaklarNo[10];
public:
    void setSaKlarNo(int i, string value){
        SaklarNo[i] = value;
    }
    string getSaKlarNo(int i) {
        return SaklarNo[i];
    }
};
