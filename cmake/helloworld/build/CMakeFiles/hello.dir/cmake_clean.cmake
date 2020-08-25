FILE(REMOVE_RECURSE
  "CMakeFiles/hello.dir/hello.c.o"
  "CMakeFiles/hello.dir/src/show.c.o"
  "CMakeFiles/hello.dir/vos/vos.c.o"
  "hello.pdb"
  "hello"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang C)
  INCLUDE(CMakeFiles/hello.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
