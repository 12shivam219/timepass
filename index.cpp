#include<iostream>
#include<cstring>
using namespace std;

struct library
{
  int acces_num;
  string name_of_auth;
  string book_title;
  string issue;
};

void display_book_information(struct library lib[],int n) {
  int acces_no;
  int c;
  cout<<"Enter accession number for book  information : \n";
  cin>>acces_no;
  for(int i=0;i<n;i++) {
    c=lib[i].acces_num;
    if(c==acces_no) {
    cout<<"Accession no : \n"<<lib[i].acces_num<<endl;
    cout<<"Name of author :\n"<<lib[i].name_of_auth<<endl;
    cout<<"Book title :\n"<<lib[i].book_title<<endl;
    break;
    }
  }
  int i=0;
  while (i<n) {
    if(c!=acces_no) {
      cout<<"Book not found"<<endl;
      break;
    }
    i++;
  }
}
 
void Add_new_book(struct library lib[],int n,int h) {
  int e=n+h;
  for (int i = n; i <e; i++)
  {
  cout<<"Enter accession number :\n";
  cin>>lib[i].acces_num;
  cout<<"Enter Name of author :\n";
  cin>>lib[i].name_of_auth;
  cout<<"Enter book title :\n";
  cin>>lib[i].book_title;
  }
  int i=0;
  while (i<e) {
  cout<<"Book : "<<i+1<<endl;
  cout<<"Accession number : "<<lib[i].acces_num<<endl;
  cout<<"Author : "<<lib[i].name_of_auth<<endl;
  cout<<"Book title : "<<lib[i].book_title<<endl;
  i++;
  }
}

void find_book_author_name (struct library lib[],int n,int e) {
  string auth;
  string z;
  cout<<"Enter author name to find the book : "<<endl;
  cin>>auth;
  for(int i=0;i<n ||i<e;i++) {
    z=lib[i].name_of_auth ;
    if(z== auth) {
      cout<<"Accession number : "<<lib[i].acces_num<<endl;
      cout<<"Book title : "<<lib[i].book_title<<endl;
    }
  }
}

void find_book_title_name (struct library lib[],int n,int e) {
    string titl;
    string y;
    cout<<"Enter Book title to find the book : "<<endl;
    cin>>titl;
    for(int i=0;i<n ||i<e;i++) {
    y=lib[i].book_title ;
    if(y== titl) {
    cout<<"Accession number : "<<lib[i].acces_num<<endl;
    cout<<"Book Author : "<<lib[i].name_of_auth<<endl;
}
}
}
void book_issued (struct library lib[],int n,int e,int k) {
  int o,Access[100];
  string q;
  o=n-k;
  for(int i=0;i<k;i++) {
    cout<<"Enter accession number : ";
    cin>>Access[i];
  }
  for(int i=0;i<n || i<e;i++) {
    for(int j=0;j<n || j<e;j++) {
      if(lib[i].acces_num==Access[j]) {
    cout<<"Enter yes or no : \n";
    cin>>q;
  if(q=="yes") {
      for(int i=0;i<n || i<e;i++) {
  if( lib[i].issue == q) {
  }   
  } 
   lib[i].issue="issued";
      }
      else if (q=="no") {
  for(int i=0;i<n || i<e;i++) {
  if( lib[i].issue == q) {
  }
  }
  lib[i].issue="Not issued";                                          
    }
    }
  }
}
}

void display_total_books_in_library (struct library lib[],int n,int e,int k) {

  if(n<e ) {
  cout<<"Total Books are : "<<endl;
  cout<<e<<endl;
  int i=0;
  while (i<e || i<n) {
  cout<<"Book : "<<i+1<<endl;
  cout<<"Accession number : "<<lib[i].acces_num<<endl;
  cout<<"Author : "<<lib[i].name_of_auth<<endl;
  cout<<"Book title : "<<lib[i].book_title<<endl;
  if(lib[i].issue=="yes") {
  cout<<"Book issue : "<<lib[i].issue<<endl;
  }
  else {
    cout<<"Book issue : "<<lib[i].issue<<endl;
  }
  i++;
  }
  }
  else if (n>=e) {
  cout<<"Total Books are : "<<endl;
  cout<<n<<endl;
  int i=0;
  while (i<e || i<n) { 
  cout<<"Book : "<<i+1<<endl;
  cout<<"Accession number : "<<lib[i].acces_num<<endl;
  cout<<"Author : "<<lib[i].name_of_auth<<endl;
  cout<<"Book title : "<<lib[i].book_title<<endl;
  if(lib[i].issue=="yes") {
  cout<<"Book issue : "<<lib[i].issue<<endl;
  }
  else {
    cout<<"Book issue : "<<lib[i].issue<<endl;
  }
  i++;
  }
}


}
int main () {
struct library lib[1000];
int n,i,Menu;
cout<<"Enter no of book you want to store : ";
cin>>n;
for(i=0;i<n;i++) {
  cout<<"Enter accession number :\n";
  cin>>lib[i].acces_num;
  cout<<"Enter Name of author :\n";
  cin>>lib[i].name_of_auth;
  cout<<"Enter book title :\n";
  cin>>lib[i].book_title;
}
n=i;
while (Menu!=7) {
cout<<"press 1 - Display book information"<<endl;
cout<<"press 2 - Add a new book"<<endl;
cout<<"press 3 - Find book in library with author name "<<endl;
cout<<"press 4 - Find book in library with Book title"<<endl;
cout<<"press 5 - Book issued"<<endl;
cout<<"press 6 - Display the total number of books present or issued in the library"<<endl;
cout<<"press 7 - Exit"<<endl;
cout<<"Choose any one whatever you want to do :\n";
cin>>Menu;
switch (Menu)
{
case 1:
  display_book_information(lib,n);
  break;
case 2:
  int h;
cout<<"How many books do you want to add : \n"<<endl;
cin>>h;
Add_new_book(lib,n,h);
  break;
case 3:
int e;
e=n+h;
cout<<e<<endl;
cout<<h<<endl;
if(n<e ) {
  find_book_author_name(lib,n,e);
}
else if (n>=e){
  find_book_author_name(lib,n,e);
}
break;
case 4:
e=n+h;
cout<<e<<endl;
cout<<h<<endl;
if(n<e ) {
  find_book_title_name (lib,n,e);
}
else if (n>=e){
  find_book_title_name (lib,n,e);
}
break;
case 5:
int k;
cout<<"How many books do you want to issue : ";
cin>>k;
e=n+h;
book_issued (lib,n,e,k);

break;
case 6:
if(n<e) {
  display_total_books_in_library (lib,n,e,k);
}
else if (n>=e) {
  display_total_books_in_library (lib,n,e,k);
}
break;

default:
  cout<<"Exit"<<endl;
  break;
}
}
return 0 ;
}
