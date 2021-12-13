/*@
requires n>0;
ensures\valid_read(arr+(0..n-1));
behavior notfound:
assumes\forall integer i;
0<= i<n ==>sizeof(arr)/sizeof (arr[0] )!=n;
ensures\result == 0;
behavior found:
assumes\exists integer i;
0<= i<n && sizeof(arr)/sizeof (arr[0] )==n;
ensures\result == 1;
complete behaviors;
disjoint behaviors;
*/
int linearsearch(int arr[], int n)
{
    int temp = 0;
    /*@
    loop invariant\forall integer j;
    0<= j<i ==>sizeof(arr)/sizeof (arr[0] )!=n;
    loop invariant 0<= i<= n;
    loop assigns i , temp;
    loop variant n-i;
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                return 1;
        }
    }
    return 0;
}