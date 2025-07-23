import java.lang.reflect.Constructor;

public class Server {

    public static void main(String[] args)
    {
        EventStreaam eS  = EventStreaam.getInstance();
        EventStreaam eS2 = EventStreaam.getInstance();   

        eS.connect();
        eS.disconnect();
        eS2.connect();
        eS2.disconnect();   
    }
    
}
