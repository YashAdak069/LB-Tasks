class Logic
{
    void checkPrime(int num)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= (num/2); iCnt++)
        {
            if((num % iCnt) == 0)
            {
                break;
            }
        }

        if(iCnt < num/2)
        {
            System.out.println("The number is not prime");
        }
        else
        {
            System.out.println("The number is  prime");
        }
    }
}

class Assign18_Q1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}