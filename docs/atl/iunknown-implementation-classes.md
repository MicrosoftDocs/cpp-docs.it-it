---
title: Classi di implementazione di IUnknown (ATL)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- vc.atl.Iunknown
helpviewer_keywords:
- IUnknown implementation classes
ms.assetid: 47b69bb5-69d8-4a9c-84a8-329bdde2bb3f
ms.openlocfilehash: 97ca30c90cb8fa85685e30aa61d954008cf7cc54
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57297567"
---
# <a name="iunknown-implementation-classes"></a>Classi di implementazione IUnknown

Le seguenti classi implementano `IUnknown` e metodi correlati:

- [CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) gestisce oggetti aggregati e non aggregate nel conteggio dei riferimenti. Consente di specificare un modello di threading.

- [CComObjectRoot](../atl/reference/ccomobjectroot-class.md) gestisce oggetti aggregati e non aggregate nel conteggio dei riferimenti. Usa il valore predefinito del server del modello di threading.

- [Ccomaggobjec](../atl/reference/ccomaggobject-class.md) implementa `IUnknown` per un oggetto aggregato.

- [CComObject](../atl/reference/ccomobject-class.md) implementa `IUnknown` per un oggetto non aggregato.

- [CComPolyObject](../atl/reference/ccompolyobject-class.md) implementa `IUnknown` per oggetti aggregati e non aggregati. Usando `CComPolyObject` evita che dispone di entrambe `CComAggObject` e `CComObject` nel modulo. Un singolo `CComPolyObject` oggetto gestisce i casi sia aggregati e non aggregati.

- [CComObjectNoLock](../atl/reference/ccomobjectnolock-class.md) implementa `IUnknown` per un oggetto non aggregato, senza modificare il conteggio dei blocchi del modulo.

- [CComTearOffObject](../atl/reference/ccomtearoffobject-class.md) implementa `IUnknown` per un'interfaccia tear-off.

- [CComCachedTearOffObject](../atl/reference/ccomcachedtearoffobject-class.md) implementa `IUnknown` per un'interfaccia tear-off "cache".

- [CComContainedObject](../atl/reference/ccomcontainedobject-class.md) implementa `IUnknown` per l'oggetto interno di un'aggregazione o un'interfaccia tear-off.

- [CComObjectGlobal](../atl/reference/ccomobjectglobal-class.md) gestisce un conteggio di riferimento sul modulo per verificare che l'oggetto non verrà eliminato.

- [CComObjectStack](../atl/reference/ccomobjectstack-class.md) crea un oggetto COM temporaneo, con un'implementazione di base di `IUnknown`.

## <a name="related-articles"></a>Articoli correlati

[Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../atl/atl-class-overview.md)<br/>
[Macro di aggregazione e class factory](../atl/reference/aggregation-and-class-factory-macros.md)<br/>
[Macro di mappa COM](../atl/reference/com-map-macros.md)<br/>
[Funzioni globali di mappa COM](../atl/reference/com-map-global-functions.md)
