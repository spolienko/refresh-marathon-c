int mx_factorial_iter(int n)
{    
    int res = 0;
    if( n >= 0 && n < 13)
    {
    	 res++;
         for(int i = 1; i <= n; i++)
             res *= i;
   }
    return res;
}
