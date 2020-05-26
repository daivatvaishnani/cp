def solution(n):
    if n == 1:
        return 0;
    if (n % 2) == 1:
        return 1 + min(solution(n + 1), solution(n - 1));
    return 1 + solution(n / 2);