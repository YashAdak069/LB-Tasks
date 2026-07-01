import java.util.Scanner;

class Assign36_Q5
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.print("Enter a Number : ");
        iNo = sobj.nextInt();

        iRet = Logic.OnBit(iNo);

        System.out.println("The modified Number whose first 4th bits are on : "+iRet);

        sobj.close();
    }
}

class Logic 
{
    static int OnBit(int iValue)
    {
        int iMask = 0xf;
        int iAns = 0;

        iAns = iValue | iMask;              //On first 4 bits

        return iAns;
    }
}