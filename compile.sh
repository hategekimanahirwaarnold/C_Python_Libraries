#!/bin/bash

# gcc -Wall -Werror -Wextra -pedantic -std=c99 -shared -Wl,-soname,libPython.so -o libPython.so -fPIC -I/usr/include/python3 print_python_list_info.c
# gcc -Wall -Werror -Wextra -pedantic -std=c99 -shared -Wl,-soname,PyList -o libPyList.so -fPIC -I/Library/Frameworks/Python.framework/Versions/3.11/Headers print_python_list_info.c
# gcc -Wall -Werror -Wextra -pedantic -std=c99 -shared -o libPyList.so -fPIC -I/Library/Frameworks/Python.framework/Versions/3.11/Headers -lpython3.11 -install_name libPyList.so print_python_list_info.c

# gcc -Wall -Werror -Wextra -pedantic -std=c99 -shared -o libPyList.so -fPIC -I/Library/Frameworks/Python.framework/Versions/3.11/Headers -lpython3.11 print_python_list_info.c


gcc -Wall -Werror -Wextra -pedantic -std=c99 -shared -o libPyList.so  -fPIC -I/Library/Frameworks/Python.framework/Versions/3.11/include/python3.11 -L/Library/Frameworks/Python.framework/Versions/3.11/lib print_python_list_info.c
# gcc -Wall -Werror -Wextra -pedantic -std=c99 -shared -o libPyList.so  -fPIC -I/Library/Frameworks/Python.framework/Versions/3.11/Headers -L/Library/Frameworks/Python.framework/Versions/3.11/lib print_python_list_info.c