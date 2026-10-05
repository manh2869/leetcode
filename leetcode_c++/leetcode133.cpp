#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Node
{
public:
    int val;
    vector<Node *> neighbors;
    Node(int x)
    {
        val = x;
        neighbors = vector<Node *>();
    }
};

unordered_map<Node *, Node *> mp;
Node *cloneGraph(Node *node)
{
    if (node == nullptr)
        return nullptr;
    if (mp.count(node))
        return mp[node];
    Node *clone = new Node(node->val);
    mp[node] = clone;
    for (Node *n : node->neighbors)
    {
        clone->neighbors.push_back(cloneGraph(n));
    }
    return clone;
}

int main()
{
    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);

    node1->neighbors = {node2, node4};
    node2->neighbors = {node1, node3};
    node3->neighbors = {node2, node4};
    node4->neighbors = {node1, node3};
    Node *temp = node1;
    cloneGraph(temp);
}