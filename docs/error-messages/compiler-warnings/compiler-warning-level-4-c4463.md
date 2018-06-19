---
title: Compilatore (livello 4) Avviso C4463 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4463
dev_langs:
- C++
helpviewer_keywords:
- C4463
ms.assetid: a07ae70c-db4e-472b-8b58-9137d9997323
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3c13e0a79c667ecedbf3fd065338892d3af9c2ee
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33294440"
---
# <a name="compiler-warning-level-4-c4463"></a>Compilatore (livello 4) Avviso C4463  
  
> overflow; l'assegnazione *valore* al campo di bit che può contenere solo valori compresi *low_value* a *high_value*  
  
L'oggetto assegnato *valore* è compreso nell'intervallo di valori che è possibile inserire il campo di bit. Tipi di campo di bit signed utilizzano significativo bit per il segno, pertanto, se *n* è la dimensione del campo di bit, l'intervallo per i campi di bit con segno è -2<sup>n-1</sup> 2<sup>n-1</sup>-1, mentre non firmati i campi di bit dispone di un intervallo da 0 a 2<sup>n</sup>-1.  
  
## <a name="example"></a>Esempio  
  
In questo esempio genera l'errore C4463 perché tenta di assegnare un valore pari a 3 per un campo di bit di tipo `int` con una dimensione di 2, che ha un intervallo compreso tra -2 su 1.  
  
Per risolvere questo problema, è possibile modificare il valore assegnato a un elemento nell'intervallo consentito. Se il campo di bit è progettato per contenere i valori senza segno nell'intervallo da 0 a 3, è possibile modificare il tipo di dichiarazione per `unsigned`. Se il campo deve contenere valori nell'intervallo -4 per 3, è possibile modificare le dimensioni del campo di bit a 3.  
  
```cpp  
// C4463_overflow.cpp
// compile with: cl /W4 /EHsc C4463_overflow.cpp
struct S { 
    int x : 2; // int type treats high-order bit as sign
}; 

int main() { 
    S s; 
    s.x = 3; // warning C4463: overflow; assigning 3 
    // to bit-field that can only hold values from -2 to 1 
    // To fix, change assigned value to fit in range,
    // increase size of bitfield, and/or change base type 
    // to unsigned.
} 
```  
