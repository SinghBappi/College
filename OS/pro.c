#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
int main(){

int fd= open("hi.txt",O_RDONLY);
if(fd == -1){
perror("Error: file cannot be opened");
return 1;
}
printf("File open sucessfully");
close(fd);
return 0;

}
