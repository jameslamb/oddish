
#' @name absorb
#' @title Absorb stuff
#' @description run absorb, could be fun
#' @param msg A message to print
#' @export
absorb <- function(msg){
    out <- .Call(
        "attack_R"
        , msg = msg
        , PACKAGE = "oddish"
    )
    return(invisible(out))
}
