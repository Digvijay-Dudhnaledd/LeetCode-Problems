class Solution {
public:
    int romanToInt(string s) 
    {
        int i = 0, length, num = 0 ;
        length = s.size() ;
        while(i<length) 
        {
            switch(s[i])
            {
                case 'M':
                    num = num + 1000 ;
                    i=i+1 ;
                    break; 
                case 'D' :
                    num = num + 500 ;
                    i=i+1 ;
                    break;
                case 'C' :
                    if(s[i+1]=='M')
                        {num = num + 900 ;
                        i=i+2;}
                    else if(s[i+1]=='D')
                        {num = num + 400 ;
                        i=i+2;}
                    else
                        {num = num + 100 ;
                        i=i+1;}
                    break;
                case 'L' :
                    num = num + 50 ;
                    i=i+1 ;
                    break;
                case 'X' :
                    if(s[i+1]=='C')
                        {num = num + 90;
                        i=i+2;}
                    else if(s[i+1]=='L')
                        {num = num + 40;
                        i=i+2;}
                    else
                        {num = num + 10;
                        i=i+1;}
                    break;
                case 'V' :
                    num = num + 5;
                    i = i+1;
                    break;
                case 'I' :
                    if(s[i+1]=='X')
                        {num = num + 9;
                        i=i+2;}
                    else if(s[i+1]=='V')
                        {num = num + 4;
                        i=i+2;}
                    else
                        {num= num + 1;
                        i=i+1;}
                    break;
            }
        }
        return num;
    }
};