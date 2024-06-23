#include <iostream>

using namespace std;

class search{
	
	public :
		string arr[3];
		int arr1[3];
		
		void input(){
			
			for(int i=0; i<=2; i++){
				cout<<"Enter Player Name : ";
				cin>>arr[i];
			}
		}
		
		void input1(){
		
			for(int i=0 ; i<=2; i++){
				cout<<"Enter Player Number : ";
				cin>>arr1[i];
			}
		}
		
		void linearsearch(string a){
         string player;
			cout<<"Enter Player Name to search : ";
			cin>>player;
			a=player;
			for(int i=0; i<=2; i++){
			
			if(arr[i]==a){
				cout<<a<<" Found"<<endl;
				break;
			}
			else {
				//cout<<"Player Not Found"<<endl;
			}
		}
	}
			void linearsearch1(int n){
         int number;
			cout<<"Enter Player Number to search : ";
			cin>>number;
			n=number;
			for(int i=0; i<=2; i++){
			
			if(arr1[i]==n){
				cout<<n<<" Found"<<endl;
				break;
			}
			else {
			//	cout<<"Player Not Found"<<endl;
			}
		}
		
	}
	
	void binarysearch(int b){
		int number;
			cout<<"Enter Player Number to search : ";
			cin>>number;
			b=number;
		int midl;
		midl=3/2;
		for(int i=0; i<=2; i++){
			if(arr1[midl]==b){
				cout<<b<<" Found"<<endl;
				break;
			}
			else if(arr1[midl]>b){
				for(int j=midl; j>=0; j--){
					if(arr1[j]==b){
						cout<<b<<" Found"<<endl;
						break;
					}
					else{
						
					}
				}
			}
			else if(arr1[midl]<b){
				for( int k=midl; k<=3; k++){
					if(arr1[k]==b){
						cout<<b<<" Found"<<endl;
						break;
					}
					else {
						
					}
				}
			}
			else{
				
				
			}
			break;
		}
		
	}
};


/*class Node{
	public :
		int data, key;
	    Node *left, *right;
	    Node(int a){
	    	data=a;
	    	left=NULL;
	    	right=NULL;
		}
		
		Node insert(Node *root, int a){
			if(root==NULL){
				return new Node(a);
			}
			else if(a<root->data){
				root->left=insert(root->left,a);
			}
			else{
				root->right=insert(root->right,a);
			}
			return root;
		}
		
		void inorder(Node *root){
			if(root==NULL){
				return;
			}
			inorder(root->left);
			cout<<root->data<<" ";
			inorder(root->right);
		}
	Node inordersucc(Node *root){
		Node *curr=root;
		while(curr&&curr->left!=NULL){
			curr=curr->left;
		}
		return curr;
	}
	
	Node remove(Node *root, int key){
		if(key<root->data){
			root->left=remove(root->left,key);
		}
		else if(key>root->data){
			root->right=remove(root->right,key);
			
		}
		else{
		 if(root->left==NULL){
			Node *temp=root->right;
			delete(root);
			return temp;
		}
		else if(root->right==NULL){
			Node *temp=root->left;
			delete(root);
			return temp;
		}
		Node *temp=inordersucc(root->right);
		root->data=temp->data;
		root->right=remove(root->right,temp->key);
		}
		return root;
		
	}
}; */


int main(int argc, char** argv) {
	
//	Node *root=NULL;
/*	root=insert(root,4);
	root=insert(root,6);
	root=insert(root,3);
	root=insert(root,5);
	root=insert(root,1);*/
	
/*	Node N;
	N.insert(root,4);
	N.insert(root,6);
	N.insert(root,3);
	N.insert(root,5);
	N.insert(root,);
	N.inorder(root);
	cout<<endl;
	N.remove(root,3);
	N.inorder(root);*/
	search S;
//	S.input();
//	S.linearsearch("a");
	S.input1();
	S.binarysearch('b');
//	S.linearsearch1('n');
  return 0;
}

/*#include <iostream>
using namespace std;
class hash{
	public:
	int	arr[10];
		hash(){
			for(int i=0;i<=9;i++){
				arr[i]=0;
			}
		}
void probing(int val){
	int index;
	index=val%10;
	if(arr[index]!=0){
		for(int i=0;i<=9;i++){
			index=(val+i)%10;
			if(arr[index]==0){
				arr[index]=val;
				break;
		    }
	    }
		}
	else
			arr[index]=val;
}
void q_probing(int b){
	int p;
	p=b%10;
	if(arr[p]!=0){
		for(int i=0;i<=9;i++){
			p=(b+(i*i))%10;
			if(arr[p]==0){
				arr[p]=b;
				break;
		    }
	    }
		}
	else
			arr[p]=b;
}
void display(){
	cout<<"index\tvalue"<<endl;
	for(int i=0;i<=9;i++){
		cout<<i<<"\t"<<arr[i]<<endl;
	}
}
};
int main(int argc, char** argv) {
	hash hl,hq;
	cout<<"....LINEAR PROBING...."<<endl;
	hl.probing(50);
	hl.probing(700);
	hl.probing(76);
	hl.probing(85);
	hl.probing(92);
	hl.probing(73);
	hl.probing(101);
	hl.display();
	cout<<"....QUADRATIC PROBING...."<<endl;
	hq.q_probing(54);
	hq.q_probing(5);
	hq.q_probing(29);
	hq.q_probing(74);
	hq.display();
	return 0;
}*/

