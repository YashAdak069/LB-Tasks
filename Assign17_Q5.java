class Logic
{
    void printTable(int num)
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt <=10; iCnt++)
        {
            System.out.println(num*iCnt);
        }
    }
}

class Assign17_Q5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printTable(5);
    }
}