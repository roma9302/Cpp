//number 1
#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;


int main(){
  int* c;
  int* b;
  int r,q , counter=0;
  cout << "input number massiv 1 and 2" << endl;
  cin >> r;
  srand(time(0));
  c = new int[r];
  b = new int[r];
  
  
  for(int i{}; i<r;i++){
      c[i] = rand() %  10;
      b[i] = rand() % 10;
      
  }
  
   for(int i{}; i<r;i++){
      if(b[1] == c[i]){
          counter++;
      }
      
      cout << i  << " " << c[i] << " "  << endl;
  }
  
   for(int i{}; i<r;i++){
        cout << i << " " << b[i] << " "   << endl;
   }
   
        cout << "counter " << counter;
  
  
  
  delete[] c;
  delete[] b;
    
  return 0;
}


//number 2
#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;


int main(){
  int* c;
  int* b;
  int r,q , counter=0;
  cout << "input number massiv len: " << endl;
  cin >> r;

  c = new int[r];

  
  srand(time(0));
  for(int i{}; i<r;i++){
      c[i] = rand() %  100;
      cout << c[i] << " " << endl;
      
  }
  
   for(int i{}; i<r;i++){
      if(c[i]>3){
          counter++;
      }
      
    b = new int[counter];
    
    for(int i {}; i<counter;i++){
        if(c[i]>3){
            b[i] = c[i];
        }    
    }
  }
    for(int i = 1 ; i<counter;i++){
        cout << b[i] << " ";
        
    }  
  
  delete[] c;
  delete[] b;
    
  return 0;
}