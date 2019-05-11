#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  // criando a variável ponteiro para o arquivo
  FILE *pont_arq;
  
  //abrindo o arquivo
  pont_arq = fopen("arquivo.txt", "a");
  
  // fechando arquivo
  fclose(pont_arq);
  
  //mensagem para o usuário
  printf("O arquivo foi criado com sucesso!");
  
  system("pause");
  return(0);
}
/*[16:43, 29/10/2018] Ricardo Reis: Tipo de abertura.
r : permissão apenas leitura.

w : permissão de escrita
ATENÇÃO. W sob-escreve o arquivo anterior.

a : permissão pra escrita mas não sob-escreve o arquivo.

*/