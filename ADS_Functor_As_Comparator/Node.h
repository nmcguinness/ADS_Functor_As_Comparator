#pragma once

template <typename T>
class Node {
	T data;
	Node* pLeft;
	Node* pRight;
	bool hasData;

public:
	Node() {
	}
	Node(T data) {
		this->pLeft = this->pRight = nullptr;
		this->data = data;
		this->hasData = true;
	}
	Node<T>* getLeft() const
	{
		return this->pLeft;
	}
	Node<T>* getRight() const
	{
		return this->pRight;
	}
	T getData() const { return this->data; }
	void setLeft(T data) {
		this->pLeft = new Node<T>(data);
	}
	void setRight(T data) {
		this->pRight = new Node<T>(data);
	}
	void setData(T data) {
		this->data = data;
		hasData = true;
	}
	bool isEmpty() {
		return !hasData;
	}
};
