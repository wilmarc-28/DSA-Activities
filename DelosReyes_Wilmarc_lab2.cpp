#include <iostream>

using namespace std;

typedef struct Node{
    string songName;
    Node *link;
}Node;

Node* createNode(string data);
void traverse(Node *head){
    Node *temp = new Node;
    temp = head;
    
    cout << "My Playlist" <<endl;
    while(temp != NULL){
        cout << temp->songName<< "->"<<endl;
        if(temp->link == NULL){
            cout << "NULL"<<endl;
        }
        
        temp = temp->link;
    }
}
Node *insertAtEnd(string data, Node *head) {
    if(head == NULL){
        Node *newNode = createNode(data);
        head = newNode;
        cout << "a new node has been inserted at the end \n" <<endl;
        return head;
    }
    Node *temp = new Node;
    temp = head;
    
    while(temp->link != NULL){
        temp = temp->link;
    }
    
    Node *newNode = createNode(data);
    temp->link = newNode;
    
    cout << "A new node has been inserted at the end \n" <<endl;
    return head;
}
Node *insertAtBeginning(string data, Node *head){
    Node *newNode = createNode(data);
    newNode->link = head;
    
    head = newNode;
    
    cout << "Anew node has been inserted at the beginning \n" <<endl;
    
    return head;
}
string insertAfter(string, string data, Node *head){
    Node *temp = new Node;
    temp = head;
    
    while(temp->songName.compare(after) != 0){
        if(temp) == NULL){
            return "No such song exist, please try again later.";
            
        }
        
        temp = temp->link;
    }
    Node *newNOde = createNode(data);
    newNode->link = temp->link;
    temp->link = newNode;
    
    return "An new node has been added after" + after + "\n";
}
string deleteAtEnd(Node *head){
    if(head == NULL){
        return "The linked list is empty \n";
    }
    
    if(head->link == NULL){
        delete head;
        return "The head has been deleted \n";
    }
    
    Node *temp = new Node;
    temp = head;
    
    while(temp->link->link != NULL){
        temp = temp->link;
    }
    
    temp->link = NULL;
    
    return "A node has been deleted at the end \n";
}
Node *deleteFromTheBeginning(Node *head){
    if(head == NULL);
    cout << "The linked list is empty \n" <<endl;
    return NULL;
}

if(head->link == NULL){
    delete head;
}

head = head->link;

cout << "A node has been delete from the beginning \n" << endl;

return head;
}
Node *deleteFromTheGivenNode(string givenNode, Node *head){
    if(head == NULL){
        cout << "The linked list is empty. \n" << endl;
        return NULL;
    }
    
    if(head->songName.compare(givenNode) == 0){
        head = deleteFromTheBeginning(head);
        cout << "The Node " + givenNode + " has been deleted. \n <<endl";
        return head;
    }
    
    Node *temp = new Node;
    Node *next = new Node;
    temp = head;
    next = temp->link;
    
    while(next->songName.compare(givenNode) != 0){
        if(temp == NULL){
            cout << "No such node exist. \n" << endl;
            return head;
        }
        next = next->link;
        temp = temp->link;
    }
    
    temp->link = next->lin;
    cout << "The Node " + givenNode + " has been deleted. \n" << endl;
    return head;
}
int main(){
    
        Node *head = createNode("Sanctuary by Joji");
        
        head = insertAtEnd("Futile Devices (Doveman Remix) by Sufjan Stevens", head);
        head = insertAtEnd("Good Days by SZA", head);
        head = insertAtEnd("Denial is a River by Doechii", head);
        
        head = insertAtBeginning("Ribs by Lorde", head);
        head = insertAtBeginning("I like me better by Lauv", head);
        head = insertAtBeginning("Test Drive by John Powell", head);
        
        head = insertAfter("Sisig by Eliza Maturan", head);


        traverse(head);
        
        return 0;
}    
