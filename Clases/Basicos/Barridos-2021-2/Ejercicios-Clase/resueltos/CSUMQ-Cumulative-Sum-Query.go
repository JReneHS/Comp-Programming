package main

import (
	"fmt"
)

func main() {
	var n, q int
	fmt.Scanf("%d\n", &n)
	nums := make([]int, n+2)

	for i := range nums {
		if i == 0 {
			continue
		}
		fmt.Scanf("%d", &nums[i])
	}

	for i := range nums {
		if i == 0 {
			continue
		}
		nums[i] += nums[i-1]
	}

	fmt.Scanf("%d\n", &q)

	var s, t int

	for i := 0; i < q; i++ {
		fmt.Scanf("%d %d\n", &s, &t)
		fmt.Println(nums[t+1] - nums[s])
	}
}
