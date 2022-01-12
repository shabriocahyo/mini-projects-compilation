#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Masukan Tinggi Pohon : ";
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
            
        if(i==x){
            for(int m = 0; m < 3; m++){
                for(int o = 1; o < i; o++){
                cout<<" ";
                }
                
                for(int n = 0; n <= 0; n++){
                cout<<"===";
                }
                
            cout<<endl;
            }
        }
    }

    return 0;
}
