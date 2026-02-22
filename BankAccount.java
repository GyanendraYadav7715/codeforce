class BankAccount{
    private double balance;

    private BankAccount(double  balance){
        this.balance=balance;
    }

    public void deposit(double amount){

        if(amount>0)
          balance+=amount;
          
    }
}