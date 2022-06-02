#include<iostream>
using namespace std;
int main(){
  float vector1[3];
  float vector2[3];
  float vectorsuma[3];
  int i = 0;
  for(i=0; i<3; i++){
    cout<<"\nintroduce el primer componente "<<i<<" del primer vector\n";
    cin>>vector1[i];
  }
  for(i=0; i<3; i++){
    cout<<"\nintroduce el primer componente "<<i<<" del segundo vector\n";
    cin>>vector2[i];
  }
  for(i=0; i<3; i++){
    vectorsuma[i] = vector1[i] + vector2[i];
  }
   cout<<"\nla suma de los vectores es: \n";
  for(i=0; i<3; i++){
    cout<<vectorsuma[i]<< " ";
  }
  cout<<endl;
  return 0;
}
