#include <stdio.h>
#include <stdlib.h>
#include <poll.h>
#include <fcntl.h>

int main(int argc, const char *argv[])
{
    struct pollfd fds[1];
    char aux[16];
    int fd;
 
    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "60", 2);
    close(fd);
 
    fd = open("/sys/class/gpio/gpio60/direction", O_WRONLY);
    write(fd, "in", 2);
    close(fd);
 
    fd = open("/sys/class/gpio/gpio60/edge", O_WRONLY);
    write(fd, "rising", 6);
    close(fd);
 
    for (;;) {
 
        fds[0].fd = open("/sys/class/gpio/gpio60/value", O_RDONLY);
        fds[0].events = POLLPRI | POLLERR;
 
        /* need to read before polling */
        read(fds[0].fd, aux, sizeof(aux));
 
        /* block waiting for GPIO interrupt */
        poll(fds, 1, -1);
 
        if (fds[0].revents & POLLPRI)
            printf("Botão pressionado!\n");
 
        close(fds[0].fd);
    }
 
    return 0;
}   