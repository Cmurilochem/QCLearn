# defining header path 
                
set(HEADER_FILES_PATH "${MyProject_SOURCE_DIR}/include/qclearn")                 
     
# defining libraries separetely
                 
##################################################################################
                 
add_library(head_foot OBJECT head_foot.cpp ${HEADER_FILES_PATH}/head_foot.h)

target_include_directories(head_foot PUBLIC ${HEADER_FILES_PATH})

##################################################################################

add_library(job_class OBJECT classes.cpp 
${HEADER_FILES_PATH}/classes.h 
${HEADER_FILES_PATH}/particle_box.h 
${HEADER_FILES_PATH}/harm_oscillator.h 
${HEADER_FILES_PATH}/rigid_rotor.h)

target_include_directories(job_class PUBLIC ${HEADER_FILES_PATH})

##################################################################################

add_library(constants OBJECT constants.cpp ${HEADER_FILES_PATH}/constants.h)

target_include_directories(constants PUBLIC ${HEADER_FILES_PATH})

##################################################################################

# IDEs should put the headers in a nice place

source_group(
  TREE "${PROJECT_SOURCE_DIR}/include"
  PREFIX "Header Files"
  FILES ${HEADER_FILES_PATH}/*)





