#include "student_list.h"
#include "ui.h"
#include <string>

int main() {
    student_node* head = nullptr;
    student_node* tail = nullptr;

    while (true) {
        int choice = ui_menu();
        switch (choice) {
            case 0: {
                ui_print("Exit");
                return 0;
                break;
            }
            case 1: {
                student* s = new student;
                ui_ask_student_details(*s);
                push_back(head, tail, s);
                break;
            }
            case 2: {
                long regnum = ui_ask_student_reg_num();
                // Now find student.
                student_node* toDelete =
                        find_student_by_regnum(head, tail, regnum);
                if (toDelete == nullptr) {
                    ui_print(
                            "Student with this registration number was not found.");
                } else {
                    ui_print(student_to_string(*(toDelete->data)));
                    std::string response =
                            ui_get_line_string("Are you sure you want to delete "
                                               "the student (yes or no)?");
                    if (response.compare("yes") == 0) {
                        delete_node(head, tail, toDelete);
                    }
                }
                break;
            }
            case 3: {
                const char* text = "Select field order:\n"
                                   "1. First Name\n"
                                   "2. Last Name\n"
                                   "3. Reg Number\n"
                                   "4. Age\n"
                                   "5. Degree\n"
                                   "Enter a number between 1-5:";
                int field = ui_get_int_in_range(text, 1, 5);
                sort_by(head, tail, field);
                break;
            }
            case 4: {
                ui_print_student_list(head);
                break;
            }
            case 5: {
                ui_print_mature_students(head);
                break;
            }
            case 6: {
                ui_print_not_implemented("Load student DB");
                std::string filename = ui_ask_db_filename();
                // std::string filename = "student_db.txt";
                if (!load_db(head, tail, filename)) {
                    ui_print("Failed to load file...");
                }
                break;
            }
            case 7: {
                std::string filename = ui_ask_db_filename();
                if (!save_db(head, filename)) {
                    ui_print("Failed to save file...");
                }
                break;
            }
        }
        ui_pause();
    }

    // We should never reach here. (while - true)
   // deallocate_list(head, tail);

    return 0;
}