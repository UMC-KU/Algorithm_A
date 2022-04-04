// 단어 정렬
// 1. 길이가 짧은 것부터
// 2. 길이가 같으면 사전 순으로

package String;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;
import java.util.Comparator;


public class BJ_1181 {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(bf.readLine());
        String temp="";

        int N = Integer.parseInt(st.nextToken());
        String[] arr = new String[N];

        for (int i = 0; i < N; i++)
            arr[i] = bf.readLine();

        Arrays.sort(arr, new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                if (o1.length() == o2.length()) // 길이가 같으면, 사전 순
                    return o1.compareTo(o2);
                else // 길이가 다르면, 길이 오름차순
                    return o1.length() - o2.length();
            }
        });

        /*
            Comparator

            int compare(T o1, T o2) 일 때, return 값의 의미
            양수 : 교환 O
            0, 음수 : 교환 X

            return o1.length() - o2.length() 의 값이 양수,
            즉, o1의 길이가 o2보다 클 때, 두 문자열의 자리가 바뀐다.
        */

        for(int i=0; i<N; i++)
            if(!temp.equals(arr[i])){
                System.out.println(arr[i]);
                temp = arr[i];
            }
    }
}

/* 다른 방법

   사전 순으로 정렬 후, 문자열의 길이순으로 다시 정렬

    Arrays.sort(arr);
    Arrays.sort(arr, Comparator.comparing(String::length));
*/