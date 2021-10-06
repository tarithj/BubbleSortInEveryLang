const bubbleSort = (inputArr) => {
    const len = inputArr.length;
    let checked;
    do {
        checked = false;
        for (let i = 0; i < len; i++) {
            if (inputArr[i] > inputArr[i + 1]) {
                let tmp = inputArr[i];
                inputArr[i] = inputArr[i + 1];
                inputArr[i + 1] = tmp;
                checked = true;
            }
        }
    } while (checked);
    return inputArr;
};

const arr = [21, 50, 12, 31, 61, 40, 30];

console.log(arr);
console.log(bubbleSort(arr));
