import java.util.Random;

abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    public String notice() {
        return "First Class Compartment";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "Ladies Compartment";
    }
}

class General extends Compartment {
    public String notice() {
        return "General Compartment";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "Luggage Compartment";
    }
}

public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] coaches = new Compartment[10];
        Random rand = new Random();

        for (int i = 0; i < coaches.length; i++) {
            int type = rand.nextInt(4) + 1;

            if (type == 1) {
                coaches[i] = new FirstClass();
            } else if (type == 2) {
                coaches[i] = new Ladies();
            } else if (type == 3) {
                coaches[i] = new General();
            } else {
                coaches[i] = new Luggage();
            }
        }

        for (Compartment coach : coaches) {
            System.out.println(coach.notice());
        }
    }
}
