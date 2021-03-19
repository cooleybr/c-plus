#include <iostream>
#include <array>
using namespace std;

/** Receives 2 integers and returns the sum **/

int integerAddition(int a,int b){
  int sum;
  sum = a + b;
  return sum;
}

/** Receives 2 floats and returns the sum **/

float floatAddition(float a,float b){
  float sum;
  sum = a+b;
  return sum;
}


int integerArrayAddition(vector <int> a){
  int sum = 0;
  for(int i=0;i<a.size();i++){
    sum = sum+a[i];
  }  
  return sum;
}
