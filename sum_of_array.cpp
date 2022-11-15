#include <iostream>
#include <stdio.h>


int main() {
  int arr[10],i,n;
  std::cout<< "Enter the size of array \n";
  std::cin>>n;
  std::cout<<"Enter elements\n";
  for(i=0;i<n;i++)
    {
      std::cin>>arr[i];
    }
  int sum=0;
  for (i=0;i<n;i++)
    {
      sum=sum+arr[i];
    }
  
  std::cout<<"Sum of array is:"<<sum;
  
}