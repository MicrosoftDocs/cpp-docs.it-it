---
title: Introduzione a COM
ms.custom: index-page
ms.date: 11/04/2016
helpviewer_keywords:
- COM
ms.assetid: 120735d9-db71-4ad3-a730-ce576ea2354e
ms.openlocfilehash: 7a200a964e0cba09878929e4362385e5badd10c1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50492856"
---
# <a name="introduction-to-com"></a>Introduzione a COM

COM è fondamentale "modello a oggetti" su quali controlli ActiveX e OLE vengono compilati. Consente a un oggetto per esporne la funzionalità agli altri componenti e alle applicazioni host. Definisce come l'oggetto espone sé sia come questa esposizione funziona tra processi e tra reti. COM definisce anche il ciclo di vita dell'oggetto.

Questi concetti sono fondamentali per COM:

- [Interfacce](../atl/interfaces-atl.md) , ovvero il meccanismo attraverso il quale un oggetto espone le proprie funzionalità.

- [IUnknown](../atl/iunknown.md) , ovvero l'interfaccia di base su cui si basano tutti gli altri. Implementa l'interfaccia in esecuzione tramite COM. meccanismi di query e il conteggio dei riferimenti

- [Il conteggio dei riferimenti](../atl/reference-counting.md) , ovvero la tecnica mediante il quale un oggetto (o esclusivamente, un'interfaccia) decide quando non è più in uso ed è pertanto possibile rimuovere se stesso.

- [QueryInterface](../atl/queryinterface.md) , ovvero il metodo utilizzato per eseguire query su oggetto per una determinata interfaccia.

- [Marshalling](../atl/marshaling.md) , ovvero il meccanismo che consente agli oggetti da utilizzare tra thread, processi e i limiti di rete, consentendo l'indipendenza dalla posizione.

- [Aggregazione](../atl/aggregation.md) , usare un modo in cui è possibile rendere un oggetto di un altro.

## <a name="see-also"></a>Vedere anche

[Introduzione a COM e a ATL](../atl/introduction-to-com-and-atl.md)<br/>
[Component Object Model (COM)](/windows/desktop/com/the-component-object-model)

