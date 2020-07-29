---
title: Operatori binari
ms.date: 06/14/2018
helpviewer_keywords:
- member-selection operators [C++]
- operators [C++], binary
- binary operators [C++]
ms.assetid: c0e7fbff-bc87-4708-8333-504ac09ee83e
ms.openlocfilehash: f44217b68f6700603218c6f4f3e846075b7e7d55
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87229129"
---
# <a name="binary-operators"></a>Operatori binari

Nella tabella seguente viene mostrato un elenco di operatori che possono essere sottoposti a overload.

## <a name="redefinable-binary-operators"></a>Operatori binari ridefinibili

|Operatore|Nome|
|--------------|----------|
|**,**|Virgola|
|**!=**|Disuguaglianza|
|**%**|Modulus|
|**%=**|Modulo/assegnazione|
|**&**|AND bit per bit|
|**&&**|AND logico|
|**&=**|AND bit/assegnazione|
|**&#42;**|Moltiplicazione|
|**&#42;=**|Moltiplicazione/assegnazione|
|**+**|Addizione|
|**+=**|Addizione/assegnazione|
|**-**|Sottrazione|
|**-=**|Sottrazione/assegnazione|
|**->**|Selezione dei membri|
|**->&#42;**|Selezione puntatore a membro|
|**/**|Divisione|
|**/=**|Divisione/assegnazione|
|**<**|Minore di|
|**<<**|Spostamento a sinistra|
|**<<=**|Spostamento a sinistra/assegnazione|
|**<=**|Minore o uguale a|
|**=**|Assegnazione|
|**==**|Uguaglianza|
|**>**|Maggiore di|
|**>=**|Maggiore o uguale a|
|**>>**|Spostamento a destra|
|**>>=**|Spostamento a destra/assegnazione|
|**^**|OR esclusivo|
|**^=**|OR esclusivo/assegnazione|
|**&#124;**|OR inclusivo bit per bit|
|**&#124;=**|OR inclusivo bit/assegnazione|
|**&#124;&#124;**|OR logico|

Per dichiarare una funzione di un operatore binario come membro non statico, è necessario dichiararla nel seguente formato:

> *tipo RET* **`operator`** *op* **(** *arg* **)**

dove *ret-Type* è il tipo restituito, *op* è uno degli operatori elencati nella tabella precedente e *arg* è un argomento di qualsiasi tipo.

Per dichiarare una funzione di un operatore binario come funzione globale, è necessario dichiararla nel seguente formato:

> *tipo RET* **`operator`** *op* **(** _arg1_**,** _arg2_ **)**

dove *ret-Type* e *op* sono descritti per le funzioni dell'operatore membro e *arg1* e *arg2* sono argomenti. Almeno uno degli argomenti deve essere di tipo di classe.

> [!NOTE]
> Non c'è alcuna restrizione sui tipi restituiti degli operatori binari; tuttavia, la maggior parte degli operatori binari definiti dall'utente restituiscono un tipo di classe o un riferimento al tipo di classe.

## <a name="see-also"></a>Vedere anche

[Overload degli operatori](../cpp/operator-overloading.md)
