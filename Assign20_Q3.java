class Logic
{
    void checkPerfect(int n)
    {
        int iDigit = 0;
        int iSum = 0;
        int iNum = n;
        int iCnt = 0;

        for(iCnt = 0; iCnt <= n/2; iCnt++)
        {
            if(n % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }        

        if(iSum == iNum)
        {
            System.out.println("It is a perfect number");
        }
        else
        {
            System.out.println("Not a perfect number");
        } 
    }
}

class Assign20_Q3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPerfect(6);
    }
}