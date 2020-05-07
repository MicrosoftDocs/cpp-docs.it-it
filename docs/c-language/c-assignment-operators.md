---
title: Operatori di assegnazione C
ms.date: 06/14/2018
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
ms.openlocfilehash: e8ada96daaec249a05882aceae9b7d9e86b92065
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80168799"
---
# <a name="c-assignment-operators"></a>Operatori di assegnazione C

Un'operazione di assegnazione assegna il valore dell'operando destro al percorso di archiviazione definito dall'operando sinistro. Di conseguenza, l'operando sinistro di un'operazione di assegnazione deve essere un valore l-value modificabile. Dopo l'assegnazione, un'espressione di assegnazione assume il valore dell'operando sinistro, ma non è un valore l-value.

## <a name="syntax"></a>Sintassi

*assignment-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*espressione condizionale*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*unary-expression* *assignment-operator* *assignment-expression*

*assignment-operator*: uno tra<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**=** **\*=** **/=** **%=** **+=** **-=** **\<\<=** **>>=** **&=** **^=** **|=**

Gli operatori di assegnazione in C possono sia trasformare che assegnare valori in un'unica operazione. In C sono disponibili gli operatori di assegnazione seguenti:

|Operatore|Operazione eseguita|
|--------------|-------------------------|
|**=**|Assegnazione singola|
|**&#42;=**|Assegnazione di moltiplicazione|
|**/=**|Assegnazione di divisione|
|**%=**|Assegnazione di resto|
|**+=**|Assegnazione di addizione|
|**-=**|Assegnazione di sottrazione|
|**<\<=**|Assegnazione di spostamento a sinistra|
|**>>=**|Assegnazione di spostamento a destra|
|**&=**|Assegnazione AND bit per bit|
|**^=**|Assegnazione OR esclusivo bit per bit|
|**&#124;=**|Assegnazione OR inclusivo bit per bit|

Nell'assegnazione il tipo del valore destro viene convertito nel tipo del valore a sinistra e il valore viene archiviato nell'operando sinistro dopo che l'assegnazione è stata eseguita. L'operando sinistro non deve essere una matrice, una funzione o una costante. Il percorso specifico di conversione, che dipende dai due tipi, è descritto in dettaglio in [Conversioni di tipi](../c-language/type-conversions-c.md).

## <a name="see-also"></a>Vedere anche

- [Operatori di assegnazione](../cpp/assignment-operators.md)
