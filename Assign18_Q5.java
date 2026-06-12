class Logic
{
    void checkSign(int n)
    {
        if( n > 0 )
        {
            System.out.println("It is an positive number");
        }
        else if( n < 0)
        {
            System.out.println("It is an negative number");
        }
        else if( n == 0)
        {
            System.out.println("It is an 0");
        }

    }
}

class Assign18_Q5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}