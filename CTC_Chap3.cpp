#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

template<typename T>
struct Stack_node
{
	T data;
	struct Stack_node *link;
};

template<typename T>
struct Queue_node
{
	T data;
	Queue_node *link;
};

enum category
{
	cat,
	dog
};

typedef struct doubly_ll
{
	category animal;
	int arrival_time;
	struct doubly_ll* prev;
	struct doubly_ll* next;
}doubly_ll;


template<class T>
class Stack{
public:
	Stack_node<T> *top;

	Stack()
	{
		top=NULL;
	}

	void pop()
	{
		if(top==NULL)
		{
			cout<<"Stack is already empty. Cannot empty it";
			return;
		}
		else
		{
			top=top->link;
		}
	}
	void push(T item)
	{
		if(top==NULL)
		{
			Stack_node<T> *temp = new Stack_node<T>;
			temp->data=item;
			temp->link=NULL;
			top=temp;
		}
		else
		{
			Stack_node<T> *temp = new Stack_node<T>;
			temp->data=item;
			temp->link=top;
			top=temp;
			
		}
	}
	void display()
	{
		Stack_node<T> *iter;
		iter=top;
		while(iter!=NULL)
		{
			cout<<iter->data<<"->";
			iter=iter->link;
		}
		cout<<"\n";
	}

	T tos()
	{
		if (top==NULL)
		{
			cout<<"Stack is empty. There is no top of stack present";
			return -1;
		}
		else
		{
			return top->data;
		}
	}

	bool isEmpty()
	{
		if(top==NULL)
			return true;
		else
			return false;
	}
	int size()
	{
		Stack_node<T> *temp;
		temp=top;
		int counter=0;
		while(temp!=NULL)
		{
			counter++;
			temp=temp->link;
		}
		return counter;

	}
};

template<class T>
class Queue{
public:
	Queue_node<T> *first;
	Queue_node<T> *last;

	Queue()
	{
		//my_stack=NULL;
		first=NULL;
		last=NULL;
	}

	void remove()
	{
		if(first==NULL)
		{
			cout<<"Queue is already empty. Cannot empty it"<<"\n";
			return;
		}
		else
		{
			first=first->link;
		}
	}
	void add(T item)
	{
		if(first==NULL)
		{
			Queue_node<T> *temp = new Queue_node<T>;
			temp->data=item;
			temp->link=NULL;
			first=temp;
			last=temp;
		}
		else
		{
			Queue_node<T> *temp = new Queue_node<T>;
			temp->data=item;
			last->link=temp;
			last=last->link;
			last->link=NULL;	
		}
	}

	T top()
	{
		if (first==NULL)
		{
			cout<<"Stack is empty. There is no top of stack present \n";
			return -1;
		}
		else
		{
			return first->data;
		}
	}

	bool isEmpty()
	{
		if(first==NULL)
			return true;
		else
			return false;
	}
	int size()
	{
		Queue_node<T> *temp;
		temp=first;
		int counter=0;
		while(temp!=NULL)
		{
			counter++;
			temp=temp->link;
		}

		return counter;

	}
	void display()
	{
		Queue_node<T> *temp;
		temp=first;
		while(temp!=NULL)
		{
			cout<<temp->data<<"->";
			temp=temp->link;
		}
		cout<<"\n";
	}


};

class Chap3_problem2
{
public:

	Stack<int> s1;
	//Queue<int> q1;
	Stack<int> min_stack;

	void empty_stack()
	{
		while(!s1.isEmpty())
		{
			s1.pop();
		}
		while(!min_stack.isEmpty())
		{
			min_stack.pop();
		}
	}

	void problem2_pop()
	{
		s1.pop();
		min_stack.pop();
	}

	void getMin()
	{
		cout<<"Minimum element: "<<min_stack.tos()<<"\n";
	}

	void fill_up_stack()
	{
		int min_ele;
		int rand_element = (rand()%10);
		min_ele=rand_element;
		for(int i=0; i<10; i++)
		{
			s1.push(rand_element);
			if (rand_element<min_ele)
			{
				min_ele=rand_element;
			}
			min_stack.push(min_ele);
			rand_element=(rand()%10);
		}
	}

	void display()
	{
		s1.display();
		//cout<<"Min stack: \n";
		//min_stack.display();
	}


	void execute()
	{

		empty_stack();
		fill_up_stack();
		cout<<"The stack is: \n";
		display();
		getMin();
		//cout<<"The Minimum element is: "<<getMin()<<"\n";
		cout<<"Popping 6 data"<<"\n";
		problem2_pop();
		problem2_pop();
		problem2_pop();
		problem2_pop();
		problem2_pop();
		problem2_pop();
		cout<<"Now the stack is: \n";
		display();
		getMin();
	}


};


class Chap3_problem3
{
public:
	vector<Stack<int>*> v;
	Chap3_problem3()
	{
		cout<<"The limit for one stack right now is 5 \n";
	}
	void push(int item)
	{
		if(!v.empty())
		{
			if(v[v.size()-1]->size()<5)
			{
				v[v.size()-1]->push(item);
			}
		
			else
			{
				Stack<int> *s = new Stack<int>;
				s->push(item);
				v.push_back(s);
			}
		}
		else
		{
			Stack<int> *s = new Stack<int>;
			s->push(item);
			v.push_back(s);
		}

	}

	void display()
	{
		for (int i=v.size()-1;i>-1;i--)
		{
			//cout<<"Displaying elements of stack:"<<i<<"\n";
			v[i]->display();
		}
		cout<<"\n";
	}

	void pop()
	{
		if(v[v.size()-1]->size()!=0)
		{
			v[v.size()-1]->pop();
		}
		else
		{
			v.pop_back();
			v[v.size()-1]->pop();
		}
	}

	void popAt(int index)
	{
		if(index>(v.size()*5)-1 || index==0)
		{
			cout<<"Invalid index"<<"\n";
		}
		else
		{
			//cout<<"Vector size: "<<v.size()<<"\n";
			int vector_index=(v.size()-1)-(index/5);
			int stack_index = index % 5;
			int temp_size=v[vector_index]->size();
			vector<int> temp;
			//cout<<"Vector Index: "<<vector_index<<"\n";
			//cout<<"Stack Index: "<<stack_index<<"\n";
			//cout<<"temp_size : "<<temp_size<<"\n";
			while(temp_size-(stack_index)!=(v[vector_index]->size())-1)
			{
				//cout<<"v[vector_index]->tos()"<<v[vector_index]->tos()<<",";
				temp.push_back(v[vector_index]->tos());
				v[vector_index]->pop();
			}
			v[vector_index]->pop();
			for(int i=temp.size()-1 ;i>-1;i--)
			{
				v[vector_index]->push(temp[i]);
			}
		}
	}
	
};


class Chap3_problem4
{
public:
	Stack<int> s1;
	Stack<int> s2;

	void add(int item)
	{
		s1.push(item);
	}
	void remove()
	{
		if(s2.isEmpty())
		{
			while(!s1.isEmpty())
			{
				s2.push(s1.tos());
				s1.pop();
			}
		}
		s2.pop();
	}
	int top()
	{
		if(s2.isEmpty())
		{
			while(!s1.isEmpty())
			{
				s2.push(s1.tos());
				s1.pop();
			}
		}
		return s2.tos();
	}

	void display()
	{
		if(!s2.isEmpty())
			s2.display();
		if(!s1.isEmpty())
			s1.display();
	}

};

class Chap3_problem5
{
public:
	Stack<int> s1;
	Stack<int> result;
	void fill_up_stack()
	{
		int rand_element;
		for(int i=0; i<10; i++)
		{
			rand_element=(rand()%19);
			s1.push(rand_element);
		}
	}

	void sortStack()
	{
		while(!s1.isEmpty())
		{
			int temp_item=s1.tos();
			s1.pop();
			while(!result.isEmpty() && temp_item<result.tos())
			{
				s1.push(result.tos());
				result.pop();
			}
			result.push(temp_item);
		}
	}

	void display()
	{
		s1.display();
	}
	void result_display()
	{
		result.display();
	}

};


class Chap3_problem6
{
public:
	doubly_ll* ds_dog = new doubly_ll;
	doubly_ll* ds_cat = new doubly_ll;

	Chap3_problem6()
	{
		ds_dog->animal=dog;
		ds_dog->arrival_time=0;
		ds_dog->next=NULL;
		ds_dog->prev=NULL;
		
		ds_cat->animal=cat;
		ds_cat->arrival_time=0;
		ds_cat->next=NULL;
		ds_cat->prev=NULL;
	}

	void enqueue(category c, int arrival_time)
	{
		doubly_ll* temp = new doubly_ll;
		temp->animal=c;
		temp->arrival_time=arrival_time;
		temp->prev=NULL;
		temp->next=NULL;
		doubly_ll* iter;

		if (c==cat)
		{
			iter=ds_cat;
			while(arrival_time>iter->arrival_time && iter->next!=NULL)
			{
				iter=iter->next;
			}
			if(iter->next!=NULL || arrival_time<iter->arrival_time)
			{
				temp->prev=iter->prev;
				temp->next=iter;
				iter->prev->next=temp;
				iter->prev=temp;

			}
			else
			{
				iter->next=temp;
				temp->prev=iter;
			}


		}	
	
		else
		{
			if(ds_dog==NULL)
			{
				ds_dog=temp;
			}
			else
			{
				iter=ds_dog;
				while(arrival_time>iter->arrival_time && iter->next!=NULL)
				{
					iter=iter->next;
				}
				if(iter->next!=NULL || arrival_time<iter->arrival_time)
				{
					temp->prev=iter->prev;
					temp->next=iter;
					iter->prev->next=temp;
					iter->prev=temp;

				}
				else
				{
					iter->next=temp;
					temp->prev=iter;
				}

			}
		}
	}

	void dequeue_any()
	{
		doubly_ll* temp_dog;
		doubly_ll* temp_cat;
		
		temp_dog=ds_dog->next;
		temp_cat=ds_cat->next;
		

		if(temp_cat->arrival_time>temp_dog->arrival_time)
		{
			cout<<"Dog with arrival time "<<temp_dog->arrival_time<<" will be given"<<"\n";
			temp_dog->prev->next=temp_dog->next;
			temp_dog->next->prev=temp_dog->prev;
			delete(temp_dog);
		}
		else
		{	
			cout<<"Cat with arrival time "<<temp_cat->arrival_time<<" will be given \n";
			temp_cat->prev->next=temp_cat->next;
			temp_cat->next->prev=temp_cat->prev;
			delete(temp_cat);
		}
	}

	void dequeue_dog()
	{
		doubly_ll* temp_dog;
		
		temp_dog=ds_dog->next;
		cout<<"Dog with arrival time "<<temp_dog->arrival_time<<" will be given"<<"\n";
		temp_dog->prev->next=temp_dog->next;
		temp_dog->next->prev=temp_dog->prev;
		delete(temp_dog);	
	}


	void dequeue_cat()
	{
		doubly_ll* temp_cat;
		
		temp_cat=ds_cat->next;
		cout<<"Cat with arrival time "<<temp_cat->arrival_time<<" will be given"<<"\n";
		temp_cat->prev->next=temp_cat->next;
		temp_cat->next->prev=temp_cat->prev;
		delete(temp_cat);	
	}


	void display()
	{
		doubly_ll* temp;
		temp=ds_dog->next;
		cout<<"Dog Queue"<<"\n";
		while(temp!=NULL)
		{
			cout<<temp->arrival_time<<"->";
			temp=temp->next;
		}
		cout<<"\n";
		temp=ds_cat->next;
		cout<<"Cat Queue"<<"\n";
		while(temp!=NULL)
		{
			cout<<temp->arrival_time<<"->";
			temp=temp->next;
		}
		cout<<"\n";
	}

};


int main()
{
	Chap3_problem2 ch2;
	ch2.execute();

	Chap3_problem3 SetofStacks;
	SetofStacks.push(5);
	SetofStacks.push(8);
	SetofStacks.push(2);
	SetofStacks.push(10);
	SetofStacks.push(1);
	SetofStacks.push(9);
	SetofStacks.push(3);
	SetofStacks.push(10);
	SetofStacks.push(13);
	SetofStacks.push(4);
	cout<<"The stack is:"<<"\n";
	SetofStacks.display();
	cout<<"Pop element 7"<<"\n";
	SetofStacks.popAt(7);
	cout<<"Now the stack is:"<<"\n";
	SetofStacks.display();

	Chap3_problem4 ch4;
	Queue<int> q1;
	q1.add(4);
	q1.add(2);
	q1.add(3);
	q1.add(5);
	q1.add(1);

	ch4.add(4);
	ch4.add(2);
	ch4.add(3);
	ch4.add(5);
	ch4.add(1);

	
	cout<<"Top from Original Queue: "<<q1.top()<<"\n";
	cout<<"Top from Queues of Stack: "<<ch4.top()<<"\n";

	q1.remove();
	ch4.remove();
	cout<<"After Popping 1 element from each \n";
	cout<<"Top from Original Queue: "<<q1.top()<<"\n";
	cout<<"Top from Queues of Stack: "<<ch4.top()<<"\n";

	Chap3_problem5 ch5;
	ch5.fill_up_stack();
	cout<<"Original Stack: \n";
	ch5.display();
	ch5.sortStack();
	cout<<"Sorted Stack: \n";
	ch5.result_display();

	Chap3_problem6 ch6;
	category animal;
	animal=dog;
	ch6.enqueue(animal,23);
	ch6.enqueue(animal,22);
	ch6.enqueue(animal,56);
	ch6.enqueue(animal,19);
	ch6.enqueue(animal,38);
	animal=cat;
	ch6.enqueue(animal,21);
	ch6.enqueue(animal,16);
	ch6.enqueue(animal,45);
	ch6.enqueue(animal,31);
	ch6.enqueue(animal,36);
	ch6.display();	
	ch6.dequeue_any();
	cout<<"\n \nData structure after removals \n";
	ch6.display();

	ch6.dequeue_dog();
	cout<<"\n \nData structure after removals \n";
	ch6.display();

	ch6.dequeue_cat();
	cout<<"\n \nData structure after removals \n";
	ch6.display();
	

	return 0;
}

