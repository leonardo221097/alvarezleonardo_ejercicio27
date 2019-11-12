#include <iostream>


using namespace std;

float ecuacion_implicita(float t_11,float dt1, float t_f1,  float omega1);

int main(){
    float omega1=1.0;
 
 ecuacion_implicita(0.0,0.1,4.0,1.0);
  return 0;
}

float ecuacion_implicita(float t_11, float dt1, float t_f1, float omega1){
  float y1=1.0;
   
  for(float t_11; t_11<t_f1;dt1){    
    y1 = y1/(1+dt1*omega1);
    t_11 = t_11 + dt1;
    cout<<t_11 << " " << y1 << endl;
  }
  return 0.0;
}