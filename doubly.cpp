#include <iostream>
#include <string>
using namespace std;
class dictionary;
class node
{
 string word,meaning;
 node *left,*right;
public:
 friend class dictionary;
 node()
 {
  left=NULL;
  right=NULL;
 }
 node(string word, string meaning)
 {
  this->word=word;
  this->meaning=meaning;
  left=NULL;
  right=NULL;
 }
};

class dictionary
{
 node *root;        //* - value at           &- address of
public:
 dictionary()   // default constructor.
{
  root=NULL;
}
 void create();
 void inorder_rec(node *rnode);
 void postorder_rec(node *rnode);
 void inorder()
 {
  inorder_rec(root);
 }
 void postorder();

 bool insert(string word,string meaning);
 int search(string key);

};


void dictionary::create()
{
 int n;
 string wordI,meaningI;
 cout<<"\n How many Word to insert?:\n";
 cin>>n;
 for(int i=0;i<n;i++)
 {
  cout<<"\n Enter Word: ";
  cin>>wordI;
  cout<<"\n Enter Meaning: ";
  cin>>meaningI;
  insert(wordI,meaningI);   // insert function calling
 }
}

bool dictionary::insert(string word, string meaning)
{
 node *p=new node(word, meaning);
 if(root==NULL)
 {
  root=p;
  return true;
 }
 node *cur=root;
 node *par=root;
 while(cur!=NULL)        //traversal
 {
  if(word>cur->word)
  {
      par=cur;
     cur=cur->right;
  }
  else if(word<cur->word)
  {
   par=cur;
   cur=cur->left;
  }
  else
  {
   cout<<"\n Word is already in the dictionary.";
   return false;
  }
 }
 if(word>par->word) //insertion of node
 {
  par->right=p;
  return true;
 }
 else
 {
  par->left=p;
  return true;
 }
}

void dictionary::inorder_rec(node *rnode)     //Ascending Order
{
 if(rnode)
 {
  inorder_rec(rnode->left);
  cout<<" "<<rnode->word<<" : "<<rnode->meaning<<endl;
  inorder_rec(rnode->right);
 }
}

void dictionary::postorder()
{
 postorder_rec(root);
}
void dictionary::postorder_rec(node *rnode)  //descending order
{
     if(rnode)
 {
  postorder_rec(rnode->right);
  cout<<" "<<rnode->word<<" : "<<rnode->meaning<<endl;
  postorder_rec(rnode->left);
 }
}

int dictionary::search(string key)
{
 node *tmp=root;
 int count;
 if(tmp==NULL)
 {
  return -1;
 }
 if(root->word==key)
  return 1;
 while(tmp!=NULL)
 {

  if((tmp->word)>key)
  {
   tmp=tmp->left;
   count++;
  }
  else if((tmp->word)<key)
  {
   tmp=tmp->right;
   count++;
  }
  else if(tmp->word==key)
  {
   return ++count;
  }
 }
 return -1;
}

int main()
{
    string word;
    dictionary months;
int comparisons=0;
    char ans;
    int ch;
    do
    {
        cout<<"\n Dictionary Operations \n 1) Create & Insert Words \n 2) Ascending Order \n 3) Descending Order";
        cout<<"\n 4) Search a word \n 5) Exit \n Enter your Choice =>  ";
        cin>>ch;
        switch(ch)
        {
            case 1:cout<<"\n Create & Insert Words";
                       months.create();
                       break;
            case 2:cout<<"\n Ascending Order ";
                       months.inorder();
                       break;
            case 3:cout<<"\n  Descending Order";
                        months.postorder();
                       break;
            case 4:cout<<"\n  Search a word";
                       cout<<"\n Enter word to search: ";
                        cin>>word;
                        comparisons=months.search(word);
                           if(comparisons==-1)
                            {
                                cout<<"\n Word not found";
                            }
                            else
                            {
                                cout<<"\n "<<word<<" found in "<<comparisons<<" comparisons";
                            }
                       break;
           case 5:cout<<"\n  You are successfully Exited";
                        //exit(0);
                       break;
            default:  cout<<"\n Please enter correct choice";
                       break;
        }
        cout<<"\n Do you want to continue(Y/y) => ";
        cin>>ans;
    }
    while(ans=='Y'||ans=='y');
}