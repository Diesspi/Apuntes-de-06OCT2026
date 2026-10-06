#apunte 4

precio= float(input("Ingrese el precio del producto: "))
cantidad= int(input("Ingrese la cantidad del producto: "))

subtotal = precio * cantidad
iva = subtotal * 0.16
total = subtotal + iva

print(f"Subtotal: ${subtotal:.2f}")
print(f"IVA: ${iva:.2f}")
print(f"Total: ${total:.2f}")