#include <stdio.h>
int main(void)
{
  printf("hello20150328\n");
  printf("I am learning how to update from git\n");
  printf("上次直接修改.c后使用git commit -m "注释"提交到本地仓库，然后git push的话没能成功，因为没有在提交前把modified:hello.c这句的注释去掉");
　printf("这次的做法是：修改.c后直接git add　hello.c　然后git commit -m "xxx",看下最后能不能push成功");
  printf("vi hello.c       git add hello.c     git commit -m     git push    成功！以后应该就可以用这种方式上传了");
  printf("现在测试一下更简单的方法：git commit -am "这个是最简单的方法了，缺点是不能刷新新加的文件"");
  return 0;
}
