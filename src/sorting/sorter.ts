import { SortStrategy } from './strategies/sort-strategy';

export class Sorter {
    constructor(private strategy: SortStrategy) { }

    sort(arr: number[]): number[] {
        return this.strategy.sort(arr);
    }
}