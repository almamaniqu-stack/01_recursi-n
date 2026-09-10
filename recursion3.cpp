#include <iostream>
using namespace std;

found(p[],k){
  for (int i=0; i<4; i++){
    if(p[i] == k){
      return i; 
    }else{
      return found(p[i+1],k);
    }
  }
}
int main(){
  int p[4] = {1,2,3,4};
  int k;
  cout << "Un numero entre el 1 al 4"; cin >> k;
  cout << "EL NUMERO SE ENCUENTRA EN LA COLUMMNA: " << found(p,k);
  return 0;
}
