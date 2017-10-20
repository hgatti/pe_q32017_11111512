#include <stdio.h>
#include <stdlib.h>

void movimento(int n, char orig, char dest, char aux){
   if (n==1) {
    printf("%c-%c\n", orig, dest);
   return;
       
   }
	  movimento(n-1,orig,aux,dest);
	  printf("%c-%c\n",orig, dest);
	  movimento(n-1,aux,dest,orig);
};

int main()
{
    
   int n;
   scanf("%d",&n);
   movimento(n,'A','C','B');
   
   
   return 0;
}
