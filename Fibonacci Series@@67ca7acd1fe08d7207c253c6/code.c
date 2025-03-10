 int fibo(int n);
int main(){
   int n;
   scanf("%d",&n);
   printf("%d",fibo(n));
   return 0;
}
int fibo(int n){
   if(n == 0){
      return 0;
   }
   if (n == 1){
      return 1 ;
   }
   int fibonm1 = fibo(n-1);
   int fibonm2 = fibo(n-2);
   int fiboN = fibonm1 +fibonm2;
   // printf("%d",fiboN);
   return fiboN;

}