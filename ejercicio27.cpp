#include <iostream>


using namespace std;


float ecuacion_euler(float t_1,float dt, float t_f, float omega);


int main(){
  float omega=0.1;
     
 ecuacion_euler(0.0,0.1,4.0,omega);
     
    

  return 0;
}

float ecuacion_euler(float t_1, float dt, float t_f, float omega){
  float y=1.0;
    while(t_1<t_f){    
    y = y - dt * omega  * y;
        cout<< t_1 << " " << y << endl;
    t_1 = t_1 + dt;
    
  }
 return 0.0;
}

