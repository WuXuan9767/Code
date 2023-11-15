dict1 = {
    'dict2': {'key1':'value1', 'key2':'value2', 'key3':'value3', 'key4':'value4'},
    'dict3': {'key5':'value5', 'key6':'value6'}
}

def traverse_dict(d):
    for key, value in d.items():
        if isinstance(value, dict):
            print('字典', key, ':')
            traverse_dict(value)
        else:
            print('键', key, '对应的值为', value)

traverse_dict(dict1)