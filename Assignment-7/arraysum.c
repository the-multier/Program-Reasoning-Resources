/*@
requires n>0;
ensures \valid_read(arr + (0..n-1));
ensures \forall integer i;
0 <= i < n ==> \result >= arr[i];
*/

int arraysum(int arr[], int n)
{
    int sum = 0;

    /*@
    loop invariant \forall integer i;
    0 <= i<j ==> sum >= arr[i];
    loop invariant 1 <=j<= n;
    loop assigns j, sum;

    loop variant n- j;
    */

    for (int j = 1; j < n; j++)
    {
        sum += arr[j];
    }
    return sum;
}