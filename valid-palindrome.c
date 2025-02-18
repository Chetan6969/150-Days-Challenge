var isPalindrome = function(s) {
    let l = 0, r = s.length - 1;

    while (l < r) {
        while (l < r && !isAlphaNum(s[l])) l++; 
        while (l < r && !isAlphaNum(s[r])) r--;
        
        if (s[l].toLowerCase() !== s[r].toLowerCase()) return false;        
        l++;
        r--;
    }

    return true;
};

function isAlphaNum(c) {
    return /[a-zA-Z0-9]/.test(c);
}

console.log(isPalindrome("A man, a plan, a canal: Panama")); 
console.log(isPalindrome("race a car")); 
console.log(isPalindrome(" ")); 
