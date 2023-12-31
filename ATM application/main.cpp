#include <iostream>

class ATM_METHODS
{
    // ACCOUNT VARIABLES
private:
    long balance = 0;

    int get_balance()
    {
        return balance;
    }

    // ACCOUNT METHODS
public:
    void print_balance()
    {
        std::cout << "Your available balance is K" << get_balance() << std::endl
                  << std::endl;
    }

    int withdraw_cash()
    {
        int withdraw_amount = 0;
        std::cout << "Enter withdraw amount: \n";
        std::cin >> withdraw_amount;

        if (withdraw_amount > balance)
        {
            int application_option;
            std::cout << "Invalid transaction. You have insufficient funds. \n \n Enter 1 if you want to try again with a lower amount. \n Enter 2 to check balance. \n Enter 3 to quit the process. \n \n";
            std::cin >> application_option;

            switch (application_option)
            {
            case 1:
                withdraw_cash();
                break;
            case 2:
                print_balance();
                break;
            case 3:
                return 100;
            }
        }
        else
        {
            balance -= withdraw_amount;
            std::cout << "You have successfully withdrawn K" << withdraw_amount << std::endl;
            std::cout << "Your available balance is now K" << get_balance() << std::endl
                      << std::endl;
            return 200;
        }
    }

    int deposit_cash()
    {
        int deposit_amount;
        std::cout << "Enter deposit amount: \n";
        std::cin >> deposit_amount;

        if (deposit_amount < 0)
        {
            std::cout << "Unaccepted amount. \n \n";
            return 300;
        }

        balance += deposit_amount;
        std::cout << "Successfully deposited K" << deposit_amount << ". Your available balance is now K" << get_balance() << std::endl
                  << std::endl;
        return 400;
    }
};

int main(void)
{
    int options;
    ATM_METHODS ATM_ACCESS;

    do
    {
        std::cout << "----  MENU OPTIONS  ---- \n";
        std::cout << " 1. Check account balance. \n 2. Withdraw cash \n 3. Deposit cash \n 4. Quit \n \n";
        std::cout << "Option: ";
        std::cin >> options;

        switch (options)
        {
        case 1:
            ATM_ACCESS.print_balance();
            options = 5;
            break;
        case 2:
            ATM_ACCESS.withdraw_cash();
            options = 5;
            break;
        case 3:
            ATM_ACCESS.deposit_cash();
            options = 5;
            break;
        case 4:
            return 500;
        }
    } while (options > 4 || options < 1);
}