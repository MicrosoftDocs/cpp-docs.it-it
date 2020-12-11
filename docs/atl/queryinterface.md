---
description: 'Altre informazioni su: QueryInterface'
title: QueryInterface
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- interfaces, pointers
- interfaces, availability
- QueryInterface method
ms.assetid: 62fce95e-aafa-4187-b50b-e6611b74c3b3
ms.openlocfilehash: b22163c9e69bd5573f8e6060df0457862813c366
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159167"
---
# <a name="queryinterface"></a>QueryInterface

Sebbene esistano meccanismi che consentono a un oggetto di esprimere la funzionalità fornita in modo statico (prima che venga creata un'istanza), il meccanismo COM fondamentale consiste nell'utilizzare il `IUnknown` metodo denominato [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)).

Ogni interfaccia è derivata da `IUnknown` , quindi ogni interfaccia ha un'implementazione di `QueryInterface` . Indipendentemente dall'implementazione, questo metodo esegue una query su un oggetto utilizzando l'IID dell'interfaccia a cui il chiamante desidera un puntatore. Se l'oggetto supporta tale interfaccia, `QueryInterface` Recupera un puntatore all'interfaccia, chiamando anche `AddRef` . In caso contrario, restituisce il codice di errore E_NOINTERFACE.

Si noti che è sempre necessario rispettare le regole di [conteggio dei riferimenti](../atl/reference-counting.md) . Se si chiama `Release` su un puntatore di interfaccia per decrementare il conteggio dei riferimenti a zero, è consigliabile non usare di nuovo il puntatore. In alcuni casi potrebbe essere necessario ottenere un riferimento debole a un oggetto (ovvero, è possibile ottenere un puntatore a una delle sue interfacce senza incrementare il conteggio dei riferimenti), ma non è accettabile eseguire questa operazione chiamando `QueryInterface` seguito da `Release` . Il puntatore ottenuto in questo modo non è valido e non deve essere utilizzato. Questa operazione risulta più immediata quando viene definito [_ATL_DEBUG_INTERFACES](reference/debugging-and-error-reporting-macros.md#_atl_debug_interfaces) , quindi la definizione di questa macro è un modo utile per trovare i bug di conteggio dei riferimenti.

## <a name="see-also"></a>Vedi anche

[Introduzione a COM](../atl/introduction-to-com.md)<br/>
[QueryInterface: spostamento in un oggetto](/windows/win32/com/queryinterface--navigating-in-an-object)
