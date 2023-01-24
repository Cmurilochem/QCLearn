# main program 
                  
add_executable(qclearn.x main.cpp)

# link main program with libraries

target_link_libraries(qclearn.x PUBLIC head_foot job_class part_box harm_oscillator rigid_rotor constants)

# Generate executable in my main directory

add_custom_command(TARGET qclearn.x POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:qclearn.x> ${MyProject_SOURCE_DIR}
    COMMENT "Created ${PROJECT_BINARY_DIR}/qclearn.x"
)
