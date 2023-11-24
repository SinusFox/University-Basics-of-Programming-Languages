public class LexerTestApp {
    public static void main(String[] Args) {
        // Meldung bei Programmaufruf
        System.out.println("Lexer Test App.");

        Lexer this_Lexer = new Lexer("index = 2 * count + 42;");
        this_Lexer.run();
    }
}
