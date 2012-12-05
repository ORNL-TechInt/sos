PDF= \
	cesm-adhoc-analysis.pdf \
	cesm-model-run.pdf \
	cesm-postrun-diagnosis.pdf \
	creating-a-histogram-in-parallel.pdf \
	examining-byte-lineage-for-weapons-system.pdf \
	finding-friends-by-provenance.pdf \
	fork-thread-access.pdf \
	ingesting-data-with-source-and-version.pdf \
	mr-importing-csm-data.pdf \
	viz-data-provenance-workflow-sos.pdf \
	viz-exploratory-analysis.pdf

IMAGES=

# condensed 1 to 2 page output
A2XOPTS=--doctype=article --dblatex-opts="-P latex.output.revhistory=0" --dblatex-opts="-Pdoc.layout=\"mainmatter\""

# full book output with title page, toc, etc.
#A2XOPTS=--doctype=book

# Targets
all:: $(PDF) 

clean:
	rm -f $(PDF)

.PHONY: all clean

# Rules
%.pdf: %.txt $(IMAGES)
	a2x $(A2XOPTS) -f pdf $<

%.pdf: %.svgz
	inkscape -A $@ $<

%.pdf: %.svg
	inkscape -A $@ $<
