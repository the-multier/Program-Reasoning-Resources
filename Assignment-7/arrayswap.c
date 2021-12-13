/*@
ensures arr[i] ==\old(arr[j]);
ensures arr[j] ==\old(arr[i]);
*/
int arrayswap(int arr[], int n, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}