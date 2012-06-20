# LaTeX -*-Makefile-*-
#
# Here's what this Makefile gives you:
#
# make dvi		- Generates the DVI file, suitable for previewing
# make ps		- Generates a postscript file suitable for printing
# make pdf		- Generates a PDF file suitable for viewing/printing
# make all		- Generates DVI, postscript, and PDF files
# make clean	- Removes some intermediate files
# make squeaky	- Removes all generated PS, DVI, and PDF files
#
#
# INSTRUCTIONS:
# -------------
#
# This first section contains macros whose values that you need to
# fill in.
#

# MAIN_TEX: In order to build your thesis/dissertation, fill in the
# MAIN_TEX macro with the name of your main .tex file -- the one that
# you invoke LaTeX on.

MAIN_TEX	= thesis.tex

# CHAP_CITE_TEX: Some departments require bibliographies for each
# chapter.  If your department only requires a single bibliography at
# the end of the work, leave this macro blank and go on to
# OTHER_SRC_FILES, below.

# If your department does require chapter bibliographies, put the
# filenames of your chapters in this macro (and do *not* list them
# again in OTHER_SRC_FILES, below).  You will also need to use the
# "chapterbib" classfile -- see the example.tex for an
# example.  You will also need to remove the \bibliographystyle{} and
# \bibliography{} commands from the top-level file
# (example.tex), and append them to the end of the files
# listed in CHAP_CITE_TEX.

CHAP_CITE_TEX	= 

#CHAP_CITE_TEX	= \
#		chapter1.tex \
#		chapter2.tex \
#		appendix.tex

# OTHER_SRC_FILES: Put in the names of all the other files that your
# thesis depends on (e.g., other .tex files, .eps figures, etc.) in
# the OTHER_SRC_FILES macro.  This is ensure that whenever one of the
# "other" files changes, "make" will rebuild your paper properly.  You
# should *not* list any files in this macro that were already listed
# in CHAP_CITE_TEX, above.

OTHER_SRC_FILES	= \
		thesis.bib \
		chapter1.tex \
		chapter2.tex \
		chapter3.tex \
		chapter4.tex \
		chapter5.tex \
		conclude.tex \
		appendix.tex

# You should not need to change these, but just in case...

LATEX		= latex
PDFLATEX	= pdflatex
DVIPS		= dvips


#########################################################################
#
# You should not need to edit below this line
#
#########################################################################

.SUFFIXES: .tex .dvi .pdf .ps

CHAP_CITE	= $(CHAP_CITE_TEX:.tex=)
MAIN_DVI	= $(MAIN_TEX:.tex=.dvi)
MAIN_PS		= $(MAIN_TEX:.tex=.ps)
MAIN_PDF	= $(MAIN_TEX:.tex=.pdf)

#
# Some common target names
# Note that the default target is "ps"
#

pdf: $(MAIN_PDF)
ps: $(MAIN_PS)
dvi: $(MAIN_DVI)

all: pdf dvi ps

#
# Make the dependencies so that things build when they need to
#

$(MAIN_PS): $(MAIN_DVI)
$(MAIN_DVI): $(MAIN_TEX) $(CITE_TEX) $(OTHER_SRC_FILES)
$(MAIN_PDF): $(MAIN_TEX) $(CITE_TEX) $(OTHER_SRC_FILES)

#
# General rules
#

.tex.dvi:
	@$(LATEX) $*
	@if ( grep 'LaTeX Warning: Label(s) may' $*.log > /dev/null ); \
		then $(LATEX) $* ; \
	else :; fi
	@-if ( grep 'undefined citations' $*.log > /dev/null ); then \
		if test "$(CHAP_CITE)" ; then \
			for file in bogus $(CHAP_CITE) ; do \
				if test "$$file" != "bogus"; then \
					echo "RUNNING BIBTEX ON FILE: $$file"; \
					bibtex $$file ; \
				fi ; \
			done ; \
		else \
			echo "RUNNING BIBTEX ON FILE: $*"; \
			bibtex $* ; \
		fi ; \
		$(LATEX) $* ; \
	fi
	@if ( grep 'Warning: Label(s) may' $*.log > /dev/null || \
		grep 'Rerun' $*.log > /dev/null || \
		grep 'Warning: Citation' $*.log > /dev/null); \
	then $(LATEX) $* ; else :; fi
	@if ( grep 'Warning: Label(s) may' $*.log > /dev/null || \
		grep 'Rerun' $*.log > /dev/null || \
		grep 'Warning: Citation' $*.log > /dev/null); \
	then $(LATEX) $* ; else :; fi
	@if ( grep 'Warning: Label(s) may' $*.log > /dev/null || \
		grep 'Rerun' $*.log > /dev/null || \
		grep 'Warning: Citation' $*.log > /dev/null); \
	then $(LATEX) $* ; else :; fi

.tex.pdf:
	@$(PDFLATEX) $*
	@if ( grep 'LaTeX Warning: Label(s) may' $*.log > /dev/null ); \
		then $(PDFLATEX) $* ; \
	else :; fi
	@-if ( grep 'undefined citations' $*.log > /dev/null ); then \
		if test "$(CHAP_CITE)" ; then \
			for file in bogus $(CHAP_CITE) ; do \
				if test "$$file" != "bogus"; then \
					echo "RUNNING BIBTEX ON FILE: $$file"; \
					bibtex $$file ; \
				fi ; \
			done ; \
		else \
			echo "RUNNING BIBTEX ON FILE: $*"; \
			bibtex $* ; \
		fi ; \
		$(PDFLATEX) $* ; \
	fi
	@if ( grep 'Warning: Label(s) may' $*.log > /dev/null || \
		grep 'Rerun' $*.log > /dev/null || \
		grep 'Warning: Citation' $*.log > /dev/null); \
	then $(PDFLATEX) $* ; else :; fi
	@if ( grep 'Warning: Label(s) may' $*.log > /dev/null || \
		grep 'Rerun' $*.log > /dev/null || \
		grep 'Warning: Citation' $*.log > /dev/null); \
	then $(PDFLATEX) $* ; else :; fi
	@if ( grep 'Warning: Label(s) may' $*.log > /dev/null || \
		grep 'Rerun' $*.log > /dev/null || \
		grep 'Warning: Citation' $*.log > /dev/null); \
	then $(PDFLATEX) $* ; else :; fi

.dvi.ps:
	$(DVIPS) -Pps -Ptype1 -o $*.ps $*

#
# Standard targets
#

clean:
	/bin/rm -f *% $(MAIN_PDF) $(MAIN_PS) $(MAIN_DVI)

squeaky:
	/bin/rm -f *.log *.aux *.dvi *.blg *.toc *.bbl *.lof *.lot *.out \
		$(MAIN_PS) $(MAIN_DVI) $(MAIN_PDF)
