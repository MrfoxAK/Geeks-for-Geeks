def binaryNextNumber(self, s):
        num = int(s, 2)
        num += 1
        return bin(num)[2:]



# s = "10"

# n = int(s)

# def binaryToDecimal(binary):
 
#     decimal, i = 0, 0
#     while(binary != 0):
#         dec = binary % 10
#         decimal = decimal + dec * pow(2, i)
#         binary = binary//10
#         i += 1
#     return decimal


# def decimal_to_binary(decimal_num):
#     binary_str = format(int(decimal_num), 'b')
#     return binary_str

# bn = binaryToDecimal(n)

# bn = bn+1
# print(bn)

# s_now = decimal_to_binary(bn)

# s_now = str(s_now)

# print(type(s_now))