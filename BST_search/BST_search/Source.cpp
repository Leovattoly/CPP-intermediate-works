// C++ program to demonstrate insertion 
// in a BST recursively. 
#include <iostream> 
using namespace std;
using  std::string;

class BST
{
	std::string data;
	BST *left, *right;

public:

	// Default constructor. 
	BST();

	// Parameterized constructor. 
	BST(string);

	// Insert function. 
	BST* Insert(BST *, string);

	// Inorder traversal. 
	void Inorder(BST *);
};

// Default Constructor definition. 
BST::BST() : data("\0"), left(NULL), right(NULL) {}

// Parameterized Constructor definition. 
BST::BST(string value)
{
	data = value;
	left = right = NULL;
}

// Insert function definition. 
BST* BST::Insert(BST *root, string value)
{
	if (!root)
	{
		// Insert the first node, if root is NULL. 
		return new BST(value);
	}

	// Insert data. 
	if (value > root->data)
	{
		// Insert right node data, if the 'value' 
		// to be inserted is greater than 'root' node data. 

		// Process right nodes. 
		root->right = Insert(root->right, value);
	}
	else
	{
		// Insert left node data, if the 'value' 
		// to be inserted is greater than 'root' node data. 

		// Process left nodes. 
		root->left = Insert(root->left, value);
	}

	// Return 'root' node, after insertion. 
	return root;
}

// Inorder traversal function. 
// This gives data in sorted order. 
void BST::Inorder(BST *root)
{
	if (!root)
	{
		return;
	}
	Inorder(root->left);
	string s = root->data;
	printf("%s\n", s.c_str());
	Inorder(root->right);
}



// Driver code 
int main()
{
	BST b, *root = NULL;
	root = b.Insert(root, "internet cafe");
	b.Insert(root, "excise");
	b.Insert(root, "and");
	b.Insert(root, "good");
	b.Insert(root, "gambling");
	b.Insert(root, "music");
	b.Insert(root, "me");
	b.Insert(root, "mask");
	b.Insert(root, "like");
	b.Insert(root, "Breath");
	b.Insert(root, "happy");
	b.Insert(root, "funds");
	b.Insert(root, "send");
	b.Insert(root, "build");
	b.Insert(root, "myrrh");
	b.Insert(root, "hi");
	b.Insert(root, "hat");
	b.Insert(root, "control");
	b.Insert(root, "know");
	b.Insert(root, "telephone");
	b.Insert(root, "know");
	b.Insert(root, "bitchy");
	b.Insert(root, "machination");
	b.Insert(root, "chicken");
	b.Insert(root, "stall");
	b.Insert(root, "kirana");
	b.Insert(root, "typhoon");
	b.Insert(root, "tilted");
	b.Insert(root, "skipped");
	b.Insert(root, "beautiful");
	b.Insert(root, "fond of");
	b.Insert(root, "alibi");
	b.Insert(root, "tire");
	b.Insert(root, "string");
	b.Insert(root, "echo");
	b.Insert(root, "kir");
	b.Inorder(root);
	return 0;
}

