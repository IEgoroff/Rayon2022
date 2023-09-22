#include <iostream>
#include <vector>

int generateSum(int num, int curent,  std::vector<std::vector<int>>& results) {

    // если нум == 0 => мы полность. со,рали наш вектор 
    std::vector<int> sumArr; // Ввозмоно векор придется создавать не здесь
    for (int i = curent; i < num - curent; i++) {
        // создать массив ткущей суммы
        int mid = 0;
        if (sumArr.size() >= 2) {
            // найти среднее (не подходящее нам, для след.вставки)
        }
        // проверить, подходит ли число и вставить в массив теущей суммы
        // вызов рекурсивной  функции с измененным карентом (текущ.числом и num)
    }
}


int main()
{
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> results;
    generateSum(n, 1, results);
}