#include <iostream>
using namespace std;

void floyd(int dist[20][20], int n) {
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (dist[i][j] > (dist[i][k] + dist[k][j]))
                    dist[i][j] = (dist[i][k] + dist[k][j]);
                    
    cout << "All pair shortest path matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << dist[i][j] << "  ";
        cout << endl;
    }
}
int main() {
    int n, graph[20][20];
    cout << "Enter the number of vertices: ";
    cin >> n;
    cout << "Enter the cost adjacency matrix for the graph [999 for no edge, 0 for self loops]: \n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> graph[i][j];
    floyd(graph, n);
    return 0;
}
    floyd(graph);
    return 0;
}
*/
