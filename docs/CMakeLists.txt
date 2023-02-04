set(DOXYGEN_EXTRACT_ALL YES)
set(DOXYGEN_BUILTIN_STL_SUPPORT YES)
set(DOXYGEN_USE_MDFILE_AS_MAINPAGE "${CMAKE_SOURCE_DIR}/doc/mainpage.md")

#doxygen_add_docs(docs ALL "${CMAKE_CURRENT_SOURCE_DIR}/mainpage.md"
#                 WORKING_DIRECTORY "${PROJECT_SOURCE_DIR}/include")

doxygen_add_docs(docs "${PROJECT_SOURCE_DIR}/src")                 
