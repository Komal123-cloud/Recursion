#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printSubsets(int arr[], int i, int n, vector<int>&ans)
{ 
  //base case 
  if(i==n)
  { 
    //Print krwado
    vector<int>::iterator it;
    for(it= ans.begin();it<ans.end();it++)
    {
      cout<<*it<<" ";
    }
    //null print krwdo
    if(ans.size()==0)
    {
      cout<<"{}";
    }
    cout<<endl;
    return; 
  }

  else
  {
    //exclude
    printSubsets(arr,i+1,n,ans);

    //include
    ans.push_back(arr[i]);
    printSubsets(arr,i+1,n,ans);
    ans.pop_back();
  }
}

int main()
{ 
  int n;
  cout<<"enter n";
  cin>>n;

  int arr[n];
  cout<<"Enter the elements in an array";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  vector<int>ans;
  printSubsets(arr,0,n,ans);
  return 0;
}
