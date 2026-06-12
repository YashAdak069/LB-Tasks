class Logic
{
    void sumOfDigits(int num)
    {
        int iDigit = 0;
        int iSum = 0;
        int iCnt = 0;

        while(num != 0)
        {
            iDigit = num % 10;
            iSum = iSum + iDigit;
            num = num / 10;
        }

        System.out.println("The addition is : "+iSum);
    }
}

public class Assign17_Q1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
    }
}