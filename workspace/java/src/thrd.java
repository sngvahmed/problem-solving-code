import java.util.*;
import java.io.*;

class FirstProject extends Thread {
	public void run() {
		int h = 0, m = 0, s = 0;
		while (true) {
			try {
				Thread.sleep(20);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
			s++;
			if (s == 60) {
				m++;
				s = 0;
			}
			if (m == 60) {
				h++;
				m = 0;
			}
			System.out.println(h + "::" + m + "::" + s);
		}
	}
}

// yield بوقف الthread معينه فتره من الزمن فthread تانيه تقدر تشتغل
class counter implements Runnable {
	String name = "";

	public counter(String str) {
		name = str;
	}

	public void run() {
		for (int i = 0; i < 10; i++) {
			System.out.println(name);
//			Thread.yield();
		}
	}
}

// MAX_PRIORITY
// NORM_PRIORITY
// MIN_PRIORITY
// t.setpriority(); t object from class thread

public class thrd {
	public static void stopwatch() {

	}

	public static void main(String[] args) {
		FirstProject t1 = new FirstProject();
		// t1.run();
		Thread c1 = new Thread(new counter("ay7aga"));
		Thread c2 = new Thread(new counter("ahmed"));
		c1.start();
		c2.start();
	}
}