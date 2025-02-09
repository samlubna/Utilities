src_files = Glob('src\\*.cpp')
Program(target = 'out\\permute', source = src_files, CPPPATH = 'inc')