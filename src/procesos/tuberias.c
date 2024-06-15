#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
    pid_t pid;
    int pipe_fd[2];

    if (pipe(pipe_fd) == -1){
        perror("Error al crear la tuberia");
        exit(EXIT_FAILURE);
    }

    pid = fork();
    if (pid == -1) {
        printf("Fallo en fork\n");
        return -1;
    } else if (pid == 0) {
        printf("Proceso hijo: PID %d\n", getpid());
    } else {
        printf("Proceso padre: PID %d\n", getpid());
    }
    if(pid == 0){
        close(pipe_fd[1]);

        char mensaje[50];
        ssize_t bytes_leidos;

        bytes_leidos = read(pipe_fd[0], mensaje, sizeof(mensaje));

        if(bytes_leidos == -1){
            perror("Error al leer desde la tuberia");
            exit(EXIT_FAILURE);
        }
        printf("P. hijo: Mensaje recibido desde el proceso padre: %s\n", mensaje);
        close(pipe_fd[0]);
    }else{
        close(pipe_fd[0]);

        char mensaje[] = "Hola desde el proceso padre";
        ssize_t bytes_escritos;

        bytes_escritos = write(pipe_fd[1], mensaje, sizeof(mensaje));
        if (bytes_escritos == -1){
            perror("Error al escribir en la tuberia");
            exit(EXIT_FAILURE);
        }
        close(pipe_fd[1]);
    }
    return 0;
}