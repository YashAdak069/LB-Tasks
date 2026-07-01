import java.util.Scanner;

class Assign36_Q3
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.print("Enter a Number : ");
        iNo = sobj.nextInt();

        iRet = Logic.ToggleBit(iNo);

        System.out.println("The modified Number whose 7th bit is toggled : "+iRet);

        sobj.close();
    }
}

class Logic 
{
    static int ToggleBit(int iValue)
    {
        int iMask = 0x40;
        int iAns = 0;

        iAns = iValue ^ iMask;              //toggle 7th bit

        return iAns;
    }
}