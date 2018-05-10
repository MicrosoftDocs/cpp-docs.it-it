---
title: 'Procedura: dichiarare e utilizzare i puntatori interni e le matrici gestite (C + + CLI) | Documenti Microsoft'
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
ms.openlocfilehash: 457cec66aaabb01b9c10ccc66a8f9594312195b4
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="how-to-declare-and-use-interior-pointers-and-managed-arrays-ccli"></a>Procedura: dichiarare e utilizzare i puntatori interni e le matrici gestite (C++/CLI)
L'esempio C + + CLI illustra come dichiarare e utilizzare un puntatore interno a una matrice.  
  
> [!IMPORTANT]
>  Questa funzionalità del linguaggio è supportata per il **/clr** l'opzione del compilatore, ma non dal **/ZW** l'opzione del compilatore.  
  
## <a name="example"></a>Esempio  
  
### <a name="code"></a>Codice  
  
```  
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
  
### <a name="output"></a>Output  
  
```  
1st element in arr holds: 1  
ipi points to memory address whose value is: 1  
after incrementing ipi, it points to memory address whose value is: 2  
```  
  
## <a name="see-also"></a>Vedere anche  
 [interior_ptr (C++/CLI)](../windows/interior-ptr-cpp-cli.md)