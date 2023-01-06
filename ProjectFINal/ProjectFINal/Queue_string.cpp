#include"Queue_string.h"

	Node::Node()
	{
		data = "";
		next = NULL;
	}

	Node::Node(string data)
	{
		this->data = data;
		next = NULL;
	}
	
	Queue::Queue()
	{
		front = rear = NULL;
	}

	bool Queue::empty()
	{
		return front == NULL;
	}

	void Queue::push(string x)
	{
		Node* newNode;

		newNode = new Node(x);
		if (newNode == NULL)
			std::cout << "Queue is full. Heap unable to provide memory\n";
		else
		{

			if (front == NULL)
			{
				front = rear = newNode;
			}
			else
			{
				rear->next = newNode;
				rear = newNode;
			}
		}
	}

	string Queue::pop()
	{
		string x = "";
		Node* aboutToBeDeleted;
		if (empty())
		{
			std::cout << "The queue is empty\n";
			return NULL;
		}
		else {
			aboutToBeDeleted = front;
			front = front->next;
			x = aboutToBeDeleted->data;
			delete aboutToBeDeleted;
		}
		return x;
	}
