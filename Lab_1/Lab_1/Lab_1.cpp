#include <iostream>

using namespace std;

void Print(int count, int* array, double average, double geomSum, long double factorial, int SumP, int SumUP);
int Task1(int N);
int* Task2(int N);
double Task3(int* array, int size);
double Task4(int* array, int n);
long double Task5(int N); 
int Task6(int N);
int Task7(int N);
int Task7(float N);
int Task7(int N, int m);

void main()
{
    int n;
    cout << "Введіть число N: ";
    cin >> n;
    cout << "\n";

    const int N = n;

    Print(Task1(N), Task2(N), Task3(Task2(N), Task1(N)), Task4(Task2(N), Task1(N)), Task5(N), Task6(N), Task7(N));
}

void Print(int count, int* array, double average, double geomSum, long double factorial, int SumP, int SumUP)
{
    cout << "1 завдання:\n";
    cout << "Кількість цифр у числі N: " << count;
    cout << "\n\n";

    cout << "2 завдання:\n";
    cout << "Масив цифр N: \n";

    for (int i = 0; i < count; i++)
    {
        cout << array[i] << "\t";
    }
    cout << "\n\n";

    cout << "3 завдання:\n";
    cout << "Середнє арифметичне цифр у N: " << average;
    cout << "\n\n";

    cout << "4 завдання:\n";
    cout << "Середнє геометричне цифр у N: " << geomSum;
    cout << "\n\n";

    cout << "5 завдання:\n";
    cout << "Факторіал N: " << factorial;
    cout << "\n\n";

    cout << "6 завдання:\n";
    cout << "Cума всіх парних цифр від 0 до N: " << SumP;
    cout << "\n\n";

    cout << "7 завдання:\n";
    cout << "Cума всіх не парних цифр від 0 до N: " << SumUP;
    cout << "\n\n";
}

int Task1(int N)
{
    if (N < 0)
    {
        N = -N;
    }
    int counter = 0;

    if (N == 0)
    {
        return ++counter;
    }

    for (; N > 0; counter++, N /= 10);

    return counter;
}

int* Task2(int N)
{
    if (N < 0)
    {
        N = -N;
    }

    const int size = Task1(N);
    int* array = new int[size];
    int i = 1;
    do
    {
        array[size - i] = N % 10;
        i++;
        N /= 10;
    } while (N > 0);
    return array;
}

double Task3(int* array, int size)
{
    double average = 0;
    int i = 0;

    while (i < size)
    {
        average += array[i];
        i++;
    }
    average /= i;
    return average;
}

double Task4(int* array, int n)
{
    double geomSum = 1;
    int i = 0;
    do
    {
        geomSum *= array[i];
        i++;
    } while (i < n);

    geomSum = pow(geomSum, 1.0 / n);
    return geomSum;
}

long double Task5(int N)
{
    long double factorial = 1;
    int i = 1;
    do
    {
        factorial *= i;
        i++;
    } while (i <= N);
    return factorial;
}

int Task6(int N)
{
    int SumP = 0, i = 0;
    while (i <= N)
    {
        if (i % 2 == 0)
        {
            SumP += i;
        }
        i++;
    }
    return SumP;
}

int Task7(int N)
{
    int SumUP = 0, i = 0;
    while (i <= N)
    {
        if (i % 2 == 1)
        {
            SumUP += i;
        }
        i++;
    }
    return SumUP;
}
int Task7(float N)
{
    int SumUP = 0, i = 0;
    while (i <= N)
    {
        if (i % 2 == 1)
        {
            SumUP += i;
        }
        i++;
    }
    return SumUP;
}
int Task7(int N, int m)
{
    N += m;
    int SumUP = 0, i = 0;
    while (i <= N)
    {
        if (i % 2 == 1)
        {
            SumUP += i;
        }
        i++;
    }
    return SumUP;
}