#include <stdio.h>

int main()
{
int m[2][3]; // 0,1
int n[2][3];
int i,j;

//A
printf("행렬 A 입력 :\n");

for(i=0;i<2;i++) //1,2
{

  for(j=0;j<3;j++)
  {
    printf("%d행 %d열? ",i+1,j+1);
    scanf("%d",&m[i][j]);
  }
}

printf("\n행렬 A\n");

for(i=0;i<2;i++)
{
  // 9(1,3)끝나고 엔터 새 행 시작
//  printf("[\t%d]\n",m[i][j]);
//printf("ooo\n");
  printf("[");

    for(j=0;j<3;j++)
    {
      printf(" %3d ",m[i][j]);   // 00 01 02 / 10 11 12

    }
  printf("]\n");
}

printf("\n");
//B
printf("행렬 A 입력 :\n");

for(i=0;i<2;i++) //1,2
{

  for(j=0;j<3;j++)
  {
    printf("%d행 %d열? ",i+1,j+1);
    scanf("%d",&n[i][j]);
  }
}

printf("\n행렬 B\n");

for(i=0;i<2;i++)
{
  printf("[");

    for(j=0;j<3;j++)
    {
      printf(" %3d ",n[i][j]);   // 00 01 02 / 10 11 12

    }
  printf("]\n");
}
printf("\n");

//C =  A+B
for(i=0;i<2;i++)
{
  printf("[");

  for(j=0;j<3;j++)
  {
    m[i][j] += n[i][j];
    printf("  %3d ",m[i][j]);
  }

  printf("]\n");

}

return 0;
}
