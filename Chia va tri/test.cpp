#include<bits/stdc++.h>
using namespace std;

struct Data{
	string ms, name;
	int price;
};

struct Node{
	Data data;
	Node *next;
}

Node* CrNode(data init_data){
	Node* node = new Node;
	node->data = init_data;
	node->next = NULL;
	return node;
}

struct LinkedList{
	Node* head;
	Node* tail;
};

void CrList(LinkedList &l){
	l.head = NULL;
	l.tail = NULL;
}

void AddHead(LinkedList &l, Node* node){
	if(l.head == NULL){
		l.head = node;
	}
	else{
		node->next = l.head;
		l.tail = node;
	}
}

void Search(LinkedList l, string name){
	Node* node = l.head;
	while(node != NULL&& node.data.name!=name){
		node = node->
	}
}




int main(){
	int n;
	while(true){
		
	}
}