#include<bits/stdc++.h>
class Solution {
public:
    string toLowerCase(string s) {
        int val=0;
        string var="";
        for(int i=0;i<s.length();i++){
            val=(int)s[i];
            if(val>=65 && val<=90){
                val+=32;
            }
            var+=char(val);
        }
        return var;
    }
};
