/*@
requires n>0;
requires m>0;
ensures\valid_read(a+(0..n-1));
ensures\valid_read(b+(0.. m-1));
behavior not_found:
assumes\forall integer i;
0<= i<n<=m==>m!=n;
ensures\result == 0;

behavior found:
assumes\exists integer i;
0<= i<n<= m&&m==n;

ensures\result == 1;
complete behaviors;
disjoint behaviors;
*/
int arraylength(int a[], int b[], int n, int m)
{
    if (n != m)
    {
        return 0;
    }
    return 1;
}