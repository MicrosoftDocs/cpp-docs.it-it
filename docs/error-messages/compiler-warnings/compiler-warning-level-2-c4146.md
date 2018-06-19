---
title: Compilatore (livello 2) avviso C4146 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4146
dev_langs:
- C++
helpviewer_keywords:
- C4146
ms.assetid: d6c31ab1-3120-40d5-8d80-32b5f7046e32
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 40a94d2aed0b455fda646214f4488c53045b7f6f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33296689"
---
# <a name="compiler-warning-level-2-c4146"></a>Compilatore (livello 2) avviso C4146
operatore meno unario applicato al tipo unsigned, risultato resta unsigned  
  
 Tipi unsigned possono contenere valori solo un valore non negativo, in modo unario (negazione) è in genere inutile quando applicato a un tipo senza segno. L'operando sia il risultato non siano negativi.  
  
 In pratica, ciò si verifica quando il programmatore sta tentando di esprimere il valore integer minimo, ossia -2147483648. Questo valore non può essere scritto come -2147483648 perché l'espressione viene elaborata in due fasi:  
  
1.  Il numero 2147483648 viene valutato. Poiché è maggiore del valore integer massimo di 2147483647, non è il tipo di 2147483648 [int](../../c-language/integer-types.md), ma `unsigned int`.  
  
2.  Operatore meno unario viene applicato al valore, con un risultato unsigned corrispondente a 2147483648.  
  
 Il tipo senza segno del risultato può causare comportamenti imprevisti. Se viene utilizzato il risultato in un confronto, potrebbe essere utilizzato un confronto senza segno, ad esempio, quando l'altro operando è un `int`. Questo spiega perché il programma di esempio seguente stampa una sola riga.  
  
 La seconda riga prevista `1 is greater than the most negative int`, non viene stampata perché `((unsigned int)1) > 2147483648` è false.  
  
 È possibile evitare C4146, utilizzare INT_MIN da Limits. h, il cui tipo è **tipo signed int**.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4146:  
  
```  
// C4146.cpp  
// compile with: /W2  
#include <stdio.h>  
  
void check(int i)   
{  
    if (i > -2147483648)   // C4146  
        printf_s("%d is greater than the most negative int\n", i);  
}  
  
int main()   
{  
    check(-100);  
    check(1);  
}  
```