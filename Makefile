# this is a simple makefile that compiles the tex file

all: .latexfile .dvipsfile .pspdffile cleanhidden

batch: .batchmode .dvipsfile .pspdffile cleanhidden

cleanhidden:
	rm -f .latexfile;\
	rm -f .dvipsfile;

clean: cleanhidden
	rm -rf *.aux;\
	rm -rf *.bbl;\
	rm -rf *.blg;\
	rm -rf *.brf;\
	rm -rf *.idx;\
	rm -rf *.ilg;\
	rm -rf *.ind;\
	rm -rf *.lof;\
	rm -rf *.lot;\
	rm -rf *.log;\
	rm -rf *.nlo;\
	rm -rf *.nls;\
	rm -rf *.out;\
	rm -rf *~;\
	rm -rf *.backup;\
	rm -rf *.toc;

clobber: clean
	rm -f *.dvi;\
	rm -f *.ps;\
	rm -f *.pdf;

.batchmode: intmode = -interaction=batchmode .latexfile
.batchmode: .latexfile

# latex
.latexfile:
	latex $(intmode) thesis;\
	latex $(intmode) thesis;\
	bibtex thesis;\
	latex $(intmode) thesis;\
	latex $(intmode) thesis;\
	makeindex thesis;\
	latex $(intmode) thesis;\
	latex $(intmode) thesis;\
	makeindex thesis.nlo  -s nomencl.ist -o thesis.nls;\
	latex $(intmode) thesis;\
	latex $(intmode) thesis;
	touch .latexfile

#dvi to ps
.dvipsfile: .latexfile
	echo "Converting to ps";\
	dvips thesis;
	touch .dvipsfile

#ps to pdf
.pspdffile: .dvipsfile
	echo "Converting to pdf";\
	ps2pdf thesis.ps;\

