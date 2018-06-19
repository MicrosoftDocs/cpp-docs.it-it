---
title: Errore del compilatore C2432 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2432
dev_langs:
- C++
helpviewer_keywords:
- C2432
ms.assetid: 0e3326e8-cab1-45a5-b48d-61edd33793e8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8dfbadf2c7d53cce799efbd5f10286b31bb3cd3b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33196935"
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