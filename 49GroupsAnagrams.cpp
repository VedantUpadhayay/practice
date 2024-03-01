#include"bits/stdc++.h"
#include"strings.h"
#include"vector"
using namespace std;
vector<string> grpanagrams(vector<string> &strs){
    cout<<"Inside function"<<endl;
    string key=strs[0];
    vector<string> result;
    result.push_back(key);
    for(int i=1;i<strs.size();i++)
    {
        string key2=strs[i];
        // cout<<key2<<endl;
        for(int j=0;j<key.size();j++)
        {
            for(int k=0;k<key2.size();k++)
            {
                if(key[j]==key2[k])
                {
                    if(result[result.size()-1]!=key2)
                    result.push_back(key2);
                    cout<<key[j]<<endl<<key2[k]<<endl;
                }
             }

    }
    
}
return result;
}
int main()
{
    vector<string> strs={"tea","eat","tab"};
    vector<string> result=grpanagrams(strs);
    for(int i=0;i<=result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}