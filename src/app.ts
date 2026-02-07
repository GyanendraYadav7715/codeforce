import { Sorter, BubbleSort, SelectionSort } from './sorting';

const sorter = new Sorter(new BubbleSort());
console.log(sorter.sort([5, 1, 4, 2, 8]));

const sorter2 = new Sorter(new SelectionSort());
console.log(sorter2.sort([9, 3, 6, 1]));
