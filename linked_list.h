//Linked list with basic functionality

#ifndef linked_list
#define linked_list
#include<cstddef>
#include<iostream>
template<typename T>class list{
	private:
	template<typename t>struct node{
		t NodeVal;
		node<t> *next=NULL,*last=NULL;
	};
	node<T> *begin,*end,*head;
	int List_size=0;
	public:
	//constructor
	list(){
		head=new node<T>;
		begin=head; end=head;
	}
	//destructor
	~list(){
		node<T> *temporary_node;
		while(begin->next!=NULL){
			temporary_node=begin->next;
			delete begin;
			begin=temporary_node;
		}
		delete begin;
	}
	int Size(){
		return List_size;
	}
	void Add(T element){
		head->NodeVal=element;
		node<T> *NewNode=new node<T>;
		head->next=NewNode;
		NewNode->last=head;
		head=NewNode; end=head;
		++List_size;
	}
	void Erase_end(){
		if(end->last==NULL)return;
		node<T> *temporary_node=end->last;
		if(temporary_node->last==NULL){
			end->last=NULL;
			delete temporary_node;
			return;
		}
		end->last=temporary_node->last;
		(temporary_node->last)->next=end;
		delete temporary_node;
		head = end;
		--List_size;
	}
	void PrintLists(){
		node<T> *temporary_node=begin;
		while(temporary_node->next!=NULL){
			std::cout<<temporary_node->NodeVal<<' ';
			temporary_node=temporary_node->next;
		}
		std::cout<<'\n';
	}
};
#endif
