class Solution {
public:
    int romanToInt(string s) {
       int sum = 0;
for (int i = 0; i< s.size(); i++)
switch(s[i]) {
    case 'I': if (s[i+1] == 'V' )
        sum += 4;
        else if (s[i+1] == 'X')
            sum += 9;
        else
        sum += 1; break;
    case 'V':
        if ( i != 0)
        {
        if (s[i-1] == 'I')
        break;
        }
        
        sum += 5; 
        break;
    case 'X':
        if ( i != 0) {
        if (s[i-1] == 'I' )
        break;
        }
         if (s[i+1] == 'L')
            sum += 40;
        else if (s[i+1] == 'C')
            sum += 90;
        else
        sum += 10; break;
        
    case 'L': if ( i != 0)
    {
        if (s[i-1] == 'X' )
        break;
    }
        
        sum += 50; break;
        
    case 'C':
        if ( i != 0)
        {
        if (s[i-1] == 'X' )
        break;
}
        if(s[i+1] == 'D')
            sum += 400;
        else if (s[i+1] == 'M')
            sum += 900;
        else
        sum += 100; break;
        
    case 'D':if ( i != 0)
    {
        if (s[i-1] == 'C')
        break;
    }
        
        sum += 500; break;
    case 'M':if ( i != 0)
    {
        if (s[i-1] == 'C')
        break;
    }
        
        sum += 1000; break;
    default : cout<<"baka";break;
    }
        return sum;
    }
};