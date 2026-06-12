class Logic
{
    void countEvenOddRange(int n)
    {
       int iCnt = 0;
       int eCnt = 0;
       int oCnt = 0;

       for(iCnt = 1; iCnt <= n; iCnt++)
       {
            if((iCnt % 2) == 0)
            {
                eCnt++;
            }
            else
            {
                oCnt++;
            }
       }

       System.out.println("The even Numbers are : "+eCnt);
       System.out.println("The odd Numbers are : "+oCnt);
    }
}

class Assign21_Q2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}