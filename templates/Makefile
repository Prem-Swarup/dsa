qck: 
	make create 
	make open
	make fro

final: final.cpp
	g++ final.cpp

a: a.cpp
	g++ a.cpp && ./a.out

b: b.cpp
	g++ b.cpp && ./a.out

c: c.cpp
	g++ c.cpp && ./a.out

d: d.cpp
	g++ d.cpp && ./a.out

e: e.cpp
	g++ e.cpp && ./a.out

f: f.cpp
	g++ f.cpp && ./a.out

try: try.cpp
	g++ try.cpp && ./a.out

create: 
	cp /home/darklord/cp/templates/final.cpp ./final.cpp
	cat final.cpp > a.cpp 
	cat final.cpp > b.cpp
	cat final.cpp > c.cpp
	cat final.cpp > d.cpp
	cat final.cpp > e.cpp
	cat final.cpp > f.cpp
	cat final.cpp > try.cpp

open: f.cpp e.cpp d.cpp c.cpp b.cpp a.cpp
	subl f.cpp
	subl e.cpp
	subl d.cpp
	subl c.cpp
	subl b.cpp
	subl a.cpp

fro:  f.cpp e.cpp d.cpp c.cpp b.cpp a.cpp
	open f.cpp
	open e.cpp
	open d.cpp
	open c.cpp
	open b.cpp
	open a.cpp
	
short: f.cpp e.cpp d.cpp c.cpp b.cpp a.cpp
	alias f="g++ f.cpp && ./a.out"
	alias e="g++ e.cpp && ./a.out"
	alias d="g++ d.cpp && ./a.out"
	alias c="g++ c.cpp && ./a.out"
	alias b="g++ b.cpp && ./a.out"
	alias a="g++ a.cpp && ./a.out"	
	
clean:
	rm *.cpp *.out
