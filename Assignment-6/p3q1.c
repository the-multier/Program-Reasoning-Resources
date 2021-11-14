/*@
    requires n>0 && n<7;
    ensures 6*\result ==(n*(n+1)*(2*n+1));
*/

int sigma(int n)
{
    int sum = 0;
    int i = 1;
    /*@ 
        loop invariant 6*sum == (i)(i-1)(2*i-1);
        loop invariant 1<= i <= n+1;
        loop assigns sum,i;
        loop variant n-i;
    */
    while(i<=n)
    {
        
        sum = i*i + sum;
        i = i+1;
        
    }
    
    return sum;

}
