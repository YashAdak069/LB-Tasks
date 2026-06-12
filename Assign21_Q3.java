class Logic
{
    void displayFactors(int n)
    {
       int iCnt = 0;
       
       for(iCnt = 1; iCnt <= (n/2); iCnt++)
       {
            if(n % iCnt == 0)
            {
                System.out.println(iCnt);
            }
       }

    }
}

class Assign21_Q3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.displayFactors(12);
    }
}