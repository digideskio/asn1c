
AM_CFLAGS = @ADD_CFLAGS@

check_SCRIPTS = check-assembly.sh

TESTS_ENVIRONMENT= CC="${CC}" CFLAGS="${CFLAGS}" CXXFLAGS="${CXXFLAGS}" ./check-assembly.sh

TESTS = check-*.c

EXTRA_DIST =			\
	$(check_SCRIPTS)	\
	check-*.c*		\
	data-62			\
	data-70			\
	data-119		\
	data-126

dist-hook:
	rm -rf `find $(distdir) -name .svn`

clean:
	rm -rf test-*
