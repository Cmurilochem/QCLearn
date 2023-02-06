
#set(DOXYGEN_EXTRACT_ALL YES)
#set(DOXYGEN_BUILTIN_STL_SUPPORT YES)
#set(DOXYGEN_USE_MDFILE_AS_MAINPAGE "${CMAKE_SOURCE_DIR}/doc/mainpage.md")

#doxygen_add_docs(docs ALL "${CMAKE_CURRENT_SOURCE_DIR}/mainpage.md"
#                 WORKING_DIRECTORY "${PROJECT_SOURCE_DIR}/include")

# set input and output files

set(DOXYGEN_IN "${MyProject_SOURCE_DIR}/docs/Doxyfile.in")
set(DOXYGEN_OUT "${MyProject_SOURCE_DIR}/docs/Doxyfile")

# request to configure the file

configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)

add_custom_target( doc_doxygen ALL
        COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM )

##doxygen_add_docs(docs "${PROJECT_SOURCE_DIR}/src")                 
