#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printletterCombinations(string digit, int i,vector<string>&ans, string mapping[])
{
  //base case 
  if(i>=digit.length())
  { 
    //print krwado 
    for(auto it:ans)
    {
        cout<<it<<" ";
    }

    if(digit.length()==0)
    {
        cout<<"{}";
    }
    cout<<endl;
    return;
  }
  else
  {
    int number= digit[i]-'0';
    string value = mapping[number];
    for(int j=0;j<value.size();j++)
    { 
      //to convert char to string takes an empty string and further add element in that empty string  
      char element=value[j];
      string s="";
      s=s+element;

        ans.push_back(s);
        printletterCombinations(digit,i+1,ans,mapping);
        ans.pop_back();
    }
    
  }
}

int main()
{
    string digit;
    cout<<"Enter string ";
    cin>>digit;
    
    string mapping[10]={"", "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>ans;
    printletterCombinations(digit,0,ans,mapping);
    return 0;
}