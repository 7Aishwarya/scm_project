
+#include <iostream>

using namespace std;




// Node class1 //class2

class Node 
{

    int key;

    Node* left;

    Node* right;

public: // constructor callled

    Node() 
{ 

    key=-1; 

    left=NULL;  

    right=NULL;

};


    void setKey(int aKey)
 { 

    key = aKey; 

 };



    void setLeft(Node* aLeft) 
  { 

    left = aLeft; 

  };



    void setRight(Node* aRight)
 { 

    right = aRight; 

 };
 


   int Key() 
{
   return key;
};



    Node* Left() { return left; };

    Node* Right() { return right; };


};





// Tree class


class Tree
{

     Node* root;

public:

     Tree();

     ~Tree();

     Node* Root() 
{

     return root;

};





     void addNode(int key);

     void inOrder(Node* n);

     void preOrder(Node* n);

     void postOrder(Node* n);

private:

     void addNode(int key, Node* leaf);

     void freeNode(Node* leaf);

};




// Constructor


Tree::Tree()
{

     root = NULL;

}




// Destructor called


Tree::~Tree()
{

     freeNode(root);

}




// Free the node


void Tree::freeNode(Node* leaf)
{

    if ( leaf != NULL )
    {

       freeNode(leaf->Left());

       freeNode(leaf->Right());

       delete leaf;

    }


}





// Add a node node


void Tree::addNode(int key) 
{

     // No elements. Add the root


     if ( root == NULL ) 
{
        cout << "add root node ... " << key << endl;

        Node* n = new Node();

        n->setKey(key);

        root = n;
}

     else 
{

       cout << "add other node ... " << key << endl;

       addNode(key, root);

}


}





// Add a node (private)


void Tree::addNode(int key, Node* leaf)
 {

    if ( key <= leaf->Key() ) 
{

       if ( leaf->Left() != NULL )
{
 
         addNode(key, leaf->Left());

}
       else 
{

          Node* n = new Node();

          n->setKey(key);

          leaf->setLeft(n);
}
 
 }

    else 
{

       if ( leaf->Right() != NULL )
{
          addNode(key, leaf->Right());
}
       else 
{

          Node* n = new Node();

          n->setKey(key);

          leaf->setRight(n);

}

}

}




// Print the tree in-order

// Traverse the left sub-tree, root, right sub-tree



void Tree::inOrder(Node* n) 
{

    if ( n ) 
{
       inOrder(n->Left());

       cout << n->Key() << " ";

       inOrder(n->Right());

    }

}




// Print the tree pre-order


// Traverse the root, left sub-tree, right sub-tree



void Tree::preOrder(Node* n) 
{

    if ( n ) 
{
       cout << n->Key() << " ";

       preOrder(n->Left());

       preOrder(n->Right());
    }

}






// Print the tree post-order


// Traverse left sub-tree, right sub-tree, root



void Tree::postOrder(Node* n) 
{

    if ( n ) 
{

       postOrder(n->Left());

       postOrder(n->Right());

       cout << n->Key() << " ";
    }
}






// insert here func 2
<<<<<<< HEAD
int func3()
=======









































int func5()
{

   int num;

   bool flag = true;

   cout<<"Enter any number(should be positive integer): ";

   cin>>num;

   for(int i = 2; i <= num / 2; i++) 
{

      if(num % i == 0) 
{

         flag = false;

         break;

}

}

   if (flag==true)
{

      cout<<num<<" is a prime number";

      cout<<"\n";

}

   else
{

      cout<<num<<" is not a prime number";

      cout<<"\n";

}

   return 0;

}








int main()
>>>>>>> origin/garishma
{
   
    unsigned int n;

    unsigned long long factorial = 1;


    cout << "Enter a positive integer: ";

    cin >> n;


    for(int i = 1; i <=n; ++i)
    {

        factorial *= i;

    }


    cout << "Factorial of " << n << " = " << factorial;    

    return 0;

 }
int func4()  
{  

int n,r,sum=0,temp;    

cout<<"Enter the Number=  ";    

cin>>n;    

temp=n;    

while(n>0)    
{    

r=n%10;    

sum=sum+(r*r*r);    

n=n/10;    

}    

if(temp==sum)    

cout<<"Armstrong Number."<<endl;    

else    
{

cout<<"Not Armstrong Number."<<endl;   

}

return 0;  

} 


int main()
{

Tree* tree = new Tree();



 

  tree->addNode(30);

   tree->addNode(10);

   tree->addNode(20);

   tree->addNode(40);

   tree->addNode(50);

  
cout << "In order traversal" << endl;
   
tree->inOrder(tree->Root());
   
cout << endl;

   
cout << "Pre order traversal" << endl;
   
tree->preOrder(tree->Root());
   
cout << endl;

cout << "Post order traversal" << endl;

tree->postOrder(tree->Root());
   
cout << "\n";


 


  
delete tree;

return 0;

}
