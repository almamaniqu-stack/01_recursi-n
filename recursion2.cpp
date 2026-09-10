#include <iostream>
using namespace std;

//funcion considerando un arreglo finitp
suma(v[]){
  for(int i=0; i<3; i++){
    if(i==3){
      return 0;
    }else{
      return v[i] + suma(v[i+1];
    }
  }
}

int main(){
  int v[3] = {1,2,3};
  cout << "SUMA DE ELEMENTOS: " << suma(v);
  return 0;
}
