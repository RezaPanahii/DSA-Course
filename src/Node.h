#pragma once
#include "List.h"

template <typename T>
class Node
{
	template<typename R>
	friend class List;

	T data;
	Node* next;

public:
	
	Node(T data)
	{
		this->data = data;
		next = nullptr;
	}

	T getData() const {
		return data;
	}

	bool operator==(const Node& node)
	{
		return (this->data == node.data and this->next == node.next);
	}

	bool operator!=(const Node& node)
	{
		return !(*this == node);
	}
};
