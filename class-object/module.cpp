
#include "string"

using namespace std;
class Module {
public:
    // Constructor
    Module(string code, int credits, string title, string description)
            : code_(code), credits_(credits), title_(title), description_(description) {}

    // Getter and setter methods
    string getCode() const { return code_; }
    int getCredits() const { return credits_; }
    string getTitle() const { return title_; }
    string getDescription() const { return description_; }

    void setCode(string code) { code_ = code; }
    void setCredits(int credits) { credits_ = credits; }
    void setTitle(string title) { title_ = title; }
    void setDescription(string description) { description_ = description; }

private:
    // Data members
    string code_;
    int credits_;
    string title_;
    string description_;
};
