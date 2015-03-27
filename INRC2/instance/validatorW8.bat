%~d0
cd %~dp0
set instance=n120w8
set h0=0
set w1=9
set w2=2
set w3=3
set w4=5
set w5=8
set w6=6
set w7=3
set w8=1
set outputDir=output
java -jar validator.jar --verbose --sce %instance%/Sc-%instance%.txt --his %instance%/H0-%instance%-0.txt --weeks %instance%/WD-%instance%-%w1%.txt %instance%/WD-%instance%-%w2%.txt %instance%/WD-%instance%-%w3%.txt %instance%/WD-%instance%-%w4%.txt %instance%/WD-%instance%-%w5%.txt %instance%/WD-%instance%-%w6%.txt %instance%/WD-%instance%-%w7%.txt %instance%/WD-%instance%-%w8%.txt --sols %outputDir%/sol-week0.txt %outputDir%/sol-week1.txt %outputDir%/sol-week2.txt %outputDir%/sol-week3.txt %outputDir%/sol-week4.txt %outputDir%/sol-week5.txt %outputDir%/sol-week6.txt %outputDir%/sol-week7.txt --out %outputDir%/Validator-results.txt
pause