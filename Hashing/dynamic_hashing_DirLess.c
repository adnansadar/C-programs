#include <stdio.h>
#include <stdlib.h>
int hashvalue;
int hashtable[100][2];
  int checkarr[100];
  int checkarr[100] = {0};

void insert()
{
  int n;
  printf("Enter value to be entered in the hashtable:\n");
  scanf("%d",&n);
  hashvalue = n%100;
  for(int i=0;i<=hashvalue;i++)
  {
    if(checkarr[i]==0)
      checkarr[i]=1;
  }
    if (hashtable[hashvalue][0]=='\0')
      hashtable[hashvalue][0]=n;
    else if (hashtable[hashvalue][1]=='\0')
      hashtable[hashvalue][1]=n;
    else if (hashtable[hashvalue][0] && hashtable[hashvalue][1]!='\0'){
      if(hashtable[hashvalue][0]<n)
        hashtable[hashvalue][0]=n;
      else if(hashtable[hashvalue][1]<n)
        hashtable[hashvalue][1]=n;
  }
}

void display()
{
  printf("The hashtable:\n");
  for(int i=0;i<=hashvalue;i++)
  {
    for (int j = 0; j < 2; ++j)
    {
      printf("%d  ",hashtable[i][j] );
    }
    printf("\n");
  }
}

int main()
{
  int ch;
  do
  {
    printf("1.Insert\n2.Display\n3.Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:       
      insert();
      break;
      case 2:
      display();
      break;
      case 3:
      exit(1);
      default:
      printf("Wrong value entered!\n");
    }
  }while(ch!=3);

}