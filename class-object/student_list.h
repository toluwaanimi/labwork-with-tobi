#pragma once

#include "student.h"
#include <string>

struct student_node {
    // TODO: FIXME
    student* data;
    student_node* next;
};

/**
 * @brief Append a student in the double linked list
 *
 * @param head - A reference to the head of the student list
 * @param tail - A reference to the tail of the student list
 * @param s - A pointer to the a student that will be added to the list
 */
void push_back(student_node*& head, student_node*& tail, student* s);

/**
 * @brief A method to sort the list based on one of the structure fields
 *
 * @param head - A reference to the head of the student list
 * @param tail - A reference to the tail of the student list
 * @param field - An integer representing which field to sort
 * @sa descending_order_field in student.h
 */
void sort_by(student_node*& head, student_node*& tail, int field);

/**
 * @brief Save the student double linked list in the file provided in the
 * filename argument
 *
 * @param head - The head of the double linked list
 * @param filename - A string that indicates the filename
 * @return true - If saving was successful
 * @return false - If saving the linked list failed
 */
bool save_db(student_node* head, std::string filename);

/**
 * @brief Load the student list from a file.
 *
 * @note If the head and tail already contain elements the function will
 * deallocate/delete these elements and then load from the file.
 *
 * @param head - A reference to the head of the student list
 * @param tail - A reference to the tail of the student list
 * @param filename - The filename that contains the student records
 * @return true - If loading the linked list was successful
 * @return false - If loading the linked list failed.
 */
bool load_db(student_node*& head, student_node*& tail, std::string filename);

/**
 * @brief A function that searches the linked list for a student with a
 * registration number provided in the regnum argument.
 *
 * @param head - The head of the student list
 * @param tail - The tail of the student list
 * @param regnum - The registration number to look up
 * @return student_node* - A pointer to the double linked list node that
 * contains the student with the given registration number. If a student with
 * regnum is not found the pointer is nullptr.
 */
student_node* find_student_by_regnum(student_node* head, student_node* tail,
                                     long regnum);

/**
 * @brief Delete a node toDelete from the student list.
 *
 * @param head - A reference to the head of the student list
 * @param tail - A reference to the tail of the student list
 * @param toDelete - A pointer to the node to be deleted.
 */
void delete_node(student_node*& head, student_node*& tail,
                 student_node* toDelete);

/**
 * @brief Loop through the nodes in the list, delete their data and the nodes
 * themselves
 *
 * @param head - A reference to the head of the student list
 * @param tail - A reference to the tail of the student list
 */
void deallocate_list(student_node*& head, student_node*& tail);
