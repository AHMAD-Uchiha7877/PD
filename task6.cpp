#include<iostream>
using namespace std;

float CalculatePriceStudio(string month, int num);
float CalculateApartment(string month, int num);

int main() {
    string month;
    int n;

    cout << "Enter name of the month:";
    cin >> month;
    cout << "Enter the number of stays:";
    cin >> n;

    float result1 = CalculatePriceStudio(month, n);
    cout << result1 << endl;
    float result2 = CalculateApartment(month, n);
    cout << result2;

    return 0;
}

float CalculatePriceStudio(string month, int num) {
    float price = 0;
    float discountPrice = 0;

    if (month == "may" || month == "october") {
        price = 50 * num;
        if (num > 7 && num < 14) {
            discountPrice = price - (0.05 * price);
        }
        else if (num > 14) {
            discountPrice = price - (0.3 * price);
        }
    }
    else if (month == "june" || month == "september") {
        price = 75.20 * num;
        if (num > 14) {
            discountPrice = price - (0.2 * price);
        }
    }
    else if (month == "july" || month == "august") {
        price = 76 * num;
    }
    else {
        return 0;
    }

    return (discountPrice != 0) ? discountPrice : price;
}

float CalculateApartment(string month, int num) {
    int price = 0;
    float discountPrice = 0;

    if (month == "may" || month == "october") {
        price = 65 * num;
        if (num > 14) {
            discountPrice = price - (0.1 * price);
        }
    }
    else if (month == "june" || month == "september") {
        price = 68.70 * num;
        if (num > 14) {
            discountPrice = price - (0.1 * price);
        }
    }
    else if (month == "july" || month == "august") {
        price = 77 * num;
        if (num > 14) {
            discountPrice = price - (0.1 * price);
        }
    }

    return (discountPrice != 0) ? discountPrice : price;
}
