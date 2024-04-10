import dis

# Load the bytecode from the file
with open('crackme4', 'rb') as f:
    bytecode = f.read()

# Create a Bytecode object from the bytecode
bytecode_obj = dis.Bytecode(bytecode)

# Iterate over the instructions and print them
for instr in bytecode_obj:
    print(instr.opcode, instr.opname, instr.arg)

