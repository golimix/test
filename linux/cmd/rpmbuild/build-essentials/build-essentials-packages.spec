
Name:		build-essentials-packages
Version:	42.2
Release:	2.15
BuildArch:	noarch
Summary:	Build essential metapackage for C/C++
Group:		Development/Languages/C and C++
Requires:	autoconf automake binutils bison flex glibc-devel
Requires:	gcc-c++
%ifarch sparcv9
Requires:	gcc%gcc_version-64bit glibc-devel-64bit
%endif
%ifarch x86_64 ppc64 s390x sparc64
Requires:	gcc%gcc_version-32bit glibc-devel-32bit glibc-32bit
%endif
Requires:	intltool
Requires:	libstdc++-devel libtool lksctp-tools-devel
Requires:	make patch pkgconf-pkg-config
License:	None

Source2:	%name-rpmlintrc
%if "%{?vendor_uuid}" != ""
Provides:	%name(vendor:%vendor_uuid) = %version-%release
%endif

%description
Metapackage for basic C/C++ development. Activates:
- build system tools
- lexer, parser
- C and C++ headers
- C and C++ compiler
- assembler, linker

%prep

%build

%install

%files

%changelog
* Sat Sep  4 2010 jengelh@medozas.de
- Update rpmlintrc with filter "devel-dependency"
* Thu Aug  5 2010 jengelh@medozas.de
- Add "patch" and "pkg-config" to the package list
  (removed from jeng-devel-packages)
* Thu Jul 29 2010 jengelh@medozas.de
- Pull in other-bitness compile environment on biarch
