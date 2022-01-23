PROGRAM_NAME = "commandLineArguments"

compile:
	@echo 'compiling ${PROGRAM_NAME} ...'	
	@gcc -fdiagnostics-color=always -g source/${PROGRAM_NAME}.c -o dist/${PROGRAM_NAME}.exe

run:
	@echo 'running ${PROGRAM_NAME}.exe ...'
	@echo
	@./dist/${PROGRAM_NAME}.exe 'test arguemnt'

build: compile run
	