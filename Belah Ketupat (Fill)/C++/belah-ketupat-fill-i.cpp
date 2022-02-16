#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Masukan Lebar Belah Ketupat : ";
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
    
    for(int i = 1; i <= (x - 1); i++){
        for(int j = x; j <= (i + x); j++){
            cout<<" ";
        }
        
        for(int l = 0; l <= (x - i - 1); l++){
            cout<<"*";
        }
        
        for(int k = 0; k <= x-i-2; k++){
                cout<<"*";
            }
        cout<<endl;
    }
    return 0;
}
