// Find the number of spanning tree in a graph using Kirchoff's Matrix Tree theorem
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int v;
    cout << "Enter the number of vertices" << endl;
    cin >> v;
    int arr[v][v] ;
    // Input Degree matrix
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
            if (i == j)
            {
                cout << "Enter the degree of the vertex " << i << " ";
                cin >> arr[i][j];
            }
            else
            {
                arr[i][j] = 0;
            }
    }
    // Input adjacency matrix
    int adj[v][v];
    cout << "If the vertices are connected input 1 else input 0" << endl;
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            if (i == j)
            {
                adj[i][j] = 0;
            }
            else
            {
                cout << "Is there a edge between the vertex " << i << " and " << j << " ";
                cin >> adj[i][j];
            }
        }
    }
    // Creating a laplacian matrix by subtracting adjacency matrix with the degree matrix
    int lap_m[v][v];
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            lap_m[i][j] = arr[i][j] - adj[i][j];
        }
    }
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            cout << lap_m[i][j] << " ";
        }
        cout << endl;
    }
    // Calculate the determinant using the formula
    double det = 0.0;
    det += lap_m[1][1] * (lap_m[2][2] * lap_m[3][3] - lap_m[2][3] * lap_m[3][2]);
    det -= lap_m[1][2] * (lap_m[2][1] * lap_m[3][3] - lap_m[2][3] * lap_m[3][1]);
    det += lap_m[1][3] * (lap_m[2][1] * lap_m[3][2] - lap_m[2][2] * lap_m[3][1]);
    cout << "The Total Number of Spanning trees are " << det << endl;
    return 0;
}