//1-
// #include <stdio.h>
// #include <string.h>  

// int main() {
//     char str[100];  

    
//     printf("Digite uma string: ");
//     fgets(str, sizeof(str), stdin); 

//     str[strcspn(str, "\n")] = '\0';

//     printf("Conteúdo da string: %s\n", str);
    
//     printf("Comprimento da string: %zu\n", strlen(str));

//     return 0;
// }
//2-
// #include <stdio.h>
// #include <string.h> 

// int main() {
//     char str1[100], str2[100];  

//     printf("Digite a primeira string: ");
//     fgets(str1, sizeof(str1), stdin);
//     str1[strcspn(str1, "\n")] = '\0';  

    
//     printf("Digite a segunda string: ");
//     fgets(str2, sizeof(str2), stdin);
//     str2[strcspn(str2, "\n")] = '\0';  

//     if (strcmp(str1, str2) == 0) {
//         printf("As strings são iguais.\n");
//     } else {
//         printf("As strings são diferentes.\n");
//     }

//     return 0;
// }
//3-
// #include <stdio.h>

// int main() {
//     char str[100];  
//     int count = 0;  

//     printf("Digite uma string: ");
//     fgets(str, sizeof(str), stdin);  

//     str[strcspn(str, "\n")] = '\0';

//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] == 'a' || str[i] == 'A') {  
//             count++;
//         }
//     }

//     printf("O caractere 'a' aparece %d vezes na string.\n", count);

//     return 0;
// }
//2.
//1-
// #include <stdio.h>
// #include <string.h>  

// int main() {
//     char str[100];
//     char ch;

//     printf("Digite uma string: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = '\0'; 

//     printf("Digite um caractere para procurar: ");
//     scanf("%c", &ch);

//     char *ptr = strchr(str, ch);

//     if (ptr != NULL) {
//         printf("O caractere '%c' foi encontrado na posição: %ld\n", ch, ptr - str);
//     } else {
//         printf("O caractere '%c' não foi encontrado na string.\n", ch);
//     }

//     return 0;
// }

//5-
// #include <stdio.h>
// #include <string.h>  

// int main() {
//     char str1[100], str2[100];  

//     printf("Digite uma string: ");
//     fgets(str1, sizeof(str1), stdin);  

//     str1[strcspn(str1, "\n")] = '\0';

//     strcpy(str2, str1);

//     printf("String original: %s\n", str1);
//     printf("String copiada: %s\n", str2);

//     return 0;
// }
//6-
// #include <stdio.h>
// #include <string.h> 

// int main() {
//     char str1[100], str2[100], str3[200]; 

//     printf("Digite a primeira string: ");
//     fgets(str1, sizeof(str1), stdin);  
//     str1[strcspn(str1, "\n")] = '\0';  

//     printf("Digite a segunda string: ");
//     fgets(str2, sizeof(str2), stdin); 
//     str2[strcspn(str2, "\n")] = '\0';  

//     strcpy(str3, str1);

//     strcat(str3, str2);

//     printf("String concatenada: %s\n", str3);

//     return 0;
// }
//7-
// #include <stdio.h>
// #include <ctype.h>  
// int main() {
//     char str[100]; 

//     printf("Digite uma string: ");
//     fgets(str, sizeof(str), stdin);  

//     str[strcspn(str, "\n")] = '\0';

//     for (int i = 0; str[i] != '\0'; i++) {
//         str[i] = toupper(str[i]);  
//     }

//     printf("String em maiúsculas: %s\n", str);

//     return 0;
// }
//8-
// #include <stdio.h>
// #include <ctype.h>  

// int main() {
//     char str[100];  
//     int count = 0;  

//     printf("Digite uma string: ");
//     fgets(str, sizeof(str), stdin);  

//     str[strcspn(str, "\n")] = '\0';

//     for (int i = 0; str[i] != '\0'; i++) {
        
//         char ch = tolower(str[i]);

//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//             count++;
//         }
//     }

//     printf("Número de vogais na string: %d\n", count);

//     return 0;
// }

//9-
// #include <stdio.h>

// int main() {
//     char str[100];  
//     int count = 0;  

//     printf("Digite uma string: ");
//     fgets(str, sizeof(str), stdin);  

//     str[strcspn(str, "\n")] = '\0';

//     for (int i = 0; str[i] != '\0'; i++) {
       
//         if (str[i] == ' ') {
//             count++;
//         }
//     }

//     printf("Número de espaços em branco: %d\n", count);

//     return 0;
// }

//10-
// #include <stdio.h>
// #include <ctype.h> 

// int main() {
//     char str[100];  
//     int letras = 0, digitos = 0, especiais = 0;  

//     printf("Digite uma string: ");
//     fgets(str, sizeof(str), stdin);  

    
//     str[strcspn(str, "\n")] = '\0';

    
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (isalpha(str[i])) {
//             letras++;  
//         } else if (isdigit(str[i])) {
//             digitos++;  
//         } else {
//             especiais++;  
//         }
//     }

    
//     printf("Número de letras: %d\n", letras);
//     printf("Número de dígitos: %d\n", digitos);
//     printf("Número de caracteres especiais: %d\n", especiais);

//     return 0;
// }

