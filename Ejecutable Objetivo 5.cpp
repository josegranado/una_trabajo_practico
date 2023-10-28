#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;

// Definición de la estructura de datos para representar un enlace
struct Edge {
    int dest;
    double prob;
};

// Definición de la estructura de datos para representar un nodo
struct Node {
    int id;
    double dist;
    bool operator<(const Node& other) const {
        return dist < other.dist;
    }
};

// Función para aplicar el algoritmo de Dijkstra en el grafo
vector<int> dijkstra(vector<vector<Edge>> & graph, int start, int end) {
    int n = graph.size();
    vector<double> dist(n, 0);
    vector<int> prev(n, -1);
    priority_queue<Node> pq;

    dist[start] = 1;
    pq.push({start, dist[start]});

    while (!pq.empty()) {
        Node node = pq.top();
        pq.pop();

        if (node.id == end) {
            break;
        }

        for (Edge& e : graph[node.id]) {
            double newDist = dist[node.id] * e.prob;
            if (newDist > dist[e.dest]) {
                dist[e.dest] = newDist;
                prev[e.dest] = node.id;
                pq.push({e.dest, dist[e.dest]});
            }
        }
    }

    vector<int> path;
    int cur = end;
    while (cur != -1) {
        path.push_back(cur);
        cur = prev[cur];
    }
    reverse(path.begin(), path.end());

    return path;
}

int main() {
    // Construcción del grafo
    vector<vector<Edge>> graph = {
        {{1, 0.9}, {2, 0.8}}, // nodo 0
        {{3, 0.7}},           // nodo 1
        {{3, 0.6}},           // nodo 2
        {{4, 0.5}},           // nodo 3
        {{}}                  // nodo 4
    };
	cout << "----------------------------------------------" << endl;
    cout << "  PROGRAMA:324 Computación II Objetivo 5 Algoritmos de Ordenación" << endl;
    cout << "  AUTOR: José Alfonso Granado C.I.Nº 26.272.914" << endl;
    cout << "----------------------------------------------" << endl;
    // Aplicación del algoritmo de Dijkstra
    vector<int> path = dijkstra(graph, 3, 2);

    // Impresión de la ruta de máxima fiabilidad
    cout << "Ruta de máxima fiabilidad: ";
    for (int i = 0; i < path.size(); i++) {
        if (i > 0) {
            cout << " -> ";
        }
        cout << path[i];
    }
    cout << endl;

    return 0;
}

