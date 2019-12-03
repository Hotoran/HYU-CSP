#include<iostream>

template <class T>
class Node {
public:
	T data;
	Node<T>* next;
	Node() : next(nullptr) {}
	Node(T t) : data(t), next(nullptr) {}
};

template <class T>
class List {
private:
  	Node<T>* head;
  	int size;
public:
  	List() : head(NULL) {}
  	~List() {
		Node<T>* prev = head;
		Node<T>* curr = head->next;
		while (curr) {
			delete prev;
			prev = curr;
			curr = curr->next;
		}
		delete prev;
	}
  	List(T* arr , const int n_nodes) : List() {
		Node<T>** list = &this->head;
   		for (int i = 0 ; i < n_nodes; i++ ){
			*list = new Node<T>;            
			(*list)->data = arr[i];         
			(*list)->next = NULL;           
			list = &((*list)->next);        
   		}
	}

	void insert_at(int idx, T data) // or void insert_at(int idx, const T& data);
	{
		Node<T>* prev;
		Node<T>* curr = head;
		for (int i = 0; i < idx; i++) {
			prev = curr;
			curr = curr->next;
		}
		prev->next = new Node<T>(data);
		prev->next->next = curr;
  	}
  	void remove_at(int idx)
  	{
		if (idx == 0) {
			pop_front();
			return;
		}
		Node<T>* prev;
		Node<T>* curr = head;
		for (int i = 0; i < idx; i++) {
			prev = curr;
			curr = curr->next;
			if (!curr) return;
		}
		prev->next = curr->next;
		delete curr;
  	}
  	void pop_back()
  	{
		if (!head) return;
		Node<T>* prev;
		Node<T>* curr = head;
		while (curr->next) {
			prev = curr;
			curr = curr->next;
		}
		if (curr == head) {
			delete curr;
			head = nullptr;
		} else {
			delete curr;
			prev->next = nullptr;
		}
  	}
  	void push_back(T val) // or void push_back(const T& val)
  	{
		if (!head) {
			head = new Node<T>(val);
			return;
		}
		Node<T>* curr = head;
		while (curr->next) curr = curr->next;
		curr->next = new Node<T>(val);
  	}
  	void pop_front()
  	{
		if (!head) return;
		Node<T>* curr = head->next;
		delete head;
		head = curr;
  	}
  	void push_front(T val) // or void push_front(const T& val)
  	{
   		// allocate new node
   		Node<T>* new_node = new Node<T>;
   		new_node->data = val;

   		// insert new node into head;
   		new_node->next = this->head;
   		this->head = new_node;
 
  	}
  	// insert const keyword cuz of rvalue problem
  	friend std::ostream& operator<<(std::ostream& out , List<T>& rhs)
  	{
   		Node<T> * iter = rhs.head;
   		while (iter){
			out << iter->data << " ";
			iter = iter->next;
   		}
   		return out;
	}

};
