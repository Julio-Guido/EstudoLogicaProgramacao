//Item 6 da lista de exercícios.
/*Solicitar ao usuário a quantidade alunos, ler 2 notas para cada aluno para 2 cursos, calcular e exibir as médias, as seguintes
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
int alunosAprovados, alunosReprovados, alunosSubstitutiva, numeroDeAlunos, alunoContador, contadorDisciplinas;

//Inicialização das variáveis
alunosAprovados = 0;
alunosReprovados = 0;
alunosSubstitutiva = 0;
alunoContador = 1;
contadorDisciplinas = 1;

//Início do código
while(contadorDisciplinas <= 2){
    printf("Informe o numero de alunos:\n");
    scanf("%i", &numeroDeAlunos);
    printf("\n**************************  Diciplina %i  ***************************\n", contadorDisciplinas);
    while (alunoContador <= numeroDeAlunos){
        printf("\n****************************  Aluno %i  *****************************\n", alunoContador);
        printf("\nDigite a primeira nota do aluno %i da discipina %i:\n", alunoContador, contadorDisciplinas);
        scanf("%f", &nota1);
        printf("\nDigite a segunda nota do aluno %i da disciplina %i:\n", alunoContador, contadorDisciplinas);
        scanf("%f", &nota2);

        media = (nota1+nota2)/2;
        printf("\nA media do aluno %i na disciplina %i e: %.2f\n", alunoContador, contadorDisciplinas, media);

        if (media >=3){
            if (media >=6){
                printf("\nAluno %i, Aprovado na disciplina %i!\n", alunoContador, contadorDisciplinas);
                alunosAprovados = ++alunosAprovados;
                if (media == 10){
                    printf("\nAluno %i, Parabens!\n", alunoContador);
                }
            }
            else{
                printf("\nAluno %i, Fazer Substitutiva na disciplina %i !\n", alunoContador, contadorDisciplinas);
                alunosSubstitutiva = ++alunosSubstitutiva;
            }
        }
        else{
            printf("\nAluno %i, Reprovado na disciplina %i!\n", alunoContador, contadorDisciplinas);
            alunosReprovados = ++alunosReprovados;
        }
    alunoContador ++;
    }
    printf("\n********************************************************************");
    printf("\nTotal de alunos aprovados na disciplina %i: %i", contadorDisciplinas, alunosAprovados);
    printf("\nTotal de alunos para substitutiva na disciplina %i: %i", contadorDisciplinas, alunosSubstitutiva);
    printf("\nTotal de alunos reprovados na disciplina %i: %i\n", contadorDisciplinas, alunosReprovados);
    printf("********************************************************************\n");
    contadorDisciplinas ++;
alunoContador = 1;
alunosAprovados = alunosReprovados = alunosSubstitutiva = 0;
}
return 0;
}
