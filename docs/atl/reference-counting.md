---
title: (ATL) nel conteggio dei riferimenti | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- AddRef method [C++], reference counting
- reference counting
- AddRef method [C++]
- reference counts
- references, counting
ms.assetid: b1fd4514-6de6-429f-9e60-2777c0d07a3d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9288eda15b0bac3d3694ee56a2f427aefb60e032
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46086434"
---
# <a name="reference-counting"></a>Il conteggio dei riferimenti

In COM non automaticamente tenta di rimuovere un oggetto dalla memoria quando ritiene che l'oggetto non è più in uso. Al contrario, il compito del programmatore deve rimuovere l'oggetto inutilizzato. Il programmatore determina se un oggetto possa essere rimossi in base a un conteggio dei riferimenti.

COM Usa il `IUnknown` metodi [AddRef](/windows/desktop/api/unknwn/nf-unknwn-iunknown-addref) e [versione](/windows/desktop/api/unknwn/nf-unknwn-iunknown-release), per gestire il conteggio dei riferimenti delle interfacce in un oggetto. Le regole generali per la chiamata di questi metodi sono:

- Ogni volta che un client riceve un puntatore a interfaccia `AddRef` deve essere chiamato sull'interfaccia.

- Ogni volta che il client ha terminato di utilizzare il puntatore di interfaccia, è necessario chiamare `Release`.

In un'implementazione semplice, ciascuna `AddRef` chiamare incrementi e ogni `Release` chiamare decrementa una variabile contatore all'interno dell'oggetto. Quando viene restituito il conteggio su zero, l'interfaccia non è più ha tutti gli utenti ed è possibile rimuovere se stesso dalla memoria.

Il conteggio dei riferimenti può anche essere implementato in modo che ogni riferimento all'oggetto (non a una singola interfaccia) viene conteggiato. In questo caso, ogni `AddRef` e `Release` chiama delegati a un'implementazione centrale per l'oggetto, e `Release` libera l'intero oggetto quando il conteggio dei riferimenti raggiunge zero.

> [!NOTE]
>  Quando un `CComObject`-oggetto derivato viene costruito usando il **nuovi** (operatore), il conteggio dei riferimenti è 0. Pertanto, una chiamata a `AddRef` devono essere apportate dopo la corretta creazione la `CComObject`-oggetto derivato.

## <a name="see-also"></a>Vedere anche

[Introduzione a COM](../atl/introduction-to-com.md)<br/>
[La gestione della durata degli oggetti tramite il conteggio dei riferimenti](/windows/desktop/com/managing-object-lifetimes-through-reference-counting)

