# BubbleSortInEveryLang

This repository contains different implementaions of bubble sort in different programming languages, feel free to **create a PR** if its not already here :) 
your code must print this array `[21, 50, 12, 31, 61, 40, 30]` and print the result after bubble sorting.

# Git and Github
If this is your first time here, we suggest 
* Login / Sign-up to [Github](https://github.com/).
* Download and install [Git](https://git-scm.com/).
* Configure git
* Launch terminal or command promt.
* Run the commands.  
`git config --global user.name "Your name"`  
 `git config --global user.email "Your email address"`

# What is Bubble sort ?
Bubble Sort is the most basic sorting algorithm, and it operates by frequently swapping nearby components to arrange them in an increasing order.

Here's a dry run through of  the algorithm in sorting the array `[ 21 ,50 ,12 ,31 ,61 ,40 ,30 ]`

### First Pass:

[ **21** ,**50** ,12 ,31 ,61 ,40 ,30 ]       since,  21 < 50 No Swap  
[ 21 , **50** , **12** , 31 , 61 , 40 , 30 ] since,  50 > 12 **Swap** [ 21 ,**12**, **50** , 31 , 61 , 40 , 30 ]  
[ 21 , 12 , **50** , **31** , 61 , 40 ,30 ]  since,  50 > 31 **Swap** [ 21 , 12 , **31** , **50** , 61 , 40 , 30 ]  
[ 21 , 12 , 31 , **50** , **61** , 40 , 30 ] since,  50 < 61 No Swap  
[ 21 , 12 , 31 , 50 , **61** , **40** , 30 ] since,  60 > 40 **Swap** [ 21 , 12 , 31 , 50 , **40** , **61** , 30 ]  
[ 21 , 12 , 31 , 50 , 40 , **61** , **30** ] since,  61 > 30 **Swap** [ 21 , 12 , 31 , 50 , 40 , **30** , **61** ]  

### Second Pass:

[ **21** , **12** , 31 , 50 , 40 , 30 , 61 ]  since,  21 > 12  **Swap** [ **12** , **21** , 31 , 50 , 40 , 30 , 61 ]  
[ 12 , **21** , **31** , 50 , 40 , 30 , 61 ]  since,  21 < 31  No Swap  
[ 12 , 21 , **31** , **50** , 40 , 30 , 61 ]  since,  31 < 50  No Swap  
[ 12 , 21 , 31 , **50** , **40** , 30 , 61 ]  since,  50 > 40  **Swap** [ 12 , 21 , 31 ,**40** , **50** , 30 , 61 ]  
[ 12 , 21 , 31 ,40 , **50** , **30**, 61 ]    since,  50 > 40  **Swap** [ 12 , 21 , 31 , 40 , **30** , **50** , 61 ]  
[ 12 , 21 , 31 , 40 , 30 , **50** , **61** ]  since,  50 < 61  No Swap  

### Third Pass:

[ **12 , 21** , 31 , 40 , 30 , 50 , 61 ] since,  12 < 21 No Swap  
[ 12 , **21 , 31** , 40 , 30 , 50 , 61 ] since,  21 < 31 No Swap  
[ 12 , 21 , **31 , 40** , 30 , 50 , 61 ] since,  31 < 40 No Swap  
[ 12 , 21 , 31 , **40 , 30** , 50 , 61 ] since,  40 < 30 **Swap** [ 12 , 21 , 31 , **30, 40 ,**  50 , 61 ]  
[ 12 , 21 , 31 , 30 ,**40 , 50** , 61 ] since,  40 < 50 No Swap  
[ 12 , 21 , 31 , 30 , 40 , **50 , 61** ] since,  50 < 60 No Swap  

### Fourth Pass:

[ **12 , 21**, 31 , 30 , 40 , 50 , 61 ]   since,  12 < 21 No Swap  
[ 12 , **21 , 31** , 30 , 40 , 50 , 61 ]  since,  21 < 31 No Swap  
[ 12 , 21 , **31 , 30**, 40 , 50 , 61 ]   since,  31 > 30 **Swap** [12 , 21 , **30 , 31** ,  40 , 50 , 61 ]  
[ 12 , 21 , 30 , **31 ,  40**, 50 , 61 ]  since,  31 < 40 No Swap  
[ 12 , 21 , 30 , 31 ,  **40 , 50** , 61 ] since,  40 < 50 No Swap  
[ 12 , 21 , 30 , 31 ,  40 , **50 , 61** ] since,  50 < 61 No Swap

_**Note:** Although our array is completely sorted here, the algorithm does'nt know it yet. It needs  **one pass with no swaps** to conclude it's operation._

### Fifth Pass:

[**12 , 21** , 30 , 31 ,  40 , 50 , 61 ]    since,  12 < 21 No Swap  
[ 12 , **21 , 30** , 31 ,  40 , 50 , 61 ]   since,  21 < 30 No Swap  
[ 12 , 21 , **30 , 31** ,  40 , 50 , 61 ]   since,  30 < 31 No Swap  
[ 12 , 21 , 30 , **31 , 40** , 50 , 61 ]    since,  31 < 40 No Swap  
[ 12 , 21 , 30 , 31 , **40 , 50** , 61 ]    since,  40 < 50 No Swap  
[ 12 , 21 , 30 , 31 ,  40 , **50 , 61** ]   since,  50 < 61 No Swap 

After **5 Passes** the algorithm concludes and produces the output `[ 12 , 21 , 30 , 31 ,  40 , 50 , 61 ]`


# How to contibute?

We ♥ Contributors!

You can solve issues or code an implementation of bubble sort in an language that isn't already implemented in the repository yet.

To ensure your contibutions count,  I implore you to follow the instructions mentioned in the [CONTRIBUTING.md](https://github.com/tarithj/BubbleSortInEveryLang/blob/master/CONTRIBUTING.md)  

Happy Submissions 🙂

# Project Maintainer

<div align="center">
<table>
  <tbody><tr>
     <td align="center"><a href="https://github.com/tarithj"><img alt="https://avatars.githubusercontent.com/u/29999281?v=4" src="https://avatars.githubusercontent.com/u/29999281?v=4" width="130px;"><br><sub><b> Tarith Jayasooriya </b></sub></a><br><a href="https://github.com/tarithj/BubbleSortInEveryLang/commits?author=tarithj" title="Code">💻 </a></td> </a></td>
  </tr>
</tbody></table>
</div>


# Project Contributors
<a href="https://github.com/tarithj/BubbleSortInEveryLang/graphs/contributors">
  <img src="https://contrib.rocks/image?repo=tarithj/BubbleSortInEveryLang" />
</a>
</div>




