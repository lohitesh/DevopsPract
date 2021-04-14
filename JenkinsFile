pipeline {
	agent none
	
	stages {
		stage ('CLEANING STAGE') {
			agent { label 'slave2' }
			steps {
				echo "******************************"
				echo "REMOVING OBJECT AND EXE FILES"
				echo "******************************"
				//sh 'make clean'
			}
		}
		stage ('BUILD') {
			agent { label 'slave2' }
			steps {
				echo "*****************************"
				echo "CREATING EXE FILES"
				echo "*****************************"
				echo "SIMPLY WE CREATE EXE FILES FOR TESTING"
				//sh './build.sh'
				//sh 'pwd'
				//sh 'ls'
			}
		}
		stage ('DEPLOY') {
			agent { label 'master' }
			steps {
				echo "*****************************"
				echo "DEPLOYING FILES"
				echo "*****************************"
				echo "DEPLOYED FILES"				
			}
		}

	}
}
