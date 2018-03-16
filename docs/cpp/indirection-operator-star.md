---
title: 'Operatore di riferimento indiretto: * | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- '* operator'
- indirection operator
- operators [C++], indirection
- indirection operator [C++], syntax
ms.assetid: c50309e1-6c02-4184-9fcb-2e13c1f4ac03
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2c87c279ae1f45899dfa4525c3bdc65bfa5acc2c
ms.sourcegitcommit: 9239c52c05e5cd19b6a72005372179587a47a8e4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2018
---
# <a name="indirection-operator-"></a>Operatore di riferimento indiretto: *
## <a name="syntax"></a>Sintassi  
  
```  
  
* cast-expression  
```  
  
## <a name="remarks"></a>Note  
 L'operatore di riferimento indiretto unario (**\***) dereferenzia un puntatore; ovvero converte un valore di puntatore in un l-value. L'operando dell'operatore di riferimento indiretto deve essere un puntatore a un tipo. Il risultato dell'espressione di riferimento indiretto è il tipo da cui il tipo di puntatore è derivato. L'utilizzo del  **\***  operatore in questo contesto è diverso dal relativo significato come operatore binario, ovvero la moltiplicazione.  
  
 Se l'operando punta a una funzione, il risultato è un indicatore di funzione. Se invece punta a un percorso di archiviazione, il risultato è un valore l-value che definisce il percorso di archiviazione.  
  
 L'operatore di riferimento indiretto può essere utilizzato in modo cumulativo per dereferenziare i puntatori ai puntatori. Ad esempio:  
  
```  
// expre_Indirection_Operator.cpp  
// compile with: /EHsc  
// Demonstrate indirection operator  
#include <iostream>  
using namespace std;  
int main() {  
   int n = 5;  
   int *pn = &n;  
   int **ppn = &pn;  
  
   cout  << "Value of n:\n"  
         << "direct value: " << n << endl  
         << "indirect value: " << *pn << endl  
         << "doubly indirect value: " << **ppn << endl  
         << "address of n: " << pn << endl  
         << "address of n via indirection: " << *ppn << endl;  
}  
```  
  
 Se il valore del puntatore non è valido, il risultato sarà indefinito. Nell'elenco seguente sono incluse alcune delle situazioni più comuni che invalidano un valore del puntatore.  
  
-   Il puntatore è un puntatore null.  
  
-   Il puntatore specifica l'indirizzo di un elemento locale non visibile al momento del riferimento.  
  
-   Il puntatore specifica un indirizzo allineato in modo non appropriato per il tipo di oggetto cui fa riferimento.  
  
-   Il puntatore specifica un indirizzo non utilizzato dal programma di esecuzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)   
 [Operatori C++ predefiniti, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatore address-of: &](../cpp/address-of-operator-amp.md)   
 [Operatori address-of e di riferimento indiretto](../c-language/indirection-and-address-of-operators.md)