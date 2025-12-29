//hello in Go

package main
import "fmt"

func main() {
	sayHello()
	sayBonjour()
}

func sayHello(){

	message := "Hello!"
	fmt.Println(message)
}	

func sayBonjour(){

	greeting_fr := "Bonjour"
	fmt.Println(greeting_fr)
}

// Output: Hello!
// Output: Bonjour

//end of code