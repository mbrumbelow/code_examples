object FuntionHighOrder {
  def main(args: Array[String]): Unit = {
    println( apply( layout, 10) )
    println( apply( layout, 5.6) )
    println( apply( layout, "Zandar") )
  }

  private def apply(f: Any => String, v: Any) = f(v)

  private def layout[A](x: A) = "[" + x.toString + "]"

}