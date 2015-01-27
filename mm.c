#include <stdio.h>      
#include <stdlib.h>     




int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main ()
{
int t, i,j,k N, A[100000], B[100000], c[1000];
    scanf("%d",&t);
    if(t>=1)
    {
if(t<=100)
{
  scanf("%d",&N);
  if(N>=1)
  {
    if(N<=10000)
    {for( j=0;j<t;j++)
    {
      for( i=0;i<N;i++)
      {
        scanf("%d",&A[i]);
      if(A[i]!>=1)
       exit(0);
      }
      for( i=0;i<N;i++)
      {
        scanf("%d",&B[i]);
      if(B[i]!<=100000)
       exit(0);
      }
  qsort (A, n, sizeof(int), compare);
  //for (k=0; k<N; N++)
    // printf ("%d\n ",A[N]);
 qsort (B, n, sizeof(int), compare);
  //for (k=0; k<N; N++)
    // printf ("%d\n ",B[n]);for
 int count=0;
 for(i=0;i<N;i++)
 {
  if(B[N-i]%A[i]==0)
  {
    count++;
  }
  if(A[i]%B[N-i]==0)
  {
    count++;
  }
 }
 c[j]=count;
    }
    }
    for (int i = 0; i < t; ++i)
    {
      /* code */
    
    printf("d\n",c[j]);
  }
  }
  
}
  }
  int k;
  qsort (boys, n, sizeof(int), compare);
  for (k=0; k<n; k++)
     printf ("%d\n ",boys[n]);
 qsort (girls, n, sizeof(int), compare);
  for (k=0; k<n; k++)
     printf ("%d\n ",girls[n]);
  return 0;
}


/*
int numbers[4][2];
for(int i=0;i<4;i++)
{
   cout<<i<<": Please enter x-cord."<<endl;
   cin>>numbers[i][0];
   cout<<i<<": Please enter y-cord."<<endl;
   cin>>numbers[i][1];
}

for (int i = 0; i<4; i++) 
{
        cout << numbers[i][0]<<"   "<<numbers[i][1];
}


include <iostream>
using namespace std;

int main()
{
int numbers[10];
for (int i = 0; i < 10; i++)
{
cout << " Please enter number "<<i<<endl;
cin >> numbers[i];

}

i = 0;
int greater=0;
for ( ; i<10 ; i++)
{
if( numbers[i] >= 10)
greater++;

cout<<"number of elements greater or equal to 10 is: "<<greater<<endl;
return 0;

} 
*/