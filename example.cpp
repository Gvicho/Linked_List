#include<iostream> //here iostrem can be deleted,because it's olready in list header file
#include"linked_list.h"

int main(){
	list<char> ls; // declearing list
	
	int number_of_elements;
	std::cin>>number_of_elements;
	while(number_of_elements--) {
		char element; 
		std::cin>>element;
		ls.Add(element); //adding element to the end of the list
	}
	
	
	ls.Erase_end(); //erasing element from the end of the list
	
	
	ls.Add('a'); //adding 'a' to the and of the list
	
	
	ls.PrintLists(); //printing hole list on console
	
	
	std::cout<<ls.Size()<<'\n'; //printing the number of elements in the list
}
