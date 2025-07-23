import java.util.*;

public class EventStreaam
{
    Random rand = new Random();

    private int port = rand.nextInt(900) + 100;
    private static EventStreaam instance;

    public static EventStreaam getInstance()
    {
        if(instance == null)
        {
            instance = new EventStreaam();
        }

        return instance;
    }

    //Impelement here.   
    private EventStreaam()
    {
        System.out.println("Constructor Called!!");
    }

    public void connect()
    {
        System.out.println("Connected port: " + port);
    }

    public void disconnect()
    {
        System.out.println("Disconnected port: " + port);
    }
}