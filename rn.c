#include <stdio.h>
#include <string.h>
#include <math.h>

int x (float c) { return ((int)c%2)?pow(10,(int)((13*c*c-144*c+371)/120.0)):((-11*c*c*c+628*c*c-11572*c+68720)/96.0); }

int main(int argc, char *argv[])
{
   char *p=argv[1];
   int  r=0,l=strlen(p);
   for (int i=0; i<l; i++) { float c=(int)p[i]-66,n=(i+1<l)?(int)p[i+1]-66:0;
                             int v=x(c),vn=(n)?x(n):0;
                             r=(v<vn)?r-v:r+v;
                           }
   printf("%s = %d\n",p,r);
}
