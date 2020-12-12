---
description: 'Altre informazioni su: Introduzione a COM'
title: Introduzione a COM
ms.custom: index-page
ms.date: 11/04/2016
helpviewer_keywords:
- COM
ms.assetid: 120735d9-db71-4ad3-a730-ce576ea2354e
ms.openlocfilehash: 635bce8c1214dddfc258ae6d2d6c7e751f778e9c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97147667"
---
# <a name="introduction-to-com"></a>Introduzione a COM

COM è il "modello a oggetti" di base in cui vengono compilati i controlli ActiveX e OLE. COM consente a un oggetto di esporre la funzionalità ad altri componenti e di ospitare le applicazioni. Definisce sia il modo in cui l'oggetto espone se stesso che la modalità di funzionamento di questa esposizione nei processi e nelle reti. COM definisce anche il ciclo di vita dell'oggetto.

I concetti fondamentali di COM sono i seguenti:

- [Interfacce](../atl/interfaces-atl.md) : meccanismo mediante il quale un oggetto espone la relativa funzionalità.

- [IUnknown](../atl/iunknown.md) , l'interfaccia di base su cui si basano tutti gli altri. Implementa il conteggio dei riferimenti e i meccanismi di query dell'interfaccia eseguiti tramite COM.

- [Conteggio dei riferimenti](../atl/reference-counting.md) : tecnica in base alla quale un oggetto (o, rigorosamente, un'interfaccia) decide quando non è più usato ed è quindi libero di rimuovere se stesso.

- [QueryInterface](../atl/queryinterface.md) : il metodo usato per eseguire una query su un oggetto per una data interfaccia.

- [Marshalling](../atl/marshaling.md) : meccanismo che consente di utilizzare gli oggetti tra thread, processi e limiti di rete, consentendo l'indipendenza dalla posizione.

- [Aggregazione](../atl/aggregation.md) : un modo in cui un oggetto può essere usato da un altro oggetto.

## <a name="see-also"></a>Vedi anche

[Introduzione a COM e ATL](../atl/introduction-to-com-and-atl.md)<br/>
[Component Object Model (COM)](/windows/win32/com/the-component-object-model)
