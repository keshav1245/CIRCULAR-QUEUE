/* This file was first created on 16th September,2018 by Keshav Tangri
This is for educational purposes only.
This is for B.Tech Students who are or will be studying Data Structures in there curriculum
For queries mail me @ : tangri57@gmail.com
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
#define MAX 5
class queue{
public:
int front,rear;
queue(){
front=-1;
rear=-1;
}
int * que =new int[MAX];
void insert(int val);
void del();
void display();
};

//add element
void queue::insert(int val){
if(front==0&&rear==MAX-1){
cout<<"\n\nOVERFLOW\n\n";
return;
}else if(front==-1&&rear==-1){
front++;
rear++;
}else if(rear==MAX-1&&front !=0){
rear = 0;
}else{
rear++;
if(rear == front){
cout<<"\n\nOVERFLOW !\n\n";
return;
}
}
que[rear]=val;
cout<<"\n\nELEMENT ADDED !\n\n";
}
//display()
void queue::display(){
if(front==-1&&rear==-1){
cout<<"\n\nEMPTY QUEUE !\n\n";
return;
}else if(front<rear){
cout<<"\n\n";
for(int i=front;i<=rear;i++){
cout<<que[i]<<" ";
}
cout<<"\n\n";
}else if(front==rear){
cout<<"\n\n"<<que[front]<<"\n\n";
}else{
cout<<"\n\n";
for(int i=front;i<=MAX-1;i++){
cout<<que[i]<<" ";
}
for(int i=0;i<=rear;i++){
cout<<que[i]<<" ";
}

}
}
//delete
void queue::del(){
if(front==-1&&rear==-1){
cout<<"\n\nUNDERFLOW !\n\n";
return;
}else if(front==rear){
front=-1;
rear=-1;
cout<<"\n\nELEMENT DELETED !\n\n";
}else if(front<rear){
front++;
cout<<"\n\nELEMENT DELETED !\n\n";
}else {
if(front==MAX-1){
front =0;
cout<<"\n\nELEMENT DELETED !\n\n";
}else{
front++;
cout<<"\n\nELEMENT DELETED !\n\n";
}
}
}
int main(){
int i,value;
queue obj;
while(1){
cout<<"\n1.ADD ELEMENT\n2.DISPLAY\n3.DELETE\n4.EXIT\nChoose One : ";
cin>>i;
switch(i){
case 1:
cout<<"Enter value you want to add : ";
cin>>value;
obj.insert(value);
break;
case 2:
obj.display();
break;
case 3:
obj.del();
break;
case 4:
exit(0);
break;
}
}

return 0;
}
