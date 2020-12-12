---
description: 'Altre informazioni su: conteggio dei riferimenti'
title: Conteggio dei riferimenti (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- AddRef method [C++], reference counting
- reference counting
- AddRef method [C++]
- reference counts
- references, counting
ms.assetid: b1fd4514-6de6-429f-9e60-2777c0d07a3d
ms.openlocfilehash: 0e80986f530d1d0c79fd5c271eb21e292dec06de
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97165745"
---
# <a name="reference-counting"></a>Conteggio dei riferimenti

COM non tenta automaticamente di rimuovere un oggetto dalla memoria quando ritiene che l'oggetto non venga più utilizzato. Il programmatore di oggetti deve invece rimuovere l'oggetto non utilizzato. Il programmatore determina se un oggetto può essere rimosso in base a un conteggio dei riferimenti.

COM utilizza i `IUnknown` metodi, [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref) e [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release), per gestire il conteggio dei riferimenti delle interfacce in un oggetto. Le regole generali per la chiamata di questi metodi sono:

- Ogni volta che un client riceve un puntatore `AddRef` a interfaccia, deve essere chiamato sull'interfaccia.

- Ogni volta che il client ha terminato l'uso del puntatore a interfaccia, deve chiamare `Release` .

In un'implementazione semplice ogni `AddRef` chiamata incrementa e ogni `Release` chiamata decrementa una variabile contatore all'interno dell'oggetto. Quando il conteggio viene restituito a zero, l'interfaccia non ha più utenti ed è libera di rimuoverla dalla memoria.

Il conteggio dei riferimenti può anche essere implementato in modo che ogni riferimento all'oggetto (non a una singola interfaccia) venga conteggiato. In questo caso, ogni `AddRef` e `Release` chiama delegati a un'implementazione centrale sull'oggetto e `Release` libera l'intero oggetto quando il conteggio dei riferimenti raggiunge zero.

> [!NOTE]
> Quando un `CComObject` oggetto derivato da viene costruito usando l' **`new`** operatore, il conteggio dei riferimenti è 0. Pertanto, una chiamata a `AddRef` deve essere eseguita dopo la creazione dell' `CComObject` oggetto derivato da.

## <a name="see-also"></a>Vedi anche

[Introduzione a COM](../atl/introduction-to-com.md)<br/>
[Gestione della durata degli oggetti tramite il conteggio dei riferimenti](/windows/win32/com/managing-object-lifetimes-through-reference-counting)
