#include<unistd.h>
#include<stdio.h>
int main(){
pid_t pid = getpid();
printf("Process id : %d\n",pid);
return 0;

}
