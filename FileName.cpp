//--------------------
// SINGLY LINKED LIST
//--------------------

//#include<iostream>
//using namespace std;
//
//class Node {
//private:
//    Node* next;
//    int data;
//public:
//    Node(int val = 0) {
//        data = val;
//        next = nullptr;
//    }
//    friend class S_List;
//};
//
//class S_List {
//private:
//    Node* head;
//    Node* tail;
//public:
//
//    S_List() {
//        head = nullptr;
//        tail = nullptr;
//    }
//
//    bool empty() {
//        if (head == nullptr) {
//            return true;
//        }
//        else {
//            return false;
//        }
//    }
//
//    int size() {
//        Node* temp = head;
//        int size = 0;
//        if (empty()) {
//            cout << "List is empty :(" << endl;
//        }
//        else {
//            while (temp != nullptr) {
//                size++;
//                temp = temp->next;
//            }
//            return size;
//        }
//    }
//
//    int count(int val) {
//        Node* temp = head;
//        int count = 0;
//        if (empty()) {
//            cout << "List is empty :(" << endl;
//        }
//        else {
//            while (temp != nullptr) {
//                if (temp->data == val) {
//                    count++;
//                }
//                temp = temp->next;
//            }
//            return count;
//        }
//    }
//
//    void push_front(int val) {
//        Node* newNode = new Node(val);
//        if (empty()) {
//            head = tail = newNode;
//        }
//        else {
//            newNode->next = head;
//            head = newNode;
//        }
//    }
//
//    void push_back(int val) {
//        Node* newNode = new Node(val);
//        if (empty()) {
//            head = tail = newNode;
//        }
//        else {
//            tail->next = newNode;
//            tail = newNode;
//        }
//    }
//
//    int pop_front() {
//        if (empty()) {
//            cout << "List is empty";
//        }
//        if (head->next == nullptr) {
//            delete head;
//            head = nullptr;
//        }
//        else {
//            Node* temp = head;
//            head = temp->next;
//            int val = temp->data;
//            delete temp;
//            temp = nullptr;
//            return val;
//        }
//    }
//
//    int pop_back() {
//        if (head == nullptr) {  
//            cout << "List is empty" << endl;
//            return -1; 
//        }
//        if (head->next == nullptr) {
//            int val = head->data;
//            delete head;
//            head = tail = nullptr;
//            return val;
//        }
//
//        Node* temp = head;
//        while (temp->next->next != nullptr) { 
//            temp = temp->next;
//        }
//
//        int val = tail->data;
//        delete tail;
//        tail = temp;
//        tail->next = nullptr;
//
//        return val;
//    }
//
//
//    void print() {
//        Node* temp = head;
//        while (temp != nullptr) {
//            cout << temp->data << " ";
//            temp = temp->next;
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    S_List l1;
//    l1.push_front(5);
//    l1.push_front(10);
//    l1.push_front(5);
//    l1.push_front(15);
//    l1.push_back(5);
//    cout << l1.pop_front();
//    cout << l1.pop_back();
//    l1.print();
//    return 0;
//}


//--------------------
// CIRCULAR LINKED LIST
//--------------------

//#include<iostream>
//using namespace std;
//
//class Node {
//private:
//	Node* nest;
//	int data;
//public:
//	Node(int val) {
//		data = val;
//		nest = NULL;
//	}
//
//	friend class list;
//};
//
//class list {
//	Node* head;
//	Node* tail;
//public:
//	list() {
//		head = NULL;
//		tail = NULL;
//	}
//
//	bool empty() {
//		if (head == NULL) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//
//	void push_front(int val) {
//		Node* newNode = new Node(val);
//		if (head == NULL) {
//			head = tail = newNode;
//			tail->nest = head;
//		}
//		else {
//			newNode->nest = head;
//			head = newNode;
//			tail->nest = head;
//		}
//	}
//
//	void push_back(int val) {
//		Node* newNode = new Node(val);
//		if (head == NULL) {
//			head = tail = newNode;
//			tail->nest = head;
//		}
//		else {
//			tail->nest = newNode;
//			tail = newNode;
//			newNode->nest = head;
//		}
//	}
//
//	void pop_front() {
//		if (head == NULL) {
//			cout << "Empty!";
//			return;
//		}
//		Node* temp = head;
//		if (head == tail) {
//			delete head;
//			head = tail = NULL;
//		}else{
//			head = head->nest;
//			temp->nest = NULL;
//			tail->nest = head;
//			delete temp;
//			temp = NULL;
//		}
//	}
//
//	void pop_back() {
//		if (head == NULL) {
//			cout << "Empty!";
//			return;
//		}
//		Node* temp = head;
//		if (head == tail) {
//			delete head;
//			head = tail = NULL;
//		}
//		else {
//			while (temp->nest != tail) {
//				temp = temp->nest;
//			}
//			tail = temp;
//			tail->nest = head;
//			temp->nest = NULL;
//			delete temp;
//		}
//	}
//
//	void print() {
//		if (head == NULL) {
//			cout << " Empty! ";
//			return;
//		}
//		else {
//			Node* temp = head;
//			do {
//				cout << temp->data << " ";
//				temp = temp->nest;
//			} while (temp != head);
//			cout << endl;
//		}
//	}
//
//	int size() {
//		if (empty()) {
//			cout << "Empty!";
//		}
//		else {
//			Node* temp = head;
//			int size = 0;
//			do {
//				size++;
//				temp = temp->nest;
//			} while (temp != head);
//			return size;
//		}
//	}
//};
//
//int main() {
//	list l1;
//
//	l1.push_front(5);
//	l1.push_front(3);
//	l1.push_back(6);
//	l1.push_back(7);
//	cout << "The size of C list is: " << l1.size() << endl;
//	l1.pop_front();
//	l1.print();
//	cout << "The size of C list is: " << l1.size() << endl;
//	return 0;
//}

//--------------------
// DOUBLY LINKED LIST
//--------------------

//#include<iostream>
//using namespace std;
//
//class Node {
//private:
//	Node* nest; 
//	Node* prev; 
//	int data;
//public:
//	Node(int val) {
//		data = val;
//		nest = NULL;
//		prev = NULL;
//	}
//
//	friend class list;
//};
//
//class list {
//	Node* head;
//	Node* tail;
//public:
//	list() {
//		head = NULL;
//		tail = NULL;
//	}
//
//	bool empty() {
//		if (head == NULL) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//
//	void push_front(int val) {
//		Node* newNode = new Node(val);
//		if (head == NULL) {
//			head = tail = newNode;
//		}
//		else {
//			newNode->nest = head; 
//			head->prev = newNode; 
//			head = newNode;       
//		}
//	}
//
//	void push_back(int val) {
//		Node* newNode = new Node(val);
//		if (head == NULL) {
//			head = tail = newNode;
//		}
//		else {
//			tail->nest = newNode; 
//			newNode->prev = tail; 
//			tail = newNode;       
//		}
//	}
//
//	void pop_front() {
//		if (head == NULL) {
//			cout << "Empty!";
//			return;
//		}
//		Node* temp = head;
//		if (head == tail) {
//			delete head;
//			head = tail = NULL;
//		}
//		else {
//			head = head->nest;    
//			head->prev = NULL;    
//			delete temp;
//		}
//	}
//
//	void pop_back() {
//		if (head == NULL) {
//			cout << "Empty!";
//			return;
//		}
//		Node* temp = tail;
//		if (head == tail) {
//			delete head;
//			head = tail = NULL;
//		}
//		else {
//			tail = tail->prev;    
//			tail->nest = NULL;    
//			delete temp;
//		}
//	}
//
//	void print() {
//		if (head == NULL) {
//			cout << " Empty! ";
//			return;
//		}
//		else {
//			Node* temp = head;
//			while (temp != NULL) { 
//				cout << temp->data << " ";
//				temp = temp->nest;
//			}
//			cout << endl;
//		}
//	}
//
//	void print_reverse() {
//		if (tail == NULL) {
//			cout << " Empty! ";
//			return;
//		}
//		else {
//			Node* temp = tail;
//			cout << "Reverse: ";
//			while (temp != NULL) {
//				cout << temp->data << " ";
//				temp = temp->prev;
//			}
//			cout << endl;
//		}
//	}
//
//	int size() {
//		if (empty()) {
//			return 0;
//		}
//		else {
//			Node* temp = head;
//			int count = 0;
//			while (temp != NULL) {
//				count++;
//				temp = temp->nest;
//			}
//			return count;
//		}
//	}
//};
//
//int main() {
//	list l1;
//
//	l1.push_front(5);
//	l1.push_front(3);
//	l1.push_back(6);
//	l1.push_back(7);
//
//	cout << "List contents: ";
//	l1.print();
//	l1.print_reverse(); 
//
//	cout << "The size of Doubly list is: " << l1.size() << endl;
//
//	l1.pop_front();
//	cout << "After pop_front: ";
//	l1.print();
//
//	l1.pop_back();
//	cout << "After pop_back: ";
//	l1.print();
//
//	cout << "The size of Doubly list is: " << l1.size() << endl;
//	return 0;
//}

//---------------------
// PRACTICE LINKED LIST
//---------------------

//#include<iostream>
//using namespace std;
//
//class Node {
//	Node* nest;
//	int data;
//public:
//	Node(int val) {
//		data = val;
//		nest = nullptr;
//	}
//	friend class list;
//};
//
//class list {
//	Node* head;
//	Node* tail;
//
//public:
//	list() {
//		head = nullptr;
//		tail = nullptr;
//	}
//
//	bool empty() {
//		if (head == nullptr) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//
//	int size() {
//		if (empty()) {
//			return 0;
//		}
//		else {
//			int size = 0;
//			Node* temp = head;
//			while (temp != nullptr) {
//				size++;
//				temp = temp->nest;
//			}
//			return size;
//		}
//	}
//
//	int count(int val) {
//		if (empty()) {
//			return 0;
//		}
//		else {
//			int count = 0;
//			Node* temp = head;
//			while (temp != nullptr) {
//				if (temp->data == val) {
//					count++;
//				}
//				temp = temp->nest;
//			}
//			return count;
//		}
//	}
//
//	void push_front(int val) {
//		Node* newNode = new Node(val);
//		if (empty()) {
//			head = tail = newNode;
//		}
//		else {
//			newNode->nest = head;
//			head = newNode;
//		}
//	}
//
//	void push_back(int val) {
//		Node* newNode = new Node(val);
//		if (empty()) {
//			head = tail = newNode;
//		}
//		else {
//			tail->nest = newNode;
//			tail = newNode;
//		}
//	}
//
//	void pop_back() {
//		if (empty()) {
//			cout<<"EMPTY!";
//		}
//		else {
//			Node* temp = head;
//			while (temp->nest != tail) {
//				temp = temp->nest;
//			}
//			delete tail;
//			tail = temp;
//			tail->nest = nullptr;
//		}
//	}
//
//	void pop_front() {
//		if (empty()) {
//			cout << "EMPTY!";
//			return;
//		}
//		else if (head == tail) {
//			delete head;
//			head = tail = nullptr;
//			return;
//		}
//		else {
//			Node* temp = head;
//			head = head->nest;
//			delete temp;
//			temp = nullptr;
//		}
//	}
//
//	void print() {
//		if (empty()) {
//			cout << "Empty!";
//		}
//		else {
//			Node* temp = head;
//			while (temp != nullptr) {
//				cout << temp->data << " ";
//				temp = temp->nest;
//			}
//			cout << endl;
//		}
//	}
//
//	Node* reverseKGroup(Node* head, int k) {
//		Node* temp = head;
//		int cnt = 0;
//		//check if k group is present
//		while (cnt < k) {
//			if (temp == nullptr) {
//				return head;
//			}
//			temp = temp->nest;
//			cnt++;
//		}
//
//		//recursion and also to make prevNode as an head of other list
//		Node* prevNode = reverseKGroup(temp, k);
//
//		//reverse the current LL
//		temp = head;
//		cnt = 0;
//		while (cnt < k) {
//			Node* nest1 = temp->nest;
//			temp->nest = prevNode;
//			prevNode = temp;
//			temp = nest1;
//			cnt++;
//		}
//
//		return prevNode;
//	}
//};
//
//int main() {
//	list l1;
//	l1.push_front(3);
//	l1.push_front(2);
//	l1.push_front(1);
//	l1.push_back(4);
//	l1.pop_back();
//	l1.print();
//
//	return 0;
//}

//---------------------
//       STACK
//---------------------

//#include<iostream>
//using namespace std;
//
//class Node {
//private:
//	Node* next;
//	int data;
//public:
//	Node(int val) {
//		data = val;
//		next = NULL;
//	}
//
//	friend class Stack;
//};
//
//class Stack {
//	Node* head;
//public:
//	Stack() {
//		head = NULL;
//	}
//
//	bool empty() {
//		if (head == NULL) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//	void push(int val) {
//		Node* newNode = new Node(val);
//		if (head == NULL) {
//			head = newNode;
//		}
//		else {
//			newNode->next = head;
//			head = newNode;
//		}
//		cout << val << " pushed to stack.\n";
//	}
//
//	void pop() {
//		if (empty()) {
//			cout << "Stack Underflow! (Empty)\n";
//			return;
//		}
//		Node* temp = head;
//		head = head->next;
//
//		cout << temp->data << " popped from stack.\n";
//		delete temp;
//	}
//
//	int top() {
//		if (empty()) {
//			cout << "Stack is Empty!\n";
//			return -1; 
//		}
//		return head->data;
//	}
//
//	void print() {
//		if (empty()) {
//			cout << "Stack is Empty!\n";
//			return;
//		}
//		Node* temp = head;
//		cout << "Stack elements: ";
//		while (temp != NULL) {
//			cout << temp->data << " ";
//			temp = temp->next;
//		}
//		cout << endl;
//	}
//
//	int size() {
//		int count = 0;
//		Node* temp = head;
//		while (temp != NULL) {
//			count++;
//			temp = temp->next;
//		}
//		return count;
//	}
//};
//
//int main() {
//	Stack s;
//
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.print();
//	cout << "Top element is: " << s.top() << endl;
//	cout << "Current size is: " << s.size() << endl;
//
//	s.pop();
//	s.print();
//	cout << "Top element is: " << s.top() << endl;
//
//	return 0;
//}