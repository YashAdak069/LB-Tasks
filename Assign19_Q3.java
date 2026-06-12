class Logic
{
    void checkDivisible(int num)
    {
        if((num % 5 == 0) && (num % 11 == 0))
        {
            System.out.println("The number is divisible by 5 & 11");
        }
        else
        {
            System.out.println("Cannot be divisible by 5 & 11");
        }
    }
}

class Assign19_Q3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkDivisible(55);
    }
}