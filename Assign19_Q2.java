class Logic
{
    void displayGrade(int marks)
    {
        if( marks <= 100 && marks >= 85)
        {
            System.out.println("A grade");
        }
        else if( marks < 85 && marks >= 60)
        {
            System.out.println("B grade");
        }
        else if( marks < 60 && marks >= 35)
        {
            System.out.println("C grade");
        }
        else
        {
            System.out.println("d grade");
        }

    }
}

class Assign19_Q2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
}