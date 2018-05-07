---
title: Errore del compilatore C2015 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2015
dev_langs:
- C++
helpviewer_keywords:
- C2015
ms.assetid: 8f40af0a-3a5a-4d6a-8ed7-125966e6bfed
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 91c682aadeab5a572ec2bb5c2e649a1511af77ef
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2015"></a>Errore del compilatore C2015
Troppi caratteri nella costante  
  
 Una costante carattere contiene più di due caratteri. Il limite è un carattere per le costanti carattere standard e due caratteri per le costanti carattere long.  
  
 Una sequenza di escape, ad esempio, \t viene convertita in un singolo carattere.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2015:  
  
```  
// C2015.cpp  
// compile with: /c  
  
char test1 = 'error';   // C2015  
char test2 = 'e';   // OK  
```  
  
## <a name="example"></a>Esempio  
 C2015 può verificarsi anche quando si utilizza un'estensione Microsoft, le costanti carattere vengono convertite in numeri interi.  L'esempio seguente genera l'errore C2015:  
  
```  
// C2015b.cpp  
#include <stdio.h>  
  
int main()   
{  
    int a = 'abcde';   // C2015  
  
    int b = 'a';   // 'a' = ascii 0x61  
    printf_s("%x\n", b);  
}  
```