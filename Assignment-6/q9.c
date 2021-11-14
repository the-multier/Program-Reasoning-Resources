/*@ requires n > 0;
    ensures \result==n*(n+1)/2;
*/
int sigma(int n)
{
    int s = 0;
    int i = n;
    /*@
           loop invariant s == (n*(n+1)/2)-((i+1)*i/2);
           loop invariant 0 <= i <= n;
           loop assigns s,i;
           loop variant i;
           */
    while (i > 0)
    {
        s = s + i;
        i = i - 1;
    }
    return s;
}