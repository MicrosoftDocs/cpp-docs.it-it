---
title: Operatori C | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- ternary operators
- operators [C]
- symbols, operators
- binary operators
- associativity of operators
- binary data, binary expressions
ms.assetid: 13bc4c8e-2dc9-4b23-9f3a-25064e8777ed
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9f90f25d52a2555eb92938dd29ebb7e5bfc6e96a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="c-operators"></a>Operatori C
Gli operatori C sono un sottoinsieme degli [operatori C++ predefiniti](../cpp/cpp-built-in-operators-precedence-and-associativity.md).  
  
 Sono disponibili tre tipi di operatori: Un'espressione unaria è costituita da un operatore unario anteposto a un operando o dalla parola chiave `sizeof` seguita da un'espressione. L'espressione può essere il nome di una variabile o un'espressione cast. Se l'espressione è un'espressione cast, deve essere racchiusa tra parentesi. Un'espressione binaria è costituita da due operandi uniti da un operatore binario. Un'espressione ternaria è costituita da tre operandi uniti dall'operatore di espressione condizionale.  
  
 In C sono disponibili gli operatori unari seguenti:  
  
|Simbolo|nome|  
|------------|----------|  
|**- ~ !**|Operatori di complemento e di negazione|  
|**\* &**|Operatori di riferimento indiretto e address-of|  
|`sizeof`|Operatore size|  
|**+**|Operatore più unario|  
|**++ --**|Operatori di incremento e decremento unari|  
  
 Gli operatori binari vengono associati da sinistra a destra. In C sono disponibili gli operatori binari seguenti:  
  
|Simbolo|nome|  
|------------|----------|  
|**\* / %**|Operatori moltiplicativi|  
|**+ -**|Operatori additivi|  
|**<\< >>**|Operatori shift|  
|**\<   >   \<=   >=   ==   !=**|Operatori relazionali|  
|**&   &#124; ^**|Operatori bit per bit|  
|**&&   &#124;&#124;**|Operatori logici|  
|**,**|Operatore di valutazione sequenziale|  
  
 L'operatore di base (**:>**), supportato da versioni precedenti del compilatore C a 16 bit di Microsoft, è descritto in [Riepilogo di sintassi del linguaggio C](../c-language/c-language-syntax-summary.md).  
  
 L'operatore di espressione condizionale ha una precedenza minore rispetto alle espressioni binarie e differisce da tali espressioni per l'associatività a destra.  
  
 Le espressioni con operatori includono inoltre espressioni di assegnazione, che utilizzano operatori di assegnazione unari o binari. Gli operatori di assegnazione unari sono gli operatori di incremento (`++`) e decremento (**--**), mentre gli operatori di assegnazione binari sono l'operatore di assegnazione semplice (**=**) e gli operatori di assegnazione composta. Ogni operatore di assegnazione composta è una combinazione di un altro operatore binario con l'operatore di assegnazione semplice.  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni e assegnazioni](../c-language/expressions-and-assignments.md)