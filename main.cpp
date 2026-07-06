#include <iostream>
#include <string>

using namespace std;

int main()
{
    // =====================================================
    // VARIABLES
    // =====================================================

    int mainChoice;
    int categoryChoice;
    int bookChoice;

    string studentName;
    string department;
    string college;
    string studentID;

    // =====================================================
    // STORED BORROW INFORMATION
    // CONNECTS BORROW AND RETURN
    // =====================================================

    string borrowedName[100];
    string borrowedDepartment[100];
    string borrowedCollege[100];
    string borrowedID[100];
    string borrowedBook[100];

    int borrowCount = 0;

    // =====================================================
    // BOOK LISTS
    // =====================================================

    string psychology[10] =
    {
        "Introduction to Psychology",
        "Human Behavior",
        "Cognitive Psychology",
        "Developmental Psychology",
        "Social Psychology",
        "Clinical Psychology",
        "Abnormal Psychology",
        "Educational Psychology",
        "Mental Health Studies",
        "Psychological Research"
    };

    string academic[10] =
    {
        "Physics Module",
        "Chemistry Module",
        "Mathematics Module",
        "Calculus 1",
        "Calculus 2",
        "Computer Programming Module",
        "Biology Module",
        "English Module",
        "Economics Module",
        "Entrepreneurship Module"
    };

    string science[10] =
    {
        "General Physics",
        "Organic Chemistry",
        "Environmental Science",
        "Microbiology",
        "Astronomy",
        "Biotechnology",
        "Genetics",
        "Anatomy",
        "Geology",
        "Quantum Physics"
    };

    string fiction[10] =
    {
        "The Alchemist",
        "1984",
        "Animal Farm",
        "Harry Potter",
        "The Hobbit",
        "Romeo and Juliet",
        "Treasure Island",
        "Things Fall Apart",
        "The Great Gatsby",
        "Pride and Prejudice"
    };

    string nonfiction[10] =
    {
        "Atomic Habits",
        "Rich Dad Poor Dad",
        "Think and Grow Rich",
        "Deep Work",
        "Sapiens",
        "Educated",
        "Outliers",
        "The Power of Habit",
        "The Psychology of Money",
        "The 7 Habits"
    };

    string religious[10] =
    {
        "Holy Bible",
        "Holy Quran",
        "Spiritual Growth",
        "Faith and Hope",
        "Christian Ethics",
        "Islamic Teachings",
        "Prayer Guide",
        "Religious History",
        "Gospel Studies",
        "Book of Enoch"
    };

    string philosophical[10] =
    {
        "Republic",
        "Meditations",
        "The Prince",
        "Existentialism",
        "Logic and Reasoning",
        "Ethics",
        "Beyond Good and Evil",
        "The Art of War",
        "Philosophy Basics",
        "Critique of Pure Reason"
    };

    string business[10] =
    {
        "Business Management",
        "Marketing Principles",
        "Accounting Basics",
        "Leadership Skills",
        "Financial Management",
        "Human Resource Management",
        "Project Management",
        "Investment Basics",
        "Business Communication",
        "Business Ethics"
    };

    string technology[10] =
    {
        "C++ Programming",
        "Python Programming",
        "Java Programming",
        "Cyber Security",
        "Artificial Intelligence",
        "Database Systems",
        "Networking Basics",
        "Web Development",
        "Operating Systems",
        "Software Engineering"
    };

    string political[10] =
    {
        "Political Science",
        "World Politics",
        "Government Systems",
        "International Relations",
        "Democracy Studies",
        "Human Rights",
        "Public Administration",
        "African Politics",
        "Constitutional Law",
        "Political Philosophy"
    };

    // =====================================================
    // MAIN LOOP
    // =====================================================

    while(true)
    {
        cout << endl;
        cout << "======================================" << endl;
        cout << " ADDIS ABABA UNIVERSITY LIBRARY SYSTEM" << endl;
        cout << "======================================" << endl;

        cout << endl;

        cout << "1. BORROW" << endl;
        cout << "2. RETURN" << endl;
        cout << "3. RULES" << endl;
        cout << "4. HELP" << endl;
        cout << "5. EXIT" << endl;

        cout << endl;

        cout << "Enter Choice: ";
        cin >> mainChoice;

        // =====================================================
        // BORROW SECTION
        // =====================================================

        if(mainChoice == 1)
        {
            cout << endl;

            cout << "========== BOOK TYPES ==========" << endl;

            cout << "1. Psychology Books" << endl;
            cout << "2. Academic Modules" << endl;
            cout << "3. Science Books" << endl;
            cout << "4. Fiction Books" << endl;
            cout << "5. Non Fiction Books" << endl;
            cout << "6. Religious Books" << endl;
            cout << "7. Philosophical Books" << endl;
            cout << "8. Business Books" << endl;
            cout << "9. Technology Books" << endl;
            cout << "10. Political Books" << endl;

            cout << endl;

            cout << "Select Book Type: ";
            cin >> categoryChoice;

            cout << endl;

            // =================================================
            // DISPLAY BOOKS
            // =================================================

            if(categoryChoice == 1)
            {
                for(int i = 0; i < 10; i++)
                {
                    cout << i + 1 << ". " << psychology[i] << endl;
                }
            }

            else if(categoryChoice == 2)
            {
                for(int i = 0; i < 10; i++)
                {
                    cout << i + 1 << ". " << academic[i] << endl;
                }
            }

            else if(categoryChoice == 3)
            {
                for(int i = 0; i < 10; i++)
                {
                    cout << i + 1 << ". " << science[i] << endl;
                }
            }

            else if(categoryChoice == 4)
            {
                for(int i = 0; i < 10; i++)
                {
                    cout << i + 1 << ". " << fiction[i] << endl;
                }
            }

            else if(categoryChoice == 5)
            {
                for(int i = 0; i < 10; i++)
                {
                    cout << i + 1 << ". " << nonfiction[i] << endl;
                }
            }

            else if(categoryChoice == 6)
            {
                for(int i = 0; i < 10; i++)
                {
                    cout << i + 1 << ". " << religious[i] << endl;
                }
            }

            else if(categoryChoice == 7)
            {
                for(int i = 0; i < 10; i++)
                {
                    cout << i + 1 << ". " << philosophical[i] << endl;
                }
            }

            else if(categoryChoice == 8)
            {
                for(int i = 0; i < 10; i++)
                {
                    cout << i + 1 << ". " << business[i] << endl;
                }
            }

            else if(categoryChoice == 9)
            {
                for(int i = 0; i < 10; i++)
                {
                    cout << i + 1 << ". " << technology[i] << endl;
                }
            }

            else if(categoryChoice == 10)
            {
                for(int i = 0; i < 10; i++)
                {
                    cout << i + 1 << ". " << political[i] << endl;
                }
            }

            else
            {
                cout << "Invalid Book Type." << endl;
                continue;
            }

            // =================================================
            // SELECT BOOK
            // =================================================

            cout << endl;

            cout << "Select Book Number: ";
            cin >> bookChoice;

            if(bookChoice < 1 || bookChoice > 10)
            {
                cout << endl;
                cout << "Book is not available in the library list." << endl;
                continue;
            }

            string selectedBook;

            // =================================================
            // GET SELECTED BOOK
            // =================================================

            if(categoryChoice == 1)
                selectedBook = psychology[bookChoice - 1];

            else if(categoryChoice == 2)
                selectedBook = academic[bookChoice - 1];

            else if(categoryChoice == 3)
                selectedBook = science[bookChoice - 1];

            else if(categoryChoice == 4)
                selectedBook = fiction[bookChoice - 1];

            else if(categoryChoice == 5)
                selectedBook = nonfiction[bookChoice - 1];

            else if(categoryChoice == 6)
                selectedBook = religious[bookChoice - 1];

            else if(categoryChoice == 7)
                selectedBook = philosophical[bookChoice - 1];

            else if(categoryChoice == 8)
                selectedBook = business[bookChoice - 1];

            else if(categoryChoice == 9)
                selectedBook = technology[bookChoice - 1];

            else if(categoryChoice == 10)
                selectedBook = political[bookChoice - 1];

            // =================================================
            // CHECK IF BOOK ALREADY BORROWED
            // =================================================

            bool alreadyBorrowed = false;

            for(int i = 0; i < borrowCount; i++)
            {
                if(borrowedBook[i] == selectedBook)
                {
                    alreadyBorrowed = true;
                }
            }

            if(alreadyBorrowed == true)
            {
                cout << endl;
                cout << "Sorry! This book is already borrowed." << endl;
                continue;
            }

            // =================================================
            // REGISTRATION
            // =================================================

            cin.ignore();

            cout << endl;
            cout << "========== REGISTRATION ==========" << endl;

            cout << "Enter Full Official Name: ";
            getline(cin, studentName);

            cout << "Enter Department: ";
            getline(cin, department);

            cout << "Enter College Name: ";
            getline(cin, college);

            cout << "Enter ID (UGR/XXXX/XX): ";
            getline(cin, studentID);

            // =================================================
            // CHECK IF ID ALREADY REGISTERED
            // =================================================

            bool idExists = false;

            for(int i = 0; i < borrowCount; i++)
            {
                if(borrowedID[i] == studentID)
                {
                    idExists = true;
                }
            }

            if(idExists == true)
            {
                cout << endl;
                cout << "This ID already borrowed a book." << endl;
                cout << "Please return the borrowed book first." << endl;
            }

            else
            {
                borrowedName[borrowCount] = studentName;
                borrowedDepartment[borrowCount] = department;
                borrowedCollege[borrowCount] = college;
                borrowedID[borrowCount] = studentID;
                borrowedBook[borrowCount] = selectedBook;

                borrowCount++;

                cout << endl;
                cout << "You successfully borrowed: ";
                cout << selectedBook << endl;
            }
        }

        // =====================================================
        // RETURN SECTION
        // =====================================================

        else if(mainChoice == 2)
        {
            cin.ignore();

            cout << endl;
            cout << "========== RETURN SECTION ==========" << endl;

            cout << "Enter Student Name: ";
            getline(cin, studentName);

            cout << "Enter Department: ";
            getline(cin, department);

            cout << "Enter College Name: ";
            getline(cin, college);

            cout << "Enter ID: ";
            getline(cin, studentID);

            bool validReturn = false;

            for(int i = 0; i < borrowCount; i++)
            {
                if(borrowedID[i] == studentID)
                {
                    validReturn = true;

                    cout << endl;
                    cout << "Successfully Returned: ";
                    cout << borrowedBook[i] << endl;

                    // REMOVE DATA
                    borrowedName[i] = "";
                    borrowedDepartment[i] = "";
                    borrowedCollege[i] = "";
                    borrowedID[i] = "";
                    borrowedBook[i] = "";

                    break;
                }
            }

            if(validReturn == false)
            {
                cout << endl;
                cout << "Invalid ID." << endl;
            }
        }

        // =====================================================
        // RULES SECTION
        // =====================================================

        else if(mainChoice == 3)
        {
            cout << endl;
            cout << "========== LIBRARY RULES ==========" << endl;

            cout << "1. Keep silence inside library." << endl;
            cout << "2. Return books on time." << endl;
            cout << "3. Do not damage books." << endl;
            cout << "4. Bring student ID." << endl;
            cout << "5. No food inside library." << endl;
            cout << "6. No writing on books." << endl;
            cout << "7. Respect library staff." << endl;
            cout << "8. Keep books clean." << endl;
            cout << "9. No loud discussion." << endl;
            cout << "10. Use books responsibly." << endl;
            cout << "11. Follow return deadlines." << endl;
            cout << "12. Lost books must be replaced." << endl;
            cout << "13. Borrow responsibly." << endl;
            cout << "14. Maintain discipline." << endl;
            cout << "15. Follow university policies." << endl;
        }

        // =====================================================
        // HELP SECTION
        // =====================================================

        else if(mainChoice == 4)
        {
            cout << endl;
            cout << "========== HELP SECTION ==========" << endl;

            cout << "Emails:" << endl;
            cout << "addisababauniversity@gmail.com" << endl;
            cout << "addislibrary@gmail.com" << endl;
            cout << "aauhelpdesk@gmail.com" << endl;

            cout << endl;

            cout << "Phone Numbers:" << endl;
            cout << "+251912345678" << endl;
            cout << "+251911223344" << endl;

            cout << endl;

            cout << "Website:" << endl;
            cout << "www.addisababaportal.et.com" << endl;
        }

        // =====================================================
        // EXIT
        // =====================================================

        else if(mainChoice == 5)
        {
            cout << endl;
            cout << "Program Closed." << endl;
            break;
        }

        // =====================================================
        // INVALID
        // =====================================================

        else
        {
            cout << endl;
            cout << "Invalid Choice." << endl;
        }
    }

    return 0;
}
