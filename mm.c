#include <stdio.h>      
#include <stdlib.h>     

int t,n;
scanf("%d",&t);
scanf("%d",&n);

int boys[n], girls[n];

for (int i=0;i<n;i++)
{
	cin>>girls[i];
	
}

for (int i=0;i<n;i++)
{
	cin>>boys[i];
	
}





int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main ()
{

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