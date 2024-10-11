class Solution:
    def is_prime(num):
        if num <= 1:
            return False
        if num <= 3:
            return True
        if num % 2 == 0 or num % 3 == 0:
            return False
        i = 5
        while i * i <= num:
            if num % i == 0 or num % (i + 2) == 0:
                return False
            i += 6
        return True

    def primes_up_to_n(n):
        primes = []
        for i in range(2, n + 1):
            if Solution.is_prime(i):
                primes.append(i)
        return primes
    def get_factors(n):
        factors = set()  # Using a set to avoid duplicates
        for i in range(1, int(math.sqrt(n)) + 1):
            if n % i == 0:
                factors.add(i)  # i is a factor
                factors.add(n // i)  # n // i is also a factor
        return sorted(factors)

    def commonFactors(self, a: int, b: int) -> int:
        primes_a=Solution.get_factors(a)
        primes_b=Solution.get_factors(b)
        cnt=0
        for i in range(min(len(primes_a),len(primes_b))):
            cnt+=(1 if primes_a[i]==primes_b[i] else 0)
        return cnt+1
        