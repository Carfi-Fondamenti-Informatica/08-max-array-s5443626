#include <iostream>
#include "lib.h"
using namespace std;
int main(){
  float x=0;
  int n=0
    float dimensione[n];
    for(int i=0;i<n;i++){
        cin >> dimensione [i];
    }
   for (int i=0;i<n;i++){
       float d=max(dimensione[1],dimensione[i-1]);
       if (d>x){
           x=d;
       }
   }cout << x;
  return 0;
}
