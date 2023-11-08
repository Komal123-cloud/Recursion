//corrected code of cpp 
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void printPermutations(int nums[],vector<vector<int>>& ans, int i,int n)
    {
        //base case 
        if(i==n)
        {
            vector<int>temp;
            for(int i=0; i<n; i++)
            {
                temp.push_back(nums[i]);
            }
            ans.push_back(temp);
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

  int nums[n];
  cout<<"Enter elements in an array"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>nums[i];
  }

 vector<vector<int>>ans;
 printPermutations(nums,ans,0,n);
 for(int i=0; i<ans.size(); i++)
 {
    for(int j=0; j<ans[i].size(); j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
 }

  //to print 2D vector 
 //diff kya hota h ans.size() mei ans ans[i].size() mei 

 return 0;

}