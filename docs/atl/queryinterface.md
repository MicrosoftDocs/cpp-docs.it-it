---
title: QueryInterface
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- QueryInterface
helpviewer_keywords:
- interfaces, pointers
- interfaces, availability
- QueryInterface method
ms.assetid: 62fce95e-aafa-4187-b50b-e6611b74c3b3
ms.openlocfilehash: a3ec3c6e0d2b534c3af49000202461a43a65dae9
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57261462"
---
# <a name="queryinterface"></a>QueryInterface

Anche se sono presenti meccanismi mediante il quale un oggetto in grado di indicare la funzionalità fornita in modo statico (prima, viene creata un'istanza), lo strumento COM fondamentale consiste nell'usare la `IUnknown` metodo denominato [QueryInterface](/windows/desktop/api/unknwn/nf-unknwn-iunknown-queryinterface(q_)).

Ogni interfaccia è derivata da `IUnknown`, in modo che ogni interfaccia dispone di un'implementazione di `QueryInterface`. Indipendentemente dall'implementazione, questo metodo esegue una query un oggetto utilizzando l'IID dell'interfaccia a cui il chiamante desidera che un puntatore. Se l'oggetto supporta tale interfaccia, `QueryInterface` recupera un puntatore all'interfaccia, durante la chiamata anche `AddRef`. In caso contrario, restituisce il codice di errore E_NOINTERFACE.

Si noti che è necessario rispettare [conteggio dei riferimenti](../atl/reference-counting.md) regole in qualsiasi momento. Se si chiama `Release` su un puntatore a interfaccia per decrementare il conteggio dei riferimenti su zero, è consigliabile non usare tale puntatore nuovamente. In alcuni casi potrebbe essere necessario ottenere un riferimento debole a un oggetto (vale a dire, è possibile ottenere un puntatore a una delle relative interfacce senza incrementare il conteggio dei riferimenti), ma non è accettabile eseguire questa operazione chiamando `QueryInterface` seguita da `Release`. Il puntatore ottenuto in questo modo non è valido e non deve essere utilizzato. Ciò diventa evidente quando [ATL_DEBUG_INTERFACES](reference/debugging-and-error-reporting-macros.md#_atl_debug_interfaces) è definito, in modo che definisce questa macro è un modo utile per i bug nel conteggio dei riferimenti di ricerca.

## <a name="see-also"></a>Vedere anche

[Introduzione a COM](../atl/introduction-to-com.md)<br/>
[QueryInterface: Spostamenti all'interno di un oggetto](/windows/desktop/com/queryinterface--navigating-in-an-object)
