#include<stdio.h>

typedef struct _complex
{
  float real;
  float img;
}Complex;

int get_n(){
  int n;
  printf("Enter the number of complex numbers: ");
  scanf("%d", &n);
  return n;
}

Complex input_complex(){
    Complex c;
    printf("Enter the real part: ");
    scanf("%f", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &c.img);
    return c;
}

void input_n_complex(int n, Complex c[n]){
  for(int i=0; i<n; i++){
    c[i] = input_complex();
  }
}

Complex add(Complex a, Complex b){
    Complex res;
    res.real = a.real + b.real;
    res.img = a.img + b.img;
    return res;
}

Complex add_n_complex(int n, Complex c[n]){
  Complex res;
  res.img = 0;
  res.real = 0;
  for(int i=0; i<n; i++){
    res = add(res, c[i]);
  }
  return res;
}

void output(int n, Complex c[n], Complex result){
  if(n==1){
      printf("%0.2f + %0.2fi is %0.2f + %0.2fi\n", c[0].real, c[0].img, result.real, result.img);
  }else{
      for(int i=0; i<n-1; i++){
        printf("%0.2f + %0.2fi\n", c[i].real, c[i].img);
      }
      printf("+ %0.2f + %0.2fi is\n%0.2f + %0.2fi\n", c[n-1].real, c[n-1].img, result.real, result.img);
  }
}

int main(){
  int n = get_n();
  Complex c[n], res;
  input_n_complex(n, c);
  res = add_n_complex(n, c);
  output(n, c, res);
  return 0;
}