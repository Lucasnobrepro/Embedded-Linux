/*Versão 6 é a versão final com todo as fucionalidades ativas 
*-Usa Chamada de sistema poll para multiplas en
*
*
*
*
*
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <poll.h>
#include <fcntl.h>

//Inicia os Gpios
void initGpio()
{

    //Quando Errado
    FILE *errado_f = fopen("/sys/class/gpio/export", "a");
    /* Print error message and exit if fopen() failed */
    fprintf(errado_f, "73");
    /* Close file */
    fclose(errado_f);

    FILE *filegpio73_direction = fopen("/sys/class/gpio/gpio73/direction", "a");
    fprintf(filegpio73_direction, "out");
    /* Close file */
    fclose(filegpio73_direction);

    //GPIO 77
    FILE *fileGpio = fopen("/sys/class/gpio/export", "a");
    /* Print error message and exit if fopen() failed */
    fprintf(fileGpio, "46");
    /* Close file */
    fclose(fileGpio);

    FILE *filegpio46_direction = fopen("/sys/class/gpio/gpio46/direction", "a");
    fprintf(filegpio46_direction, "out");
    /* Close file */
    fclose(filegpio46_direction);

    //GPIO 65
    FILE *filegpio65 = fopen("/sys/class/gpio/export", "a");
    /* Print error message and exit if fopen() failed */
    fprintf(filegpio65, "65");
    /* Close file */
    fclose(filegpio65);

    FILE *filegpio65_direction = fopen("/sys/class/gpio/gpio65/direction", "a");
    fprintf(filegpio65_direction, "out");
    /* Close file */
    fclose(filegpio65_direction);

    //GPIO 77
    FILE *filegpio77 = fopen("/sys/class/gpio/export", "a");
    /* Print error message and exit if fopen() failed */
    fprintf(filegpio77, "77");
    /* Close file */
    fclose(filegpio77);

    FILE *filegpio77_direction = fopen("/sys/class/gpio/gpio77/direction", "a");
    fprintf(filegpio77_direction, "out");
    /* Close file */
    fclose(filegpio77_direction);

    //GPIO 75
    FILE *filegpio75 = fopen("/sys/class/gpio/export", "a");
    /* Print error message and exit if fopen() failed */
    fprintf(filegpio75, "75");
    /* Close file */
    fclose(filegpio75);

    FILE *filegpio75_direction = fopen("/sys/class/gpio/gpio75/direction", "a");
    fprintf(filegpio75_direction, "out");
    /* Close file */
    fclose(filegpio75_direction);

    //*************************************************************************************************//
    /*INICIALIZAÇÃO DE ENTRADA*/

    //GPIO 60
    //Inclui o GPIO
    FILE *fileGpio60 = fopen("/sys/class/gpio/export", "a");
    /* Print error message and exit if fopen() failed */
    fprintf(fileGpio60, "60");
    /* Close file */
    fclose(fileGpio60);

    //Seta a direção como entrada/in
    FILE *fileGpio60_direction = fopen("/sys/class/gpio/gpio60/direction", "a");
    fprintf(fileGpio60_direction, "in");
    /* Close file */
    fclose(fileGpio60_direction);

    //Habilita interrupção
    FILE *fileGpio60_edge = fopen("/sys/class/gpio/gpio60/edge", "a");
    fprintf(fileGpio60_edge, "rising");
    /* Close file */
    fclose(fileGpio60_edge);

    //GPIO 48
    FILE *fileGpio48 = fopen("/sys/class/gpio/export", "a");
    /* Print error message and exit if fopen() failed */
    fprintf(fileGpio48, "48");
    /* Close file */
    fclose(fileGpio48);

    FILE *fileGpio48_direction = fopen("/sys/class/gpio/gpio48/direction", "a");
    fprintf(fileGpio48_direction, "in");
    /* Close file */
    fclose(fileGpio48_direction);

    //Habilita interrupção
    FILE *fileGpio48_edge = fopen("/sys/class/gpio/gpio48/edge", "a");
    fprintf(fileGpio48_edge, "rising");
    /* Close file */
    fclose(fileGpio48_edge);

    //GPIO 117
    //Inclui o GPIO
    FILE *fileGpio117 = fopen("/sys/class/gpio/export", "a");
    /* Print error message and exit if fopen() failed */
    fprintf(fileGpio117, "117");
    /* Close file */
    fclose(fileGpio117);

    //Seta a direção como entrada/in
    FILE *fileGpio117_direction = fopen("/sys/class/gpio/gpio117/direction", "a");
    fprintf(fileGpio117_direction, "in");
    /* Close file */
    fclose(fileGpio117_direction);

    //Habilita interrupção
    FILE *fileGpio117_edge = fopen("/sys/class/gpio/gpio117/edge", "a");
    fprintf(fileGpio117_edge, "rising");
    /* Close file */
    fclose(fileGpio117_edge);

    //GPIO 115 inicialização
    FILE *fileGpio115 = fopen("/sys/class/gpio/export", "a");
    /* Print error message and exit if fopen() failed */
    fprintf(fileGpio115, "115");
    /* Close file */
    fclose(fileGpio115);

    FILE *fileGpio115_direction = fopen("/sys/class/gpio/gpio115/direction", "a");
    fprintf(fileGpio115_direction, "in");
    /* Close file */
    fclose(fileGpio115_direction);

    //Habilita interrupção
    FILE *fileGpio115_edge = fopen("/sys/class/gpio/gpio115/edge", "a");
    fprintf(fileGpio115_edge, "rising");
    /* Close file */
    fclose(fileGpio115_edge);
}
/*Picas Leds separadamente*/
void blinkLed_0()
{
    FILE *write_F;
    write_F = fopen("/sys/class/gpio/gpio46/value", "w");
    fprintf(write_F, "1");
    fclose(write_F);
    sleep(1);

    //print que corresponde a função de escrever 0 no pino do LED 0;
    write_F = fopen("/sys/class/gpio/gpio46/value", "w");
    fprintf(write_F, "0");
    fclose(write_F);
    sleep(1);
}

void blinkLed_1()
{

    FILE *write_F;
    write_F = fopen("/sys/class/gpio/gpio65/value", "w");
    fprintf(write_F, "1");
    fclose(write_F);
    sleep(1);

    //print que corresponde a função de escrever 0 no pino do LED 0;

    write_F = fopen("/sys/class/gpio/gpio65/value", "w");
    fprintf(write_F, "0");
    fclose(write_F);
    sleep(1);
}

void blinkLed_2()
{
    FILE *write_F;
    write_F = fopen("/sys/class/gpio/gpio77/value", "w");
    fprintf(write_F, "1");
    fclose(write_F);
    sleep(1);

    //print que corresponde a função de escrever 0 no pino do LED 0;
    write_F = fopen("/sys/class/gpio/gpio77/value", "w");
    fprintf(write_F, "0");
    fclose(write_F);
    sleep(1);
}

void blinkLed_3()
{
    FILE *write_F;
    write_F = fopen("/sys/class/gpio/gpio75/value", "w");
    fprintf(write_F, "1");
    fclose(write_F);
    sleep(1);

    //print que corresponde a função de escrever 0 no pino do LED 0;
    write_F = fopen("/sys/class/gpio/gpio75/value", "w");
    fprintf(write_F, "0");
    fclose(write_F);
    sleep(1);
}

//Pisca LEDS quando vencer
void blinkWin(){
    int contWin = 0;
    FILE *write_F;
    while(contWin < 2){
        //Acender
        write_F = fopen("/sys/class/gpio/gpio75/value", "w");
        fprintf(write_F, "1");
        fclose(write_F);

        write_F = fopen("/sys/class/gpio/gpio77/value", "w");
        fprintf(write_F, "1");
        fclose(write_F);
        
        write_F = fopen("/sys/class/gpio/gpio65/value", "w");
        fprintf(write_F, "1");
        fclose(write_F);
        
        write_F = fopen("/sys/class/gpio/gpio46/value", "w");
        fprintf(write_F, "1");
        fclose(write_F);

        sleep(1);
        //Apagar
        write_F = fopen("/sys/class/gpio/gpio46/value", "w");
        fprintf(write_F, "0");
        fclose(write_F);

        write_F = fopen("/sys/class/gpio/gpio75/value", "w");
        fprintf(write_F, "0");
        fclose(write_F);

        write_F = fopen("/sys/class/gpio/gpio77/value", "w");
        fprintf(write_F, "0");
        fclose(write_F);

        write_F = fopen("/sys/class/gpio/gpio65/value", "w");
        fprintf(write_F, "0");
        fclose(write_F);
        sleep(1);
        contWin++;
    }
      
}
//Pisca LED vermelho quando errar
void blinkRed(){
    FILE *write_F;
    write_F = fopen("/sys/class/gpio/gpio73/value", "w");
    fprintf(write_F, "1");
    fclose(write_F);
    sleep(1);

    //print que corresponde a função de escrever 0 no pino do LED 0;
    write_F = fopen("/sys/class/gpio/gpio73/value", "w");
    fprintf(write_F, "0");
    fclose(write_F);
    sleep(1);
}

int main(int argc, char const *argv[])
{
    initGpio();
    /*Poll variaveis*/
    struct pollfd fds[4];
    char aux[16];
    char aux2[16];
    char aux3[16];
    char aux4[16];
    int fd;
    int esperar = 0; //Pra tratar ruidos
                     /********************/
    int interator = 1;
    int i = 0, j = 0, k = 0;

    int vet[4] = {-1, -1, -1, -1}; //Vetor de preechimento randomico
    int vetAux[4] = {-1, -1, -1, -1};//Vetor de comparação

    int n = 0;    //vetor auxiliar interador
    int erro = 0; //Serve para detecta se ouve erro;

    FILE *write_F;
    while (interator = 1)
    {
        if (erro == 1)//Se tiver um erro quebra o while principal
            break;
        //Função gera valores aleatorios de 0 a 3;
        while (j < 4)
        {
            i = rand() % 4;

            switch (i)
            {
            case 0:
                printf("LED 0 esta acesso.\n");
                write_F = fopen("/sys/class/gpio/gpio46/value", "w");
                fprintf(write_F, "1");
                fclose(write_F);
                sleep(1);

                //print que corresponde a função de escrever 0 no pino do LED 0;
                printf("LED 0 esta apagado.\n");
                write_F = fopen("/sys/class/gpio/gpio46/value", "w");
                fprintf(write_F, "0");
                fclose(write_F);
                sleep(1);
                break;
            case 1:
                printf("LED 1 esta acesso.\n");
                write_F = fopen("/sys/class/gpio/gpio65/value", "w");
                fprintf(write_F, "1");
                fclose(write_F);
                sleep(1);

                //print que corresponde a função de escrever 0 no pino do LED 0;
                printf("LED 1 esta apagado.\n");
                write_F = fopen("/sys/class/gpio/gpio65/value", "w");
                fprintf(write_F, "0");
                fclose(write_F);
                sleep(1);
                break;
            case 2:
                printf("LED 2 esta acesso\n");
                write_F = fopen("/sys/class/gpio/gpio77/value", "w");
                fprintf(write_F, "1");
                fclose(write_F);
                sleep(1);

                //print que corresponde a função de escrever 0 no pino do LED 0;
                printf("LED 2 esta apagado.\n");
                write_F = fopen("/sys/class/gpio/gpio77/value", "w");
                fprintf(write_F, "0");
                fclose(write_F);
                sleep(1);
                break;
            case 3:
                printf("LED 3 esta acesso.\n");
                write_F = fopen("/sys/class/gpio/gpio75/value", "w");
                fprintf(write_F, "1");
                fclose(write_F);
                sleep(1);

                //print que corresponde a função de escrever 0 no pino do LED 0;
                printf("LED 3 esta apagado.\n");
                write_F = fopen("/sys/class/gpio/gpio75/value", "w");
                fprintf(write_F, "0");
                fclose(write_F);
                sleep(1);
                break;
            }
            vet[j] = i;
            j++;
            for (k = 0; k < 4; k++)
            { //Preenche o vetor com o que foi "pressionado".
                printf("%d ", vet[k]);
            }
            printf("\n");
        } //Fim do while que preeche o vetor de LEDS
        printf("FIM do preechimento do vetor!!\n");
        j = 0;

        /*Poll*/
        n = 0;
        while (n < 4)
        {
            //Abre os aquivos de butão e Diz quais eventos observar;
            fds[0].fd = open("/sys/class/gpio/gpio60/value", O_RDONLY);
            fds[0].events = POLLPRI | POLLERR;

            fds[1].fd = open("/sys/class/gpio/gpio48/value", O_RDONLY);
            fds[1].events = POLLPRI | POLLERR;

            fds[2].fd = open("/sys/class/gpio/gpio117/value", O_RDONLY);
            fds[2].events = POLLPRI | POLLERR;

            fds[3].fd = open("/sys/class/gpio/gpio115/value", O_RDONLY);
            fds[3].events = POLLPRI | POLLERR;

            /* need to read before polling */
            read(fds[0].fd, aux, sizeof(aux));

            read(fds[1].fd, aux2, sizeof(aux2));

            read(fds[2].fd, aux2, sizeof(aux3));

            read(fds[3].fd, aux2, sizeof(aux4));

            /* block waiting for GPIO interrupt */
            poll(fds, 4, -1);

            //if de tratamento de ruido...
            if (esperar == 0)
            {
                //Monitora os eventos pela chamada de sistema POLL
                //Cada if corresponde a um butão
                if (fds[0].revents & POLLPRI)
                {
                    printf("Botão pressionado 0!\n");
                    blinkLed_0();
                    esperar = 1;
                    vetAux[n] = 0;
                    if (vet[n] == vetAux[n])
                        n++;
                    else
                    {
                        printf("Errado tente novamente!!\n");
                        blinkRed();
                        erro = 1;
                        break;
                    }
                }
                else if (fds[1].revents & POLLPRI)
                {
                    printf("Botão pressionado 1!\n");
                    blinkLed_1();
                    esperar = 1;
                    vetAux[n] = 1;
                    if (vet[n] == vetAux[n])
                        n++;
                    else
                    {
                        printf("Errado tente novamente!!\n");
                        blinkRed();
                        erro = 1;
                        break;
                    }
                }
                else if (fds[2].revents & POLLPRI)
                {
                    printf("Botão pressionado 2!\n");
                    blinkLed_2();
                    esperar = 1;
                    vetAux[n] = 2;
                    if (vet[n] == vetAux[n])
                        n++;
                    else
                    {
                        printf("Errado tente novamente!!\n");
                        blinkRed();
                        erro = 1;
                        break;
                    }
                }
                else if (fds[3].revents & POLLPRI)
                {
                    printf("Botão pressionado 3!\n");
                    blinkLed_3();
                    esperar = 1;
                    vetAux[n] = 3;
                    if (vet[n] == vetAux[n])
                        n++;
                    else
                    {
                        printf("Errado tente novamente!!\n");
                        blinkRed();
                        erro = 1;
                        break;
                    }
                }
                esperar = 0;
            }
            else
            {   //Tratamento de ruido, quando esperar não for 1, ele fica em Eepera por 1/4 de segundo
                usleep(250);
            }
            //fecha os arquivos que estão sendo monitorados
            close(fds[0].fd);
            close(fds[1].fd);
            close(fds[2].fd);
            close(fds[3].fd);
        }
        if (erro != 1)//Verifica a flag de erro.
        {
            printf("PARABENS!!!!!!!!!!!!\n");
            blinkWin();
        }

    } //Final While-Exterior;
    printf("Programa encerrado reinicie o Jogo!!!\n");
    /***************************************************************************************/
    /***************************************************************************************/
    /***************************************************************************************/
    /***************************************************************************************/
    /***************************************************************************************/
    /***************************************************************************************/
    return 0;
}