class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long temp = x;
        long long rev = 0 ; 

        while(temp != 0){
            rev = temp%10+rev*10;

            temp=temp/10;
        }

        if(rev == x){
            return true;
        }else{
            return false;
        }


    }
};