package Nature

import (
	"fmt"
	"time"
)

// CreateVibrant will create a vibrant atmosphere
func CreateVibrant() {
	fmt.Println("Listen to the birds chirping!")
	fmt.Println("See the vibrant colors of the trees!")
	fmt.Println("Smell the sweet aroma of flowers!")
	fmt.Println("Feel the softness of the grass!")
}

// Relax will allow you to relax & enjoy nature
func Relax() {
	fmt.Println("Take a deep breath and relax!")
	fmt.Println("Let the stress of the day melt away!")
}

// Appreciate will appreciate what nature provides us
func Appreciate() {
	fmt.Println("Appreciate the beauty of nature!")
	fmt.Println("Enjoy the peacefulness of the outdoors!")
}

// TakeAWalk will encourage you to take a walk
func TakeAWalk() {
	fmt.Println("Take a walk through nature and enjoy!")
	fmt.Println("Stop and observe the wonders of the world!")
}

// Explore will inspire you to explore the wild wonders
func Explore() {
	fmt.Println("Explore a new place in nature!")
	fmt.Println("Discover something new and exciting!")
}

// SoakInTheSun will motivate you to get some sun
func SoakInTheSun() {
	fmt.Println("Soak in the warm rays of the sun!")
	fmt.Println("Let the rays energize and recharge you!")
}

// Camping will inspire you to get away
func Camping() {
	fmt.Println("Go camping and explore the stars!")
	fmt.Println("Set up a tent and roast some marshmallows!")
}

// Nature'sCalling is the main entrypoint into this program
func Nature'sCalling() {
	fmt.Println("*********** NATURE'S CALLING ***********")
	fmt.Println("Welcome to Nature's Calling!")

	// Create a vibrant atmosphere
	CreateVibrant()
	time.Sleep(2 * time.Second)

	// Relax & enjoy nature
	Relax()
	time.Sleep(2 * time.Second)

	// Appreciate what nature provides us
	Appreciate()
	time.Sleep(2 * time.Second)

	// Take a walk
	TakeAWalk()
	time.Sleep(2 * time.Second)

	// Explore the wild wonders
	Explore()
	time.Sleep(2 * time.Second)

	// Soak in the sun
	SoakInTheSun()
	time.Sleep(2 * time.Second)

	// Get away by going camping
	Camping()
	time.Sleep(2 * time.Second)

	// Thank you!
	fmt.Println("Thank you for visiting Nature's Calling!")
}