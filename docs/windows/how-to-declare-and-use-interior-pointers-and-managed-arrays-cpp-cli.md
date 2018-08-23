---
title: 'Procedura: dichiarare e usare i puntatori interni e le matrici gestite (C + + / CLI) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- pointers, interior
- arrays [C++], managed
ms.assetid: e61a2c09-a7d0-4867-91ea-6b8788a01079
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 691b2606e6b479937394c2ba021934e8f98b0fe5
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42599082"
---
# <a name="how-to-declare-and-use-interior-pointers-and-managed-arrays-ccli"></a>Procedura: dichiarare e utilizzare i puntatori interni e le matrici gestite (C++/CLI)

L'esempio C + + / CLI esempio viene illustrato come dichiarare e usare un puntatore interno a una matrice.

> [!IMPORTANT]
> Questa funzionalità del linguaggio è supportata dall'opzione del compilatore `/clr`, ma non dall'opzione del compilatore `/ZW`.

## <a name="example"></a>Esempio

### <a name="code"></a>Codice

```cpp
// interior_ptr_arrays.cpp
// compile with: /clr
#define SIZE 10

int main() {
   // declare the array
   array<int>^ arr = gcnew array<int>(SIZE);

   // initialize the array
   for (int i = 0 ; i < SIZE ; i++)  
      arr[i] = i + 1;

   // create an interior pointer into the array
   interior_ptr<int> ipi = &arr[0];

   System::Console::WriteLine("1st element in arr holds: {0}", arr[0]);
   System::Console::WriteLine("ipi points to memory address whose value is: {0}", *ipi);

   ipi++;
   System::Console::WriteLine("after incrementing ipi, it points to memory address whose value is: {0}", *ipi);
}
```

```Output
1st element in arr holds: 1
ipi points to memory address whose value is: 1
after incrementing ipi, it points to memory address whose value is: 2
```

## <a name="see-also"></a>Vedere anche

[interior_ptr (C++/CLI)](../windows/interior-ptr-cpp-cli.md)