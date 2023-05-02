#include <iostream>
#include "Graph.cpp"
using namespace std;

int main()
{
    GraphType<char> graph;

    graph.AddVertex('A');
    graph.AddVertex('B');
    graph.AddVertex('C');
    graph.AddVertex('D');
    graph.AddVertex('E');
    graph.AddVertex('F');
    graph.AddVertex('G');
    graph.AddVertex('H');

    graph.AddEdge('A', 'B', 1);
    graph.AddEdge('A', 'C', 1);
    graph.AddEdge('A', 'D', 1);
    graph.AddEdge('B', 'A', 1);
    graph.AddEdge('A', 'B', 1);
    graph.AddEdge('D', 'A', 1);
    graph.AddEdge('D', 'E', 1);
    graph.AddEdge('D', 'G', 1);
    graph.AddEdge('F', 'H', 1);
    graph.AddEdge('G', 'F', 1);
    graph.AddEdge('H', 'E', 1);

    cout << graph.OutDegree('D') << endl;

    if(graph.FoundEdge('A', 'H')){
        cout << "There is an edge" << endl;
    }else{
        cout << "There is no edge" << endl;
    }

    if(graph.FoundEdge('B', 'D')){
        cout << "There is an edge" << endl;
    }else{
        cout << "There is no edge" << endl;
    }

    graph.DepthFirstSearch('B', 'E');
    graph.DepthFirstSearch('E', 'B');

    graph.BreadthFirstSearch('B', 'E');
    graph.BreadthFirstSearch('E', 'B');

    return 0;
}
