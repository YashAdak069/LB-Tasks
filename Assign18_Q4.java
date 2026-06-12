class Logic
{
    void sumEvenOddDigits(int n)
    {
        int iDigit = 0;
        int iESum = 0;
        int iOSum = 0;

        while(n != 0)
        {
            iDigit = n % 10;
            if(iDigit % 2 == 0)
            {
                iESum = iESum + iDigit;
            }
            else
            {
                iOSum = iOSum + iDigit;
            }
            n = n / 10;
        }

        System.out.println("Sum of even Digits : "+iESum);
        
        System.out.println("Sum of odd Digits : "+iOSum);
    }
}

class Assign18_Q4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}