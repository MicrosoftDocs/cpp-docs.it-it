---
title: Conteggio dei riferimenti (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- AddRef method [C++], reference counting
- reference counting
- AddRef method [C++]
- reference counts
- references, counting
ms.assetid: b1fd4514-6de6-429f-9e60-2777c0d07a3d
ms.openlocfilehash: 095f0ad2ecc1e1a870077899d61a3c594f8cc95f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321736"
---
# <a name="reference-counting"></a>Conteggio dei riferimenti

COM stesso non tenta automaticamente di rimuovere un oggetto dalla memoria quando ritiene che l'oggetto non è più in uso. Al contrario, il programmatore di oggetti deve rimuovere l'oggetto inutilizzato. Il programmatore determina se un oggetto può essere rimosso in base a un conteggio dei riferimenti.

COM utilizza `IUnknown` i metodi [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref) e [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release)per gestire il conteggio dei riferimenti delle interfacce in un oggetto. Le regole generali per chiamare questi metodi sono:The general rules for calling these methods are:

- Ogni volta che un client `AddRef` riceve un puntatore a interfaccia, deve essere chiamato sull'interfaccia.

- Ogni volta che il client ha terminato di utilizzare il puntatore a interfaccia, deve chiamare `Release`.

In un'implementazione `AddRef` semplice, ogni `Release` chiamata aumenta e ogni chiamata decrementa una variabile contatore all'interno dell'oggetto. Quando il conteggio torna a zero, l'interfaccia non ha più utenti ed è libera di rimuoversi dalla memoria.

Il conteggio dei riferimenti può anche essere implementato in modo che ogni riferimento all'oggetto (non a una singola interfaccia) venga conteggiato. In questo caso, ogni `AddRef` e `Release` chiamare i delegati `Release` a un'implementazione centrale sull'oggetto e libera l'intero oggetto quando il conteggio dei riferimenti raggiunge zero.

> [!NOTE]
> Quando `CComObject`un oggetto derivato -viene costruito utilizzando l'operatore **new,** il conteggio dei riferimenti è 0.When a -derived object is constructed using the new operator, the reference count is 0. Pertanto, una `AddRef` chiamata a deve `CComObject`essere effettuata dopo la creazione dell'oggetto derivato.

## <a name="see-also"></a>Vedere anche

[Introduzione a COM](../atl/introduction-to-com.md)<br/>
[Gestione della durata degli oggetti tramite il conteggio dei riferimentiManaging Object Lifetimes through Reference Counting](/windows/win32/com/managing-object-lifetimes-through-reference-counting)
