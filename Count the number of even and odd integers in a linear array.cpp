#include<iostream>

using namespace std;
int main()
{
   int arr[5], min;
   cout<<"Enter 10 Array Elements: ";
   for(int i=1; i<5; i++)
      cin>>arr[i];
	min=arr[0];
   for(int i=0; i<min; i++)
   
      if(arr[i]< min)
      	min=arr[i];
   min++;
   cout<<"\nminimum number is  = "<<min;
   cout<<endl;
   return 0;
}

