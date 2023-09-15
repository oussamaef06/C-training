run:
	@gcc mouhcine.c -o file.out && ./file.out
clean:
	 @rm file.out

push: commit
	@git push

commit: add
	@git commit -m "$(MSG)"

add:
	@git add .

pull: fetch
	@git pull

fetch:
	@git fetch
