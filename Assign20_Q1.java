class Logic
{
    void sumEvenNumbers(int n)
    {
        int iCnt = 0;
        int iSum = 0;

        while(iCnt <= n)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
            iCnt++;
        }
        System.out.println(iSum);
    }
}

class Assign20_Q1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);
    }
}