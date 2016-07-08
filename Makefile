%.x: %.c
	cc -o $@ $<

%.play: %.x
	./$< | aplay

clean:
	rm -f *.x

