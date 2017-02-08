struct sigaction{
    void (*sa_handler)(int);
    sigset_t sa_mask;
    int sa_falgs;
    void (*sa_sigaction)(int,siginfo_t *,void *);
}
