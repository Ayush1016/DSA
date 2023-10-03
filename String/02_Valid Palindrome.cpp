Link: https://leetcode.com/problems/valid-palindrome/

class Solution {
    bool valid(char cha){
    if((cha >= 'a' && cha <= 'z' ) || ( cha >= 'A' && cha <= 'Z' ) || ( cha >= '0' && cha <= '9' )){
        return 1;
    }
    else return 0;
}

    bool checkpalindrome(string ch){
        int s=0;
        int e=ch.length()-1;
        while(s<e){
            if(ch[s]!=ch[e]){
                return 0;
            }
            else{
            s++;
            e--;
            }
        }
        return 1;
    }
public:

    bool isPalindrome(string s) {
    string temp="";
    for(int i=0;i<s.length();i++){
        if(valid(s[i])){
            temp.push_back(tolower(s[i])); // Convert to lowercase using tolower()
        }
    }
    return checkpalindrome(temp);
}


};
