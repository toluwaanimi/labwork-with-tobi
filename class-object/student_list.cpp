#include "student_list.h"
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iostream>

using namespace  std;

void push_back(student_node*& head, student_node*& tail, student* s) {
    student_node* newNode = new student_node;
    newNode->data = s;
    if (head == nullptr) {
        // If head is nullptr tail must also be nullptr
        // The list is empty
        // TODO: FIXME
        tail = nullptr;
    } else {
        // List is not empty
        newNode->data = s;
        // TODO: FIXME
    }
}

void sort_by(student_node*& head, student_node*& tail, int field) {
    if (head == tail) {
        // nothing to do there is only 1 element.
        return;
    }

    bool swaps = true;
    while (swaps) {
        swaps = false;
        for (student_node* iter = head; iter != nullptr; iter = iter->next) {
            if (iter->next == nullptr) {
                // nothing to swap
                break;
            }
            student_node* first = iter;
            student_node* second = iter->next;

            // Check if we need to swap
            if (descending_order_field(first->data, second->data, field)) {
                student* tmp = second->data;
                second->data = first->data;
                first->data = tmp;
                swaps = true;
            }
        }
    }
}

bool save_db(student_node* head, std::string filename) {
    ofstream MyFile(filename);
    student_node* current = head;
    while (current != nullptr) {
        MyFile << current->data->first_name + "," + current->data->last_name + "," + to_string(current->data->reg_num) + "," + to_string(head->data->age) + "," + current->data->degree ;
        current = current->next;
    }
    return true;
    // TODO: FIXME
}

vector<string> split(const string& str, char delimiter)
{
    vector<string> tokens;
    string token;
    istringstream tokenStream(str);

    // Tokenize the string
    while (getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }

    return tokens;
}

string* splitter(const string& str, char delimiter)
{
    string* tokens;
    string token;
    istringstream tokenStream(str);
    int count = 0;

    // Tokenize the string
    while (getline(tokenStream, token, delimiter))
    {
        cout << token;

        tokens[count] = token;
    }

    return tokens;
}

bool load_db(student_node*& head, student_node*& tail, std::string filename) {


    if (head != nullptr && tail != nullptr) {
        // If head is nullptr tail must also be nullptr
        // The list is empty
        // TODO: FIXME
        head = nullptr;
        tail = nullptr;
    }
    string myText;
    // define variable to count the lines
    int lines = 0;


    ifstream MyReadFile(filename);
//    if (!MyReadFile.is_open())
//    {
//        std::cerr << "Failed to open file: " << filename << std::endl;
//        return false;
//    }
    while (getline (MyReadFile, myText)) {
        lines++;
    }
    MyReadFile.close();

    ifstream readFile(filename);
    student* students = new student[lines];
    int index = 0;

    while (getline (readFile, myText)) {
        vector<string> substrings = split(myText, ',');
//        vector<string> data = split(myText, ',');
        students[lines].first_name = substrings[0];
        students[lines].last_name = substrings[1];
        students[lines].reg_num = stol(substrings[2]);
        students[lines].age = stoi(substrings[3]);
        students[lines].degree = substrings[4];
        lines--;
    }

    head->data = students;
    cout << lines;
    cout<<students[0].first_name << "pr" << endl;
    head->data = students;
    cout << "g true 1"<<endl;
    head->next = NULL;
    cout << "g true 2"<<endl;
    tail->next = head;
    cout << "g true 3"<<endl;
    tail = head;
    cout << "g true 4"<<endl;
    return true;
}

student_node* find_student_by_regnum(student_node* head, student_node* tail,
                                     long regnum) {
    // create a reference to the student node struct and assign the head structure value to the new current variable created.
    student_node* current = head;
    while (current != nullptr) {
        // checking if current is a not null, since we assigned the value of current to head already.
        if (current->data->reg_num == regnum) {
            // so we check if reg_num in the data struct of current is equal to the reg num we are loooking for.
            return current;
        }
        current = current->next;
    }
    return nullptr;
}
void delete_node(student_node*& head, student_node*& tail,
                 student_node* toDelete) {
        // If the list is empty, there is nothing to do.
        if (head == nullptr)
            return;

        // If the node to delete is the head, update the head to point to the next node.
        if (toDelete == head)
        {
            head = head->next;
            if (head != nullptr)
                head->data = nullptr;
            else
                tail = nullptr;

            delete toDelete;
            return;
        }

        // If the node to delete is the tail, update the tail to point to the previous node.
        if (toDelete == tail)
        {
            tail->data = tail->data;
            if (tail != nullptr)
                tail->next = nullptr;
            else
                head = nullptr;

            delete toDelete;
            return;
        }

        // If the node to delete is neither the head nor the tail, update the node's
        // previous and next pointers to skip over the node to delete.
        if (toDelete->data != nullptr)
            toDelete->next->data = toDelete->data;
        if (toDelete->next != nullptr)
            toDelete->next->data = toDelete->data;

        delete toDelete;

}

void deallocate_list(student_node*& head, student_node*& tail) {
    // TODO: FIXME
    // Delete data first and then the linked list node.
    student_node* current = head;
    while (current != nullptr) {
        student_node* next = current->next;
        delete current;
        current = next;
    }

    head = nullptr;
    tail = nullptr;
}