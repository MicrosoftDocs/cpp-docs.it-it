---
description: 'Altre informazioni su: classi di implementazione IUnknown'
title: Classi di implementazione IUnknown (ATL)
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- IUnknown implementation classes
ms.assetid: 47b69bb5-69d8-4a9c-84a8-329bdde2bb3f
ms.openlocfilehash: a28bd14be86501fd6566b8038b73a51efcc1c18d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97147654"
---
# <a name="iunknown-implementation-classes"></a>Classi di implementazione IUnknown

Le classi seguenti implementano `IUnknown` e i metodi correlati:

- [CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) Gestisce il conteggio dei riferimenti per gli oggetti aggregati e non aggregati. Consente di specificare un modello di Threading.

- [CComObjectRoot](../atl/reference/ccomobjectroot-class.md) Gestisce il conteggio dei riferimenti per gli oggetti aggregati e non aggregati. Usa il modello di threading predefinito del server.

- [Ccomaggobjec](../atl/reference/ccomaggobject-class.md) Implementa `IUnknown` per un oggetto aggregato.

- [CComObject](../atl/reference/ccomobject-class.md) Implementa `IUnknown` per un oggetto non aggregato.

- [CComPolyObject](../atl/reference/ccompolyobject-class.md) Implementa `IUnknown` per oggetti aggregati e non aggregati. `CComPolyObject` `CComAggObject` L'uso di evita la presenza `CComObject` di e nel modulo. Un singolo `CComPolyObject` oggetto gestisce i case aggregati e non aggregati.

- [CComObjectNoLock](../atl/reference/ccomobjectnolock-class.md) Implementa `IUnknown` per un oggetto non aggregato, senza modificare il conteggio dei blocchi del modulo.

- [CComTearOffObject](../atl/reference/ccomtearoffobject-class.md) Implementa `IUnknown` per un'interfaccia tear-off.

- [CComCachedTearOffObject](../atl/reference/ccomcachedtearoffobject-class.md) Implementa `IUnknown` per un'interfaccia di strappo "memorizzato nella cache".

- [CComContainedObject](../atl/reference/ccomcontainedobject-class.md) Implementa `IUnknown` per l'oggetto interno di un'aggregazione o un'interfaccia tear-off.

- [CComObjectGlobal](../atl/reference/ccomobjectglobal-class.md) Gestisce un conteggio dei riferimenti nel modulo per assicurarsi che l'oggetto non venga eliminato.

- [CComObjectStack](../atl/reference/ccomobjectstack-class.md) Crea un oggetto COM temporaneo, usando un'implementazione scheletrica di `IUnknown` .

## <a name="related-articles"></a>Articoli correlati

[Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../atl/atl-class-overview.md)<br/>
[Macro di aggregazione e di class factory](../atl/reference/aggregation-and-class-factory-macros.md)<br/>
[Macro mappa COM](../atl/reference/com-map-macros.md)<br/>
[Funzioni globali della mappa COM](../atl/reference/com-map-global-functions.md)
