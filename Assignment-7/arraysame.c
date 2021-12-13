/*@
requires n>0;
ensures\valid_read(a+(0..n-1));
ensures\valid_read(b+(0..n-1));
behavior not_found:
assumes\forall integer i;
0<= i<n==>a[i]!=b[i];
ensures\result == 0;
behavior found:
assumes\exists integer i;
0<=i<n&&a[i]==b[i];
ensures\result == 1;
complete behaviors;
disjoint behaviors;
*/
int arraylength(int a[], int b[], int n, int m)
{
    int count = 0;
    /*@
    loop invariant\forall integer j;
    0<= j<i ==>a[i] !=b[i];
    loop invariant 0<= i<= n;
    loop assigns i,count;
    loop variant n-i;
    */
    for (int i = 0; i < n; i++)
    {
        if (a[i] = b[i])
            return 1;
    }
    return 0;
}