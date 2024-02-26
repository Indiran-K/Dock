pipeline {
    agent {label 'agent1'}
    stages {
        stage('Build') {
            steps {
                script {
                    // Build the Docker image based on the Dockerfile
                    def customImage = docker.build('my-cpp-image', '-f Dockerfile .')
                    
                    // Run the 'g++' command inside the Docker container to compile the C++ program
                    customImage.inside {
                        sh 'g++ -o main main.cpp'
                    }
                }
            }
        }
    }
}
