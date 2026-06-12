class Logic
{
    void countFactors(int n)
    {
       int iCnt = 0;
       int iCount = 0;
       
       for(iCnt = 1; iCnt <= (n/2); iCnt++)
       {
            if(n % iCnt == 0)
            {
                iCount++;
            }
       }
       System.out.println(iCount);
    }
}

class Assign21_Q4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countFactors(20);
    }
}