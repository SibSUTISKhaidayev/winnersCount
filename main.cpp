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

    /*
     * так как баллы за соревнования должны быть не отрицательными
     * создадим БЕЗЗНАКОВЫЙ целочисленный массив
     * unsigned - беззнаковый int - целочисленный
     */
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

    unsigned int max = 0,// переменная для нахождения наибольшего результата
                 maxCount = 0;//для количества наибольших результатов
    // и так ищем ...
    for(unsigned int i = 0; i < n; i++){
        for(unsigned int j = 0; j < m; j++){
            unsigned int k = A[i][j];// число из массива
            if( max == k ){//если максимальное число равно k
                maxCount++;// увеличиваем количество на 1
            }
            if( max < k ){// если число k больше чем максимум
                max = k;// присваиваем его к максимуму
                maxCount = 1;// и понимаеим что максимум пока только один.
            }
        }
    }

    printf("\n----------------------\n"// разделение просто так
           "maximum points of play: %i\n"// максимальный балл за игру
           "winners quantity: %i", max, maxCount);// количество победителей

    return 0;
}
