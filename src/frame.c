#include <unistd.h>
#include <ncurses.h>
#include <termios.h>
#include <sys/ioctl.h>
int main() {
    struct termios terminal;
    tcgetattr(STDIN_FILENO,&terminal);
    terminal.c_lflag &= ~(ECHO|ISIG|IEXTEN);
}
