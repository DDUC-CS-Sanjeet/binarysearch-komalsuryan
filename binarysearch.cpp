#include<iostream>
#include<algorithm>
using namespace std;

bool binarySearchReacursive(int* array, int startIndex, int lastIndex, int element)
{ int mid=(startIndex+lastIndex/2);
     if(startIndex<=lastIndex)
     { if (element==array[mid])
         return false;
       else if(array[mid]>element)
        return binarySearchReacursive(array,startIndex,mid-1,element);
       else 
        return binarySearchReacursive(array,startIndex,mid-1,element);
     }
  return true;
}

bool binarySearchIterative(int* array, int startIndex, int lastIndex, int element)
{   while(startIndex<=lastIndex)
  { 
    int mid=(startIndex+lastIndex)/2;
   
    if(element==array[mid])
      return false;
    else if(array[mid]>element)
      lastIndex=mid-1;
    else 
      startindex=mid+1;
  }
  return true;
}

int main()
{ int size;
  cout<<"enter the size of the array\t";
  cin>>size;
  
  int *arr=new int[size];
  cout<<"enter the elements:\n";
  for(int i=0;i<size;i++)
    cin>>arr[i];
 
  //SORTING THE ARRAY
  sort(arr,arr+size);
 
  cout<<"\n ARRAY AFTER SORTING\n";
  for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
  
 
 cout<<"enter the number to be searched\t";
 int num;
 cin>>num;
 
 
 cout<<"\n BINARY SEARCH USING ITERATIVE FUNCTION:\n";
   if(!binarySearchIterative(arr,0,size-1,num)
      cout<<"\t"<<num<<"exists in the array";
      else
       cout<<"t"<<num<<"does not exists in the array";
      
      
  cout<<"\n BINARY SEARCH USING RECUSRIVE FUNCTION\N";
      if(!binarySearchReacursive(arr,0,size-1,num)
      cout<<num<<"\t"<<"exists in the array";
      else
       cout<<num<<"\t"<<"does not exists in the array";
 



  return 0;
}
