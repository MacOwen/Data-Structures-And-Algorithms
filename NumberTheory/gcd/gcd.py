# Time complexity: O(log(min(a,b)))
# Space complexity: O(1)
def gcd(a,b):
    while b != 0:
        temp = b
        b = a%b
        a = temp
    return a
