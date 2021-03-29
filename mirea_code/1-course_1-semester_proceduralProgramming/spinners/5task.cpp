#include <iostream>
#include<set>

using namespace std;

long long pop(multiset<long long> & cont) { //создаем функцию и указываем на cont
    auto iter = cont.end(); //создаем итератор для cont
    //cout << *iter << endl;
    iter--;
    //cout << *iter << endl;
    int answer = *iter;
    //cout << answer << endl;
    cont.erase(iter); //удаляем отработанный элемент
    return answer;
}

int main() {
    //код работает так, что мы создаем множество multiset и храним в нем все свободные места, которые идут подряд

    setlocale(LC_ALL, "rus");
    long long n, k;
    long long answer1, answer2;
    char key = 'y';

    cout << "Hey! Kill me pls. 5 task!\n";

    while (key == 'Y' || key == 'y') {
        //получаем значение n (мест)
        cout << "\nN: ";
        cin >> n;
        //получаем значение k (школьники)
        cout << "K: ";
        cin >> k;

        multiset<long long> cont; //создаем контейнер cont, для хранения лишь свободных частей
        cont.insert(n); //передаем в него места

        for (long long i = 0; i < k; i++) { //запускаем цикл, который обработает каждого из школьников
            n = pop(cont); //записываем в n результат функции
            //cout << n << endl;
            answer1 = (n - 1) / 2;
            answer2 = n - 1 - answer1;
            cont.insert(answer1);
            cont.insert(answer2);
        }
        
        cout << "\nFirst side: " << answer1;
        cout << "\nSecond side: " << answer2;

        cout << "\nAgain? (Y or N): ";
        cin >> key;
    }

    return 0;
}