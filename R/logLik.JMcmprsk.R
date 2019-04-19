logLik.JMcmprsk2 <-
function (object, ...) {
    if (!inherits(object, "JMcmprsk22"))
        stop("Use only with 'JMcmprsk22' objects.\n")
    out <- object$loglike
    #attr(out, "df") <- nrow(object$Hessian)
    #attr(out, "nobs") <- object$n
    class(out) <- "logLik"
    out
}
