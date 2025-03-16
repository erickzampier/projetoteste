#include<stdio.h>
#include <stdlib.h>

int main(){
    /*
    a) Modos de Abertura de Arquivos

        A função fopen() é usada para abrir arquivos em C. O modo de abertura determina como o arquivo será acessado.

        "r"	    Abre para leitura. O arquivo deve existir.
        "w"	    Abre para escrita. Se existir, sobrescreve o conteúdo. Se não existir, cria um novo.
        "a"	    Abre para escrita no final do arquivo. Se não existir, cria um novo.
        "r+"	Abre para leitura e escrita sem apagar o conteúdo. O arquivo deve existir.
        "w+"	Abre para leitura e escrita. Apaga o conteúdo se o arquivo já existir.
        "a+"	Abre para leitura e escrita no final do arquivo. Se não existir, cria um novo.
        "rb"	Modo binário de leitura. O arquivo deve existir.
        "wb"	Modo binário de escrita. Cria um novo arquivo ou sobrescreve se já existir.
        "ab"	Modo binário de escrita no final do arquivo. Cria um novo arquivo, se necessário.
        "rb+"	Modo binário de leitura e escrita sem apagar o conteúdo.
        "wb+"	Modo binário de leitura e escrita. Apaga o conteúdo se o arquivo já existir.
        "ab+"	Modo binário de leitura e escrita no final do arquivo.

        Exemplo de uso do fopen()*/

            FILE *file = fopen("arquivo.txt", "w"); // Abre para escrita

            if (file == NULL) {
                printf("Erro ao abrir o arquivo!\n");
                return 1;
            }

            fprintf(file, "Olá, arquivo!\n"); // Escreve no arquivo
            fclose(file); // Fecha o arquivo

            return 0;
        

    /*
    b) Funcionamento das Funções fgets(), fprintf(), fread(), fwrite()

        1. fgets() - Lendo uma linha do arquivo
        
            A função fgets() lê uma linha de um arquivo e armazena em um buffer.

            Sintaxe:
            */

            char *fgets(char *str, int tamanho, FILE *arquivo);

            /*
            str ? Buffer onde a linha será armazenada.
            tamanho ? Número máximo de caracteres a serem lidos.
            arquivo ? Ponteiro para o arquivo.

            Exemplo:
            */

            file *file = fopen("arquivo.txt", "r");
            char linha[100];

            if (file == NULL) {
                printf("Erro ao abrir o arquivo!\n");
                return 1;
            }

            while (fgets(linha, sizeof(linha), file) != NULL) {
                printf("%s", linha);
            }

            fclose(file);
            return 0;
            
            /*
            Saída: (Se o arquivo contiver "Olá, arquivo!")

        2. fprintf() - Escrevendo em um arquivo de texto

            A função fprintf() funciona como printf(), mas grava a saída no arquivo.

            Sintaxe:
            */
            int fprintf(FILE *arquivo, const char *formato, ...);
            /*
            Exemplo:
            */
                FILE *file = fopen("dados.txt", "w");

                if (file == NULL) {
                    printf("Erro ao abrir o arquivo!\n");
                    return 1;
                }

                fprintf(file, "Nome: %s, Idade: %d, Nota: %.2f\n", "Carlos", 20, 9.5);
                fclose(file);

                return 0;
            /*
            Arquivo dados.txt criado:

            Nome: Carlos, Idade: 20, Nota: 9.50

        3. fread() - Lendo arquivos binários

            A função fread() lê blocos de dados binários de um arquivo e os armazena em uma variável.

            Sintaxe:
            */
            size_t fread(void *buffer, size_t tamanho, size_t quantidade, FILE *arquivo);
            /*
            buffer ? Endereço onde os dados serão armazenados.
            tamanho ? Tamanho de cada item a ser lido.
            quantidade ? Número de itens a serem lidos.
            arquivo ? Ponteiro para o arquivo.

            Exemplo:
            */
            typedef struct {
                char nome[50];
                int idade;
                float nota;
            } Aluno;

            
            FILE *file = fopen("aluno.bin", "rb");

            if (file == NULL) {
                printf("Erro ao abrir o arquivo!\n");
                return 1;
            }

            Aluno aluno;
            fread(&aluno, sizeof(Aluno), 1, file); // Lê um registro do arquivo

            printf("Nome: %s\nIdade: %d\nNota: %.2f\n", aluno.nome, aluno.idade, aluno.nota);
            fclose(file);

                return 0;
            /*

        4. fwrite() - Escrevendo arquivos binários

            A função fwrite() grava blocos de dados binários em um arquivo.

            Sintaxe:
            */
            size_t fwrite(const void *buffer, size_t tamanho, size_t quantidade, FILE *arquivo);
            /*
            buffer ? Endereço dos dados a serem gravados.
            tamanho ? Tamanho de cada item a ser escrito.
            quantidade ? Número de itens a serem escritos.
            arquivo ? Ponteiro para o arquivo.

            Exemplo:
            */
            typedef struct {
                char nome[50];
                int idade;
                float nota;
            } Aluno;

            FILE *file = fopen("aluno.bin", "wb");

            if (file == NULL) {
                printf("Erro ao abrir o arquivo!\n");
                return 1;
            }

            Aluno aluno = {"Carlos", 20, 9.5};
            fwrite(&aluno, sizeof(Aluno), 1, file); // Escreve um registro no arquivo

            fclose(file);
            return 0;
            
}