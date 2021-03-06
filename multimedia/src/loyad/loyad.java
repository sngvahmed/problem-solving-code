package loyad;

import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Queue;
import java.util.Scanner;

public class loyad {
	static ArrayList<Integer> num = new ArrayList<Integer>();
	static String kelma = "", union = "";
	static ArrayList<ArrayList<Integer>> que = new ArrayList<ArrayList<Integer>>();

	public static int getMid(ArrayList<Integer> nm) {
		int sum = 0;
		for (int i = 0; i < nm.size(); i++) {
			sum += nm.get(i);
		}
		sum = sum / (nm.size());
		return sum;
	}

	public static void BFS(int d) {
		que.add(num);
		int lvl = 0;
		while (que.size() != 0) {
			lvl++;
			int siz = que.size();
			while (true) {
				if (siz == 0)
					break;
				int mid = getMid(que.get(0));
				ArrayList<Integer> tmp1 = new ArrayList<Integer>();
				ArrayList<Integer> tmp2 = new ArrayList<Integer>();
				for (int i = 0; i < que.get(0).size(); i++) {
					if (que.get(0).get(i) > mid)
						tmp1.add(que.get(0).get(i));
					else
						tmp2.add(que.get(0).get(i));
				}
				que.remove(0);
				que.add(tmp2);
				que.add(tmp1);
				siz--;
			}
			if (lvl == d)
				break;
		}
	}

	public static boolean ch(ArrayList<Integer> sz) {
		for (int i = 0; i < que.size(); i++) {
			if (que.get(i).size() != sz.get(i))
				return false;
		}
		return true;
	}

	public static void LST() {
		ArrayList<Integer> sz = new ArrayList<Integer>();
		do {
			for (int i = 0; i < que.size(); i++) {
				sz.add(que.get(i).size());
			}
			for (int i = 0; i < que.size(); i++) {
				if (i == 0) {
					for (int e = 0; e < que.get(i).size(); e++) {
						if (Math.abs(getMid(que.get(i)) - que.get(i).get(e)) >= Math
								.abs(getMid(que.get(i + 1)) - que.get(i).get(e))) {
							int re = que.get(i).get(e);
							que.get(i).remove(e);
							que.get(i + 1).add(re);
						}
					}
				} else if (i == que.size() - 1) {
					for (int e = 0; e < que.get(i).size(); e++) {
						if (Math.abs(getMid(que.get(i)) - que.get(i).get(e)) >= Math
								.abs(getMid(que.get(i - 1)) - que.get(i).get(e))) {
							int re = que.get(i).get(e);
							que.get(i).remove(e);
							que.get(i - 1).add(re);
						}
					}
				} else {
					for (int e = 0; e < que.get(i).size(); e++) {
						if (Math.abs(getMid(que.get(i)) - que.get(i).get(e)) >= Math
								.abs(getMid(que.get(i + 1)) - que.get(i).get(e))) {
							int re = que.get(i).get(e);
							que.get(i).remove(e);
							que.get(i + 1).add(re);
						} else if (Math.abs(getMid(que.get(i))
								- que.get(i).get(e)) >= Math.abs(getMid(que
								.get(i - 1)) - que.get(i).get(e))) {
							int re = que.get(i).get(e);
							que.get(i).remove(e);
							que.get(i - 1).add(re);
						}
					}
				}
			}
		} while (ch(sz));
	}

	public static int ind(int n) {
		vec tm = new vec();
		for (int i = 0; i < que.size(); i++) {
			if (i == 0) {
				tm.x = -1000000000;
				tm.y = (getMid(que.get(i)) + getMid(que.get(i + 1))) / 2;
			} else if (i == que.size() - 1) {
				tm.x = tm.y;
				tm.y = 10000000;
			} else {
				tm.x = tm.y;
				tm.y = (getMid(que.get(i)) + getMid(que.get(i + 1))) / 2;
			}
			if (n >= tm.x && n <= tm.y)
				return i;
		}
		return 0;
	}

	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		for (int i = 0; i < 11; i++) {
			int tmp = cin.nextInt();
			num.add(tmp);
		}
		BFS(2);
		LST();
		for (int i = 0; i < num.size(); i++) {
			System.out.println(num.get(i) + " :: " + ind(num.get(i)));
		}
	}
}
/*
 * 2 20 7 6 12 8 3 4 7 14 3
 */