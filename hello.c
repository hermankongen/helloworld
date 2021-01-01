#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //greate the user with name
    string answer = get_string("whats's your name?");
    printf("hello,%s\n",answer);
}