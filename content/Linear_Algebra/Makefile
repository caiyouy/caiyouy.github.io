Latexmk=latexmk
flag = -synctex=1 -interaction=nonstopmode -file-line-error -pdf -xelatex

all:report.pdf 

report.pdf:report.tex ./sec/*.tex *.bib
	$(Latexmk) report.tex -time $(flag)

preview:report.pdf
	evince report.pdf&

.PHONY:clean realclean
clean:
	$(Latexmk) -c -time
	-rm *.xml *.gz *.bbl *.xdv *.nav *.snm
realclean: clean
	$(Latexmk) -C -time
