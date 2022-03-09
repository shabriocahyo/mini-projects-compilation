#include <iostream>
using namespace std;

int main(){
    
    int x;
    cout << "Masukan Lebar Belah Ketupat: ";
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
         
        cout<<"*\n";
    }
    
    cout << "*";
    
    for(int v = 0; v <= x*2; v++){
        cout<<" ";
    }
    
    cout << "*\n";
    
    for(int p = 0; p <= x-1; p++){
        for(int q = 0; q <= p; q++){
            cout<<" ";
        }
        
        cout<<"*";
        
        for(int s = x-1; s >= p; s--){
            cout<<" ";
        }
        
        for(int t = x-2; t >= p; t--){
            cout<<" ";
        }  
         
        cout<<"*\n";
    }
    
    for(int u = 1; u <= x+1; u++){
        cout<<" ";
    }
    
    cout<<"*";

    return 0;
}
