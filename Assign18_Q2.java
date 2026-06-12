class Logic
{
    void printEvenNumbers(int n)
    {
        int iCnt = 0;

        while(iCnt <= n)
        {
            if(iCnt % 2 == 0)
            {
                System.out.println(iCnt);
            }
            iCnt++;
        }
    }
}

class Assign18_Q2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
    }
}