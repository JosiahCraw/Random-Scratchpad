.PHONY: test

all:
	gcc main.c psr.c -o main
	@echo "main.c Results"
	@echo "#####################"
	@./main paper paper
	@printf "\n"
	@echo "#####################"

test:
	gcc test.c psr.c -o test
	@echo Testing...
	@./test
	@echo All tests passed!
	@echo Cleaning...
	rm test

clean:
	rm main test
