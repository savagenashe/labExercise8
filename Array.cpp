// Code to print lower triangular and upper triangular matrix
#include <cstdlib>
#include <iostream>
#include <cmath>


using namespace std; 

// takes the index of an element in the 2D array and returns its index in the 1D
int LinearINdex(int a, int b)
{
	return (a*(a+1)/2) +b;
}

//gets index of an element in the 1D and returns the element position in the 2D
int* InverseIndx(int indEle){
    int t;
    int* indices = (int*) malloc(sizeof(int)*2);
    
    // moving throught the elements until we find the proper index
    for(int i=1;i<=indEle;i++){
        for(int j=0;j<=i;j++){
            t++;
            
            //for the first row
            if(t==indEle){
                indices[0]=i;
                indices[1]=j;
            }
        }
    }
    return indices;
}

int main() 
{

// TESTING WITH AN A[8][8] matrix //
    int row,column;

  row = 8;
  column = 8;
  int matrix[row][column];
  
  //container for the random number
  int randomNumber;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<column;j++)
    {
		randomNumber = (rand() % 1000) + 1;
		matrix[i][j] = randomNumber;
      //cin>>matrix[i][j];
    }
  }
  cout<<"\n";
  // printing lower triangular matrix for 8x8
  cout << "FIRST 20 ELEMENTS OF 8X8,Lower triangular matrix 8x8: \n"; 
  for (int i = 0; i < 6; i++) 
  { 
    for (int j = 0; j < 5; j++) 
    { 
      if (i < j) 
      { 
        cout << " "; 
      } 
      else
      cout << matrix[i][j] << " "; 
    } 
    cout << endl; 
	}

	//traversing through the NxN matrix to put the elements in an array
	int sz = ((1+row)*row)/2;
	int B[sz];
	
	int a=0;
	for(int i=0;i<row;i++)
	{
		for (int j=0; j<i+1; j++)
		{
			B[a] = matrix[i][j];
			a++;
		}
	}
	
	//printing the elements in the array
	cout << "FIRST 20 new array 1D B[]: ";
	for (int i=0; i<20;++i)
	{
		cout << B[i] <<" ";
	}
	
	// finding the index of an element in 1D
	cout<<"index of an element in 1D array: ";
	cout<<LinearINdex(4, 3)<< endl;
	
	cout<<"index of an element in the 2D array: ";
	cout<<InverseIndx(B[5])<<endl;
	
	
	
	// TESTING WITH AN A[32][32] matrix //
    int row1,column1;

  row1 = 32;
  column1 = 32;
  int matrix1[row1][column1];
  
  //container for the random number
  int randomNumber1;
  for(int i=0;i<row1;i++)
  {
    for(int j=0;j<column1;j++)
    {
		randomNumber1 = (rand() % 1000) + 1;
		matrix1[i][j] = randomNumber1;
      //cin>>matrix[i][j];
    }
  }
  cout<<"\n";
  // printing lower triangular matrix
  cout << "FIRST 20 ELEMENTS OF 32X32, Lower triangular matrix: \n"; 
  for (int i = 0; i < 6; i++) 
  { 
    for (int j = 0; j < 5; j++) 
    { 
      if (i < j) 
      { 
        cout <<" "; 
      } 
      else
      cout << matrix1[i][j] << " "; 
    } 
    cout << endl; 
	}

	//traversing through the NxN matrix to put the elements in an array
	int sz1 = ((1+row1)*row1)/2;
	int B1[sz1];
	
	int a1=0;
	for(int i=0;i<row1;i++)
	{
		for (int j=0; j<i+1; j++)
		{
			B1[a1] = matrix[i][j];
			a1++;
		}
	}
	
	//printing the elements in the array
	cout << "new array 1D B[]: ";
	for (int i=0; i<20;++i)
	{
		cout << B1[i] <<" ";
	}
	
	// finding the index of an element in 1D
	cout<<"index of an element in 1D array: ";
	cout<<LinearINdex(12, 9)<< endl;
	
	cout<<"index of an element in the 2D array: ";
	cout<<InverseIndx(B1[24])<<endl;
	
	
	// TESTING WITH AN A[128][128] matrix //
    int row2,column2;

	row2 = 128;
	column2 = 128;
	int matrix2[row2][column2];
  
  //container for the random number
	int randomNumber2;
	for(int i=0;i<row2;i++)
	{
		for(int j=0;j<column2;j++)
    {
		randomNumber2 = (rand() % 1000) + 1;
		matrix1[i][j] = randomNumber2;
      //cin>>matrix[i][j];
    }
	}
	cout<<"\n";
  // printing lower triangular matrix
	cout << "FIRST 20 ELEMENTS OF 128X 128,Lower triangular matrix: \n"; 
	for (int i = 0; i < 6; i++) 
	{ 
		for (int j = 0; j < 5; j++) 
		{ 
			if (i < j) 
		{ 
			cout <<" "; 
		} 
		else
		cout << matrix2[i][j] << " "; 
		} 
		cout << endl; 
	}

	//traversing through the NxN matrix to put the elements in an array
	int sz2 = ((1+row2)*row2)/2;
	int B2[sz2];
	
	int a2=0;
	for(int i=0;i<row2;i++)
	{
		for (int j=0; j<i+1; j++)
		{
			B2[a2] = matrix[i][j];
			a2++;
		}
	}
	
	//printing the first 20 elements in the array
	cout << "new array 1D B[]: ";
	for (int i=0; i<20;++i)
	{
		cout << B2[i] <<" ";
	}
	
	// finding the index of an element in 1D
	cout<<"index of an element in 1D array: ";
	cout<<LinearINdex(24, 15)<< endl;
	
	cout<<"index of an element in the 2D array: ";
	cout<<InverseIndx(B2[24])<<endl;
  }
