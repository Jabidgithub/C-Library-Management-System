#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
using namespace std;

class Book_manageMent_App
{
public:
    void get();

    //------------------------------//

    void control_panel();
    void display_book();
    void search_book();
    void student_list();
    void add_book();
    void delete_book();
    void modify_book();
    void book_branch();
    void issue_book();
    void issue_book_stu();

    // ------------ show book Function  ---------//

    void show_history_book();
    void show_tech_book();
    void show_cs_book();
    void show_se_book();
    void show_botany_book();
    void show_fdt_book();
    void show_zoology_book();

    // ------------ Search book Function  ---------//

    void search_history_book();
    void search_tech_book();
    void search_cs_book();
    void search_se_book();
    void search_botany_book();
    void search_fdt_book();
    void search_zoology_book();

    // ------------ Search book Function to issue books ---------//

    void search_history_book_issue();
    void search_tech_book_issue();
    void search_cs_book_issue();
    void search_se_book_issue();
    void search_botany_book_issue();
    void search_fdt_book_issue();
    void search_zoology_book_issue();

    // ------------ Add book Function  ---------//

    void add_history_book();
    void add_tech_book();
    void add_cs_book();
    void add_se_book();
    void add_botany_book();
    void add_fdt_book();
    void add_zoology_book();

    // ------------ Delete book Function  ---------//

    void del_history_book();
    void del_tech_book();
    void del_cs_book();
    void del_se_book();
    void del_botany_book();
    void del_fdt_book();
    void del_zoology_book();

    // ------------ Modify book Function  ---------//

    void mod_history_book();
    void mod_tech_book();
    void mod_cs_book();
    void mod_se_book();
    void mod_botany_book();
    void mod_fdt_book();
    void mod_zoology_book();
};

void Book_manageMent_App::get()
{

    int choice;
    char x;

p:
    Book_manageMent_App b;
    b.control_panel();

    cout << "\n\n Your Choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        b.display_book();
        break;
    case 2:
        b.search_book();
        break;
    case 3:
        b.student_list();
        break;
    case 4:
        do
        {
            b.add_book();
            cout << "\n\n Do You Want to Add another Book (y,n) : ";
            cin >> x;
        } while (x == 'y');
        break;
    case 5:
        b.delete_book();
        break;
    case 6:
        b.modify_book();
        break;

    case 7:
        issue_book();
        break;
    case 8:
        exit(0);
        break;
    default:
        cout << "\n\n Invalid Choice...Please Try Again...";
    }
    getch();
    goto p;
}

void Book_manageMent_App::control_panel()
{
    system("cls");
    cout << "\n\n\t\t\t\t------------------ Welcome to Library Management App ---------------------------";
    cout << "\n\n\t\t\t\t------------------ Control Panel ---------------------------\n";

    cout << "\n 1. Display Books";
    cout << "\n 2. Search Books";
    cout << "\n 3. Student List";
    cout << "\n 4. Add Book";
    cout << "\n 5. Delete Book";
    cout << "\n 6. Modify Book";
    cout << "\n 7. Issue Book";
    cout << "\n 8. Exit";
}

void Book_manageMent_App::display_book()
{
    int choice1;

l:
    system("cls");

    cout << "\n\n\t\t\t\t------------------ All Books ---------------------------\n";

    book_branch();
    cout << "\n\n Your Choice : ";
    cin >> choice1;

    switch (choice1)
    {
    case 1:
        show_history_book();
        break;

    case 2:
        show_tech_book();
        break;

    case 3:
        show_cs_book();
        break;

    case 4:
        show_se_book();
        break;

    case 5:
        show_botany_book();
        break;

    case 6:
        show_zoology_book();
        break;

    case 7:
        show_fdt_book();
        break;
    case 8:
        get();
        break;
    default:
        cout << "\n\n Invalid Choice...Please Try Again...";
    }
    getch();
    goto l;
}

void Book_manageMent_App::book_branch()
{

    cout << "\n 1. History";
    cout << "\n 2. Technology";
    cout << "\n 3. Computer Science";
    cout << "\n 4. Software Engineering";
    cout << "\n 5. Botany";
    cout << "\n 6. Zoology";
    cout << "\n 7. Fashion Design";
    cout << "\n 8. Go to Control Panel";
}
void Book_manageMent_App::search_book()
{

    int choice2;

k:
    system("cls");

    cout << "\n\n\t\t\t\t------------------ Search Books by Sections ---------------------------\n";

    book_branch();
    cout << "\n\n Your Choice : ";
    cin >> choice2;

    switch (choice2)
    {
    case 1:
        search_history_book();
        break;

    case 2:
        search_tech_book();
        break;

    case 3:
        search_cs_book();
        break;

    case 4:
        search_se_book();
        break;

    case 5:
        search_botany_book();
        break;

    case 6:
        search_zoology_book();
        break;

    case 7:
        search_fdt_book();
        break;
    case 8:
        get();
        break;
    default:
        cout << "\n\n Invalid Choice...Please Try Again...";
    }
    getch();
    goto k;
}
void Book_manageMent_App::student_list()
{

    system("cls");
    fstream file_student_list;
    string book_id, book_name, stu_name, stu_id;
    cout << "\n\n\t\t\t\t----------Student List----------";
    file_student_list.open("E://student_list.txt", ios::in);
    if (!file_student_list)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID    Book Name   Student Name   Student Id\n\n";
        file_student_list >> book_id >> book_name >> stu_name >> stu_id;

        while (!file_student_list.eof())
        {
            cout << "   " << book_id << "   " << book_name << "   " << stu_name << "   " << stu_id << "\n\n";
            file_student_list >> book_id >> book_name >> stu_name >> stu_id;
        }
        file_student_list.close();
    }
};
void Book_manageMent_App::issue_book_stu()
{

    system("cls");
    fstream file_Student_list;
    string book_name, book_id, stu_name, stu_id;
    cout << "\n\n\t\t\t\t Get a New Book";
    cout << "\n\n Book ID : ";
    cin >> book_id;
    cout << "\n\n Book Name : ";
    cin >> book_name;
    cout << "\n\n Student Name : ";
    cin >> stu_name;
    cout << "\n\n Student ID : ";
    cin >> stu_id;
    file_Student_list.open("E://student_list.txt", ios::out | ios::app);
    file_Student_list << " " << book_id << " " << book_name << " " << stu_name << " " << stu_id << " "
                      << "\n";
    file_Student_list.close();
};
void Book_manageMent_App::issue_book()
{

    int choice7;

z:
    system("cls");
    cout << "\n\n\t\t\t\t------------------ Issue Book ---------------------------\n";

    cout << "\n 1. Issue Book";
    cout << "\n 2. Student List";
    cout << "\n 3. go to control panel";
    cout << "\n\n Your Choice : ";
    cin >> choice7;

    switch (choice7)
    {
    case 1:
        // Issue Book //
        issue_book_stu();
        break;

    case 2:
        student_list();
        break;
    case 3:
        get();
        break;

    default:
        cout << "\n\n Invalid Choice...Please Try Again...";
        break;
    }
    getch();
    goto z;
};

void Book_manageMent_App::add_book()
{

    int choice3;

k:
    system("cls");

    cout << "\n\n\t\t\t\t------------------ Add Books by Sections ---------------------------\n";

    book_branch();
    cout << "\n\n Your Choice : ";
    cin >> choice3;

    switch (choice3)
    {
    case 1:
        add_history_book();
        break;

    case 2:
        add_tech_book();
        break;

    case 3:
        add_cs_book();
        break;

    case 4:
        add_se_book();
        break;

    case 5:
        add_botany_book();
        break;

    case 6:
        add_zoology_book();
        break;

    case 7:
        add_fdt_book();
        break;
    case 8:
        get();
        break;
    default:
        cout << "\n\n Invalid Choice...Please Try Again...";
    }
    getch();
    goto k;
}
void Book_manageMent_App::delete_book()
{
    int choice4;

t:
    system("cls");

    cout << "\n\n\t\t\t\t------------------ Delete Books by Sections ---------------------------\n";

    book_branch();
    cout << "\n\n Your Choice : ";
    cin >> choice4;

    switch (choice4)
    {
    case 1:
        del_history_book();
        break;

    case 2:
        del_tech_book();
        break;

    case 3:
        del_cs_book();
        break;

    case 4:
        del_se_book();
        break;

    case 5:
        del_botany_book();
        break;

    case 6:
        del_zoology_book();
        break;

    case 7:
        del_fdt_book();
        break;
    case 8:
        get();
        break;
    default:
        cout << "\n\n Invalid Choice...Please Try Again...";
    }
    getch();
    goto t;
}
void Book_manageMent_App::modify_book()
{

    int choice5;

n:
    system("cls");

    cout << "\n\n\t\t\t\t------------------ Modify Books by Sections ---------------------------\n";

    book_branch();
    cout << "\n\n Your Choice : ";
    cin >> choice5;

    switch (choice5)
    {
    case 1:
        mod_history_book();
        break;

    case 2:
        mod_tech_book();
        break;

    case 3:
        mod_cs_book();
        break;

    case 4:
        mod_se_book();
        break;

    case 5:
        mod_botany_book();
        break;

    case 6:
        mod_zoology_book();
        break;

    case 7:
        mod_fdt_book();
        break;
    case 8:
        get();
        break;
    default:
        cout << "\n\n Invalid Choice...Please Try Again...";
    }
    getch();
    goto n;
}

//----------- Books -----------//

void Book_manageMent_App::show_history_book()
{
    system("cls");
    fstream file_history;
    string book_id, book_name;
    cout << "\n\n\t\t\t\t----------Show All Books----------";
    file_history.open("E://history_book.txt", ios::in);
    if (!file_history)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID    Book Name   \n\n";
        file_history >> book_id >> book_name;

        while (!file_history.eof())
        {
            cout << "   " << book_id << "   " << book_name << "\n\n";
            file_history >> book_id >> book_name;
        }
        file_history.close();
    }
}
void Book_manageMent_App::show_tech_book()
{
    system("cls");
    fstream file_tech;
    string book_id, book_name;
    cout << "\n\n\t\t\t\t----------Show All Books----------";
    file_tech.open("E://tech_book.txt", ios::in);
    if (!file_tech)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID    Book Name   \n\n";
        file_tech >> book_id >> book_name;

        while (!file_tech.eof())
        {
            cout << "   " << book_id << "   " << book_name << "\n\n";
            file_tech >> book_id >> book_name;
        }
        file_tech.close();
    }
}

void Book_manageMent_App::show_cs_book()
{
    system("cls");
    fstream file_cs;
    string book_id, book_name;
    cout << "\n\n\t\t\t\t----------Show All Books----------";
    file_cs.open("E://cs_book.txt", ios::in);
    if (!file_cs)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID    Book Name   \n\n";
        file_cs >> book_id >> book_name;

        while (!file_cs.eof())
        {
            cout << "   " << book_id << "   " << book_name << "\n\n";
            file_cs >> book_id >> book_name;
        }
        file_cs.close();
    }
}
void Book_manageMent_App::show_se_book()
{
    system("cls");
    fstream file_se;
    string book_id, book_name;
    cout << "\n\n\t\t\t\t----------Show All Books----------";
    file_se.open("E://se_book.txt", ios::in);
    if (!file_se)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID    Book Name   \n\n";
        file_se >> book_id >> book_name;

        while (!file_se.eof())
        {
            cout << "   " << book_id << "   " << book_name << "\n\n";
            file_se >> book_id >> book_name;
        }
        file_se.close();
    }
}
void Book_manageMent_App::show_botany_book()
{
    system("cls");
    fstream file_botany;
    string book_id, book_name;
    cout << "\n\n\t\t\t\t----------Show All Books----------";
    file_botany.open("E://botany_book.txt", ios::in);
    if (!file_botany)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID    Book Name   \n\n";
        file_botany >> book_id >> book_name;

        while (!file_botany.eof())
        {
            cout << "   " << book_id << "   " << book_name << "\n\n";
            file_botany >> book_id >> book_name;
        }
        file_botany.close();
    }
}
void Book_manageMent_App::show_zoology_book()
{
    system("cls");
    fstream file_zoology;
    string book_id, book_name;
    cout << "\n\n\t\t\t\t----------Show All Books----------";
    file_zoology.open("E://zoology_book.txt", ios::in);
    if (!file_zoology)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID    Book Name   \n\n";
        file_zoology >> book_id >> book_name;

        while (!file_zoology.eof())
        {
            cout << "   " << book_id << "   " << book_name << "\n\n";
            file_zoology >> book_id >> book_name;
        }
        file_zoology.close();
    }
}
void Book_manageMent_App::show_fdt_book()
{
    system("cls");
    fstream file_fdt;
    string book_id, book_name;
    cout << "\n\n\t\t\t\t----------Show All Books----------";
    file_fdt.open("E://fdt_book.txt", ios::in);
    if (!file_fdt)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID    Book Name   \n\n";
        file_fdt >> book_id >> book_name;

        while (!file_fdt.eof())
        {
            cout << "   " << book_id << "   " << book_name;
            file_fdt >> book_id >> book_name;
        }
        file_fdt.close();
    }
}
// -----------------------------------------------------//
void Book_manageMent_App::add_history_book()
{

    system("cls");
    fstream file_history;
    string book_name, book_id;
    cout << "\n\n\t\t\t\t ADD New Book";
    cout << "\n\n Book ID : ";
    cin >> book_id;
    cout << "\n\n\t\t\t Book Name : ";
    cin >> book_name;
    file_history.open("E://history_book.txt", ios::out | ios::app);
    file_history << " " << book_id << " " << book_name << "\n";
    file_history.close();
};
void Book_manageMent_App::add_tech_book()
{

    system("cls");
    fstream file_tech;
    string book_name, book_id;
    cout << "\n\n\t\t\t\t ADD New Book";
    cout << "\n\n Book ID : ";
    cin >> book_id;
    cout << "\n\n\t\t\t Book Name : ";
    cin >> book_name;
    file_tech.open("E://tech_book.txt", ios::out | ios::app);
    file_tech << " " << book_id << " " << book_name << "\n";
    file_tech.close();
};
void Book_manageMent_App::add_cs_book()
{

    system("cls");
    fstream file_cs;
    string book_name, book_id;
    cout << "\n\n\t\t\t\t ADD New Book";
    cout << "\n\n Book ID : ";
    cin >> book_id;
    cout << "\n\n\t\t\t Book Name : ";
    cin >> book_name;
    file_cs.open("E://cs_book.txt", ios::out | ios::app);
    file_cs << " " << book_id << " " << book_name << "\n";
    file_cs.close();
};
void Book_manageMent_App::add_se_book()
{
    system("cls");
    fstream file_se;
    string book_name, book_id;
    cout << "\n\n\t\t\t\t ADD New Book";
    cout << "\n\n Book ID : ";
    cin >> book_id;
    cout << "\n\n\t\t\t Book Name : ";
    cin >> book_name;
    file_se.open("E://se_book.txt", ios::out | ios::app);
    file_se << " " << book_id << " " << book_name << "\n";
    file_se.close();
};
void Book_manageMent_App::add_botany_book()
{
    system("cls");
    fstream file_botany;
    string book_name, book_id;
    cout << "\n\n\t\t\t\t ADD New Book";
    cout << "\n\n Book ID : ";
    cin >> book_id;
    cout << "\n\n\t\t\t Book Name : ";
    cin >> book_name;
    file_botany.open("E://botany_book.txt", ios::out | ios::app);
    file_botany << " " << book_id << " " << book_name << "\n";
    file_botany.close();
};
void Book_manageMent_App::add_fdt_book()
{
    system("cls");
    fstream file_fdt;
    string book_name, book_id;
    cout << "\n\n\t\t\t\t ADD New Book";
    cout << "\n\n Book ID : ";
    cin >> book_id;
    cout << "\n\n\t\t\t Book Name : ";
    cin >> book_name;
    file_fdt.open("E://fdt_book.txt", ios::out | ios::app);
    file_fdt << " " << book_id << " " << book_name << "\n";
    file_fdt.close();
};
void Book_manageMent_App::add_zoology_book()
{
    system("cls");
    fstream file_zoology;
    string book_name, book_id;
    cout << "\n\n\t\t\t\t ADD New Book";
    cout << "\n\n Book ID : ";
    cin >> book_id;
    cout << "\n\n\t\t\t Book Name : ";
    cin >> book_name;
    file_zoology.open("E://zoology_book.txt", ios::out | ios::app);
    file_zoology << " " << book_id << " " << book_name << "\n";
    file_zoology.close();
};

//-----------------------------//

void Book_manageMent_App::search_history_book()
{

    system("cls");
    fstream file_history;
    int count = 0;
    string book_id, book_name, book_idd;
    cout << "\n\n\t\t\t\tSearch Book by Book ID";
    file_history.open("E://history_book.txt", ios::in);

    // ----------------

    if (!file_history)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_idd;
        file_history >> book_id >> book_name;
        while (!file_history.eof())
        {
            if (book_idd == book_id)
            {
                system("cls");
                cout << "\n\n\t\t\t\tCheck Specific Book";
                cout << "\n\n Book ID : " << book_id;
                cout << "\n\n\t\t\tName : " << book_name;
                count++;
                break;
            }
            file_history >> book_id >> book_name;
        }
        file_history.close();
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }

    // -----------------------
};
void Book_manageMent_App::search_tech_book()
{
    system("cls");
    fstream file_tech;
    int count = 0;
    string book_id, book_name, book_idd;
    cout << "\n\n\t\t\t\tSearch Book by Book ID";
    file_tech.open("E://tech_book.txt", ios::in);

    // ----------------

    if (!file_tech)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_idd;
        file_tech >> book_id >> book_name;
        while (!file_tech.eof())
        {
            if (book_idd == book_id)
            {
                system("cls");
                cout << "\n\n\t\t\t\tCheck Specific Book";
                cout << "\n\n Book ID : " << book_id;
                cout << "\n\n\t\t\tName : " << book_name;
                count++;
                break;
            }
            file_tech >> book_id >> book_name;
        }
        file_tech.close();
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }

    // -----------------------
};
void Book_manageMent_App::search_cs_book()
{

    system("cls");
    fstream file_cs;
    int count = 0;
    string book_id, book_name, book_idd;
    cout << "\n\n\t\t\t\tSearch Book by Book ID";
    file_cs.open("E://cs_book.txt", ios::in);

    // ----------------

    if (!file_cs)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_idd;
        file_cs >> book_id >> book_name;
        while (!file_cs.eof())
        {
            if (book_idd == book_id)
            {
                system("cls");
                cout << "\n\n\t\t\t\tCheck Specific Book";
                cout << "\n\n Book ID : " << book_id;
                cout << "\n\n\t\t\tName : " << book_name;
                count++;
                break;
            }
            file_cs >> book_id >> book_name;
        }
        file_cs.close();
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }

    // -----------------------
};
void Book_manageMent_App::search_se_book()
{

    system("cls");
    fstream file_se;
    int count = 0;
    string book_id, book_name, book_idd;
    cout << "\n\n\t\t\t\tSearch Book by Book ID";
    file_se.open("E://tech_se.txt", ios::in);

    // ----------------

    if (!file_se)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_idd;
        file_se >> book_id >> book_name;
        while (!file_se.eof())
        {
            if (book_idd == book_id)
            {
                system("cls");
                cout << "\n\n\t\t\t\tCheck Specific Book";
                cout << "\n\n Book ID : " << book_id;
                cout << "\n\n\t\t\tName : " << book_name;
                count++;
                break;
            }
            file_se >> book_id >> book_name;
        }
        file_se.close();
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }

    // -----------------------
};
void Book_manageMent_App::search_botany_book()
{
    system("cls");
    fstream file_botany;
    int count = 0;
    string book_id, book_name, book_idd;
    cout << "\n\n\t\t\t\tSearch Book by Book ID";
    file_botany.open("E://botany_book.txt", ios::in);

    // ----------------

    if (!file_botany)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_idd;
        file_botany >> book_id >> book_name;
        while (!file_botany.eof())
        {
            if (book_idd == book_id)
            {
                system("cls");
                cout << "\n\n\t\t\t\tCheck Specific Book";
                cout << "\n\n Book ID : " << book_id;
                cout << "\n\n\t\t\tName : " << book_name;
                count++;
                break;
            }
            file_botany >> book_id >> book_name;
        }
        file_botany.close();
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }

    // -----------------------
};

void Book_manageMent_App::search_zoology_book()
{

    system("cls");
    fstream file_zoology;
    int count = 0;
    string book_id, book_name, book_idd;
    cout << "\n\n\t\t\t\tSearch Book by Book ID";
    file_zoology.open("E://zoology_book.txt", ios::in);

    // ----------------

    if (!file_zoology)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_idd;
        file_zoology >> book_id >> book_name;
        while (!file_zoology.eof())
        {
            if (book_idd == book_id)
            {
                system("cls");
                cout << "\n\n\t\t\t\tCheck Specific Book";
                cout << "\n\n Book ID : " << book_id;
                cout << "\n\n\t\t\tName : " << book_name;
                count++;
                break;
            }
            file_zoology >> book_id >> book_name;
        }
        file_zoology.close();
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }

    // -----------------------
};
void Book_manageMent_App::search_fdt_book()
{
    system("cls");
    fstream file_fdt;
    int count = 0;
    string book_id, book_name, book_idd;
    cout << "\n\n\t\t\t\tSearch Book by Book ID";
    file_fdt.open("E://fdt_book.txt", ios::in);

    // ----------------

    if (!file_fdt)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_idd;
        file_fdt >> book_id >> book_name;
        while (!file_fdt.eof())
        {
            if (book_idd == book_id)
            {
                system("cls");
                cout << "\n\n\t\t\t\tCheck Specific Book";
                cout << "\n\n Book ID : " << book_id;
                cout << "\n\n\t\t\tName : " << book_name;
                count++;
                break;
            }
            file_fdt >> book_id >> book_name;
        }
        file_fdt.close();
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }

    // -----------------------
};

//

//

//

//

//

//

//

//-----------------------//

void Book_manageMent_App::del_history_book()
{

    system("cls");
    fstream file_history, file_history1;
    int count = 0;
    string book_id, book_idd, book_name;
    cout << "\n\n\t\t\t\tDelete Book Record";
    file_history1.open("E://history_book1.txt", ios::app | ios::out);
    file_history.open("E://history_book.txt", ios::in);
    if (!file_history)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_id;
        file_history >> book_idd >> book_name;
        while (!file_history.eof())
        {
            if (book_id == book_idd)
            {
                system("cls");
                cout << "\n\n\t\t\t\tDelete Book Record";
                cout << "\n\n One Book is Deleted Successfully...";
                count++;
            }
            else
                file_history1 << " " << book_idd << " " << book_name << "\n";
            file_history >> book_idd >> book_name;
        }
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }
    file_history.close();
    file_history1.close();
    remove("E://history_book.txt");
    rename("E://history_book1.txt", "E://history_book.txt");
};
void Book_manageMent_App::del_tech_book()
{
    system("cls");
    fstream file_tech, file_tech1;
    int count = 0;
    string book_id, book_idd, book_name;
    cout << "\n\n\t\t\t\tDelete Book Record";
    file_tech1.open("E://tech_book1.txt", ios::app | ios::out);
    file_tech.open("E://tech_book.txt", ios::in);
    if (!file_tech)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_id;
        file_tech >> book_idd >> book_name;
        while (!file_tech.eof())
        {
            if (book_id == book_idd)
            {
                system("cls");
                cout << "\n\n\t\t\t\tDelete Book Record";
                cout << "\n\n One Book is Deleted Successfully...";
                count++;
            }
            else
                file_tech1 << " " << book_idd << " " << book_name << "\n";
            file_tech >> book_idd >> book_name;
        }
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }
    file_tech.close();
    file_tech1.close();
    remove("E://tech_book.txt");
    rename("E://tech_book1.txt", "E://tech_book.txt");
};
void Book_manageMent_App::del_cs_book()
{

    system("cls");
    fstream file_cs, file_cs1;
    int count = 0;
    string book_id, book_idd, book_name;
    cout << "\n\n\t\t\t\tDelete Book Record";
    file_cs1.open("E://cs_book1.txt", ios::app | ios::out);
    file_cs.open("E://cs_book.txt", ios::in);
    if (!file_cs)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_id;
        file_cs >> book_idd >> book_name;
        while (!file_cs.eof())
        {
            if (book_id == book_idd)
            {
                system("cls");
                cout << "\n\n\t\t\t\tDelete Book Record";
                cout << "\n\n One Book is Deleted Successfully...";
                count++;
            }
            else
                file_cs1 << " " << book_idd << " " << book_name << "\n";
            file_cs >> book_idd >> book_name;
        }
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }
    file_cs.close();
    file_cs1.close();
    remove("E://cs_book.txt");
    rename("E://cs_book1.txt", "E://cs_book.txt");
};
void Book_manageMent_App::del_se_book()
{

    system("cls");
    fstream file_se, file_se1;
    int count = 0;
    string book_id, book_idd, book_name;
    cout << "\n\n\t\t\t\tDelete Book Record";
    file_se1.open("E://se_book1.txt", ios::app | ios::out);
    file_se.open("E://se_book.txt", ios::in);
    if (!file_se)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_id;
        file_se >> book_idd >> book_name;
        while (!file_se.eof())
        {
            if (book_id == book_idd)
            {
                system("cls");
                cout << "\n\n\t\t\t\tDelete Book Record";
                cout << "\n\n One Book is Deleted Successfully...";
                count++;
            }
            else
                file_se1 << " " << book_idd << " " << book_name << "\n";
            file_se >> book_idd >> book_name;
        }
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }
    file_se.close();
    file_se1.close();
    remove("E://se_book.txt");
    rename("E://se_book1.txt", "E://se_book.txt");
};
void Book_manageMent_App::del_botany_book()
{

    system("cls");
    fstream file_botany, file_botany1;
    int count = 0;
    string book_id, book_idd, book_name;
    cout << "\n\n\t\t\t\tDelete Book Record";
    file_botany1.open("E://botany_book1.txt", ios::app | ios::out);
    file_botany.open("E://botany_book.txt", ios::in);
    if (!file_botany)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_id;
        file_botany >> book_idd >> book_name;
        while (!file_botany.eof())
        {
            if (book_id == book_idd)
            {
                system("cls");
                cout << "\n\n\t\t\t\tDelete Book Record";
                cout << "\n\n One Book is Deleted Successfully...";
                count++;
            }
            else
                file_botany1 << " " << book_idd << " " << book_name << "\n";
            file_botany >> book_idd >> book_name;
        }
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }
    file_botany.close();
    file_botany1.close();
    remove("E://botany_book.txt");
    rename("E://botany_book1.txt", "E://botany_book.txt");
};
void Book_manageMent_App::del_fdt_book()
{

    system("cls");
    fstream file_fdt, file_fdt1;
    int count = 0;
    string book_id, book_idd, book_name;
    cout << "\n\n\t\t\t\tDelete Book Record";
    file_fdt1.open("E://fdt_book1.txt", ios::app | ios::out);
    file_fdt.open("E://fdt_book.txt", ios::in);
    if (!file_fdt)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_id;
        file_fdt >> book_idd >> book_name;
        while (!file_fdt.eof())
        {
            if (book_id == book_idd)
            {
                system("cls");
                cout << "\n\n\t\t\t\tDelete Book Record";
                cout << "\n\n One Book is Deleted Successfully...";
                count++;
            }
            else
                file_fdt1 << " " << book_idd << " " << book_name << "\n";
            file_fdt >> book_idd >> book_name;
        }
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }
    file_fdt.close();
    file_fdt1.close();
    remove("E://fdt_book.txt");
    rename("E://fdt_book1.txt", "E://fdt_book.txt");
};
void Book_manageMent_App::del_zoology_book()
{

    system("cls");
    fstream file_zoology, file_zoology1;
    int count = 0;
    string book_id, book_idd, book_name;
    cout << "\n\n\t\t\t\tDelete Book Record";
    file_zoology1.open("E://zoology_book1.txt", ios::app | ios::out);
    file_zoology.open("E://zoology_book.txt", ios::in);
    if (!file_zoology)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_id;
        file_zoology >> book_idd >> book_name;
        while (!file_zoology.eof())
        {
            if (book_id == book_idd)
            {
                system("cls");
                cout << "\n\n\t\t\t\tDelete Book Record";
                cout << "\n\n One Book is Deleted Successfully...";
                count++;
            }
            else
                file_zoology1 << " " << book_idd << " " << book_name << "\n";
            file_zoology >> book_idd >> book_name;
        }
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }
    file_zoology.close();
    file_zoology1.close();
    remove("E://zoology_book.txt");
    rename("E://zoology_book1.txt", "E://zoology_book.txt");
};

//-----------------------//

void Book_manageMent_App::mod_history_book()
{

    system("cls");
    fstream file_history, file_history1;
    int count = 0;
    string book_name, book_na, book_idd, book_id;
    cout << "\n\n\t\t\t\tUpdate Book Record";
    file_history1.open("E://history_book1.txt", ios::app | ios::out);
    file_history.open("E://history_book.txt", ios::in);
    if (!file_history)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_id;
        file_history >> book_idd >> book_name;
        while (!file_history.eof())
        {
            if (book_id == book_idd)
            {
                system("cls");
                cout << "\n\n\t\t\t\tUpdate Book Record";
                cout << "\n\n New Book Name : ";
                cin >> book_na;
                file_history1 << " " << book_id << " " << book_na << "\n";
                count++;
            }
            else
                file_history1 << " " << book_idd << " " << book_name << "\n";
            file_history >> book_idd >> book_name;
        }
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }
    file_history.close();
    file_history1.close();
    remove("E://history_book.txt");
    rename("E://history_book1.txt", "E://history_book.txt");
};
void Book_manageMent_App::mod_tech_book()
{

    system("cls");
    fstream file_tech, file_tech1;
    int count = 0;
    string book_name, book_na, book_idd, book_id;
    cout << "\n\n\t\t\t\tUpdate Book Record";
    file_tech1.open("E://tech_book1.txt", ios::app | ios::out);
    file_tech.open("E://tech_book.txt", ios::in);
    if (!file_tech)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_id;
        file_tech >> book_idd >> book_name;
        while (!file_tech.eof())
        {
            if (book_id == book_idd)
            {
                system("cls");
                cout << "\n\n\t\t\t\tUpdate Book Record";
                cout << "\n\n New Book Name : ";
                cin >> book_na;
                file_tech1 << " " << book_id << " " << book_na << "\n";
                count++;
            }
            else
                file_tech1 << " " << book_idd << " " << book_name << "\n";
            file_tech >> book_idd >> book_name;
        }
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }
    file_tech.close();
    file_tech1.close();
    remove("E://tech_book.txt");
    rename("E://tech_book1.txt", "E://tech_book.txt");
};
void Book_manageMent_App::mod_cs_book()
{

    system("cls");
    fstream file_cs, file_cs1;
    int count = 0;
    string book_name, book_na, book_idd, book_id;
    cout << "\n\n\t\t\t\tUpdate Book Record";
    file_cs1.open("E://cs_book1.txt", ios::app | ios::out);
    file_cs.open("E://cs_book.txt", ios::in);
    if (!file_cs)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_id;
        file_cs >> book_idd >> book_name;
        while (!file_cs.eof())
        {
            if (book_id == book_idd)
            {
                system("cls");
                cout << "\n\n\t\t\t\tUpdate Book Record";
                cout << "\n\n New Book Name : ";
                cin >> book_na;
                file_cs1 << " " << book_id << " " << book_na << "\n";
                count++;
            }
            else
                file_cs1 << " " << book_idd << " " << book_name << "\n";
            file_cs >> book_idd >> book_name;
        }
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }
    file_cs.close();
    file_cs1.close();
    remove("E://cs_book.txt");
    rename("E://cs_book1.txt", "E://cs_book.txt");
};
void Book_manageMent_App::mod_se_book()
{

    system("cls");
    fstream file_se, file_se1;
    int count = 0;
    string book_name, book_na, book_idd, book_id;
    cout << "\n\n\t\t\t\tUpdate Book Record";
    file_se1.open("E://se_book1.txt", ios::app | ios::out);
    file_se.open("E://se_book.txt", ios::in);
    if (!file_se)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_id;
        file_se >> book_idd >> book_name;
        while (!file_se.eof())
        {
            if (book_id == book_idd)
            {
                system("cls");
                cout << "\n\n\t\t\t\tUpdate Book Record";
                cout << "\n\n New Book Name : ";
                cin >> book_na;
                file_se1 << " " << book_id << " " << book_na << "\n";
                count++;
            }
            else
                file_se1 << " " << book_idd << " " << book_name << "\n";
            file_se >> book_idd >> book_name;
        }
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }
    file_se.close();
    file_se1.close();
    remove("E://se_book.txt");
    rename("E://se_book1.txt", "E://se_book.txt");
};
void Book_manageMent_App::mod_botany_book()
{

    system("cls");
    fstream file_botany, file_botany1;
    int count = 0;
    string book_name, book_na, book_idd, book_id;
    cout << "\n\n\t\t\t\tUpdate Book Record";
    file_botany1.open("E://botany_book1.txt", ios::app | ios::out);
    file_botany.open("E://botany_book.txt", ios::in);
    if (!file_botany)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_id;
        file_botany >> book_idd >> book_name;
        while (!file_botany.eof())
        {
            if (book_id == book_idd)
            {
                system("cls");
                cout << "\n\n\t\t\t\tUpdate Book Record";
                cout << "\n\n New Book Name : ";
                cin >> book_na;
                file_botany1 << " " << book_id << " " << book_na << "\n";
                count++;
            }
            else
                file_botany1 << " " << book_idd << " " << book_name << "\n";
            file_botany >> book_idd >> book_name;
        }
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }
    file_botany.close();
    file_botany1.close();
    remove("E://botany_book.txt");
    rename("E://botany_book1.txt", "E://botany_book.txt");
};
void Book_manageMent_App::mod_fdt_book()
{

    system("cls");
    fstream file_fdt, file_fdt1;
    int count = 0;
    string book_name, book_na, book_idd, book_id;
    cout << "\n\n\t\t\t\tUpdate Book Record";
    file_fdt1.open("E://fdt_book1.txt", ios::app | ios::out);
    file_fdt.open("E://fdt_book.txt", ios::in);
    if (!file_fdt)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_id;
        file_fdt >> book_idd >> book_name;
        while (!file_fdt.eof())
        {
            if (book_id == book_idd)
            {
                system("cls");
                cout << "\n\n\t\t\t\tUpdate Book Record";
                cout << "\n\n New Book Name : ";
                cin >> book_na;
                file_fdt1 << " " << book_id << " " << book_na << "\n";
                count++;
            }
            else
                file_fdt1 << " " << book_idd << " " << book_name << "\n";
            file_fdt >> book_idd >> book_name;
        }
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }
    file_fdt.close();
    file_fdt1.close();
    remove("E://fdt_book.txt");
    rename("E://fdt_book1.txt", "E://fdt_book.txt");
};
void Book_manageMent_App::mod_zoology_book()
{

    system("cls");
    fstream file_zoology, file_zoology1;
    int count = 0;
    string book_name, book_na, book_idd, book_id;
    cout << "\n\n\t\t\t\tUpdate Book Record";
    file_zoology1.open("E://zoology_book1.txt", ios::app | ios::out);
    file_zoology.open("E://zoology_book.txt", ios::in);
    if (!file_zoology)
        cout << "\n\n File Openning Error...";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> book_id;
        file_zoology >> book_idd >> book_name;
        while (!file_zoology.eof())
        {
            if (book_id == book_idd)
            {
                system("cls");
                cout << "\n\n\t\t\t\tUpdate Book Record";
                cout << "\n\n New Book Name : ";
                cin >> book_na;
                file_zoology1 << " " << book_id << " " << book_na << "\n";
                count++;
            }
            else
                file_zoology1 << " " << book_idd << " " << book_name << "\n";
            file_zoology >> book_idd >> book_name;
        }
        if (count == 0)
            cout << "\n\n Book ID Not Found...";
    }
    file_zoology.close();
    file_zoology1.close();
    remove("E://zoology_book.txt");
    rename("E://zoology_book1.txt", "E://zoology_book.txt");
};
int main()
{

    Book_manageMent_App obj;
    obj.get();

    getch();

    return 0;
}