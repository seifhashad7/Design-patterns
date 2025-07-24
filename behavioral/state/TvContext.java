public class TvContext implements State {
    private State state;

    TvContext(State initialState)
    {
        state = initialState;
    }

    @Override
    public void pressButton()
    {
        state.pressButton();
    }
    
    public void switchState(State newState)
    {
        state = newState;
    }
}
