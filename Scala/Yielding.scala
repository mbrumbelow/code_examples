object Yielding {
  def main(args: Array[String]): Unit = {
    val numList = List(1,2,3,4,5,6,7,8,9,10)

    // for loop execution with a yield
    val retVal = for { a <- numList if a != 3; if a < 8 } yield a

    // Now print returned values using another loop.
    for (a <- retVal) {
      println( "Value of a: " + a )
    }
  }
}