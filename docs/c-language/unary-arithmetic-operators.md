---
title: Operatori aritmetici unari | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- operators [C], unary
- tilde (~) one's complement operator
- bitwise-complement operator
- arithmetic operators [C++], unary
- + operator, unary operators
- unary operators
- exclamation points
- ~ operator, one's complement operator
- logical negation
- '! operator, unary arithmetic operators'
ms.assetid: 78c91415-d469-499e-9dfe-4435350fd333
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 07fde5da39034ff180cad5b6678f27fe8252ce10
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="unary-arithmetic-operators"></a>Operatori aritmetici unari
Gli operatori più unario, di negazione aritmetica, complemento e negazione logica vengono illustrati nell'elenco seguente:  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|**+**|L'operatore più unario che precede un'espressione tra parentesi forza il raggruppamento delle operazioni incluse. Viene utilizzato con le espressioni che includono più di un operatore binario associativo o commutativo. L'operando deve disporre di un tipo aritmetico. Il risultato corrisponde al valore dell'operando. Un operando integrale viene sottoposto a una promozione a intero. Il tipo del risultato corrisponde al tipo dell'operando promosso.|  
|**-**|L'operatore di negazione aritmetica produce il corrispondente negativo (il complemento a due) del relativo operando. L'operando deve essere un valore integrale o a virgola mobile. Questo operatore esegue le consuete conversioni aritmetiche.|  
|`~`|L'operatore di complemento bit per bit (o NOT bit per bit) produce il complemento bit per bit del relativo operando. L'operando deve essere di tipo integrale. Questo operatore esegue le consuete conversioni aritmetiche; il tipo del risultato corrisponde al tipo dell'operando dopo la conversione.|  
|**!**|L'operatore di negazione logica (NOT logico) produce il valore 0 se il suo operando è true (diverso da zero) e il valore 1 se il suo operando è false (0). Il risultato è di tipo `int`. L'operando deve essere un valore integrale, a virgola mobile o di puntatore.|  
  
 Le operazioni aritmetiche unarie sui puntatori non sono valide.  
  
## <a name="examples"></a>Esempi  
 Negli esempi seguenti vengono illustrati gli operatori aritmetici unari:  
  
```  
short x = 987;  
    x = -x;  
```  
  
 Nell'esempio precedente, il nuovo valore di `x` è il numero negativo 987 o -987.  
  
```  
unsigned short y = 0xAAAA;  
    y = ~y;  
```  
  
 In questo esempio, il nuovo valore assegnato a `y` è il complemento a uno del valore senza segno 0xAAAA o 0x5555.  
  
```  
if( !(x < y) )  
```  
  
 Se `x` è maggiore o uguale a `y`, il risultato dell'espressione è 1 (true). Se `x` è minore di `y`, il risultato è 0 (false).  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)