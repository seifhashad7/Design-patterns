public class Client
{
    public static void main(String[] args)
    {
        //Click on power button to turn on the TV
        TvContext tv = new TvContext(new TvStartState());
        tv.pressButton();
        
        //Click on power button to turn off the TV
        tv.switchState(new TvStopState());
        tv.pressButton();
    }
}