object FunctionCallByName {
  def main(args: Array[String]): Unit = {
    delayed(time())
  }

  private def time() = {
    println("Getting time in nano seconds")
    System.nanoTime
  }
  private def delayed(t: => Long ): Unit = {
    println("In delayed method")
    println("Param: " + t)
  }
}