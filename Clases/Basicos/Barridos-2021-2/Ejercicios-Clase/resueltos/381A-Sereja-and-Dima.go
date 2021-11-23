package main

import "fmt"

func main() {
	var ll int
	fmt.Scanf("%d\n", &ll)
	rw := make([]int, ll)

	for i := range rw {
		fmt.Scanf("%d", &rw[i])
	}
	l, r, sereja, dima, m, sTurn := 0, ll-1, 0, 0, 0, true

	for l <= r {
		if rw[l] > rw[r] {
			m = rw[l]
			l++
		} else {
			m = rw[r]
			r--
		}
		if sTurn {
			sereja += m
		} else {
			dima += m
		}
		sTurn = !sTurn
	}
	fmt.Println(sereja, dima)
}
