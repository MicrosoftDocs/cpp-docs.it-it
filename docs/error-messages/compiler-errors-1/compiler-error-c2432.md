---
title: Errore del compilatore C2432 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2432
dev_langs:
- C++
helpviewer_keywords:
- C2432
ms.assetid: 0e3326e8-cab1-45a5-b48d-61edd33793e8
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: d89d894738978359fa0cedb9a9da6c4f9781c135
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2432"></a>Errore del compilatore C2432
riferimento non valido ai dati a 16 bit in 'identifier'  
  
 Un registro a 16 bit viene utilizzato come un registro base o l'indice. Il compilatore non supporta che fanno riferimento a dati a 16 bit. registri di 16 bit possono essere utilizzati come registro base o di indice durante la compilazione di codice a 32 bit.  
  
 L'esempio seguente genera l'errore C2432:  
  
```  
// C2432.cpp  
// processor: x86  
int main() {  
   _asm mov eax, DWORD PTR [bx]   // C2432  
}  
```
