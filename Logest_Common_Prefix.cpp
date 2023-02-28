class Solution 
{
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        int i, length, j, n, flag ;
        char ch ;
        string result = "" ;
        length = strs[0].size() ;
        n = strs.size() ;
        for(i=0;i<length;i++)
        {
            ch = strs[0][i] ;
            for(j=1;j<n;j++)
            {
                if(ch!=strs[j][i])
                {
                    flag = 0 ;
                    break ;   
                }
                else
                    flag = 1 ;    
            }
            if(flag)
                result.push_back(ch) ;
            else
                break ;
        }
        return result ;
    }
};