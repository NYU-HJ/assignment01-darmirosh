[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/Tw2lzN_x)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=13860821&assignment_repo_type=AssignmentRepo)
# Assignment Index

1. [Getting Started](#getting-started)
2. [Task 1 - Linked List](#task-1---linked-list)
3. [Task 2 - Stack](#task-2---stack)
4. [Task 3 - Generic List](#task-3---generic-list)
5. [Submission](#submission)

---

## Getting Started:

1. Open the assignment link: [https://classroom.github.com/a/Tw2lzN_x](https://classroom.github.com/a/Tw2lzN_x)

2. Authorize GitHub Classroom.
<img width="1463" alt="1" src="https://github.com/NYU-HJ/assignment01-OOP24-A01/assets/66311597/18724db9-1482-41d9-bab3-0afda1ed2d65">

3. A roster list will appear on the screen. Select your correct name and net ID; it will act as an identifier linked to your GitHub account for grading.
<img width="1442" alt="2" src="https://github.com/NYU-HJ/assignment01-OOP24-A01/assets/66311597/b3da73f9-70ed-4685-9752-8edb539125ec">

4. After selecting your identifier, click "OK/Continue."

5. On the next screen, click on "Accept the Assignment," as shown below.
<img width="1453" alt="3" src="https://github.com/NYU-HJ/assignment01-OOP24-A01/assets/66311597/4bf221fa-c63f-46c4-a6d3-e7469b135987">

6. Wait on the next screen and refresh after 2-3 seconds.

7. After the refresh, you should get your submission repo link and a button to redirect to VS Code to start working.
<img width="1470" alt="5" src="https://github.com/NYU-HJ/assignment01-OOP24-A01/assets/66311597/26cac794-42cc-4474-8d04-614148c77c56">


8. Click on the VS Code button; it will open VS Code on your computer. Follow the instructions on the screen.

   - Login to your GitHub account, allowing VS Code access to your repo.

   - If VS Code gives a warning prompt, click on "I trust this author."

9. After logging in and following on screen instruction, you will get your project repo on your VSCode.
<img width="1470" alt="6" src="https://github.com/NYU-HJ/assignment01-OOP24-A01/assets/66311597/78d89a9d-d7ce-4dc4-b0ff-e42fa470c082">

10. After making any changes to the code i.e completing assignment task, you can commit changes to GitHub easily through the source control extension in VS Code.

   - Dont Forget to add a commit message,
   - You can either do commit and push later or commit and push at same time.
   - after each commit wait 1 min for autograder to do its commit, or else later it will cause a merger issue, difficult but can be resolved.
   - before you make new commit first pull the update repo.
<img width="1470" alt="7" src="https://github.com/NYU-HJ/assignment01-OOP24-A01/assets/66311597/ebc81fbb-5db1-4844-aeb6-edf79cdb2428">
<img width="1470" alt="9" src="https://github.com/NYU-HJ/assignment01-OOP24-A01/assets/66311597/436ab951-d7fd-477e-8f93-635cdcc935f0">

11. **Happy Coding!!!**

## NOTE:

- Final commit before due date will be considered for grading.
- After every push, and before you make a new commit, do a pull on your repo. This is because whenever you do a push, the autograder runs and pushes some new commits to your repo.
- If certain instructions are not clear, you can attend the Office Hour of the course tutor – Affan Khamse (ak10529@nyu.edu) for further clarity.

## Before You Start:
- In "main.cpp," you have given different test cases that can help you test your code. Make sure that all of them run successfully when you run your code.
- It is crucial to submit a working program (Non-working applications will not be considered).
- For all three task ,your requried to work(make changes) ONLY one file per task:
      - `list_todo.h`
      - `stack_todo.h`
      - `generic_list_todo.h`

         
 
## Task 1 - Linked List

For this task, you have been given following files:

- **list_tests.h**: Contains some required code (you should NOT modify this file)
- **list_todo.h**: Will contain the code that you must fill.

The aim of the code is to implement a dynamic linked list of int values. The struct of each node and the list is provided in the file `list_todo.h` as follows:

```
class Node {
public:
    int value;
    Node* next;
};

class List {
public:
    Node* head;
    int size;
}; 
```
You need to implement the code for the following methods in the file "todo.h":

- `List()`
  - Non-parameters constructor.

- `List(int v)`
  - With-parameters constructor.

- `List(List& l)`
  - A copy constructor.

- `~List()`
  - A destructor.

- `void add(int v)`
  - A method to add a new value to the end of the list.

- `int pop()`
  - A method that returns the value that exists in the last node of the list and removes this node.

- `bool operator==(const List& rhs)`
  - A method to compare between two lists using the == operator.

- `bool operator!=(const List& rhs)`
  - A method to compare between two lists using the != operator.

- `friend ostream& operator<<(ostream& os, List& l)`
  - A function to create an output stream from a list using the `operator <<` (this is mainly used to print the list using `cout <<`).



**Important Notes:**

- It is crucial to submit a working program (Non-working applications will not be considered).
- You must work on one file ONLY ("list_todo.h" that includes all your code).


## Task 2 - Stack

For this task, you have been given following files:

- **stack_tests.h**: Contains some required code (you should NOT modify this file)
- **stack_todo.h**: Will contain the code that you must fill.

The aim of the code is to implement a dynamic linked list of int values. The struct of each node and the list is provided in the file `stack_todo.h` as follows:

```
class Node {
public:
    int value;
    Node* next;
};

class Stack {
public:
    Node* head;
    int size;
};
```
You need to implement the code for the following methods in the file "todo.h":

- `Stack()`
  - Non-parameters constructor.

- `Stack(int v)`
  - With-parameters constructor.

- `Stack(Stack& l)`
  - A copy constructor.

- `~Stack()`
  - A destructor.

- `void push(int v)`
  - A method to add a new value to the top of the Stack.

- `int pop()`
  - A method that returns the value that exists in the last node of the Stack and removes this node.
 
- `bool operator==(const List& rhs)`
  - A method to compare between two stack using the == operator.

- `bool operator!=(const List& rhs)`
  - A method to compare between two stack using the != operator.

- `friend ostream& operator<<(ostream& os, List& l)`
  - A function to create an output stream from a stack using the `operator <<` (this is mainly used to print the list using `cout <<`).

In "main.cpp," you have given different test cases that can help you test your code. Make sure that all of them run successfully when you run your code.



## Task 3 - Generic List
In this exercise, you have three given files (attached to the assignment):

- **tests.h**: Contains some required code (you should NOT modify this file)
- **main.cpp**: Contains different test cases that you need to verify.
- **todo.h**: Will contain the code that you must fill.

The aim of the code is to implement a dynamic generic linked list of objects. The struct of each node and the list is provided in the file **todo.h** as follows:

```cpp
template <typename T>
class Node {
public:
    T value;
    Node* next;
};

template <typename T>
class ArrayList {
public:
    Node<T>* head;
    int size;
};
```

You need to implement the code of the following methods (in the file “todo.h”):

- `ArrayList()`
  - Non-parameters constructor.

- `ArrayList(ArrayList<T> v)`
  - With-parameters constructor.

- `ArrayList(ArrayList<T>& l)`
  - A copy constructor.

- `~ArrayList()`
  - A destructor.

- `void add(T v)`
  - A method to add a new value to the end of the arraylist.

- `T pop()`
  - A method that returns the value that exists in the last node of the arraylist and removes this node.

- `bool operator==(const ArrayList<T>& rhs)`
  - A method to compare between two arraylists using == operator.

- `bool operator!=(const ArrayList<T>& rhs)`
  - A method to compare between two arraylists using != operator.

- `friend ostream& operator<<(ostream& os, ArrayList<T>& l)`
  - A function to create an output stream from an arraylist using `operator <<` (this is mainly used to print the arraylist using `cout<<`).

# Submission
- no worries your final pushed commit before due date will be considered for grading.

