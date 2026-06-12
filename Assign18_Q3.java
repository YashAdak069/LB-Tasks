class Logic
{
    void printOddNumbers(int n)
    {
        int iCnt = 0;

        while(iCnt <= n)
        {
            if(iCnt % 2 != 0)
            {
                System.out.println(iCnt);
            }
            iCnt++;
        }
    }
}

class Assign18_Q3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printOddNumbers(20);
    }
}