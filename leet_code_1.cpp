#include <bits/stdc++.h>
#include<string.h>
using namespace std;
class Solution {
public:
    string res="";
    string removeKdigits(string num, int k) {
        if(k==0){
            return res+num;
        }
        int n = num.length() ;
        if(n<=k){
            return res;
        }
        int temp = num[0];
        for(int i =1 ; i<n+1 ; i++){
            if(num[i]< temp){
                temp = num[i];
            }
        }
        int a;
        for(int i =1 ; i<n+1 ; i++){
            if(num[i] == temp){
                a = i;
                break;
			}
        }
        res = res + num[a];
            string sez;
        for(int i = a ; i<n;i++ ){
        	sez[a-i]= num[i];
		}
        removeKdigits(sez,k-a);
        return res;
        
        
    }
};
int main()
{
    string str = "765028321";
    int n = 5;
    Solution obj;
    string lol = obj.removeKdigits(str,n);
    cout<<lol<<endl;
    return 0;
}