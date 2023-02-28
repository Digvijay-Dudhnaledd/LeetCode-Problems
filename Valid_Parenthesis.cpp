class Solution 
{
public:
    bool isValid(string s) 
    {
        int i , length ;
        length = s.size() ;
        stack <int> paranthesis ;
        for(i=0;i<length;i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                paranthesis.push(s[i]) ;
            }
            else
            {
                if(paranthesis.empty())
                    return false ;
                else if(s[i]==')'&&paranthesis.top()=='(')
                    paranthesis.pop() ;
                else if(s[i]=='}'&&paranthesis.top()=='{')
                    paranthesis.pop() ;
                else if(s[i]==']'&&paranthesis.top()=='[')
                    paranthesis.pop() ;
                else
                    return false ;
            }
        }    
        if(paranthesis.empty())
            return true ;
        else
            return false ;   
    }
    
};