// Aung Lin Htet



#include <iostream>
#include <array>
using namespace std;


int search ( unsigned short arr[], int size) 
{
  int i, j, k;
  int not_found = -1;
  
  for (  i=0; i<size; i++ ) // for looking all integer in the data array

  {
    for ( j=i; j<size; j++ )    // looking the second time, start from second index

    {
      if ( arr[j] == arr[i]+20 )   // searching one of the next index is 20 apart of previous index
      {
        for ( k=j; k < size; k++ )
        {
          if (arr[k] == arr[j]+20 )  // searching one of the next index is 40 apart of previous index
         
          return i;
        }
        
      } 
    }
  
  }
  return not_found;
}


int main() 
{
  unsigned short data[] = {10,20,31,40,55,60,65525};

  int size = sizeof( data)/sizeof(data[1]);       // size equation for array size

  cout << search ( data, size );  // call the search function


  return 0;
}





