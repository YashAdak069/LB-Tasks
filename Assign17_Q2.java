class Logic
{
    void checkPalindrome(int num)
    {
        int iDigit = 0;
        int iRev = 0;
        int temp = num;

        while(num != 0)
        {
            iDigit = num % 10;
            iRev = iRev * 10 + iDigit;
            num = num / 10;
        }

        if(iRev == temp)
        {
            System.out.println("The number is palindrome");
        }
        else
        {
            System.out.println("The number is not palindrome");
        }
    }
}

class Assign17_Q2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}