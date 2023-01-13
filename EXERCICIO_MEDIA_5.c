//Item 5 da lista de exercícios.
/*Solicitar ao usuário a quantidade alunos, ler 2 notas para cada aluno, calcular e exibir as médias, as seguintes
  mensagens abaixo e ao final o resumo de alunos aprovados, reprovados e para substitutiva:
        Se media >=6 : Aprovado;
        Se media >=3 e <6: Substitutiva;
        Se média < 3 : Reprovado;
        Se média == 10:Parabéns
**Usar apenas as instruções IF e ELSE e WHILE.
*/
//Fatec Americana | Curso de ADS | 2022.
//Aluno:Julio Guido
#include <stdio.h>
int main(){
//Declaração das variáveis
float nota1, nota2, media;
int alunosAprovados, alunosReprovados, alunosSubstitutiva, numeroDeAlunos, alunoContador;
//Inicialização das variáveis
alunosAprovados = 0;
alunosReprovados = 0;
alunosSubstitutiva = 0;
alunoContador = 1;
//Início do código
printf("Informe o numero de alunos:\n");
scanf("%i", &numeroDeAlunos);
while (alunoContador <= numeroDeAlunos){
    printf("\n****************************  Aluno %i  *****************************\n", alunoContador);
    printf("\nDigite a primeira nota do aluno %i:\n", alunoContador);
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno %i:\n", alunoContador);
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;
    printf("\nA media do aluno %i e: %.2f\n", alunoContador, media);
    if (media >=3){
        if (media >=6){
            printf("\nAluno %i, Aprovado!\n", alunoContador);
            alunosAprovados ++;
            if (media == 10){
                printf("\nAluno %i, Parabens!\n", alunoContador);
            }
        }
        else{
            printf("\nAluno %i, Substitutiva!\n", alunoContador);
            alunosSubstitutiva ++;
        }
    }
    else{
        printf("\nAluno %i, Reprovado!\n", alunoContador);
        alunosReprovados ++;
    }
alunoContador ++;
    }
    printf("\n********************************************************************");
    printf("\nTotal de alunos aprovados: %i", alunosAprovados);
    printf("\nTotal de alunos para substitutiva: %i", alunosSubstitutiva);
    printf("\nTotal de alunos reprovados: %i\n", alunosReprovados);
    printf("********************************************************************\n");
return 0;
}
