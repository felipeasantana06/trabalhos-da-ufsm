#include <stdio.h>

typedef struct
{ // molde da struct que não ocupa memoria
    int ID;
    int acessos_Dia;
    int tempo_de_uso_minutos;
    int n_p_Visitadas;
} Usuario;

typedef struct
{
    float media_minutos;
    float media_paginas;
    float percentual_engajados;
} Cal;

Usuario ler_Dados()
{
    Usuario u;

    printf("ID: ");
    scanf("%d", &u.ID);

    printf("Quantos acessos no dia: ");
    scanf("%d", &u.acessos_Dia);

    printf("Quanto tempo este usuario ficou no site: ");
    scanf("%d", &u.tempo_de_uso_minutos);

    printf("Numero de p. visitadas: ");
    scanf("%d", &u.n_p_Visitadas);

    return u;
}

int classifica(int n_p_Visitadas, int tempo_de_uso_minutos)
{

    int uhul;
    if (n_p_Visitadas >= 10 && tempo_de_uso_minutos >= 60)
    {
        uhul = 10; // Altamente engajado
    }
    else if (tempo_de_uso_minutos >= 30 && tempo_de_uso_minutos <= 59)
    {
        uhul = 5; // Moderadamente engajado
    }
    else
    {
        uhul = 1; // Pouco engajado
    }
    return uhul;
}

float calcula_Percentual(int engajados, int total_usuarios)
{
    return (float)engajados / total_usuarios * 100;
}

Cal calcula_Medias(int minutos, int pagina, int total_usuarios)
{
    Cal a;

    a.media_minutos = (float)minutos / total_usuarios;
    a.media_paginas = (float)pagina / total_usuarios;

    return a;
}

void relatorio_Final(Cal medias, float percentual)
{

    printf("\n Relatório: \n");
    printf("Media de minutos por usuario: %.2f minutos\n", medias.media_minutos);
    printf("Media de paginas visitadas por usuario: %.2f paginas\n", medias.media_paginas);
    printf("Percentual de usuarios altamente engajados: %.2f%%\n", percentual);
}

int main()
{
    int numero_de_Usuarios;
    int i;
    int soma_Minutos = 0, soma_paginas = 0, soma_AltamenteEngajado = 0;

    printf("Quantos usuarios: ");
    scanf("%d", &numero_de_Usuarios);

    // gostei muito dessa tabela
    Usuario usuarios[numero_de_Usuarios];

    for (i = 0; i < numero_de_Usuarios; i++)
    {
        printf("\n--- Usuario %d ---\n", i + 1);
        int classe;

        usuarios[i] = ler_Dados(); // PEGA 1 COLUNA POR VEZ
        classe = classifica(usuarios[i].n_p_Visitadas, usuarios[i].tempo_de_uso_minutos);

        printf("\nDados do usuario %d:\n", i + 1);
        printf("ID: %d\n", usuarios[i].ID);
        printf("Acessos: %d\n", usuarios[i].acessos_Dia);
        printf("Tempo: %d minutos\n", usuarios[i].tempo_de_uso_minutos);
        printf("Paginas visitadas: %d\n", usuarios[i].n_p_Visitadas);

        if (classe == 10)
        {
            printf("Classificacao: Altamente engajado\n");
            soma_AltamenteEngajado = soma_AltamenteEngajado + 1;
        }
        if (classe == 5)
        {
            printf("Classificacao: Moderadamente engajado\n");
        }
        if (classe == 1)
        {
            printf("Classificacao: Pouco engajado\n");
        }

        soma_Minutos = soma_Minutos + usuarios[i].tempo_de_uso_minutos;
        soma_paginas = soma_paginas + usuarios[i].n_p_Visitadas;
    }

    Cal medias = calcula_Medias(soma_Minutos, soma_paginas, numero_de_Usuarios);
    float percentual = calcula_Percentual(soma_AltamenteEngajado, numero_de_Usuarios);

    relatorio_Final(medias, percentual);

    return 0;
}