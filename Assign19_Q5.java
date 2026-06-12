class Logic
{
    void calculatePower(int base, int exp)
    {
        int result = 1;
        int iCnt = 0;

        for(iCnt = 1; iCnt <= exp; iCnt++)
        {
            result = result * base;
        }
        System.out.println(result);
    }
}

class Assign19_Q5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.calculatePower(2,5);
    }
}