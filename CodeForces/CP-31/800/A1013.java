import java.io.*;
import java.util.*;

public class A1013 {
    static PrintWriter out;
    
    public static void main(String[] args) throws IOException {
        FastReader sc = new FastReader();
        out = new PrintWriter(System.out);

        try {
            System.setIn(new FileInputStream("input.in"));
            System.setOut(new PrintStream(new FileOutputStream("output.out")));
        } catch (Exception e) {
            System.err.println("Error: File I/O not found!");
        }

        int t = sc.nextInt();
        while (t-- > 0) {
        	solve(sc);
        }

        out.flush();
        out.close();
    }

    // Your logic goes here
    static void solve(FastReader sc) {
        int n = sc.nextInt();
        out.println(n);
    }

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreTokens()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
}
