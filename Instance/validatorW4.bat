%~d0
cd %~dp0
set instance=n120w4
set h0=2
set w1=3
set w2=3
set w3=2
set w4=7
set outputDir="output"
java -jar validator.jar --sce %instance%/Sc-%instance%.txt --his %instance%/H0-%instance%-%h0%.txt --weeks %instance%/WD-%instance%-%w1%.txt %instance%/WD-%instance%-%w2%.txt %instance%/WD-%instance%-%w3%.txt %instance%/WD-%instance%-%w4%.txt --sols %outputDir%/sol-week0.txt %outputDir%/sol-week1.txt %outputDir%/sol-week2.txt %outputDir%/sol-week3.txt --out %outputDir%/Validator-results.txt
pause