class Fraction:
    
    def __init__(self, nomi, deno):
        self.nomi = nomi
        self.deno = deno

    def gcd(self, nomi, deno):
        if nomi % deno == 0:
            return deno
        return self.gcd(deno, nomi % deno)

    # Add two fraction objects value and simplify it
    def __add__(self, fractionObj):
        new_nomi = (self.nomi * fractionObj.deno) + (fractionObj.nomi * self.deno)
        new_deno = (self.deno * fractionObj.deno)
        cmnDivisor = self.gcd(new_nomi, new_deno)

        print(f"Actual equation: {new_nomi} / {new_deno}")
        print(f"Greatest Common Divisor: {cmnDivisor}")
        return Fraction(new_nomi / cmnDivisor, new_deno / cmnDivisor)

    # Check two fractoin objects value equality
    def __eq__(self, fractionObj):
        leftHandSide = self.nomi * fractionObj.deno
        rightHandSide = self.deno * fractionObj.nomi
        return leftHandSide == rightHandSide
    
    def __lt__(self, fractionObj):
        leftHandSide = self.nomi * fractionObj.deno
        rightHandSide = self.deno * fractionObj.nomi
        return leftHandSide < rightHandSide

    def __gt__(self, fractionObj):
        leftHandSide = self.nomi * fractionObj.deno
        rightHandSide = self.deno * fractionObj.nomi
        return leftHandSide > rightHandSide

    def __le__(self, fractionObj):
        leftHandSide = self.nomi * fractionObj.deno
        rightHandSide = self.deno * fractionObj.nomi
        return leftHandSide <= rightHandSide

    def __ge__(self, fractionObj):
        leftHandSide = self.nomi * fractionObj.deno
        rightHandSide = self.deno * fractionObj.nomi
        return leftHandSide >= rightHandSide
    
    def get_nom(self):
        return self.nomi

    def get_den(self):
        return self.deno

    def __str__(self):
        return f"After simplifying the equation: {self.nomi} / {self.deno}"
    


if __name__ == "__main__":
    f1 = Fraction(5, 5)
    f2 = Fraction(5, 5)
    f3 = f1 + f2
    print(f3)
    print(f1 == f2)
    print(f1 < f2)
    print(f1 > f2)
    print(f1 <= f2)
    print(f1 >= f2)