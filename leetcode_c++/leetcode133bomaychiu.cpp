#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Node
{
public:
    int val;
    vector<Node *> neighbors;
    Node()
    {
        val = 0;
        neighbors = vector<Node *>();
    }
};

Node *cloneGraph(Node *node)
{
    unordered_map<int, string> mp;


    return node;
}

int main()
{
    Node *node1 = new Node();
    Node *node2 = new Node();
    Node *node3 = new Node();
    Node *node4 = new Node();

    node1->val = 1;
    node2->val = 2;
    node3->val = 3;
    node4->val = 4;

    node1->neighbors = {node2, node4};
    node2->neighbors = {node1, node3};
    node3->neighbors = {node2, node4};
    node4->neighbors = {node1, node3};
    Node *temp = node1;
    cloneGraph(temp);
}