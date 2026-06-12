class Logic
{
    void productOfDigits(int num)
    {
        int iDigit = 0;
        int iMul = 1;

        while(num != 0)
        {
            iDigit = num % 10;
            iMul = iMul * iDigit;
            num = num / 10;
        }

        System.out.println(iMul);
    }
}

class Assign21_Q1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.productOfDigits(234);
    }
}