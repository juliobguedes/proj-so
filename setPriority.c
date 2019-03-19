#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]) {
    int pid;
    int priority;

    if (argc >= 3) {
        pid = atoi(argv[1]);
        priority = atoi(argv[2]);
        setPriority(pid, priority);
    } else {
        printf(1, "Comando incorreto. Uso apropriado: setPriority pid prioridade.");
    }

    exit();
}
