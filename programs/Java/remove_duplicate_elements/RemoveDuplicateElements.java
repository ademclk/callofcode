package challenges.RemoveDuplicateElements;

import java.util.Arrays;

public class RemoveDuplicateElements {
    public int[] removeDuplicates(int[] arr) {
        arr = Arrays.stream(arr).sorted().toArray();
        for (int i = 0; i < arr.length - 1; i++) {
            if (arr[i] == arr[i + 1])
                arr[i] = 0;
        }
        return Arrays.stream(arr).filter(x -> x != 0).toArray();
    }

    /*
     * @Test
     * public void testMethodToRemoveDuplicates(){
     * int[] arr = {1, 1, 2, 2, 2};
     * RemoveDuplicateElements removeDuplicateElements = new
     * RemoveDuplicateElements();
     * 
     * arr = removeDuplicateElements.removeDuplicates(arr);
     * assertEquals(1, arr[0]);
     * assertEquals(2, arr[1]);
     * assertEquals(2, arr.length);
     * assertEquals("[1, 2]", Arrays.toString(arr));
     * }
     */
}
