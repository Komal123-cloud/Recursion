#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void printSubsequence(string str,int i,vector<string>&ans)
{
    //base case
    if(i==str.length())
    {   //to print krwado ans 
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        //null print 
        if(ans.size()==0)
        {
            cout<<"null";
        }
        cout<<endl;
        return;
    }
    else
    {
        //exclude
        printSubsequence(str,i+1,ans);

        //include
        char element=str[i];
        //convert char to string
        string s="";
        s=s+element;
        //convert char to string (using string constructor that takes a single char argument)
        //most imp step 
        //string s(1,element); //iski wjh s error arha tha
        ans.push_back(s);
        printSubsequence(str,i+1,ans);
        ans.pop_back();
    }
}

int main()
{  
     string str;
     cout<<"Enter string: ";
     cin>>str;

    vector<string>ans;
    printSubsequence(str,0,ans);
    return 0;
}