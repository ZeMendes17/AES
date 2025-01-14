A = load('results.txt');

N = A(:, 1);
V = A(:, 2);
Fib = A(:, 3);
T = A(:, 4);

N1 = N(V == 1);
T1 = T(V == 1);
plot(N1, T1), xlabel('N'), ylabel('t')
semilogy(N1, T1), xlabel('N'), ylabel('t')
axis([0 60 10^-6 10^4]);
grid on;