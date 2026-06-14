interface Playable {
    void play();
}

class Veena implements Playable {

    @Override
    public void play() {
        System.out.println("Playing Veena...");
    }
}

class Saxophone implements Playable {

    @Override
    public void play() {
        System.out.println("Playing Saxophone...");
    }
}

public class Test {

    public static void main(String[] args) {

        Veena veena = new Veena();
        veena.play();

        Saxophone saxophone = new Saxophone();
        saxophone.play();

        Playable instrument;

        instrument = new Veena();
        instrument.play();

        instrument = new Saxophone();
        instrument.play();
    }
}
