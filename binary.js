let primes = [
    2, 3, 5, 7, 11, 
    13, 17, 19, 23, 
    29, 31, 37, 41, 
    43, 47, 53, 59, 
    61, 67, 71, 73, 
    79, 83, 89, 97
];
let guess = 68;

let min = 0;
let max = primes.length - 1;

while(min <= max) {
   let middle = Math.floor((min + max) / 2);

   if (primes[middle] === guess) {
       console.log(`Found the number Index: ${middle-1} and Number: ${primes[middle]}`);
       return;
   } 
   else if (primes[middle] < guess) {
       min = middle + 1;
   }
   else if (primes[middle] > guess) {
       max = middle -1;
   }
   return -1;
}
