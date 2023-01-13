/*A partir da leitura de 2 notas, calcular e exibir as m�dias e as seguintes mensagens:
    Se media >=6 : Aprovado;
    Se media >=3 e <6: Substitutiva;
    Se m�dia < 3 : Reprovado;
    Se m�dia == 10:Parab�ns
**Usar apenas as instru��es IF e ELSE.
*/
//Fatec Americana | Curso de ADS | 2022.
//Aluno:Julio Guido
#include <stdio.h>
int main(){
//Declara��o das vari�veis
float nota1, nota2, media;
int alunosAprovados, alunosReprovados, alunosSubstitutiva;

//Inicializa��o das vari�veis
alunosAprovados = 0;
alunosReprovados = 0;
alunosSubstitutiva = 0;

//In�cio do c�digo
printf("Digite a primeira nota:\n");
scanf("%f", &nota1);
printf("Digite a segunda nota:\n");
scanf("%f", &nota2);

media = (nota1+nota2)/2;
printf("\nA media e: %.2f\n", media);

if (media >=3){
    if (media >=6){
        printf("\nAprovado!\n");
        alunosAprovados = ++alunosAprovados;
        if (media == 10){
            printf("\nParabens!\n");
        }
    }
    else{
        printf("\nSubstitutiva!\n");
        alunosSubstitutiva = ++alunosSubstitutiva;
    }
}
else{
    printf("\nReprovado!\n");
    alunosReprovados = ++alunosReprovados;
}
printf("\n*****************************************************");
printf("\nTotal de alunos aprovados: %i", alunosAprovados);
printf("\nTotal de alunos para substitutiva: %i", alunosSubstitutiva);
printf("\nTotal de alunos reprovados: %i\n", alunosReprovados);
printf("*****************************************************\n");
}
