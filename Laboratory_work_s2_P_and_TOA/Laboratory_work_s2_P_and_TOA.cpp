
#include <iostream>

using namespace std;

// Матрица смежности графа 
int arr[6][6] = {
    { 0, 5, 5, 0, 12, 10 },  // 1 - a
    { 0, 0, 0, 5, 3, 0 },    // 2 - b
    { 0, 0, 0, 0, 0, 3 },    // 3 - c
    { 0, 0, 0, 0, 5, 0 },    // 4 - d
    { 0, 0, 0, 0, 0, 5 },    // 5 - e 
    { 0, 0, 0, 0, 0, 0 },    // 6 - j
};

int nodes[6];

void deepSearch(int st, int n) {
    // Поиск в глубину
    // обхода графа в глубину с использованием рекурсии
    
    cout << st + 1 << endl;
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[st][i] << " ";
    }
    cout << endl;
    cout << "---" << endl;
    nodes[st] = 1;
    for (int i = 0; i < n; i++) {
        if ( (1 <= arr[st][i]) && (arr[st][i] <= 100) && (nodes[i] == 0) ) { 
            deepSearch(i, n);
        }
        if (arr[st][i] == 0 && i == 1) {
            return;
        }
    }
    
    cout << endl;
}

int main()
{
    deepSearch(0, 6);

    system("pause");
}
