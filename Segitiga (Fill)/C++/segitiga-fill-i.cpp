#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Masukan Tinggi Segitiga : ";
    cin >> x;
    for(int i = 1; i <= x; i++){
        for(int j = x; j >= i; j--){
            cout<<" ";
        }
        
        for(int l = 2; l <= i; l++){
            cout<<"*";
        }
        
        for(int k = 1; k <= i; k++){
                cout<<"*";
            }
        cout<<endl;
    }
    return 0;
}
