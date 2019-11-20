const bubbleSort = (array) => {
    for (let i=0; i<array.length; i++) {
        for (let j=0; j<array.length; j++) {
            if (array[j] > array[j+1]) {
                let temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
    console.log(array);
}


bubbleSort([31, 44, 14, 0, 12, 20, 2]);