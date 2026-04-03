def even():
    for i in range(2, 21, 2):
        yield i

gen = even()

for i in gen:
    print(i)