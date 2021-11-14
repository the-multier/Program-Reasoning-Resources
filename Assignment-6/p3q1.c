/*@ requires n > 0;
ensures\result == (n*(n+1)*((2*n)+1))/6;
*/
int sigma(int n) {
int s = 0;
int i = 1;
/*@
loop invariant s==((i-1)i((2*i)-1))/6;
loop invariant i<=i<=n+1;
loop assigns s, i;
*/
while (i <= n) {
s = s +(i*i);
i = i + 1;
}
return s;
}