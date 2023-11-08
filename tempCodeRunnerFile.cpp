//corrected code of cpp
#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

void printPermutations(vector<int>nums ,vector<vector<int>>& ans, int i,int n)
    {
        //base case 
        if(i>=n)
        {
           ans.push_back(nums);
           return;
        }
       
       //agar nums already vector hota to hum ans m directly ans.push_back(nums) ?
       //y chij kr skte hai ?

      else
      {
        //recursive call function 
        //placing each character at every place 
        for(int j=i;j<n;j++)
        {
            swap(nums[j],nums[i]);
            printPermutations(nums,ans,i+1,n);
            //backtrack
           swap(nums[j],nums[i]);
        }
      }
    } 
    

int main()
{    
  int n;
  cout<<"Enter n ";
  cin>>n;

  // int nums[n];
  // cout<<"Enter elements in an array"<<endl;
  // for(int i=0;i<n;i++)
  // {
  //   cin>>nums[i];
  // }

  //inserting elements in array of vectors
  vector<int>nums(n);
  cout<<"Enter elements in an array ";
  for(int i=0;i<n;i++)
  {
    cin>>nums[i];
  }

 
 vector<vector<int>>ans;
 printPermutations(nums,ans,0,n);

  //to print 2D vector 
 //diff kya hota h ans.size() mei , ans[i].size() mei 

 for(int i=0; i<ans.size(); i++)
 {
    for(int j=0; j<ans[i].size(); j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
 }

 return 0;

}