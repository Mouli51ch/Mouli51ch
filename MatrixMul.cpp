#include <iostream> 
using namespace std; 
int main() 
{ 
 int A[50][50],B[50][50],C[50][50]; 
 int i,j,r1,r2,c1,c2; 
 cout<<"Enter the rows and columns of first 2D matrix"<<endl; 
 cin>>r1>>c1; 
 cout<<"Enter the rows and columns of second 2D matrix"<<endl; 
 cin>>r2>>c2; 
 if(c1!=r2) 
 { 
 cout<<"Matrix Multiplication between these two 2D matrices is not possible."<<endl; 
 } 
 else 
 { 
cout<<"Enter the elements of first 2D matrix: "<<endl; 
for(i=0;i<r1;i++) 
 { 
 for(j=0;j<c1;j++) 
 { 
 cin>>A[i][j]; 
 } 
 } 
 cout<<"Enter the elements of second 2D matrix: "<<endl; 
for(i=0;i<r2;i++) 
 { 
 for(j=0;j<c2;j++) 
 { 
 cin>>B[i][j]; 
 } 
 } 
for(i=0;i<r1;i++) 
 { 
 for(j=0;j<c2;j++) 
 { C[i][j]=0; 
 for(int k=0;k<r2;k++) 
 { 
 C[i][j]+=A[i][k]*B[k][j]; 
 } 
 } 
 } 
 cout<<"The first 2D matrix is: "<<endl; 
 for(i=0;i<r1;i++) 
 { 
 for(j=0;j<c1;j++) 
 { 
 cout<<A[i][j]<<"\t"; 
 } 
 cout<<"\n"; 
 } 
cout<<"The second 2D matrix is: "<<endl; 
 for(i=0;i<r2;i++) 
 { 
 for(j=0;j<c2;j++) 
 { 
 cout<<B[i][j]<<"\t"; 
 } 
 cout<<"\n"; 
 } 
 cout<<"The resultant matrix after multiplication of the above two 2D matrices is: "<<endl; 
 for(i=0;i<r1;i++) 
 { 
 for(j=0;j<c2;j++) 
 { 
 cout<<C[i][j]<<"\t"; 
 } 
 cout<<"\n"; 
 } 
 } 
 return 0; 
 }  
