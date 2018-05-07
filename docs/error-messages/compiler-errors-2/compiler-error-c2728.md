---
title: Errore del compilatore C2728 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2728
dev_langs:
- C++
helpviewer_keywords:
- C2728
ms.assetid: 65635f91-1cd1-46e4-9ad7-14726d0546af
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e954ba38efc2e1ef7bc4b203c8b54876f7aae0ed
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2728"></a>Errore del compilatore C2728
'type': una matrice nativa non può contenere questo tipo  
  
 La sintassi di creazione della matrice è stata usata per creare una matrice di oggetti gestiti o WinRT. Non è possibile creare una matrice di oggetti gestiti o WinRT usando la sintassi di matrice nativa.  
  
 Per altre informazioni, vedere [matrice](../../windows/arrays-cpp-component-extensions.md).  
  
 L'esempio seguente genera l'errore C2728 e mostra come risolverlo:  
  
```  
// C2728.cpp  
// compile with: /clr  
  
int main() {  
   int^ arr[5];   // C2728  
  
   // try the following line instead  
   array<int>^arr2;  
}  
```  
