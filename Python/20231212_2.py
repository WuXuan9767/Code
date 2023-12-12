import functools

def log_decorator(func):
    @functools.wraps(func)
    def wrapper(*args, **kwargs):
        print(f"FunctionName: {func.__name__}")
        print(f"InputArgs: {args}")
        print(f"InputKwargs: {kwargs}")
        result = func(*args, **kwargs)
        print(f"Return: {result}")
        return result
    return wrapper

@log_decorator
def functools(x, y):
    return x + y

functools(1, 2)
