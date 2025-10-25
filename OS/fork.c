#include <unistd.h>
#include <stdio.h>
int main() {
pid_t pid=fork();
if (pid==-1){
return 1;
}
else if(pid==0) {
printf("This is the child process with PID%d\n",getpid());
}
else{
printf("This is the parent process with PID%d\n",getpid());
}
return 0;
} 
