pipeline {
	agent any
	
	triggers {
        cron('0 8 * * *') // buid everyday at 8:00h 
        }

	stages {
	    
        stage('Build') {
            steps {
                cmake arguments: '-S . -B build', installation: 'InSearchPath'
                cmakeBuild buildType: 'Release', cleanBuild: true, installation: 'InSearchPath', steps: [[withCmake: true]]
            }
        }

        stage('Test') {
            steps {
                ctest 'InSearchPath'
            }
        }
        
        stage('Deliver') {
            steps {
                echo 'Delivering'
            }
        }
	}    
}
