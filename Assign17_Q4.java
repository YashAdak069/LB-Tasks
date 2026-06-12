class Logic
{
    void findMin(int a, int b, int c)
    {
        if(a > b && c > b)
        {
            System.out.println("b is minimum");
        }
        else if(b > c && a > c)
        {
            System.out.println("c is minimum");
        }
        else
        {
            System.out.println("a is minimum");
        }
    }
}

class Assign17_Q4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findMin(3,7,2);
    }
}