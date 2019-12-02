#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
  float x , y;
  cout<<"Input x:";
  cin>>x;
  cout<<"Input y:";
  cin>>y;
  if ( fabs(x)+fabs(y) < 1 ) cout<<"Point belong"<< endl;
  else cout<<"Point not belong"<< endl;
  return 0;
}
