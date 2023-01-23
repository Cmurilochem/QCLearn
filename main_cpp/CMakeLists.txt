# main program 
                  
add_executable(qclearn.x main.cpp)

# link main program with libraries

target_link_libraries(qclearn.x PUBLIC head_foot job_class part_box harm_oscillator rigid_rotor constants)                  
