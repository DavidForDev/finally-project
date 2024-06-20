#pragma once;

using namespace System;

public ref class User {
private:
    static User^ instance = nullptr;

public:
    int id;
    String^ userName;
    String^ email;
    String^ country;
    String^ gender;
    String^ password;

    static property User^ Instance {
        User^ get() {
            if (instance == nullptr) {
                instance = gcnew User();
            }
            return instance;
        }
    }

    void ClearUserData() {
        id = -1;
        userName = "";
        email = "";
        country = "";
        gender = "";
        password = "";
    };

private:
    User() {
        // Initialize Data of User
        id = -1; 
        userName = "";
        email = "";
        country = "";
        gender = "";
        password = "";
    }
};