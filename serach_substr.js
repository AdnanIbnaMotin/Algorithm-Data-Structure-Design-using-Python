const searchSubStr = (originalString, subString) => {
    let l = 0;
    let match = 0;
    for (let i=0; i <= originalString.length-1; i++) {
        for (let j=0; j <= subString.length-1 && (i+j) <= originalString.length-1; j++) {
            if (originalString[i+j] !== subString[j]) {
                break;
            }
            if (j === subString.length-1) {
                match++;
            }
        }
    }
    console.log(match);
}

searchSubStr ("lolie lolel", "lol");