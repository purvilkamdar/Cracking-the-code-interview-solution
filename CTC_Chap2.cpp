#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

typedef struct singly_linked_list{
	int value;
	singly_linked_list* next;
}link_list;

class chapter_2
{
public:
	singly_linked_list* ll;

	chapter_2()
	{
		//ll = new singly_linked_list;
		ll=NULL;

	}

	void fill_up_link_list(singly_linked_list** temp_link_list)
	{

		singly_linked_list* temp_value1 = new singly_linked_list;
		singly_linked_list* temp_value2 = new singly_linked_list;
		singly_linked_list* temp_value3 = new singly_linked_list;
		singly_linked_list* temp_value4 = new singly_linked_list;
		singly_linked_list* temp_value5 = new singly_linked_list;
		singly_linked_list* temp_value6 = new singly_linked_list;
		singly_linked_list* temp_value7 = new singly_linked_list;

		temp_value1->value=3;
		temp_value1->next=NULL;
		temp_value2->value=5;
		temp_value2->next=NULL;
		temp_value3->value=8;
		temp_value3->next=NULL;
		temp_value4->value=5;
		temp_value4->next=NULL;
		temp_value5->value=10;
		temp_value5->next=NULL;
		temp_value6->value=2;
		temp_value6->next=NULL;
		temp_value7->value=1;
		temp_value7->next=NULL;



		(*temp_link_list)->value=temp_value1->value;

		(*temp_link_list)->next=temp_value2;

		(*temp_link_list)=(*temp_link_list)->next;


		(*temp_link_list)->next=temp_value3;
		(*temp_link_list)=(*temp_link_list)->next;

		(*temp_link_list)->next=temp_value4;
		(*temp_link_list)=(*temp_link_list)->next;

		(*temp_link_list)->next=temp_value5;
		(*temp_link_list)=(*temp_link_list)->next;

		(*temp_link_list)->next=temp_value6;
		(*temp_link_list)=(*temp_link_list)->next;
		
		(*temp_link_list)->next=temp_value7;
		//(*temp_link_list)=(*temp_link_list)->next;
		


	}

	void fill_up_link_list_problem5_1(singly_linked_list** temp_link_list)
	{

		singly_linked_list* root;
		singly_linked_list* temp_value1 = new singly_linked_list;
		singly_linked_list* temp_value2 = new singly_linked_list;
		singly_linked_list* temp_value3 = new singly_linked_list;

		temp_value1->value=7;
		temp_value1->next=NULL;
		temp_value2->value=1;
		temp_value2->next=NULL;
		temp_value3->value=6;
		temp_value3->next=NULL;



		(*temp_link_list)->value=temp_value1->value;
		root=(*temp_link_list);
		(*temp_link_list)->next=temp_value2;
		(*temp_link_list)=(*temp_link_list)->next;
		(*temp_link_list)->next=temp_value3;
		(*temp_link_list)=root;
		
	}

	void fill_up_link_list_problem5_2(singly_linked_list** temp_link_list)
	{

		singly_linked_list* root;
		singly_linked_list* temp_value1 = new singly_linked_list;
		singly_linked_list* temp_value2 = new singly_linked_list;
		singly_linked_list* temp_value3 = new singly_linked_list;

		temp_value1->value=5;
		temp_value1->next=NULL;
		temp_value2->value=9;
		temp_value2->next=NULL;
		temp_value3->value=2;
		temp_value3->next=NULL;



		(*temp_link_list)->value=temp_value1->value;
		root=(*temp_link_list);
		(*temp_link_list)->next=temp_value2;
		(*temp_link_list)=(*temp_link_list)->next;
		(*temp_link_list)->next=temp_value3;
		(*temp_link_list)=root;
	}


	void fill_up_link_list_problem6(singly_linked_list** temp_link_list)
	{

		singly_linked_list* temp_value1 = new singly_linked_list;
		singly_linked_list* temp_value2 = new singly_linked_list;
		singly_linked_list* temp_value3 = new singly_linked_list;
		singly_linked_list* temp_value4 = new singly_linked_list;
		singly_linked_list* temp_value5 = new singly_linked_list;
		singly_linked_list* temp_value6 = new singly_linked_list;
		singly_linked_list* temp_value7 = new singly_linked_list;

		temp_value1->value=3;
		temp_value1->next=NULL;
		temp_value2->value=5;
		temp_value2->next=NULL;
		temp_value3->value=8;
		temp_value3->next=NULL;
		temp_value4->value=6;
		temp_value4->next=NULL;
		temp_value5->value=8;
		temp_value5->next=NULL;
		temp_value6->value=5;
		temp_value6->next=NULL;
		temp_value7->value=3;
		temp_value7->next=NULL;



		(*temp_link_list)->value=temp_value1->value;

		(*temp_link_list)->next=temp_value2;

		(*temp_link_list)=(*temp_link_list)->next;


		(*temp_link_list)->next=temp_value3;
		(*temp_link_list)=(*temp_link_list)->next;

		(*temp_link_list)->next=temp_value4;
		(*temp_link_list)=(*temp_link_list)->next;

		(*temp_link_list)->next=temp_value5;
		(*temp_link_list)=(*temp_link_list)->next;

		(*temp_link_list)->next=temp_value6;
		(*temp_link_list)=(*temp_link_list)->next;
		
		(*temp_link_list)->next=temp_value7;
	}

	void fill_up_link_list_problem7(singly_linked_list** temp_link_list1,singly_linked_list** temp_link_list2)
	{
		singly_linked_list* temp_value1 = new singly_linked_list;
		singly_linked_list* temp_value2 = new singly_linked_list;
		singly_linked_list* temp_value3 = new singly_linked_list;
		singly_linked_list* temp_value4 = new singly_linked_list;
		singly_linked_list* temp_value5 = new singly_linked_list;
		singly_linked_list* temp_value6 = new singly_linked_list;

		singly_linked_list* root_ll1;
		singly_linked_list* root_ll2;
		
		

		temp_value1->value=3;
		temp_value1->next=NULL;
		temp_value2->value=4;
		temp_value2->next=NULL;
		temp_value3->value=8;
		temp_value3->next=NULL;
		temp_value4->value=6;
		temp_value4->next=NULL;
		temp_value5->value=7;
		temp_value5->next=NULL;
		temp_value6->value=5;
		temp_value6->next=NULL;



		(*temp_link_list1)->value=temp_value1->value;
		root_ll1=(*temp_link_list1);
		(*temp_link_list1)->next=temp_value5;

		(*temp_link_list1)=(*temp_link_list1)->next;


		(*temp_link_list1)->next=temp_value3;
		//(*temp_link_list)=(*temp_link_list)->next;

		(*temp_link_list2)->value=temp_value4->value;
		root_ll2=(*temp_link_list2);
		///(*temp_link_list)=(*temp_link_list)->next;

		(*temp_link_list2)->next=temp_value2;
		(*temp_link_list2)=(*temp_link_list2)->next;

		(*temp_link_list2)->next=temp_value5;
		(*temp_link_list2)=(*temp_link_list2)->next;
		
		(*temp_link_list2)->next=temp_value6;

		(*temp_link_list1)=root_ll1;
		(*temp_link_list2)=root_ll2;
	}
	
	void fill_up_link_list_problem8(singly_linked_list** temp_link_list)
	{
		singly_linked_list* root;
		singly_linked_list* temp_value1 = new singly_linked_list;
		singly_linked_list* temp_value2 = new singly_linked_list;
		singly_linked_list* temp_value3 = new singly_linked_list;
		singly_linked_list* temp_value4 = new singly_linked_list;
		singly_linked_list* temp_value5 = new singly_linked_list;
		singly_linked_list* temp_value6 = new singly_linked_list;
		singly_linked_list* temp_value7 = new singly_linked_list;

		temp_value1->value=3;
		temp_value1->next=NULL;
		temp_value2->value=7;
		temp_value2->next=NULL;
		temp_value3->value=8;
		temp_value3->next=NULL;
		temp_value4->value=5;
		temp_value4->next=NULL;
		temp_value5->value=10;
		temp_value5->next=NULL;
		temp_value6->value=2;
		temp_value6->next=NULL;
		temp_value7->value=1;
		temp_value7->next=NULL;


		(*temp_link_list)->value=temp_value1->value;
		root=(*temp_link_list);

		(*temp_link_list)->next=temp_value2;

		(*temp_link_list)=(*temp_link_list)->next;


		(*temp_link_list)->next=temp_value3;
		(*temp_link_list)=(*temp_link_list)->next;

		(*temp_link_list)->next=temp_value4;
		(*temp_link_list)=(*temp_link_list)->next;

		(*temp_link_list)->next=temp_value5;
		(*temp_link_list)=(*temp_link_list)->next;

		(*temp_link_list)->next=temp_value6;
		(*temp_link_list)=(*temp_link_list)->next;
		
		(*temp_link_list)->next=temp_value7;
		(*temp_link_list)=(*temp_link_list)->next;
		(*temp_link_list)->next=temp_value3;
		(*temp_link_list)=root;
	}

	void print_ll(singly_linked_list* temp_link_list)
	{

		while(temp_link_list!=NULL)
		{
			cout<<temp_link_list->value<<"->";
			temp_link_list=temp_link_list->next;
		}
		cout<<"NULL"<<"\n";

	}


	void remove_duplicates(singly_linked_list** temp_link_list)
	{
		singly_linked_list* iterator_ll;
		iterator_ll=(*temp_link_list);
		//temp_link_list=temp_link_list->next;

		while(iterator_ll!=NULL)
		{
			while((*temp_link_list)->next!=NULL)
			{
				if(iterator_ll->value==(*temp_link_list)->next->value)
				{
					(*temp_link_list)->next=(*temp_link_list)->next->next;
				} else {
					(*temp_link_list) = (*temp_link_list)->next;
				}
			}
			iterator_ll=iterator_ll->next;
			(*temp_link_list)=iterator_ll;
		}

	}

	void ll_kth_to_last(singly_linked_list* temp_link_list, int k_th_value,singly_linked_list** result_linked_list)
	{
		cout<<"Linked list from "<<k_th_value<<"is:\n";
		bool flag=false;
		while(temp_link_list!=NULL)
		{
			if(temp_link_list->value==k_th_value)
				{	
					(*result_linked_list)=temp_link_list;
					break;
				}
			temp_link_list=temp_link_list->next;
		
		}
		
	}

	void delete_node(singly_linked_list** temp_link_list, int del_node_value)
	{
		if((*temp_link_list)->value==del_node_value)
		{
			singly_linked_list *temp_node;
			temp_node=(*temp_link_list)->next;
			(*temp_link_list)=temp_node;
		}
		else{
			while((*temp_link_list)->next!=NULL)
			{
				if((*temp_link_list)->next->value==del_node_value)
				{
					(*temp_link_list)->next=(*temp_link_list)->next->next;
					break;
				}
				else
				{
					(*temp_link_list)=(*temp_link_list)->next;
				}
			}
		}
	}

	void partition(singly_linked_list** temp_link_list,int partition_value)
	{
		singly_linked_list* new_ll = new singly_linked_list;
		singly_linked_list* temp_right_ll = new singly_linked_list;
		//singly_linked_list* root;
		singly_linked_list* right_root;
		singly_linked_list* left_root;
		//root=(*temp_link_list);
		new_ll=NULL;
		temp_right_ll=NULL;
		while((*temp_link_list)!=NULL)
		{
			if((*temp_link_list)->value<partition_value)
			{
				if(new_ll==NULL)
				{
					new_ll=(*temp_link_list);
					left_root=new_ll;
				}
				else
				{
					new_ll->next=(*temp_link_list);
					new_ll=new_ll->next;
				}
			}
			else
			{
				if(temp_right_ll==NULL)
				{
					temp_right_ll=(*temp_link_list);
					right_root=temp_right_ll;
				}
				else
				{

					temp_right_ll->next=(*temp_link_list);
					temp_right_ll=temp_right_ll->next;
				}
			}
			(*temp_link_list)=(*temp_link_list)->next;
		}
		temp_right_ll->next=NULL;
		
		new_ll->next=right_root;
		(*temp_link_list)=left_root;
		
	}


	void addition(singly_linked_list* ll1,singly_linked_list* ll2)
	{
		singly_linked_list* result_linked_list = new singly_linked_list;
		singly_linked_list* root;
		result_linked_list=NULL;
		int number1=0;
		int number2=0;
		int counter=0;
		int result_number=0;
		while(ll1!=NULL)
		{
			number1=number1+pow(10,counter)*ll1->value;
			ll1=ll1->next;
			counter++;
		}
		counter=0;
		while(ll2!=NULL)
		{
			number2=number2+pow(10,counter)*ll2->value;
			ll2=ll2->next;
			counter++;
		}
		result_number=number1+number2;
		cout<<number1<<"+"<<number2<<"="<<result_number<<"\n";
		while(result_number>0)
		{
			if(result_linked_list==NULL)
			{
				singly_linked_list* temp = new singly_linked_list;
				temp->value=(result_number)%10;
				result_linked_list=temp;
				root=result_linked_list;
			}
			else
			{
				result_linked_list->next->value=result_number%10;
				result_linked_list=result_linked_list->next;
			}
			result_linked_list->next=new singly_linked_list;
			result_number=result_number/10;
		}
		result_linked_list->next=NULL;
		result_linked_list=root;
		cout<<"Result Linked list:"<<"\n";
		print_ll(result_linked_list);
		
	}


	void addition_followup(singly_linked_list* ll1,singly_linked_list* ll2)
	{
		singly_linked_list* temp;
		cout<<"Solution to the followup question:"<<"\n";
		singly_linked_list* result_linked_list = new singly_linked_list;
		singly_linked_list* root;
		result_linked_list=NULL;
		int number1=0;
		int number2=0;
		int counter=-1;
		int result_number=0;
		int temp_number;

		temp=ll1;
		while(temp!=NULL)
		{
			counter++;
			temp=temp->next;
		}
		
		while(ll1!=NULL)
		{
			number1=number1+pow(10,counter)*ll1->value;
			ll1=ll1->next;
			counter--;
		}
		counter=-1;
		temp=ll2;
		while(temp!=NULL)
		{
			counter++;
			temp=temp->next;
		}
		while(ll2!=NULL)
		{
			number2=number2+pow(10,counter)*ll2->value;
			ll2=ll2->next;
			counter--;
		}
		result_number=number1+number2;
		cout<<number1<<"+"<<number2<<"="<<result_number<<"\n";
		temp_number=result_number;
		counter=-1;
		while(temp_number>0)
		{
			temp_number=temp_number/10;
			counter++;
		}
		//cout<<"counter"<<counter<<"\n";
		while(counter>=0)
		{
			temp_number=pow(10,counter);
			if(result_linked_list==NULL)
			{
				singly_linked_list* temp = new singly_linked_list;
				temp->value=(result_number)/(temp_number);
				result_linked_list=temp;
				root=result_linked_list;
			}
			else
			{
				result_linked_list->next->value=result_number/(temp_number);
				result_linked_list=result_linked_list->next;
			}
			result_linked_list->next=new singly_linked_list;
			result_number=result_number%temp_number;
			counter--;
		}
		result_linked_list->next=NULL;
		result_linked_list=root;
		cout<<"Result Linked list:"<<"\n";
		print_ll(result_linked_list);
		
	}

	bool check_palindrome(singly_linked_list* temp_link_list)
	{
		singly_linked_list* temp1;
		temp1=temp_link_list;
		int link_list_count=0;
		int counter=0;
		vector<int> link_list_value;
		while(temp1!=NULL)
		{
			link_list_count++;
			link_list_value.push_back(temp1->value);
			temp1=temp1->next;
		}
		if(link_list_count%2==0)
		{
			return false;
		}
		else
		{
			counter=link_list_count/2;
			for(int i=0;i<counter;i++)
			{
				if (link_list_value.at(i)!=link_list_value.at(link_list_count-(i+1)))
					return false;
			}
			return true;
		}

	}

	void find_intersecting_node(singly_linked_list** ll1,singly_linked_list** ll2)
	{
		singly_linked_list* temp;
		temp=(*ll1);
		int ll1_counter=0;
		int ll2_counter=0;
		int diff;
		bool ll1_flag=false;
		while(temp!=NULL)
		{
			ll1_counter++;
			temp=temp->next;

		}
		temp=(*ll2);
		while(temp!=NULL)
		{
			ll2_counter++;
			temp=temp->next;

		}
		if(ll1_counter>ll2_counter)
		{
			diff=ll1_counter-ll2_counter;
			ll1_flag=true;
		}
		else
		{
			diff=ll2_counter-ll1_counter;
		}
		if(ll1_flag)
		{
			while(diff!=0)
			{
				(*ll1)=(*ll1)->next;
				diff--;
			}
		}
		else
		{
			while(diff!=0)
			{
				(*ll2)=(*ll2)->next;
				diff--;
				//cout<<"ll2="<<(*ll2)->value;
			}
		}
		//cout<<"Link list 2="<<(*ll2)->value;
		while(((*ll1)!=NULL) || ((*ll2)!=NULL))
		{
			if ((*ll1)==(*ll2))
			{
				cout<<"The intersecting node is: "<<(*ll1)->value<<"\n";
				return;
			}
			(*ll1)=(*ll1)->next;
			(*ll2)=(*ll2)->next;
		}
	}

	bool check_circular_ll(singly_linked_list* ll1)
	{
		singly_linked_list* p1;
		singly_linked_list* p2;
		p1=ll1;
		p2=ll1;
		while(p1!=NULL || p2!=NULL)
		{
			p1=p1->next;
			p2=p2->next->next;
			if(p1==p2)
				return true;
			
		}
		return false;
	}

	void loop_node(singly_linked_list* ll1)
	{
		singly_linked_list* p1;
		singly_linked_list* p2;
		p1=ll1;
		p2=ll1;
		while(1)
		{
			p1=p1->next;
			p2=p2->next->next;
			if(p1==p2)
				break;	
		}
	
		p1=ll1;
		while(p1!=p2)
		{
			p1=p1->next;
			p2=p2->next;
		}
		cout<<"The circulating node is: "<<p1->value<<"\n";
	
	}

	void problem1()
	{
		singly_linked_list* temp_ll = new singly_linked_list;
		ll=temp_ll;
		fill_up_link_list(&temp_ll);
		temp_ll=ll;
		cout<<"Linked list initially"<<"\n";
		print_ll(temp_ll);
		remove_duplicates(&temp_ll);
		cout<<"Linked list after removing duplicates"<<"\n";
		temp_ll=ll;
		print_ll(temp_ll);
	}

	void problem2()
	{
		singly_linked_list* temp_ll = new singly_linked_list;
		ll=temp_ll;
		fill_up_link_list(&temp_ll);
		temp_ll=ll;
		cout<<"Linked list initially"<<"\n";
		print_ll(temp_ll);
		singly_linked_list* result_linked_list = new singly_linked_list;
		ll_kth_to_last(temp_ll,6,&result_linked_list);
		//cout<<"New Linked list:";
		print_ll(result_linked_list);

	}

	void problem3()
	{
		singly_linked_list* temp_ll = new singly_linked_list;
		//singly_linked_list* del_node = new singly_linked_list;
		int del_node=3;
		ll=temp_ll;
		fill_up_link_list(&temp_ll);
		temp_ll=ll;
		cout<<"Linked list initially"<<"\n";
		print_ll(temp_ll);
		delete_node(&temp_ll,del_node);
		cout<<"Linked list after deleting node"<<del_node<<"\n";
		temp_ll=ll;
		print_ll(temp_ll);
	}

	void problem4()
	{
		singly_linked_list* temp_ll = new singly_linked_list;
		int partition_value=5;
		ll=temp_ll;
		fill_up_link_list(&temp_ll);
		temp_ll=ll;
		cout<<"Linked list initially"<<"\n";
		print_ll(temp_ll);
		partition(&temp_ll,partition_value);
		cout<<"Linked list after rearranging according to partition - "<<partition_value<<"\n";
		//temp_ll=ll;
		print_ll(temp_ll);
	}

	void problem5()
	{
		singly_linked_list* ll1 = new singly_linked_list;
		singly_linked_list* ll2 = new singly_linked_list;
		fill_up_link_list_problem5_1(&ll1);
		fill_up_link_list_problem5_2(&ll2);
		addition(ll1,ll2);
		addition_followup(ll1,ll2);
	}

	void problem6()
	{
		bool Result;
		singly_linked_list* temp_ll = new singly_linked_list;
		ll=temp_ll;
		fill_up_link_list_problem6(&temp_ll);
		temp_ll=ll;
		cout<<"Given Linked list"<<"\n";
		print_ll(temp_ll);
		Result=check_palindrome(temp_ll);
		if (Result)
			cout<<"Yes it is a palindrome";
		else
			cout<<"No it is not a palindrome";
	}

	void problem7()
	{
		singly_linked_list* ll1 = new singly_linked_list;
		singly_linked_list* ll2 = new singly_linked_list;
		fill_up_link_list_problem7(&ll1,&ll2);
		cout<<"Linked list1"<<"\n";
		print_ll(ll1);
		cout<<"Linked list2"<<"\n";
		print_ll(ll2);
		find_intersecting_node(&ll1,&ll2);
	}

	void problem8()
	{
		bool is_circular=false;
		singly_linked_list* ll1 = new singly_linked_list;
		fill_up_link_list_problem8(&ll1);
		is_circular=check_circular_ll(ll1);
		if(is_circular)
			loop_node(ll1);
		else
		{
			cout<<"The linked list is not a loop";
		}

	}

};


int main()
{
	chapter_2 chap2;
	//chap2.problem1();
	//chap2.problem2();
	//chap2.problem3();
	//chap2.problem4();
	//chap2.problem5();
	//chap2.problem6();
	//chap2.problem7();
	chap2.problem8();
	return 0;
}