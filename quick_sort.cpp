#include<iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot=arr[s];
    int count =0;
    for(int i=s+1;i<=e;i++)
    {   
        if(arr[i]<pivot)
        {
             count++;
        }
        
    }
    
    //placed pivot at right position
    int pivotIndex=s+count;
    swap(arr[s], arr[pivotIndex]);

    //left and right wla part pivot ka sort krna h 
    int i=s; 
    int j=e;
    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<pivotIndex && j>pivotIndex) 
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s , int e)
{
   if(s>=e)
   {
      return;
   }
  
  //partition 
   int p = partition(arr, s, e);
   
   // recursive call

   //left wla part sort
   quickSort(arr, s,p-1);

   //right wla part sort
   quickSort(arr,p+1,e);
}


int main()
{  
    int n;
    cout<<"Enter the value of n";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements in an array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    quickSort(arr,0,n-1);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}