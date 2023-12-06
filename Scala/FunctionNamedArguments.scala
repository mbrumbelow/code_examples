object FunctionNamedArguments {
  def main(args: Array[String]): Unit = {
    printInt(b = 5, a = 7)
  }

  private def printInt(a: Int, b: Int): Unit = {
    println("Value of a : " + a)
    println("Value of b : " + b)
  }
}