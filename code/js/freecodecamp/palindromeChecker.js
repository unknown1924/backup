function palindrome(str) {
  str = str.toLowerCase();
  //str = str.replace(/\s+|_*|,*/g, "");
  str = str.replace(/\W|_/g, "");
  console.log(str);
}

str = "A man, a plan, a canal. Panama";
str1 = "_eye";
palindrome(str1);
