#include<iostream>
#include<stdlib.h>
#include<conio.h>
class Mpesa
{
    private:int choice,phoneNumber,amount,agentNumber,storeNumber,businessNumber,tillNumber;
            std::string accountNumber;
            int inputPin[4];
    public:
        void displayMainMenu()
        {
            int c;
            std::cout<<"--------------------------M-PESA--------------------------\n";
            std::cout<<" 1.Send Money\n 2.Withdraw Cash\n 3.Buy Airtime\n 4.Loans and Savings\n 5.Lipa na M-PESA\n 6.My Account\n";
            std::cout<<"\nEnter choice: ";
            std::cin>>c;
            choice=c;
        }
        int getChoice()
        {
            return choice;
        }
        void takeNumber()
        {
            int number;
            std::cout<<"--------------------------ENTER NUMBER--------------------------\n";
            std::cin>>number;
            phoneNumber=number;
        }
        int getNumber()
        {
            return phoneNumber;
        }
        void askAmount()
        {
            int A;
            std::cout<<"--------------------------ENTER AMOUNT--------------------------\n";
            std::cin>>A;
            amount=A;
        }
        int getAmount()
        {
            return amount;
        }

        void askPin()
        {
            int i=0;
            char pn[4],ch;
            std::cout<<"--------------------------Enter pin--------------------------\n";
            for(i;((ch =_getch()!=13)&&(i<=3));i++)
                {
                pn[i] = ch;
                std::cout<<"*";
                }
            inputPin[]=pn[];
        }
        int getPin()
        {
            return inputPin[];
        }
        void displayWithdrawMenu()
        {
            int c;
            std::cout<<" 1.From Agent\n 2.From ATM\n";
            std::cout<<"\n Enter choice: ";
            std::cin>>c;
            choice=c;
        }
        void askAgentNumber()
        {
            int AgNo;
            std::cout<<"--------------------------ENTER AGENT NUMBER--------------------------\n";
            std::cin>>AgNo;
            agentNumber=AgNo;
        }
        int getAgentNumber()
        {
            return agentNumber;
        }
        void askStoreNumber()
        {
            int StNo;
            std::cout<<"--------------------------ENTER STORE NUMBER--------------------------\n";
            std::cin>>StNo;
            storeNumber=StNo;
        }
        int getStoreNumber()
        {
            return storeNumber;
        }
        void confirmer()
        {
           int option;
            std::cout<<"\n 1.Cancel\n 2.Ok\n";
            std::cout<<" Enter option: ";
            std::cin>>option;
            system("cls");
            if(option==2)
                {
                    std::cout<<"Sent\nWait for M-PESA to reply";
                }
        }
        void displayBuyAirtimeMenu()
        {
            int c;
            std::cout<<" 1.My Phone\n 2.Other Phone\n";
            std::cin>>c;
            choice=c;
        }
        void displayLoansAndSavingMenu()
        {
            int c;
            std::cout<<" 1.M-Shwari\n 2.KCB M-PESA\n";
            std::cout<<"\n Enter choice: ";
            std::cin>>c;
            choice=c;
        }
        void displayLipaNaMpesaMenu()
        {
            int c;
            std::cout<<" 1.Pay Bill\n 2.Buy Goods and Services\n 3.Pochi La Biashara";
            std::cout<<"\n Enter choice: ";
            std::cin>>c;
            choice=c;
        }
        void displayMyAccountMune()
        {
            int c;
            std::cout<<" 1.Mini Statement\n 2.Check Balance\n 3.Change M-PESA PIN\n 4.Change language\n 5.Update Customer Menu\n";
            std::cout<<"\n Enter choice: ";
            std::cin>>c;
            choice=c;
        }
        void askBusinessNumber()
        {
            int BsNo;
            std::cout<<"--------------------------ENTER BUSINESS NUMBER--------------------------\n";
            std::cin>>BsNo;
            businessNumber=BsNo;
        }
        int getBusinessNumber()
        {
            return businessNumber;
        }
        void askAccountNumber()
        {
            std::string AcNo;
            std::cout<<"--------------------------ENTER ACCOUNT NUMBER--------------------------\n";
            std::cin>>AcNo;
            accountNumber=AcNo;
        }
        std::string getAccountNumber()
        {
            return accountNumber;
        }
        void askTillNumber()
        {
            int TNo;
            std::cout<<"--------------------------ENTER TILL NUMBER--------------------------\n";
            std::cin>>TNo;
            tillNumber=TNo;
        }
        int getTillNumber()
        {
            return tillNumber;
        }

};
int main()
{
    int choic;
    Mpesa m_pesa;
    m_pesa.displayMainMenu();
    choic=m_pesa.getChoice();
    system("cls");
    if(choic==1)
        {
            int option;
            m_pesa.takeNumber();
            system("cls");
            m_pesa.askAmount();
            system("cls");
            m_pesa.askPin();
            system("cls");
            std::cout<<"Send money to "<<m_pesa.getNumber()<<" Ksh."<<m_pesa.getAmount();
            m_pesa.confirmer();
        }
    else if(choic==2)
        {
            int choc;
            m_pesa.displayWithdrawMenu();
            system("cls");
            choc=m_pesa.getChoice();
            if(choc==1)
                {
                    m_pesa.askAgentNumber();
                    system("cls");
                    m_pesa.askStoreNumber();
                    system("cls");
                    m_pesa.askAmount();
                    system("cls");
                    m_pesa.askPin();
                    system("cls");
                    std::cout<<"Withdraw Cash From Agent "<<m_pesa.getAgentNumber()<<" Ksh"<<m_pesa.getAmount();
                    m_pesa.confirmer();
                }
            else if(choc==2)
                {
                    m_pesa.askAgentNumber();
                    system("cls");
                    m_pesa.askPin();
                    system("cls");
                    std::cout<<"Apply Voucher From ATM "<<m_pesa.getAgentNumber();
                    m_pesa.confirmer();
                }
            else
                {
                  std::cout<<"Enter valid Choice";
                }
        }
        else if(choic==3)
        {
            int choc;
            m_pesa.displayBuyAirtimeMenu();
            choc=m_pesa.getChoice();
            system("cls");
            if(choc==1)
                {
                    m_pesa.askAmount();
                    system("cls");
                    m_pesa.askPin();
                    system("cls");
                    std::cout<<"Buy Airtime for My phone KSH"<<m_pesa.getAmount();
                    m_pesa.confirmer();
                }
            else if(choc==2)
                {
                    m_pesa.takeNumber();
                    system("cls");
                    m_pesa.askAmount();
                    system("cls");
                    m_pesa.askPin();
                    system("cls");
                    std::cout<<"Buy Airtime for Other phone "<<m_pesa.getNumber()<<"KSH"<<m_pesa.getAmount();
                    m_pesa.confirmer();
                }
            else
                {
                  std::cout<<"Enter valid Choice";
                }
        }
        else if(choic==4)
        {
            m_pesa.displayLoansAndSavingMenu();
        }
        else if(choic==5)
        {
            int choc;
            m_pesa.displayLipaNaMpesaMenu();
            choc=m_pesa.getChoice();
            system("cls");
            if(choc==1)
                {
                    m_pesa.askBusinessNumber();
                    system("cls");
                    m_pesa.askAccountNumber();
                    system("cls");
                    m_pesa.askAmount();
                    system("cls");
                    m_pesa.askPin();
                    system("cls");
                    std::cout<<"Pay Bill "<<m_pesa.getBusinessNumber()<<" Account no."<<m_pesa.getAccountNumber()<<" KSH"<<m_pesa.getAmount();
                    m_pesa.confirmer();
                }
            else if(choc==2)
                {
                    m_pesa.askTillNumber();
                    system("cls");
                    m_pesa.askAmount();
                    system("cls");
                    m_pesa.askPin();
                    system("cls");
                    std::cout<<"Buy Goods and Services from "<<m_pesa.getTillNumber()<<" KSH"<<m_pesa.getAmount();
                    m_pesa.confirmer();
                }
            else if(choc==3)
                {
                    m_pesa.takeNumber();
                    system("cls");
                    m_pesa.askAmount();
                    system("cls");
                    m_pesa.askPin();
                    system("cls");
                    std::cout<<"Send Money to "<<m_pesa.getNumber()<<" KSH"<<m_pesa.getAmount();
                    m_pesa.confirmer();
                }
            else
                {
                    std::cout<<"Enter valid Choice";
                }
        }
        else if(choic==6)
        {
            m_pesa.displayMyAccountMune();
        }
        else
        {
            std::cout<<"Enter valid Choice";
        }

    return 0;
}
