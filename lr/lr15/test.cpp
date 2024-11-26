//number 1
#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;


int main(){
  int* c;
  int r;
  cout << "input number massiv 1 " << endl;
  cin >> r;
  srand(time(0));
  c = new int[r];
  
  
  for(int i{}; i<r;i++){
      c[i] = rand() %  100;
      
  }
  
  
  for(int i {}; i<r-1;i++){
      for(int j {};j<r-i-1;j++){
        if(c[j]<c[j+1]){
            int b = c[j+1];
            c[j+1]=c[j];
            c[j] = b;
        }
      }
  }

  
  
   for(int i{}; i<r;i++){
        cout << i+1 << " " << c[i] << " "   << endl;
   }
   
  
  
  
  delete[] c;

  
  return 0;
  }
  
