pipeline {
	agent any
	
	triggers {
        cron('*/1 * * * *')
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
