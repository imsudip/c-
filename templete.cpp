#include <iostream>
using namespace std;
template <class T>
class Matrix
{
public:
    T arr[100][100];
    int size;

    void input()
    {
        cout << "enter the size: ";
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    void output()
    {
        cout << "\nMATRIX\n";
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }
    }

    Matrix multiply(Matrix mat1, Matrix mat2)
    {
        int N = mat1.size;
        Matrix res;
        res.size = N;
        int i, j, k;
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                res.arr[i][j] = 0;
                for (k = 0; k < N; k++)
                    res.arr[i][j] += mat1.arr[i][k] * mat2.arr[k][j];
            }
        }
        return res;
    }
    Matrix sum(Matrix mat1, Matrix mat2)
    {
        Matrix res;
        int N = mat1.size;
        res.size = N;
        int i, j;
        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++)
                res.arr[i][j] = mat1.arr[i][j] + mat2.arr[i][j];
        return res;
    }
    Matrix difference(Matrix mat1, Matrix mat2)
    {
        Matrix res;
        int N = mat1.size;
        res.size = N;
        int i, j;
        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++)
                res.arr[i][j] = mat1.arr[i][j] - mat2.arr[i][j];
        return res;
    }

    Matrix transpose(Matrix mat)
    {
        Matrix res;
        int N = mat.size;
        res.size = N;
        int i, j;
        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++)
                res.arr[i][j] = mat.arr[j][i];
        return res;
    }
};

int main()
{
    Matrix<int> a, b, c, d;
    int ch, x = 1;
    cout << "enter the first matrix: \n";
    a.input();
    cout << "enter the second matrix(should be of same size): \n";
    b.input();
    while (x)
    {
        cout << "choose  1-addition   2-difference    3-multiply  4-transpose   5-exit";
        cin >> ch;
        switch (ch)
        {
        case 1:
            a.output();
            cout << "added with ";
            b.output();
            cout << "result=";
            c = d.sum(a, b);
            c.output();
            break;
        case 2:
            b.output();
            cout << "subtracted from ";
            a.output();
            cout << "result=";
            c = d.difference(a, b);
            c.output();
            break;
        case 3:
            a.output();
            cout << "multiplied with ";
            b.output();
            cout << "result=";
            c = d.multiply(a, b);
            c.output();
            break;
        case 4:

            a.output();
            cout << "Transpose--";
            c = d.transpose(a);
            c.output();
            b.output();
            cout << "Transpose--";
            c = d.transpose(b);
            c.output();
            break;
        case 5:
            x = 0;
            break;
        default:
            break;
        }
    }
    return 0;
}