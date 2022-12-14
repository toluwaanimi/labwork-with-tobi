#include "ui.h"
#include <cstdio>
#include <iostream>
#include <string>
#include <limits>
using namespace std;

int ui_menu() {
    cout << "\033[2J\033[1;1H"; // Use this sequence to clear screen.
    cout << "Welcome to student DB programme select operations from the "
            "following menu:\n"
         << "1. Add new student...\n"
         << "2. Delete student with Registration Number...\n"
         << "3. Sort list of students by...\n"
         << "4. List all students\n"
         << "5. Print mature students\n"
         << "6. Load student database...\n"
         << "7. Save student database...\n"
         << "0. Exit\n"
         << "\nEnter Action: ";

    return ui_get_int_in_range(0, 7);
}

string ui_ask_db_filename() {
    string filename;
    cout << "Provide DB filename: ";
    getline(cin, filename);
    return filename;
}

void ui_print(string message) {
    cout << message << "\n";
}

void ui_print_not_implemented(string message) {
    cout << message << " not implemented\n";
}

void ui_pause() {
    cout << "Press Enter to continue...";
    cin.get();
    // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void ui_ask_student_details(student& s) {
    s.first_name = ui_get_line_string("Enter First name:");
    s.last_name = ui_get_line_string("Enter Last name:");
    s.reg_num = ui_ask_student_reg_num();
    s.age = ui_get_int_in_range("Enter age (17-100):", 17, 100);
    s.mature = (s.age >= 21);
    s.degree = ui_get_line_string("Enter Degree:");
}

long ui_ask_student_reg_num() {
    long reg;
    do {
        cout << "Enter registration number "
                "(9 digits long, not starting with 0): ";
        reg = ui_get_long();
    } while (!valid_reg_num(reg));
    return reg;
}

bool valid_reg_num(long reg) {
    // registration must be 9 digits long and can not start with 0
    string reg_string = std::to_string(reg);
    if (reg_string.length() == 9 && reg_string[0] != 0) {
        return true;
    }
    return false;
}

string ui_get_line_string(string question) {
    cout << question << " ";
    string answer;
    getline(cin, answer);
    return answer;
}

int ui_get_int() {
    int number;
    while (true) {
        if (std::cin >> number) {
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return number;
        }
        std::cout << "Sorry that was not a number\n";
        ui_skip_to_number();
    }
}

long ui_get_long() {
    long number;
    while (true) {
        if (std::cin >> number) {
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return number;
        }
        std::cout << "Sorry that was not a number\n";
        ui_skip_to_number();
    }
}

int ui_get_int_in_range(int low, int high) {
    while (true) {
        int number = ui_get_int();
        if (low <= number && number <= high) {
            return number;
        }
        std::cout << "Sorry the number is not between " << low << " and "
                  << high << "; Try again...\n";
    }
}

int ui_get_int_in_range(string question, int low, int high) {
    cout << question << " ";
    return ui_get_int_in_range(low, high);
}

void ui_skip_to_number() {
    if (std::cin.fail()) {
        std::cin.clear();
        for (char ch; std::cin >> ch;) {
            if (('0' <= ch && ch <= '9') || ch == '-') {
                std::cin.unget();
                return;
            }
        }
        std::cout << "The stream is at eof or bad"
                  << "\n";
    }
}

void ui_print_student_list(student_node* head) {
    int count{0};
    for (student_node* iter = head; iter != nullptr; iter = iter->next) {
        cout << student_to_string(*(iter->data)) << "\n";
        count++;
    }
    cout << "The DB contains " << count << " students\n";
}

void ui_print_mature_students(student_node* head) {
    int count{0};
    int mature_count{0};
    for (student_node* iter = head; iter != nullptr; iter = iter->next) {
        if (iter->data->mature) {
            cout << student_to_string(*(iter->data)) << "\n";
            mature_count++;
        }
        count++;
    }
    cout << "The DB contains " << mature_count << " mature students out of "
         << count << "\n";
}
