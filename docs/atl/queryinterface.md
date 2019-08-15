---
title: QueryInterface
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- interfaces, pointers
- interfaces, availability
- QueryInterface method
ms.assetid: 62fce95e-aafa-4187-b50b-e6611b74c3b3
ms.openlocfilehash: de2762cff3d697261e159336d866a5a7cb10fafa
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69491997"
---
# <a name="queryinterface"></a>QueryInterface

Sebbene esistano meccanismi che consentono a un oggetto di esprimere la funzionalità fornita in modo statico (prima che venga creata un'istanza), il meccanismo com fondamentale consiste nell' `IUnknown` utilizzare il metodo denominato [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q_)).

Ogni interfaccia è derivata da `IUnknown`, quindi ogni interfaccia ha un'implementazione di `QueryInterface`. Indipendentemente dall'implementazione, questo metodo esegue una query su un oggetto utilizzando l'IID dell'interfaccia a cui il chiamante desidera un puntatore. Se l'oggetto supporta tale interfaccia, `QueryInterface` recupera un puntatore all'interfaccia, chiamando `AddRef`anche. In caso contrario, restituisce il codice di errore E_NOINTERFACE.

Si noti che è sempre necessario rispettare le regole di [conteggio dei riferimenti](../atl/reference-counting.md) . Se si chiama `Release` su un puntatore di interfaccia per decrementare il conteggio dei riferimenti a zero, è consigliabile non usare di nuovo il puntatore. In alcuni casi potrebbe essere necessario ottenere un riferimento debole a un oggetto (ovvero, è possibile ottenere un puntatore a una delle sue interfacce senza incrementare il conteggio dei riferimenti), ma non è accettabile eseguire questa operazione chiamando `QueryInterface` seguito da. `Release` Il puntatore ottenuto in questo modo non è valido e non deve essere utilizzato. Questa operazione risulta più immediata quando viene definito [_ATL_DEBUG_INTERFACES](reference/debugging-and-error-reporting-macros.md#_atl_debug_interfaces) , pertanto la definizione di questa macro è un modo utile per trovare i bug di conteggio dei riferimenti.

## <a name="see-also"></a>Vedere anche

[Introduzione a COM](../atl/introduction-to-com.md)<br/>
[QueryInterface Spostamento in un oggetto](/windows/win32/com/queryinterface--navigating-in-an-object)
