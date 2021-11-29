Name = elegantbook-cn

$(Name).pdf:$(Name).tex
	latexmk $(Name) -xelatex

PHONY:clean
clean:
	latexmk -C
	-rm *.bbl *.xml
