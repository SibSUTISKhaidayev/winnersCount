#include <stdio.h>

int main()
{
    unsigned int n,//количество строк
                 m;//столбцов


    printf("Entering participants count: ");// введите количество участников
    scanf("%i", &n);// получаем количеств игроков,
    //то есть количество строк массива

    printf("Entering matches count: ");// введите колтчество матчей
    scanf("%i", &m);// то есть количество ячеек в каждой строке массива

    unsigned int A[n][m];// массив размером n строк и m столбцов

    for (unsigned int i = 0; i < n; ++i)// заполним массив результатами
    {
        printf("Entering resut partisipant`s number %i:\n", i);
         for (unsigned int j = 0; j < m; ++j)
         {
            int resiver = 0;// переменная для получения чисел
            printf("points quatity of match #%i: ", j+1);//просто диалог  с пользователем
            scanf("%i", &resiver);//для ввода результатов соревнований
            A[i][j] = resiver;// перемечение полученного числа в ячейку массива
            // с координатами [i][j]
         }
    }

    unsigned int max = 0,
                 maxCount = 0;

    for(unsigned int i = 0; i < n; i++){
        for(unsigned int j = 0; j < m; j++){
            unsigned int k = A[i][j];
            if( max == k ){
                maxCount++;
//                printf("#%i#%i == max: %i", i, j, A[i][j]);
            }
            if( max < k ){
                max = k;
                maxCount = 1;
//                printf("#%i#%i max: %i ", i, j, max);
            }
        }
    }

    printf("\n----------------------\n"
           "maximum points of play: %i\n"
           "winners quantity: %i", max, maxCount);

    return 0;
}
