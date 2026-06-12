class Logic
{
    void checkLeapYear(int year)
    {
        if( year % 400 == 0)
        {
            System.out.println("It is an Leap year");
        }
        else if( year % 4 == 0)
        {
            System.out.println("It is an Leap year");
        }
        else if( year % 100 == 0)
        {
            System.out.println("It is not a Leap year");
        }
        else
        {
            System.out.println("It is not a Leap year");
        }

    }
}

class Assign19_Q1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);
    }
}