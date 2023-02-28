class Solution {
public:
    bool isPalindrome(int x) 
    {
        bool answer ;
        if(x < 0) 
            return false;
        else
        {
            string num = to_string(x) ;
            int i, j, length ;
            length = num.size() ;
            for(i=0,j=(length-1);  i<=j;i++,j--)
            {
                if(num[i]!=num[j])
                {  
                    answer = false ;
                    return answer  ;
                }
                else
                    answer = true ;
            }
        }
        return answer ;
    } 
};