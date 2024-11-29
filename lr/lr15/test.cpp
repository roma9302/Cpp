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
  


//number 2
#include <bits/stdc++.h>
using namespace std;
	
int partition(int arr[], int low, int high, int pivot){
	int PIndex = low;
	    

	for(int i=low;i<=high;i++) {   
	        
        if(arr[i]>=pivot) {
	       swap(arr[PIndex],arr[i]);
	       PIndex++;
      }
	    }
	    
	    PIndex--;
	    
		return PIndex;
	}
	

	void quickSort(int arr[], int low, int high){
		if(low < high) {
		    int pivot = arr[high];
	        

		    int PIndex = partition(arr, low, high, pivot);
		

	            quickSort(arr, low, PIndex-1);
	            quickSort(arr, PIndex+1, high);
		}
	}
	
	int main()
	{
		
		int arr[7]={6,3,9,5,2,8,7};
		int n=7;
	    
		quickSort(arr, 0 , n-1);
	    
		cout<<"The sorted array is: ";
		for( int i = 0 ; i < n; i++){
			cout<< arr[i]<<" ";
		}
		
	    return 0;
	}

  
