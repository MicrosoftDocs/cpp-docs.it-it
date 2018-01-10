---
title: Membri di struttura e di unione | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- member-selection operators
- structure members, referencing
- -> operator, structure and union members
- dot operator (.)
- referencing structure members
- . operator
- operators [C], member selection
- structure member selection
ms.assetid: bb1fe304-af49-4f98-808d-afdc99b3e319
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2183aead53ee02f36bc982e4f33ad174346da5f2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="structure-and-union-members"></a>Membri di struttura e di unione
Un'"espressione di selezione dei membri" si riferisce ai membri di strutture e unioni. Un'espressione di questo tipo ha il valore e il tipo del membro selezionato.  
  
```  
  
postfix-expression  
.  
identifier  
postfix-expression  
->  
identifier  
  
```  
  
 In questo elenco vengono descritti i due formati delle espressioni di selezione dei membri:  
  
1.  Nel primo form, *postfix-expression* rappresenta un valore di tipo `struct` o **union** e *identifier* assegna un nome a un membro della struttura o unione specificata. Il valore dell'operazione è quello di *identifier* ed è un'espressione l-value se *postfix-expression* è un'espressione l-value. Per altre informazioni, vedere [Espressioni L-value e R-value](../c-language/l-value-and-r-value-expressions.md).  
  
2.  Nel secondo form, *postfix-expression* rappresenta un puntatore a un'unione o a una struttura e *identifier* assegna un nome a un membro della struttura o unione specificata. Il valore è quello di *identifier* ed è un l-value.  
  
 I due formati delle espressioni di selezione dei membri hanno effetti simili.  
  
 Infatti, un'espressione che usa l'operatore di selezione dei membri (**->**) è una versione abbreviata di un'espressione che usa il punto (**.**) se l'espressione prima del punto è l'operatore di riferimento indiretto (**\***) applicato a un valore puntatore. Quindi,  
  
```  
  
expression  
->  
identifier  
  
```  
  
 equivale a  
  
```  
  
(*  
expression  
) .  
identifier  
  
```  
  
 quando *expression* è un valore puntatore.  
  
## <a name="examples"></a>Esempi  
 Negli esempi seguenti viene fatto riferimento a questa dichiarazione della struttura. Per informazioni sull'operatore di riferimento indiretto (**\***) usato in questi esempi, vedere [Operatori address-of e di riferimento indiretto](../c-language/indirection-and-address-of-operators.md).  
  
```  
struct pair   
{  
    int a;  
    int b;  
    struct pair *sp;  
} item, list[10];  
```  
  
 Un'espressione di selezione dei membri per gli aspetti della struttura `item` sarà:  
  
```  
item.sp = &item;  
```  
  
 Nell'esempio precedente, l'indirizzo della struttura `item` viene assegnato al membro `sp` della struttura. Ciò significa che `item` contiene un puntatore a se stesso.  
  
```  
(item.sp)->a = 24;  
```  
  
 In questo esempio, l'espressione puntatore `item.sp` viene usata con l'operatore di selezione dei membri (**->**) per assegnare un valore al membro `a`.  
  
```  
list[8].b = 12;  
```  
  
 In questa istruzione viene illustrato come selezionare un singolo membro della struttura da una matrice di strutture.  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori di accesso ai membri: . e ->](../cpp/member-access-operators-dot-and.md)