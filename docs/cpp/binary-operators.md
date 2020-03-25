---
title: Operatori binari
ms.date: 06/14/2018
helpviewer_keywords:
- member-selection operators [C++]
- operators [C++], binary
- binary operators [C++]
ms.assetid: c0e7fbff-bc87-4708-8333-504ac09ee83e
ms.openlocfilehash: 030ae71fec7a0d1572804f30d09f6f9b2749e436
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80181304"
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

> *operatore di tipo RET* **operator** *op* **(** *arg* **)**

dove *ret-Type* è il tipo restituito, *op* è uno degli operatori elencati nella tabella precedente e *arg* è un argomento di qualsiasi tipo.

Per dichiarare una funzione di un operatore binario come funzione globale, è necessario dichiararla nel seguente formato:

> **operatore** *op* *di tipo RET* **(** _arg1_ **,** _arg2_ **)**

dove *ret-Type* e *op* sono descritti per le funzioni dell'operatore membro e *arg1* e *arg2* sono argomenti. Almeno uno degli argomenti deve essere di tipo di classe.

> [!NOTE]
> Non c'è alcuna restrizione sui tipi restituiti degli operatori binari; tuttavia, la maggior parte degli operatori binari definiti dall'utente restituiscono un tipo di classe o un riferimento al tipo di classe.

## <a name="see-also"></a>Vedere anche

[Overload degli operatori](../cpp/operator-overloading.md)
