/*   ""Dutch National Flag Sort""
The Dutch national flag (DNF) problem is one of the most popular programming problems proposed by Edsger Dijkstra.
 The flag of the Netherlands consists of three colors: white, red, and blue.
  The task is to randomly arrange balls of white, red, and blue such that balls of the same color are placed 
  together.

  ALGORITHMS

  if 0, swap arr[low] and arr[mid] low++ mid++
  if 1, mid++
  if 2, swap arr[mid]and arr[high] high--

  */
#include<bits/stdc++.h>  
using namespace std;  

// Function to sort the input array, 
// the array is assumed  
// to have values in {0, 1, 2}  
void DNFS(int arr[], int arr_size)  
{  
    int low = 0;  
    int high = arr_size - 1;  
    int mid = 0;  
      
    // Iterate till all the elements 
    // are sorted  
    while (mid <= high)  
    {  
        switch (arr[mid])  
        {  
              
            // mid is 0  
        case 0:  
            swap(arr[low++], arr[mid++]);  
            break;  
              
            // mid is 1 .  
        case 1:  
            mid++;  
            break;  
              
            // mid is 2  
        case 2:  
            swap(arr[mid], arr[high--]);  
            break;  
        }  
    }  
}  
  
  
  
// Function to print array arr[]  
void printArray(int arr[], int arr_size)  
{  
    // Iterate and print every element  
    for (int i = 0; i < arr_size; i++)  
        cout << arr[i] << " ";  
  
}  
  
// Driver Code  
int main()  
{  
    int arr[] = {0,0,1,2,0,1,2};  
    int n = sizeof(arr)/sizeof(arr[0]);  

    cout << "Array before running the algorithm: ";  
      
    printArray(arr, n);   
    
    DNFS(arr, n);  
  
    cout << "\nArray after DNFS algorithm: ";  
      
    printArray(arr, n);  
  
    return 0;  
}  



//second method

 /*#include<bits/stdc++.h>
 #include<cstdlib>
 #include<cstdio>
 #include<iostream>
 #define a 500
 using namespace std;

// void swap(int arr[],int i,int j)
//  {
//     int temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
//  }

void dnfSort(int arr[],int n)
{
    int low =0;
    int mid=0;
    int high=n-1;
    if(arr[0]==0)
    {
        mid++;
    }
    else if(arr[mid]==1)
    {
        swap(arr[low],arr[mid]);
        mid++;
        low++;
    }
    else if(arr[mid]==0)
    {
        mid++;
    }
    else
    {
        swap(arr[mid],arr[high]);
        high--;
    }
    

}

 int main()
{
    int n,arr[a];
    cout<<"enter the number of element u want in array \n";
    cin>>n;
    cout<<"enter the element in array";
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the entry u have done is";
    for(int i = 0;i<n;++i)
    {
        cout<<arr[i]<<" ";
    }
    dnfSort(arr,n-1);
    cout<<"the sorted array is ";
     for(int i = 0; i<n ; i++)
     {
        cout<<arr[i]<<" ";
     }



 }
 */
