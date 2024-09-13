// Problem_Solving_Assigment_LWW_Finalxn.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#include <ctime>

#define R 2.00  // Roti Canai
#define C 7.90  // Cheese Naan
#define N 12.90  // Nasi Briyani
#define M 8.50  // Mamak Mee Gorengss
#define D 6.50 // Masalah Dosa
#define S 7.90 // Soto
#define T 3.00 // Teh Tarik
#define A 1.00 // Air Suam
#define L 4.50 // Leong Fun Susu
#define P 2.90 // 100 Plus
#define SST 0.06 //Sales and Service Taxss

using namespace std;

void show_logo() // to display logo
{
    cout <<
        " ____  ____     ___         ______    \n"
        "|_   ||   _|  .' _ '.     .' ____ \\   \n"
        "  | |__| |    | (_) '___  | (___ \\_|  \n"
        "  |  __  |    .`___'/ _/   _.____`.   \n"
        " _| |  | |_  | (___)  \\_  | \\____) |  \n"
        "|____||____| `._____.\\__|  \\______.'  \n";
}


void show_menu() // to display menu.(type of meal and prices)
{
    cout << "===========================================" << "\n";
    cout << "Meals                          Price " << "\n";
    cout << "===========================================" << "\n";
    cout << "1. Roti Canai                 RM     " << fixed << setprecision(2) << R << "\n";
    cout << "2. Cheese Naan                RM     " << fixed << setprecision(2) << C << "\n";
    cout << "3. Nasi Briyani               RM     " << fixed << setprecision(2) << N << "\n";
    cout << "4. Mamak Mee Goreng           RM     " << fixed << setprecision(2) << M << "\n";
    cout << "5. Masalah Dosa               RM     " << fixed << setprecision(2) << D << "\n";
    cout << "6. Soto                       RM     " << fixed << setprecision(2) << S << "\n";
    cout << "7. Teh Tarik                  RM     " << fixed << setprecision(2) << T << "\n";
    cout << "8. Air Suam                   RM     " << fixed << setprecision(2) << A << "\n";
    cout << "9. Leong Fun Susu             RM     " << fixed << setprecision(2) << L << "\n";
    cout << "10. 100 Plus                  RM     " << fixed << setprecision(2) << P << "\n" << "\n";

}

void show_order_details(int type_of_meal, int qty1, int qty2, int qty3, int qty4, int qty5, int qty6, int qty7, int qty8, int qty9, int qty10, double amt1, double amt2, double amt3, double amt4, double amt5, double amt6, double amt7, double amt8, double amt9, double amt10) // to show out order details.
{
    cout << "\n";
    cout << "           [ Order Details:]        " << "\n";
    cout << "       Please check your order:     " << "\n";
    cout << "---------------------------------------------" << "\n";


    switch (type_of_meal) // function to show out type of meal and quantity ordered.
    {
    case 1:
        cout << "Meal: Roti Canai" << "\n";
        break;
    case 2:
        cout << "Meal: Cheese Naan" << "\n";
        break;
    case 3:
        cout << "Meal: Nasi Briyani" << "\n";
        break;
    case 4:
        cout << "Meal: Mamak Mee Goreng" << "\n";
        break;
    case 5:
        cout << "Meal: Masalah Dosa" << "\n";
        break;
    case 6:
        cout << "Meal: Soto" << "\n";
        break;
    case 7:
        cout << "Meal: Teh Tarik" << "\n";
        break;
    case 8:
        cout << "Meal: Air Suam" << "\n";
        break;
    case 9:
        cout << "Meal: Leong Fun Susu" << "\n";
        break;
    case 10:
        cout << "Meal: 100 Plus" << "\n";
        break;
    default:
        cout << "Invalid Menu. Please re-select your order.\n"; // to select within num 1 to 10, if select num out of 10 or -1 it will show out invalid menu.
    }


    if (type_of_meal == 1) { //to shows the details of the meal selected. 

        amt1 = qty1 * R; //total quantity multiply the price to get the total amount.

        cout << "Quantity                :      " << qty1 << "   " << "SET" << "\n"; // display quatity.
        cout << "SST (6%)                : RM   " << fixed << setprecision(2) << amt1 * SST << "\n"; // display sst.
        cout << "Total Amount (incl. tax): RM   " << fixed << setprecision(2) << amt1 + (amt1 * SST) << "\n"; // display total amount with sst.
        cout << "---------------------------------------------" << "\n" << "\n";

    }

    else if (type_of_meal == 2) { //to shows the details of the meal selected. 

        amt2 = qty2 * C; //total quantity multiply the price to get total amount.

        cout << "Quantity                :      " << qty2 << "   " << "SET" << "\n"; // display quatity.
        cout << "SST (6%)                : RM   " << fixed << setprecision(2) << amt2 * SST << "\n"; // display sst.
        cout << "Total Amount (incl. tax): RM   " << fixed << setprecision(2) << amt2 + (amt2 * SST) << "\n"; // display total amount with sst.
        cout << "---------------------------------------------" << "\n" << "\n";

    }

    else if (type_of_meal == 3) { //to shows the details of the meal selected. 

        amt3 = qty3 * N; //total quantity multiply the price to get total amount.

        cout << "Quantity                :      " << qty3 << "   " << "SET" << "\n"; // display quatity
        cout << "SST (6%)                : RM   " << fixed << setprecision(2) << amt3 * SST << "\n"; // display sst
        cout << "Total Amount (incl. tax): RM   " << fixed << setprecision(2) << amt3 + (amt3 * SST) << "\n"; // display total amount with sst
        cout << "---------------------------------------------" << "\n" << "\n";

    }

    else if (type_of_meal == 4) { //to shows the details of the meal selected. 

        amt4 = qty4 * M; //total quantity multiply the price to get total amount.

        cout << "Quantity                :      " << qty4 << "   " << "SET" << "\n"; // display quatity.
        cout << "SST (6%)                : RM   " << fixed << setprecision(2) << amt4 * SST << "\n"; // display sst.
        cout << "Total Amount (incl. tax): RM   " << fixed << setprecision(2) << amt4 + (amt4 * SST) << "\n"; // display total amount with sst.
        cout << "---------------------------------------------" << "\n" << "\n";

    }

    else if (type_of_meal == 5) { //Shows the details of the meal selected.

        amt5 = qty5 * D; //total quantity multiply the price to get total amount

        cout << "Quantity                :      " << qty5 << "   " << "SET" << "\n"; // display quatity.
        cout << "SST (6%)                : RM   " << fixed << setprecision(2) << amt5 * SST << "\n"; // display sst.
        cout << "Total Amount (incl. tax): RM   " << fixed << setprecision(2) << amt5 + (amt5 * SST) << "\n"; // display total amount with sst.
        cout << "---------------------------------------------" << "\n" << "\n";

    }

    else if (type_of_meal == 6) { //Shows the details of the meal selected.

        amt6 = qty6 * S; //total quantity multiply the price to get total amount.

        cout << "Quantity                :      " << qty6 << "   " << "SET" << "\n"; // display quatity.
        cout << "SST (6%)                : RM   " << fixed << setprecision(2) << amt6 * SST << "\n"; // display sst.
        cout << "Total Amount (incl. tax): RM   " << fixed << setprecision(2) << amt6 + (amt6 * SST) << "\n"; // display total amount with sst.
        cout << "---------------------------------------------" << "\n" << "\n";

    }

    else if (type_of_meal == 7) { //Shows the details of the meal selected.

        amt7 = qty7 * T; //total quantity multiply the price to get total amount.

        cout << "Quantity                :      " << qty7 << "   " << "SET" << "\n"; // display quatity.
        cout << "SST (6%)                : RM   " << fixed << setprecision(2) << amt7 * SST << "\n"; // display sst.
        cout << "Total Amount (incl. tax): RM   " << fixed << setprecision(2) << amt7 + (amt7 * SST) << "\n"; // display total amount with sst.
        cout << "---------------------------------------------" << "\n" << "\n";

    }

    else if (type_of_meal == 8) { //Shows the details of the meal selected.

        amt8 = qty8 * A; //total quantity multiply the price to get total amount.

        cout << "Quantity                :      " << qty8 << "   " << "SET" << "\n"; // display quatity.
        cout << "SST (6%)                : RM   " << fixed << setprecision(2) << amt8 * SST << "\n"; // display sst.
        cout << "Total Amount (incl. tax): RM   " << fixed << setprecision(2) << amt8 + (amt8 * SST) << "\n"; // display total amount with sst.
        cout << "---------------------------------------------" << "\n" << "\n";

    }

    else if (type_of_meal == 9) { //Shows the details of the meal selected.

        amt9 = qty9 * L; //total quantity multiply the price to get total amount.

        cout << "Quantity                :      " << qty9 << "   " << "SET" << "\n"; // display quatity.
        cout << "SST (6%)                : RM   " << fixed << setprecision(2) << amt9 * SST << "\n"; // display sst.
        cout << "Total Amount (incl. tax): RM   " << fixed << setprecision(2) << amt9 + (amt9 * SST) << "\n"; // display total amount with sst.
        cout << "---------------------------------------------" << "\n" << "\n";

    }

    else if (type_of_meal == 10) { //Shows the details of the meal selected.

        amt10 = qty10 * P; //total quantity multiply the price to get total amount.

        cout << "Quantity                :      " << qty10 << "   " << "SET" << "\n"; // display quatity.
        cout << "SST (6%)                : RM   " << fixed << setprecision(2) << amt10 * SST << "\n"; // display sst.
        cout << "Total Amount (incl. tax): RM   " << fixed << setprecision(2) << amt10 + (amt10 * SST) << "\n"; // display total amount with sst.
        cout << "---------------------------------------------" << "\n" << "\n";

    }


}


void daily_sales_report(int total_roti_report, int total_cheese_report, int total_nasi_report, int total_mamak_report, int total_dosa_report, int total_soto_report, int total_teh_report, int total_air_report, int total_leong_report, int total_100plus_report) {
    // display daily sales report.

    time_t t = time(NULL);// Create a time_t object is to store the current time.
    tm tmObj; // Create a tm structure to store the date and time.
    localtime_s(&tmObj, &t); // Use the localtime_s function to get the local time safely.
    char date[11]; // Create a char array to store the formatted date.// to hold the formatted date, including the null terminator.
    strftime(date, sizeof(date), "%Y-%m-%d", &tmObj);  // Use the strftime function to format the date and printout the date to the console.


    cout << " " << "\n" << "\n";  // nextline for spacing.

    cout << date << endl; // display date.s
    cout << "\n"; 
    cout << "         [ Daily Sales Report ]" << "\n";
    cout << "------------------------------------------" << "\n";
    cout << "     Item          |  Quantity  |     RM     " << "\n";
    cout << "------------------------------------------" << "\n";
    cout << " Roti Canai        |         " << total_roti_report << "  |    " << total_roti_report * R << "\n"; // meals times quantity equal to total.
    cout << " Cheese Naan       |         " << total_cheese_report << "  |    " << total_cheese_report * C << "\n";
    cout << " Nasi Briyani      |         " << total_nasi_report << "  |    " << total_nasi_report * N << "\n";
    cout << " Mee Goreng        |         " << total_mamak_report << "  |    " << total_mamak_report * M << "\n";
    cout << " Masalah Dosa      |         " << total_dosa_report << "  |    " << total_dosa_report * D << "\n";
    cout << " Soto              |         " << total_soto_report << "  |    " << total_soto_report * S << "\n";
    cout << " Teh Tarik         |         " << total_teh_report << "  |    " << total_teh_report * T << "\n";
    cout << " Air Suam          |         " << total_air_report << "  |    " << total_air_report * A << "\n";
    cout << " Leong Fun Susu    |         " << total_leong_report << "  |    " << total_leong_report * L << "\n";
    cout << " 100 Plus          |         " << total_100plus_report << "  |    " << total_100plus_report * P << "\n";
    cout << "------------------------------------------" << "\n";
    cout << "Total Quantity  :  " << (total_roti_report + total_cheese_report + total_nasi_report + total_mamak_report + total_dosa_report + total_soto_report + total_teh_report + total_air_report + total_leong_report + total_100plus_report) << endl; // display total quantity
    cout << "Total Amount    :  RM " << (total_roti_report * R) + (total_cheese_report * C) + (total_nasi_report * N) + (total_mamak_report * M) + (total_dosa_report * D) + (total_soto_report * S) + (total_teh_report * T) + (total_air_report * A) + (total_leong_report * L) + (total_100plus_report * P) << endl; // display total amount without SST
    cout << "Total SST       :  RM " << ((total_roti_report * R) + (total_cheese_report * C) + (total_nasi_report * N) + (total_mamak_report * M) + (total_dosa_report * D) + (total_soto_report * S) + (total_teh_report * T) + (total_air_report * A) + (total_leong_report * L) + (total_100plus_report * P)) * SST << endl; //display SST only

}

int main() {

    int type_of_meal, qty1 = 0, qty2 = 0, qty3 = 0, qty4 = 0, qty5 = 0, qty6 = 0, qty7 = 0, qty8 = 0, qty9 = 0, qty10 = 0;
    int total_roti_report = 0, total_cheese_report = 0, total_nasi_report = 0, total_mamak_report = 0, total_dosa_report = 0, total_soto_report = 0, total_teh_report = 0, total_air_report = 0, total_leong_report = 0, total_100plus_report = 0;
    int total_roti = 0, total_cheese = 0, total_nasi = 0, total_mamak = 0, total_dosa = 0, total_soto = 0, total_teh = 0, total_air = 0, total_leong = 0, total_100plus = 0;
    int choice = 0, choice2 = 0;
    int customer = 0;
    int meal_type; // meal type
    double amt1 = 0.00, amt2 = 0.00, amt3 = 0.00, amt4 = 0.00, amt5 = 0.00, amt6 = 0.00, amt7 = 0.00, amt8 = 0.00, amt9 = 0.00, amt10 = 0.00; //
    double cash = 0.00; //display payment

    do { //Next customer
        int total_roti = 0, total_cheese = 0, total_nasi = 0, total_mamak = 0, total_dosa = 0, total_soto = 0, total_teh = 0, total_air = 0, total_leong = 0, total_100plus = 0; // reset to 0 
        customer++; //Number will increases if selected next customer option.

        show_logo();

        cout << "\n" << "Welcome to H&S Restaurant, would you like to order?" << "\n"; // welcome customer
        cout << "\n";
        cout << "Customer number:  " << customer << "\n"; // display customer number
        cout << "\n";


        vector<int> meal_type;
        vector<int> quantity;


        do {

            show_menu();

            cout << "Enter the type of meal (1-10): "; // display selection from digit 1 to 10.
            cin >> type_of_meal; // ask user keyin from digit 1 to 10 either one digit.

            if (type_of_meal == 1) {

                do
                {
                    cout << "Enter quantity: "; // display and ask user key quantity
                    cin >> qty1;

                    if (qty1 <= 0)
                    {
                        cout << " " << endl;
                        cout << " Invalid quantity! Enter again! " << endl; // it will go back to the quantity if the user insert invalid digit.
                    }

                } while (qty1 <= 0);

                total_roti += qty1; //the quantity will keep adding. However, it will reset to 0 after the check out. It will record the new quantity again.
                total_roti_report += qty1; //the quantity will keep adding and will not reset back to 0 if chose to next customer. All the quantities added will be displayed in the report.

                do
                {
                    cout << "Add more? (Press 1) || Check Out (Press 2): ";
                    cin >> choice; //Continue order more or go to check out.

                    if (choice <= 0 || choice > 2) //invalid input.
                    {
                        do {
                            cout << " " << endl;
                            cout << " Invalid! Please re-enter again! : ";
                            cin >> choice;

                        } while (choice <= 0 || choice > 2);
                    }

                } while (choice <= 0 || choice > 2); //loop until enters the correct input.
            }

            else if (type_of_meal == 2) {

                do
                {
                    cout << "Enter quantity: ";
                    cin >> qty2;

                    if (qty2 <= 0)
                    {
                        cout << " " << endl;
                        cout << " Invalid quantity! Enter again! " << endl; // it will go back to the quantity if the user insert invalid digit.
                    }

                } while (qty2 <= 0);

                total_cheese += qty2; //the quantity will keep adding. However, it will reset to 0 after the check out. It will record the new quantity again.
                total_cheese_report += qty2; //the quantity will keep adding and will not reset back to 0 if chose to next customer. All the quantities added will be displayed in the report.

                do
                {
                    cout << "Add more? (Press 1) || Check Out (Press 2): ";
                    cin >> choice; //Continue or go to check out.

                    if (choice <= 0 || choice > 2) //invalid input
                    {
                        do {
                            cout << " " << endl;
                            cout << " Invalid! Please re-enter again! : ";
                            cin >> choice;

                        } while (choice <= 0 || choice > 2);
                    }

                } while (choice <= 0 || choice > 2); //loop until enters the correct input
            }

            else if (type_of_meal == 3) {

                do
                {
                    cout << "Enter quantity: ";
                    cin >> qty3;

                    if (qty3 <= 0)
                    {
                        cout << " " << endl;
                        cout << " Invalid quantity! Enter again! " << endl; // it will go back to the quantity if the user insert invalid digit.
                    }

                } while (qty3 <= 0);

                total_nasi += qty3; //the quantity will keep adding. However, it will reset to 0 after the check out. It will record the new quantity again.
                total_nasi_report += qty3; //the quantity will keep adding and will not reset back to 0 if chose to next customer. All the quantities added will be displayed in the report.

                do
                {
                    cout << "Add more? (Press 1) || Check Out (Press 2): ";
                    cin >> choice; //Continue or go to check out.

                    if (choice <= 0 || choice > 2) //invalid input
                    {
                        do {
                            cout << " " << endl;
                            cout << " Invalid! Please re-enter again! : ";
                            cin >> choice;

                        } while (choice <= 0 || choice > 2);
                    }

                } while (choice <= 0 || choice > 2); //loop until enters the correct input
            }

            else if (type_of_meal == 4) {

                do
                {
                    cout << "Enter quantity: ";
                    cin >> qty4;

                    if (qty4 <= 0)
                    {
                        cout << " " << endl;
                        cout << " Invalid quantity! Enter again! " << endl; // it will go back to the quantity if the user insert invalid digit.
                    }

                } while (qty4 <= 0);

                total_mamak += qty4; //the quantity will keep adding. However, it will reset to 0 after the check out. It will record the new quantity again.
                total_mamak_report += qty4; //the quantity will keep adding and will not reset back to 0 if chose to next customer. All the quantities added will be displayed in the report.

                do
                {
                    cout << "Add more? (Press 1) || Check Out (Press 2): ";
                    cin >> choice; //Continue or go to check out.

                    if (choice <= 0 || choice > 2) //invalid input
                    {
                        do {
                            cout << " " << endl;
                            cout << " Invalid! Please re-enter again! : ";
                            cin >> choice;

                        } while (choice <= 0 || choice > 2);
                    }

                } while (choice <= 0 || choice > 2); //loop until enters the correct input
            }

            else if (type_of_meal == 5) {

                do
                {
                    cout << "Enter quantity: ";
                    cin >> qty5;

                    if (qty5 <= 0)
                    {
                        cout << " " << endl;
                        cout << " Invalid quantity! Enter again! " << endl; // it will go back to the quantity if the user insert invalid digit.
                    }

                } while (qty5 <= 0);

                total_dosa += qty5; //the quantity will keep adding. However, it will reset to 0 after the check out. It will record the new quantity again.
                total_dosa_report += qty5; //the quantity will keep adding and will not reset back to 0 if chose to next customer. All the quantities added will be displayed in the report.

                do
                {
                    cout << "Add more? (Press 1) || Check Out (Press 2): ";
                    cin >> choice; //Continue or go to check out.

                    if (choice <= 0 || choice > 2) //invalid input
                    {
                        do {
                            cout << " " << endl;
                            cout << " Invalid! Please re-enter again! : ";
                            cin >> choice;

                        } while (choice <= 0 || choice > 2);
                    }

                } while (choice <= 0 || choice > 2); //loop until enters the correct input
            }

            else if (type_of_meal == 6) {

                do
                {
                    cout << "Enter quantity: ";
                    cin >> qty6;

                    if (qty6 <= 0)
                    {
                        cout << " " << endl;
                        cout << " Invalid quantity! Enter again! " << endl; // it will go back to the quantity if the user insert invalid digit.
                    }

                } while (qty6 <= 0);

                total_soto += qty6; //the quantity will keep adding. However, it will reset to 0 after the check out. It will record the new quantity again.
                total_soto_report += qty6; //the quantity will keep adding and will not reset back to 0 if chose to next customer. All the quantities added will be displayed in the report.

                do
                {
                    cout << "Add more? (Press 1) || Check Out (Press 2): ";
                    cin >> choice; //Continue or go to check out.

                    if (choice <= 0 || choice > 2) //invalid input
                    {
                        do {
                            cout << " " << endl;
                            cout << " Invalid! Please re-enter again! : ";
                            cin >> choice;

                        } while (choice <= 0 || choice > 2);
                    }

                } while (choice <= 0 || choice > 2); //loop until enters the correct input
            }

            else if (type_of_meal == 7) {

                do
                {
                    cout << "Enter quantity: ";
                    cin >> qty7;

                    if (qty7 <= 0)
                    {
                        cout << " " << endl;
                        cout << " Invalid quantity! Enter again! " << endl; // it will go back to the quantity if the user insert invalid digit.
                    }

                } while (qty7 <= 0);

                total_teh += qty7; //the quantity will keep adding. However, it will reset to 0 after the check out. It will record the new quantity again.
                total_teh_report += qty7; //the quantity will keep adding and will not reset back to 0 if chose to next customer. All the quantities added will be displayed in the report.

                do
                {
                    cout << "Add more? (Press 1) || Check Out (Press 2): ";
                    cin >> choice; //Continue or go to check out.

                    if (choice <= 0 || choice > 2) //invalid input
                    {
                        do {
                            cout << " " << endl;
                            cout << " Invalid! Please re-enter again! : ";
                            cin >> choice;

                        } while (choice <= 0 || choice > 2);
                    }

                } while (choice <= 0 || choice > 2); //loop until enters the correct input
            }

            else if (type_of_meal == 8) {

                do
                {
                    cout << "Enter quantity: ";
                    cin >> qty8;

                    if (qty8 <= 0)
                    {
                        cout << " " << endl;
                        cout << " Invalid quantity! Enter again! " << endl; // it will go back to the quantity if the user insert invalid digit.
                    }

                } while (qty8 <= 0);

                total_air += qty8; //the quantity will keep adding. However, it will reset to 0 after the check out. It will record the new quantity again.
                total_air_report += qty8; //the quantity will keep adding and will not reset back to 0 if chose to next customer. All the quantities added will be displayed in the report.

                do
                {
                    cout << "Add more? (Press 1) || Check Out (Press 2): ";
                    cin >> choice; //Continue or go to check out.

                    if (choice <= 0 || choice > 2) //invalid input
                    {
                        do {
                            cout << " " << endl;
                            cout << " Invalid! Please re-enter again! : ";
                            cin >> choice;

                        } while (choice <= 0 || choice > 2);
                    }

                } while (choice <= 0 || choice > 2); //loop until enters the correct input
            }

            else if (type_of_meal == 9) {

                do
                {
                    cout << "Enter quantity: ";
                    cin >> qty9;

                    if (qty9 <= 0)
                    {
                        cout << " " << endl;
                        cout << " Invalid quantity! Enter again! " << endl; // it will go back to the quantity if the user insert invalid digit.
                    }

                } while (qty9 <= 0);

                total_leong += qty9; //the quantity will keep adding. However, it will reset to 0 after the check out. It will record the new quantity again.
                total_leong_report += qty9; //the quantity will keep adding and will not reset back to 0 if chose to next customer. All the quantities added will be displayed in the report.

                do
                {
                    cout << "Add more? (Press 1) || Check Out (Press 2): ";
                    cin >> choice; //Continue or go to check out.

                    if (choice <= 0 || choice > 2) //invalid input
                    {
                        do {
                            cout << " " << endl;
                            cout << " Invalid! Please re-enter again! : ";
                            cin >> choice;

                        } while (choice <= 0 || choice > 2);
                    }

                } while (choice <= 0 || choice > 2); //loop until enters the correct input

            }

            else if (type_of_meal == 10) {

                do
                {
                    cout << "Enter quantity: ";
                    cin >> qty10;

                    if (qty10 <= 0)
                    {
                        cout << " " << endl;
                        cout << " Invalid quantity! Enter again! " << endl; // it will go back to the quantity if the user insert invalid digit.
                    }

                } while (qty10 <= 0);

                total_100plus += qty10; //the quantity will keep adding. However, it will reset to 0 after the check out. It will record the new quantity again.
                total_100plus_report += qty10; //the quantity will keep adding and will not reset back to 0 if chose to next customer. All the quantities added will be displayed in the report.

                do
                {
                    cout << "Add more? (Press 1) || Check Out (Press 2): ";
                    cin >> choice; //Continue or go to check out.

                    if (choice <= 0 || choice > 2) //invalid input
                    {
                        do {
                            cout << " " << endl;
                            cout << " Invalid! Please re-enter again! : ";
                            cin >> choice;

                        } while (choice <= 0 || choice > 2);
                    }

                } while (choice <= 0 || choice > 2); //loop until enters the correct input

            }

            else {

                cout << " " << endl;
                cout << " Incorrect input! Please try again! " << endl << endl;
                cout << " Please select a number between 1 to 10: " << endl;
                cout << " " << endl;
                cout << " " << endl;
            }

        } while (choice == 1 || type_of_meal <= 0 || type_of_meal >= 11); //Continue select


        for (size_t i = 0; i < meal_type.size(); i++) {
            type_of_meal = meal_type[i];
            qty1 = quantity[i];
            qty2 = quantity[i];
            qty3 = quantity[i];
            qty4 = quantity[i];
            qty5 = quantity[i];
            qty6 = quantity[i];
            qty7 = quantity[i];
            qty8 = quantity[i];
            qty9 = quantity[i];
            qty10 = quantity[i];


            show_order_details(type_of_meal, qty1, qty2, qty3, qty4, qty5, qty6, qty7, qty8, qty9, qty10, amt1, amt2, amt3, amt4, amt5, amt6, amt7, amt8, amt9, amt10);

            do {

                cout << "\n Continue Select? (Press 1) || Proceed to CheckOut? (Press 2) \n";
                cin >> choice;

                if (choice < 1 || choice > 2)
                {
                    cout << " " << endl;
                    cout << " Invalid choice! Please enter again! : " << endl;
                    cout << " " << endl;

                }

            } while (choice < 1 || choice > 2); //loop until enters the correct input
        }



        if (choice == 2) { //Check out

            cout << " " << endl;
            cout << " " << endl;
            cout << "                         CHECK OUT                         " << endl;
            cout << "-------------------------------------------------------------" << endl;
            cout << " Total quantity(Roti Canai)         :      |" << total_roti << "|      RM " << fixed << setprecision(2) << total_roti * R << endl;
            cout << " Total quantity(Cheese Naan)        :      |" << total_cheese << "|      RM " << fixed << setprecision(2) << total_cheese * C << endl;
            cout << " Total quantity(Nasi Briyani)       :      |" << total_nasi << "|      RM " << fixed << setprecision(2) << total_nasi * N << endl;
            cout << " Total quantity(Mamak Mee Gorengss) :      |" << total_mamak << "|      RM " << fixed << setprecision(2) << total_mamak * M << endl;
            cout << " Total quantity(Masalah Dosa)       :      |" << total_dosa << "|      RM " << fixed << setprecision(2) << total_dosa * D << endl;
            cout << " Total quantity(Soto)               :      |" << total_soto << "|      RM " << fixed << setprecision(2) << total_soto * S << endl;
            cout << " Total quantity(Teh Tarik)          :      |" << total_teh << "|      RM " << fixed << setprecision(2) << total_teh * T << endl;
            cout << " Total quantity(Air Suam)           :      |" << total_air << "|      RM " << fixed << setprecision(2) << total_air * A << endl;
            cout << " Total quantity(Leong Fun Susu)     :      |" << total_leong << "|      RM " << fixed << setprecision(2) << total_leong * L << endl;
            cout << " Total quantity(100 Plus)           :      |" << total_100plus << "|      RM " << fixed << setprecision(2) << total_100plus * P << endl;

            cout << "-------------------------------------------------------------" << endl;
            cout << " Subtotal                      = RM " << (total_roti * R) + (total_cheese * C) + (total_nasi * N) + (total_mamak * M) + (total_dosa * D) + (total_soto * S) + (total_teh * T) + (total_air * A) + (total_leong * L) + (total_100plus * P) << endl;
            cout << " " << endl;
            cout << " Total Service/Sales tax 6%    = RM " << ((total_roti * R) + (total_cheese * C) + (total_nasi * N) + (total_mamak * M) + (total_dosa * D) + (total_soto * S) + (total_teh * T) + (total_air * A) + (total_leong * L) + (total_100plus * P)) * SST << endl;
            cout << "-------------------------------------------------------------" << endl;
            cout << " Total : RM " << (total_roti * R) + (total_cheese * C) + (total_nasi * N) + (total_mamak * M) + (total_dosa * D) + (total_soto * S) + (total_teh * T) + (total_air * A) + (total_leong * L) + (total_100plus * P) + ((total_roti * R) + (total_cheese * C) + (total_nasi * N) + (total_mamak * M) + (total_dosa * D) + (total_soto * S) + (total_teh * T) + (total_air * A) + (total_leong * L) + (total_100plus * P)) * SST << endl;
            cout << "-------------------------------------------------------------" << endl;
            cout << " Paid  : RM ";
            cin >> cash;
            cout << "-------------------------------------------------------------" << endl;
            cout << " " << endl;



            if (cash < ((total_roti * R) + (total_cheese * C) + (total_nasi * N) + (total_mamak * M) + (total_dosa * D) + (total_soto * S) + (total_teh * T) + (total_air * A) + (total_leong * L) + (total_100plus * P)) + (((total_roti * R) + (total_cheese * C) + (total_nasi * N) + (total_mamak * M) + (total_dosa * D) + (total_soto * S) + (total_teh * T) + (total_air * A) + (total_leong * L) + (total_100plus * P)) * SST))
            {
                do // if the cash is not more than the total, it will cause a loop until the customer insert a suitable value.
                {


                    if (cash < ((total_roti * R) + (total_cheese * C) + (total_nasi * N) + (total_mamak * M) + (total_dosa * D) + (total_soto * S) + (total_teh * T) + (total_air * A) + (total_leong * L) + (total_100plus * P)) + (((total_roti * R) + (total_cheese * C) + (total_nasi * N) + (total_mamak * M) + (total_dosa * D) + (total_soto * S) + (total_teh * T) + (total_air * A) + (total_leong * L) + (total_100plus * P)) * SST))
                    {
                        cout << " " << endl;
                        cout << " Cash is not enough!" << endl << " Please pay according to the balance " << endl << endl;
                        cout << " Paid = RM ";
                        cin >> cash;

                        if (cash > ((total_roti * R) + (total_cheese * C) + (total_nasi * N) + (total_mamak * M) + (total_dosa * D) + (total_soto * S) + (total_teh * T) + (total_air * A) + (total_leong * L) + (total_100plus * P)) + (((total_roti * R) + (total_cheese * C) + (total_nasi * N) + (total_mamak * M) + (total_dosa * D) + (total_soto * S) + (total_teh * T) + (total_air * A) + (total_leong * L) + (total_100plus * P)) * SST))
                        {
                            cout << " " << endl;
                            cout << " Changes : RM " << cash - (((total_roti * R) + (total_cheese * C) + (total_nasi * N) + (total_mamak * M) + (total_dosa * D) + (total_soto * S) + (total_teh * T) + (total_air * A) + (total_leong * L) + (total_100plus * P)) + (((total_roti * R) + (total_cheese * C) + (total_nasi * N) + (total_mamak * M) + (total_dosa * D) + (total_soto * S) + (total_teh * T) + (total_air * A) + (total_leong * L) + (total_100plus * P)) * SST)) << endl;
                            cout << " " << endl << " ________________________________" << endl;
                            cout << " Thank You and Please Come Again. " << endl;
                            cout << "\n Please rate a 5 star to get a free pudding. \n";
                            cout << " " << endl;

                            do
                            {
                                cout << " Next customer? (Press 1) , Sales Report (Press 2): ";
                                cin >> choice2;

                                if (choice2 < 1 || choice2 > 2)
                                {
                                    cout << " " << endl;
                                    cout << " Invalid! Please re-enter again! " << endl;

                                }

                            } while (choice2 < 1 || choice2 > 2); //loop until enters the correct input

                        }
                    }



                } while (cash < ((total_roti * R) + (total_cheese * C) + (total_nasi * N) + (total_mamak * M) + (total_dosa * D) + (total_soto * S) + (total_teh * T) + (total_air * A) + (total_leong * L) + (total_100plus * P)) + (((total_roti * R) + (total_cheese * C) + (total_nasi * N) + (total_mamak * M) + (total_dosa * D) + (total_soto * S) + (total_teh * T) + (total_air * A) + (total_leong * L) + (total_100plus * P)) * SST));

            }

            else
            {

                cout << " Changes : RM " << cash - (((total_roti * R) + (total_cheese * C) + (total_nasi * N) + (total_mamak * M) + (total_dosa * D) + (total_soto * S) + (total_teh * T) + (total_air * A) + (total_leong * L) + (total_100plus * P)) + (((total_roti * R) + (total_cheese * C) + (total_nasi * N) + (total_mamak * M) + (total_dosa * D) + (total_soto * S) + (total_teh * T) + (total_air * A) + (total_leong * L) + (total_100plus * P)) * SST)) << endl;
                cout << " " << endl;
                cout << " Thank You and Please Come Again. " << endl;
                cout << "\n Please rate a 5 star to get a free pudding. \n";
                cout << " " << endl;

                do
                {
                    cout << " Next customer? (Press 1) , Sales Report (Press 2): ";
                    cin >> choice2;

                    if (choice2 < 1 || choice2 > 2)
                    {
                        cout << " " << endl;
                        cout << " Invalid! Please re-enter again! " << endl;

                    }

                } while (choice2 < 1 || choice2 > 2); //loop until enters the correct input

            }


        }


        if (choice2 == 2) { // Sales report

            daily_sales_report(total_roti_report, total_cheese_report, total_nasi_report, total_mamak_report, total_dosa_report, total_soto_report, total_teh_report, total_air_report, total_leong_report, total_100plus_report);

            cout << "Total Customers :  " << customer << endl;
            cout << "-----------------------------------------" << "\n";

            cout << "\n Thank You and Please Come Again. \n";

        }

    } while (choice2 == 1); //Next Customer

    return 0;

}


