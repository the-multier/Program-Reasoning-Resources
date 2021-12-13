/*@
requires n>0;
ensures \valid_read(arr + (0..n-1));
ensures \forall integer i;
0 <= i < n ==> \result >= arr[i];
*/

int arrayzero(int arr[], int n)
{
    /*@
    loop invariant \forall integer i;
    0 <= i<j ==>arr[i]==0;
    loop invariant 1 <=j<= n;
    loop assigns j;
    loop variant n-j;
    */

    for (int j = 1; j < n; j++)
    {
        arr[j] == 0;
    }
}