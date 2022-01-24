PROGRAM_NAME = "basicOperators"

compile:
	@echo 'compiling ${PROGRAM_NAME} to ${PROGRAM_NAME}.exe ...'	
	@gcc -fdiagnostics-color=always -g source/${PROGRAM_NAME}.c -o dist/${PROGRAM_NAME}.exe

run:
	@echo 'running ${PROGRAM_NAME}.exe ...'
	@echo
	@./dist/${PROGRAM_NAME}.exe 'test arguemnt'
	
build: compile run
	