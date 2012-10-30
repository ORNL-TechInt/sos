PDF=model.pdf \
	factors.pdf

IMAGES=

# condensed 1 to 2 page output
A2XOPTS=--doctype=article --dblatex-opts="-P latex.output.revhistory=0" --dblatex-opts="-Pdoc.layout=\"mainmatter\""

# full book output with title page, toc, etc.
#A2XOPTS=--doctype=book

%.pdf: %.txt $(IMAGES)
	a2x $(A2XOPTS) -f pdf $<

%.pdf: %.svgz
	inkscape -A $@ $<

%.pdf: %.svg
	inkscape -A $@ $<

all:: $(PDF) 


clean:
	rm -f $(PDF)
