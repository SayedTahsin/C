#include<iostream>
using namespace std;
void shift (string &s){
   for(int i=0;s[i];i++){
    s[i]++;
   }
    return ;
}
int main(){
string s;
 getline(cin,s);
 shift(s);
 cout<<s;
 return 0;
}
