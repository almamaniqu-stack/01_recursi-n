#include <iostream>
using namespace std;

potencia(a,b){
    for(int i=0; i<b; i++){
        if(b==1){
            return 1;
        }else{
            return a*potencia(a,b-1);
        }
    }
}

int main(){
    int p, n;
    
    cout << "Numero: "; cin >> p;
    cout << "Potencia: "; cin >> n;
    cout << "Resultado: " <<  potencia(p,n); 
    return 0;
}
