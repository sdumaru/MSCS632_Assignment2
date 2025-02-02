public class java_memory_management {
    public static void main(String[] args) {
        // Automatic memory management
        for(int i = 0; i < 1000000; i++) {
            Object objectCreated = new Object();
        }  // Garbage collector will clean up
    }
}