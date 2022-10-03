// C++ program for implementation of // selection sort 
#include <bits/stdc++.h> 
using namespace std;  
//Swap function
 void swap(int *x, int *y) { 	
    int temp = *x; 	*x = *y; 	*y= temp;
     }  
    void selectionSort(int arr[], int n) 
       { 	int i, j, min;  	
            // One by one move boundary of unsorted subarray 	
            for (i = 0; i < n-1; i++) 	{ 		
            // Find the minimum element in unsorted array 		
              min= i; 		 
              for (j = i+1; j < n; j++) 		
              if (arr[j] < arr[min]) 			
              min= j;  		
           // Swap the found minimum element with the first element 		
            if(min!=i) 			
            swap( &arr[i],&arr[min]); 	}
        }  
           //Function to print an array
 void  print(int arr[], int size) { 	
                int i; 
                	for (i=0; i < size; i++) 
     		        cout << arr[i] << " "; 	cout << endl; 
            }  
// Driver program to test above functions 
int main() {   
                int n;cin>>n; 	int arr[n];    
               for(int i=0;i<n;i++)cin>>arr[i]; 	
               selectionSort(arr, n); 
             	cout << "Sorted array: "; 	print(arr, n); 	return 0; 
            }