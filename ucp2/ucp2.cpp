#include <iostream>
using namespace std; 
class bidangDatar {
private:
    int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar  
public:   
    bidangDatar(){ //constructor      
        x=0;    
    }    
    virtual void input(){} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x   
    virtual float Luas(int a)
    {return 0;} //fungsi untuk menghitung luas  
    virtual float Keliling(int a)
    {return 0;} //fungsi untuk menghitung keliling   
    void setX(int a){ //fungsi untuk memberi/mengirim nilai pada x 
        this->x=a; 
    }
    int getX() { //fungsi untuk membaca/mengambil nilai dalam x    
    return x; 
    } 
};

class Lingkaran :public bidangDatar { /*lengkapi disini*/ 
    void input() {
        int r;
            cin >> r;
        setX(r)
    }
    float keliling(int r) {
        return 2 * 3.14 * r ;
    }
    float Luas() {
        return 3.14 * r * r;
    }

};
class Bujursangkar :public bidangDatar { /*lengkapi disini*/
    void input() {
        cout << "memasukkan "
        cin >> sisi;
        setX(sisi);
    }
    float keliling(int sisi ) {
        return sisi * sisi;
    }
    float Luas(int sisi) {
        return 4 * sisi;
    }
};

int main() { /*lengkapi disini*/
    bidangDatar *obyek;
    Lingkaran a;
    Bujursangkar b;
}


