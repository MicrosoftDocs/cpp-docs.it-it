---
title: Operatori di assegnazione C | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- remainder assignment operator (%=)
- '&= operator'
- bitwise-AND assignment operator
- operators [C], assignment
- operators [C], shift
- ^= operator, assignment operators
- += operator
- '>>= operator'
- '|= operator'
- division assignment operator
- subtraction operator
- right shift operators
- subtraction operator, C assignment operators
- = operator, assignment operators
- '*= operator'
- '>> operator'
- '%= operator'
- assignment operators, C
- = operator
- assignment operators
- assignment conversions
- -= operator
- multiplication assignment operator (*=)
- shift operators, right
- /= operator
- operator >>=, C assignment operators
- <<= operator
ms.assetid: 11688dcb-c941-44e7-a636-3fc98e7dac40
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 6d510973a7b7c12185f5cde32a49af3537a436c9
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="c-assignment-operators"></a>Operatori di assegnazione C
Un'operazione di assegnazione assegna il valore dell'operando destro al percorso di archiviazione definito dall'operando sinistro. Di conseguenza, l'operando sinistro di un'operazione di assegnazione deve essere un valore l-value modificabile. Dopo l'assegnazione, un'espressione di assegnazione assume il valore dell'operando sinistro, ma non è un valore l-value.  
  
 **Sintassi**  
  
 *assignment-expression*:  
 *conditional-expression*  
  
 *unary-expression assignment-operator assignment-expression*  
  
 *assignment-operator*: uno tra  
 **= \*=** `/=` `%=` `+=` **-= <\<= >>= &=** `^=` `|=`  
  
 Gli operatori di assegnazione in C possono sia trasformare che assegnare valori in un'unica operazione. In C sono disponibili gli operatori di assegnazione seguenti:  
  
|Operatore|Operazione eseguita|  
|--------------|-------------------------|  
|**=**|Assegnazione singola|  
|**\*=**|Assegnazione di moltiplicazione|  
|`/=`|Assegnazione di divisione|  
|`%=`|Assegnazione di resto|  
|`+=`|Assegnazione di addizione|  
|**-=**|Assegnazione di sottrazione|  
|**<\<=**|Assegnazione di spostamento a sinistra|  
|**>>=**|Assegnazione di spostamento a destra|  
|**&=**|Assegnazione AND bit per bit|  
|`^=`|Assegnazione OR esclusivo bit per bit|  
|`&#124;=`|Assegnazione OR inclusivo bit per bit|  
  
 Nell'assegnazione il tipo del valore destro viene convertito nel tipo del valore a sinistra e il valore viene archiviato nell'operando sinistro dopo che l'assegnazione è stata eseguita. L'operando sinistro non deve essere una matrice, una funzione o una costante. Il percorso specifico di conversione, che dipende dai due tipi, è descritto in dettaglio in [Conversioni di tipi](../c-language/type-conversions-c.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori di assegnazione](../cpp/assignment-operators.md)