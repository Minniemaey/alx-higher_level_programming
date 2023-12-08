#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    list_3 = []
    for x in range(list_length):
        result = 0
        try:
            result = my_list_1[x] / my_list_2[x]
        except TypeError:
            print('wrong type')
        except ZeroDivisionError:
            print('division by 0')
        except IndexError:
            print('out of range')
        finally:
            list_3.append(result)

    return list_3
