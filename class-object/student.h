#pragma once

#include <string>

using namespace std;
struct student {
    string first_name;
    string last_name;
    long reg_num;
    int age ;
    bool mature;
    string degree;
};

/**
 * @brief Create a string with all the student information
 *
 * @param s - A reference to the student
 * @return std::string - The sting representation of the student
 */
std::string student_to_string(student& s);

/**
 * @brief Compare two student first and second based on the field (int) in
 * descending order.
 *
 * @note The field is interpreted using a switch statement.
 *
 * @param first - first element to compare
 * @param second - second element to compare
 * @param field - The field is interpreted with a switch-case statement:
 *                      1 for first name
 *                      2 for last name
 *                      3 for registration number
 *                      4 for age
 *                      5 degree
 *                      returns false for any other field value
 * @return true - true if the elements need swapped
 * @return false - if no swapping is required
 */
bool descending_order_field(student* first, student* second, int field);
