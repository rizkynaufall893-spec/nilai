#include <iostream>
using namespace std;

int main() {
   char p;
    int n1,n2;
    cout<<"Pilih Posisi Anda(F/B)";
    cin>>p;
if (p=='B'||p=='b'){
     cout<<"Masukkan Nilai 1 : ";
    cin>>n1;
    cout<<"Masukkan Nilai 2 : ";
    cin>>n2;
    if(n1 >= 80 && n2 >= 75)
        cout<<"Lulus";
    else cout<<"Tidak Lulus";
}
    else if(p=='F'||p=='f'){
         cout<<"Masukkan Nilai 1 : ";
        cin>>n1;
        cout<<"Masukkan Nilai 2 : ";
        cin>>n2;
        if(n1 >=85 && n2 >=70)
            cout<<"Lulus";
        else cout<<"Tidak Lulus";
    }
    else{cout<<"tidak ada pilihan";}}
