class Logic
{
    void findMax(int a, int b)
    {
        if(a>b)
        {
            System.out.println("A is greater");
        }
        else
        {
            System.out.println("B is greater");
        }
    }
}

class Assign17_Q3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findMax(20,15);
    }
}