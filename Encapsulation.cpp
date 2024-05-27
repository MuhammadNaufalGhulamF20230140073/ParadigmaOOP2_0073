#include <iostream>
using namespace std;

class remoteLampu{
private:
    string saklarNo[10];
public:
    void setsaklarNo(int i, string value){
        saklarNo[i] = value;
    }
    string getsaklarno(int i){
        return saklarNo[i];
    }
};

int main(){
    remoteLampu lampuRumah;

    lampuRumah.setsaklarNo(0, "Lampu Teras Rumah");
    lampuRumah.setsaklarNo(1, "Lampu Ruang Tamu");
    lampuRumah.setsaklarNo(2, "Lampu Kamar Tidur");
    lampuRumah.setsaklarNo(3, "Lampu Taman");

    cout << lampuRumah.getsaklarno(0) << endl;
    cout << lampuRumah.getsaklarno(1) << endl;
    cout << lampuRumah.getsaklarno(2) << endl;
    cout << lampuRumah.getsaklarno(3) << endl;
    
    return 0;

}