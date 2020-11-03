---
title: Operatori di assegnazione C
description: Operatori di assegnazione del linguaggio C standard, sintassi e significato.
ms.date: 10/30/2020
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
ms.openlocfilehash: 460e18772689de0d28fcfda3295a49b2f8a3c0d7
ms.sourcegitcommit: 4abc6c4c9694f91685cfd77940987e29a51e3143
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/03/2020
ms.locfileid: "93238512"
---
# <a name="c-assignment-operators"></a>Operatori di assegnazione C

Un'operazione di assegnazione assegna il valore dell'operando destro al percorso di archiviazione definito dall'operando sinistro. Di conseguenza, l'operando sinistro di un'operazione di assegnazione deve essere un valore l-value modificabile. Dopo l'assegnazione, un'espressione di assegnazione assume il valore dell'operando sinistro, ma non è un valore l-value.

## <a name="syntax"></a>Sintassi

*`assignment-expression`* :\
&emsp;*`conditional-expression`*\
&emsp;*`unary-expression`* *`assignment-operator`* *`assignment-expression`*

*`assignment-operator`* : uno tra<br/>
&emsp;**`=`** **`*=`** **`/=`** **`%=`** **`+=`** **`-=`** **`<<=`** **`>>=`** **`&=`** **`^=`** **`|=`**

Gli operatori di assegnazione in C possono sia trasformare che assegnare valori in un'unica operazione. In C sono disponibili gli operatori di assegnazione seguenti:

|Operatore|Operazione eseguita|
|--------------|-------------------------|
|**`=`**|Assegnazione singola|
|**`*=`**|Assegnazione di moltiplicazione|
|**`/=`**|Assegnazione di divisione|
|**`%=`**|Assegnazione di resto|
|**`+=`**|Assegnazione di addizione|
|**`-=`**|Assegnazione di sottrazione|
|**`<<=`**|Assegnazione di spostamento a sinistra|
|**`>>=`**|Assegnazione di spostamento a destra|
|**`&=`**|Assegnazione AND bit per bit|
|**`^=`**|Assegnazione OR esclusivo bit per bit|
|**`|=`**|Assegnazione OR inclusivo bit per bit|

Nell'assegnazione il tipo del valore destro viene convertito nel tipo del valore a sinistra e il valore viene archiviato nell'operando sinistro dopo che l'assegnazione è stata eseguita. L'operando sinistro non deve essere una matrice, una funzione o una costante. Il percorso specifico di conversione, che dipende dai due tipi, è descritto in dettaglio in [Conversioni di tipi](../c-language/type-conversions-c.md).

## <a name="see-also"></a>Vedere anche

- [Operatori di assegnazione](../cpp/assignment-operators.md)
