#pragma once
#include "student.h"
#include "student_list.h"
#include <string>

// Menu and ui helpers
/**
 * @brief The function prints the application Menu and asks the user to make a
 * choice. It then return the choosen option.
 *
 * @note The function clears the screen every time it is called to start a new
 * interaction iteration.
 *
 * @return int - The choice the user made
 */
int ui_menu();

/**
 * @brief Asks the user to provide a database filename and returns it as a
 * string.
 *
 * @return std::string - the filename with the database
 */
std::string ui_ask_db_filename();

/**
 * @brief Prints a message on the screen.
 *
 * @param message - A string containing the message
 */
void ui_print(std::string message);

void ui_print_not_implemented(std::string message);
/**
 * @brief Pauses the UI to allow user to see output.
 *
 */
void ui_pause();

// Ask student details
/**
 * @brief Asks the user to enter student details.
 *
 * @note The method accepts the input as a reference and modifies the reference.
 * The caller must have the student already allocated and expect its contents to
 * change.
 *
 * @param s - The student structure that will be modified with the user's input
 */
void ui_ask_student_details(student& s);

/**
 * @brief A helper function to ask the user for the student registration number
 * and validate it is 9 digits long and does not start with 0.
 *
 * @return long - The student registration number inputted by the user
 */
long ui_ask_student_reg_num();

/**
 * @brief A helper function to validate the student registration number.
 *
 * @param reg - The registration number to validate
 * @return true - If the number is 9 digits long and does not start with 0
 * @return false - Any number not 9 digits long
 */
bool valid_reg_num(long reg);

// Helpers for strings/ints/longs/strings
/**
 * @brief UI helper function to ask a user to input a string
 *
 * @param question - The question that should be presented to the user
 * @return std::string - The user's response
 */
std::string ui_get_line_string(std::string question);

/**
 * @brief UI helper function to ask the user to enter an int. If the user
 * enters alphanumeric input the alpha characters are stripped.
 *
 * @return int - The number inputted by the user
 */
int ui_get_int();

/**
 * @brief UI helper function to ask the user to enter a long. If the user
 * enters alphanumeric input the alpha characters are stripped.
 *
 * @return long - The number inputted by the user
 */
long ui_get_long();

/**
 * @brief Similar to `ui_get_int` but it also checks that the number is within
 * the specified range [low,high].
 *
 * @param low - The lowest number that should be accepted as input
 * @param high - The highest number that should be accepted as input
 * @return int - The number inputted by the user
 */
int ui_get_int_in_range(int low, int high);

/**
 * @brief Similar to `ui_get_int_in_range` but also permits outputting a
 * question to the user.
 *
 * @param question - The question that should be presented to the user
 * @param low - The lowest number that should be accepted as input
 * @param high - The highest number that should be accepted as input
 * @return int - The number inputted by the user
 */
int ui_get_int_in_range(std::string question, int low, int high);

/**
 * @brief A helper function to remove characters from the input stream until
 * valid numeric characters are reached (inc. the minus sign)
 *
 */
void ui_skip_to_number();

void ui_print_student_list(student_node* head);
void ui_print_mature_students(student_node* head);