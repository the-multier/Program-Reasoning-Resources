/*@ requires n > 0;
ensures\result == n*(n+1)/2;
*/
int sigma(int n) {
int s = 0;
int i = 1;
while (i <= n) {
s = s + i;
i = i + 1;
}
return s;
}