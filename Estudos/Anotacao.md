//## Estudos para a primeira prova Piscina 42

///## Sempre usar

#include <unistd.h>

// Função essencial: ft_putchar
void ft_putchar(char c)
{
    write(1, &c, 1);
}
/* Explicação do write(1, &c, 1):
   1  -> File Descriptor: Terminal (Saída padrão).
   &c -> Endereço de memória: Onde a variável 'c' está guardada.
   1  -> Tamanho: Quantos bytes escrever (char sempre tem 1 byte).
*/
void ft_print_numbers(void)
{
    char n;

    n = '0'; // Na tabela ASCII, '0' é o valor 48
    while (n <= '9') // '9' é o valor 57
    {
        write(1, &n, 1);
        n++; // Incrementa: 48, 49, 50... até 57
    }
}
// Exemplo direto no main
int main(void)
{
    // Escreve "abcdefgh" (8 letras) + "\n" (1 caractere) = 9 total
    write(1, "abcdefgh\n", 9);
    
    // Escreve apenas um Z
    write(1, "Z", 1);
    
    return (0);
}
