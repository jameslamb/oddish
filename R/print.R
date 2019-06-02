
#' @name absorb
#' @title Absorb stuff
#' @description run absorb, could be fun
#' @export
absorb <- function(msg){
    out <- .Call(
        "_attack_R"
        , msg = msg
        , PACKAGE = "oddish"
    )
}
