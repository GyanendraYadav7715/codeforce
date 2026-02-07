import { SortStrategy } from './sort-strategy';

export class InsertionSort implements SortStrategy {
    sort(arr: number[]): number[] {
        const result = [...arr];

        for (let i = 1; i < result.length; i++) {
            const key = result[i];
            let j = i - 1;

            while (j >= 0 && result[j] > key) {
                result[j + 1] = result[j];
                j--;
            }

            result[j + 1] = key;
        }

        return result;
    }
}
