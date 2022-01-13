#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Masukan Tinggi Segitiga : ";
    cin >> x;
    for(int h = 1; h <= x + 1; h++){
        cout<<" ";
    }
    cout<<"*"<<endl;
    
    for(int i = 1; i <= x; i++){
        for(int j = x; j >= i; j--){
            cout<<" ";
        }
        
        for(int l = 1; l <= 1; l++){
            cout<<"*";
        }
        
        for(int k = 1; k <= i; k++){
                cout<<" ";
        }
        
        for(int m = 2; m <= i; m++){
                cout<<" ";
        }  
         
        cout<<"*";
        cout<<endl;
    }
    
    for(int o = 1; o <= x + 2; o++){
        cout<<"* ";
    }
    return 0;
}
