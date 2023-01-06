#pragma once
#include<iostream>
#include<string>

using namespace std;

class Node {
public:
	string data;
	Node* next;
	Node();
	Node(string data);
};

struct Queue
{

	Node* front = NULL, * rear = NULL;
	Queue();

	bool empty();

	void push(string x);

	string pop();

};