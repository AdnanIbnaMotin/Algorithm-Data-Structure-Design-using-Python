const IndexOfMinValue = (array, startIndex) => {
    let minValue = array[startIndex];
    let minIndex = startIndex;

    for (let i = startIndex + 1; i < array.length; i++) {
        if (array[i] < minValue) {
            minValue = array[i];
            minIndex = i;
        }
    }
    return minIndex;
}

const swapIndex = (array, firstIndex, secondIndex) => {
    let temp = array[firstIndex];
    array[firstIndex] = array[secondIndex];
    array[secondIndex] = temp;
    return array;
}

const selectionSort = (array, initialIndex) => {
    for (let i = 0; i < array.length; i++) {
        swapIndex(array, initialIndex, IndexOfMinValue(array, i));
        initialIndex+=1;
    }
    return array;
}

let array = [ 17, 1, 9, 14, 3 ];
// console.log(IndexOfMinValue(array, 1));
// console.log(swapIndex(array, 1, 2));
console.log(selectionSort(array, 0));