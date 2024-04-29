#include <iostream>
using namespace std;
int main()
{
    int v;
    cout << "Enter the number of vertex" << endl;
    cin >> v;
    int arr[v][v];
    //Taking input for  the adjacency matrix
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {

            if (i != j)
            {
                cout << "If there exist an edge between " << i << " and " << j << " enter the weight"
                     << " ";
                cin >> arr[i][j];
            }

            else
            {
                arr[i][j] = 0;
            }
        }
    }
    //Displaying the adjacnecy matrix
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}
