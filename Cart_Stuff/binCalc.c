#include <stdio.h>
#include <math.h>
#include <stdint.h>

//Peter Volstrup - 2015
int binary_decimal(int n);
int decimal_binary(int n);
int8_t unsignedSigned(int s);
uint8_t signedUnsigned(int u);
int16_t unsignedSigned16(int s);
uint16_t signedUnsigned16(int u);

int main()
{
   int n;
   int h;
   int u;
   int s;
   char c;
   printf("Instructions:\n");
  // printf("1. Enter alphabet 'd' to convert binary to decimal.\n");
  // printf("2. Enter alphabet 'b' to convert decimal to binary.\n");
  // printf("3. Enter alphabet 'h' to convert decimal to hex.\n");
  // printf("4. Enter alphabet 'u' to convert signed to unsigned.\n");
  // printf("5. Enter alphabet 's' to convert unsigned to signed.\n");
   printf("Enter 'b' for binary input.\n");
   printf("Enter 'h' for hex input.\n");
   printf("Enter 'u' for unsigned input. (8-bit)\n");
   printf("Enter 's' for signed input. (8-bit)\n");
   printf("Enter 'y' for unsigned input. (16-bit)\n");
   printf("Enter 'x' for signed input. (16-bit)\n");
   scanf("%c",&c);
   if (c =='b' || c == 'B')
   {
       printf("Enter a binary number: ");
       scanf("%d", &n);
       printf("%d = input in binary \n", n);      
       h = binary_decimal(n);
       u = h;
       s = h;
       printf("0x%X in hex\n", h);
       printf("%u in unsigned\n", signedUnsigned(u));
       printf("%-d in signed\n",  unsignedSigned(s));

   }
   
   if(c == 'h' || c == 'H')
   {
        printf("Enter hex input number:\n");
        scanf("%X", &h);
        printf("0x%X in hex\n", h);

        u = h;
        s = h;
        printf("%u in unsigned\n", signedUnsigned(u));
        printf("%-d in signed\n",  unsignedSigned(s));
        printf("%d in binary\n", decimal_binary(u));

   }
   if (c == 's' || c == 'S'){
        printf("Enter signed integer (8-bit):\n");
        scanf("%d", &u);
        
        printf("%-d in signed \n", u);
        printf("%u in unsigned\n", signedUnsigned(u));
        printf("0x%X in hex\n", signedUnsigned(u));
        printf("%d in binary\n ", decimal_binary(signedUnsigned(u)) );

   }
   if (c == 'u' || c == 'U'){
        printf("Enter unsigned integer (8-bit):\n");
        scanf("%d", &s);

        printf("%d in unsigned \n", s);
        printf("%-d in signed\n", unsignedSigned(s));
        printf("%d in binary\n", decimal_binary(s) );
        printf("0x%X in hex\n", s);
   }
   if (c == 'x' || c == 'X'){
        printf("Enter signed integer (16-bit):\n");
        scanf("%d", &u);
        
        printf("%-d in signed \n", u);
        printf("%u in unsigned\n", signedUnsigned16(u));
        printf("0x%X in hex\n", signedUnsigned16(u));
        printf("%d in binary\n ", decimal_binary(signedUnsigned16(u)) );

   }
   if (c == 'y' || c == 'Y'){
        printf("Enter unsigned integer (16-bit):\n");
        scanf("%d", &s);
        printf("%d in unsigned \n", s);
        printf("%-d in signed\n", unsignedSigned16(s));
        printf("%d in binary\n", decimal_binary(s) );
        printf("0x%X in hex\n", s);
   }
   return 0;
}

int decimal_binary(int n)  /* Function to convert decimal to binary.*/
{
    int rem, i=1, binary=0;
    while (n!=0)
    {
        rem=n%2;
        n/=2;
        binary+=rem*i;
        i*=10;
    }
    return binary;
}

int binary_decimal(int n) /* Function to convert binary to decimal.*/

{
    int decimal=0, i=0, rem;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        decimal += rem*pow(2,i);
        ++i;
    }
    return decimal;
}

int8_t unsignedSigned(int s){
  int8_t b = (uint8_t) s;
  return b;
}

uint8_t signedUnsigned(int u){
  uint8_t bb = (int8_t) u;
  return bb;
}

int16_t unsignedSigned16(int s){
  int8_t b = (uint16_t) s;
  return b;
}

uint16_t signedUnsigned16(int u){
  uint16_t bb = (int16_t) u;
  return bb;
}


