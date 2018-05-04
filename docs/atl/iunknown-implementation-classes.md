---
title: Classi di implementazione di IUnknown (ATL) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.atl.Iunknown
dev_langs:
- C++
helpviewer_keywords:
- IUnknown implementation classes
ms.assetid: 47b69bb5-69d8-4a9c-84a8-329bdde2bb3f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3d67b2a7b9769acd7d6e596e4fcdf1aec30bbf74
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="iunknown-implementation-classes"></a>Classi di implementazione di IUnknown
Le seguenti classi implementano **IUnknown** e metodi correlati:  
  
-   [CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) gestisce per oggetti aggregati e non aggregati di conteggio dei riferimenti. Consente di specificare un modello di threading.  
  
-   [CComObjectRoot](../atl/reference/ccomobjectroot-class.md) gestisce per oggetti aggregati e non aggregati di conteggio dei riferimenti. Usa il valore predefinito di threading di modello del server.  
  
-   [CComAggObject](../atl/reference/ccomaggobject-class.md) implementa **IUnknown** per un oggetto aggregato.  
  
-   [CComObject](../atl/reference/ccomobject-class.md) implementa **IUnknown** per un oggetto non aggregato.  
  
-   [CComPolyObject](../atl/reference/ccompolyobject-class.md) implementa **IUnknown** per gli oggetti aggregati e non aggregati. Utilizzando `CComPolyObject` evita entrambi `CComAggObject` e `CComObject` nel modulo. Un singolo `CComPolyObject` sia dei casi aggregati e gestisce l'oggetto.  
  
-   [CComObjectNoLock](../atl/reference/ccomobjectnolock-class.md) implementa **IUnknown** per un oggetto non aggregato, senza modificare il conteggio dei blocchi del modulo.  
  
-   [CComTearOffObject](../atl/reference/ccomtearoffobject-class.md) implementa **IUnknown** per un'interfaccia tear-off.  
  
-   [CComCachedTearOffObject](../atl/reference/ccomcachedtearoffobject-class.md) implementa **IUnknown** per un'interfaccia tear-off "memorizzato nella cache".  
  
-   [CComContainedObject](../atl/reference/ccomcontainedobject-class.md) implementa **IUnknown** per l'oggetto interno di un'aggregazione o un'interfaccia tear-off.  
  
-   [CComObjectGlobal](../atl/reference/ccomobjectglobal-class.md) gestisce un conteggio dei riferimenti per il modulo per verificare che l'oggetto non verrà eliminato.  
  
-   [CComObjectStack](../atl/reference/ccomobjectstack-class.md) crea un oggetto COM temporaneo, tramite un'implementazione di base di **IUnknown**.  
  
## <a name="related-articles"></a>Articoli correlati  
 [Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../atl/atl-class-overview.md)   
 [Aggregazione e macro di Class Factory](../atl/reference/aggregation-and-class-factory-macros.md)   
 [Macro della mappa COM](../atl/reference/com-map-macros.md)   
 [Funzioni globali di mappa COM](../atl/reference/com-map-global-functions.md)

