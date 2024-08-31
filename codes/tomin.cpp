int toMin(string s)
{
    int hrs=(int)(s[0]-'0')*10+(int)(s[1]-'0');
    int min=(int)(s[3]-'0')*10+(int)(s[4]-'0');
    return hrs*60+min;
}