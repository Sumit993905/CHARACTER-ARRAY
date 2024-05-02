
#include <iostream>
#include <string>

using namespace std;

bool checkPalindrome(string s){
    int st = 0;
    int e = s.size()-1;
    
    while(st<=e){
        if(s[st]==s[e]){
            st++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}
 
int main()
{
 
    string s;
    cout<<"Enter your String : "<<endl;
    cin>>s;
    string result;
    
    
    result = (checkPalindrome(s)) ? "Palindrome" : "Not Palimdrome";
    
    cout<<result;

    return 0;
}