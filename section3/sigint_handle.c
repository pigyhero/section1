#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void sigint_handler(int sig) {
    (void)(sig);
    char c;
    printf("Do you really wanna quit? [y/n]?");
    c = getchar();
    if (c == 'y' || c == 'Y')
        exit(0);
}

int main() {
    signal(SIGINT, sigint_handler);
    while (1) { printf("lol\n"); }
}
