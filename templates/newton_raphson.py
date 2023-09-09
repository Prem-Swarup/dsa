def newton_raphson(f, f_prime, x0, epsilon=1e-10, max_iterations=1000):
    """
    Newton's method for finding the root of a function.
    
    Args:
        f (function): The function for which to find the root.
        f_prime (function): The derivative of the function.
        x0 (float): Initial guess for the root.
        epsilon (float, optional): Tolerance for convergence. Defaults to 1e-10.
        max_iterations (int, optional): Maximum number of iterations. Defaults to 1000.
    
    Returns:
        float: Approximation of the root.
    """
    x = x0
    for _ in range(max_iterations):
        x_next = x - f(x) / f_prime(x)
        if abs(x_next - x) < epsilon:
            return x_next
        x = x_next
    raise Exception(f"Newton's method did not converge (max iterations reached).")

# Example usage:

# Define the function and its derivative
def f(x):
    return x**2 - 5

def f_prime(x):
    return 2 * x

# Initial guess
x0 = 2

# Call the function
root = newton_raphson(f, f_prime, x0)
print(f"Approximate root: {root}")
