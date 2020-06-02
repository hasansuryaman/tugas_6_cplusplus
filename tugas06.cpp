#include <iostream>

using namespace std;

int main(){
    int x, z, hasil;
    cout <<"Inputkan Nilai X : ";
    cin>>x;
    cout <<"Inputlan Nilai Z : ";
    cin>>z;
    if(x>=z){
        hasil = x + z;
    }
    else{
        hasil = x - z;
    }
    cout <<"Hasil : " <<hasil <<endl;
}
