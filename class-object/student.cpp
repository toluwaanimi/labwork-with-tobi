#include "student.h"
#include <sstream>

std::string student_to_string(student& s) {
    std::stringstream ss;
    ss << s.first_name << " " << s.last_name;
    ss << " - Reg#: " << s.reg_num;
    ss << " - Age: " << s.age << " (Mature: ";
    if (s.mature) {
        ss << "yes";
    } else {
        ss << "no";
    }
    ss << ")- Degree: " << s.degree;
    return ss.str();
}

bool descending_order_field(student* first, student* second, int field) {
    switch (field) {
        case 1:
            // compare first names
            return first->first_name.compare(second->first_name) > 0;
            break;
        case 2:
            // compare last name
            return first->last_name.compare(second->last_name) > 0;
            break;
        case 3:
            // compare regnum
            return (first->reg_num > second->reg_num);
            break;
        case 4:
            // compare age
            return (first->age > second->age);
            break;
        case 5:
            // compare degree
            return first->degree.compare(second->degree) > 0;
            break;
        default:
            // uknown field to order
            return false;
    }
}