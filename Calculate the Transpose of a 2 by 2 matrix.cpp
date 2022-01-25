#include<iostream>

using namespace std;
int main()
{
   int a[2][2],b[2][2];
   cout<<"Enter the matrix 2x2: "<<endl;
   for(int r=0; r<2; r++)
   {
   
   		for(int c=0; c<2; c++)
   		{
		   
      		cin>>a[r][c];
	}
}
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 2; c++)
        {
            b[c][r] = a[r][c];	
        }
    }
	cout << "Transpose Matrix : " << endl;
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 2; c++)
        {
            cout << b[r][c] << "\t";	
        }
        cout << endl;
    }


   return 0;
}

