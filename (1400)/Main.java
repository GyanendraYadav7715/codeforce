
import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt(); // Number of workers
            int m = sc.nextInt(); // Number of tasks

            int[] taskCount = new int[n + 1];
            for (int i = 0; i < m; i++) {
                int worker = sc.nextInt();
                taskCount[worker]++;
            }

            // Binary search for the minimum time T
            long low = 1, high = 2L * m;
            long ans = high;

            while (low <= high) {
                long mid = low + (high - low) / 2;
                if (check(mid, n, taskCount)) {
                    ans = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            System.out.println(ans);
        }
    }

    private static boolean check(long time, int n, int[] taskCount) {
        long tasksLeft = 0;
        long extraCapacity = 0;

        for (int i = 1; i <= n; i++) {
            if (taskCount[i] > time) {
                // This worker can't even finish their own specialist tasks
                tasksLeft += (taskCount[i] - time);
            } else {
                // Worker has spare time to help with non-specialist tasks
                // It takes 2 hours per non-specialist task
                extraCapacity += (time - taskCount[i]) / 2;
            }
        }

        return extraCapacity >= tasksLeft;
    }
}
