#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]) {
    int pid;

    if (argc >= 2) {
        pid = atoi(argv[1]);
        getPriority(pid);
    } else {
        printf(1, "Comando incorreto. Uso apropriado: getPriority pid.");
    }

    exit();
}
