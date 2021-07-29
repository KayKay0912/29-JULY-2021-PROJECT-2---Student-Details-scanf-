#include <stdio.h>

struct student
{
  int pinnumber;
  char name[20];
}s1,s2;

int main()
{
  //struct student s1={123, "Cady"},s2={234,"Kay"};
  printf("Enter the pinnumber and name of s1:\n");
  scanf("%d%s",&s1.pinnumber, s1.name);
  printf("Enter the pinnumber and name of s2:\n");
  scanf("%d%s",&s2.pinnumber, s2.name);
  printf("student details:\n");
  printf("s1 details\n");
  printf("%d\t%s\n", s1.pinnumber, s1.name);
  printf("s2 details\n");
  printf("%d\t%s\n", s2.pinnumber, s2.name);

  return 0;
}