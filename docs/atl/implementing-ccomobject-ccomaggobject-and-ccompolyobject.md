---
title: Implementazione di CComObject, CComAggObject e CComPolyObject | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CComPolyObject
- CComAggObject
- CComObject
dev_langs: C++
helpviewer_keywords:
- CComPolyObject class, implementing
- CreateInstance method
- CComAggObject class
- CComObject class, implementing
ms.assetid: 5aabe938-104d-492e-9c41-9f7fb1c62098
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: bb74d68bb8974f820ac09a0c56930d835a3fe7f3
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="implementing-ccomobject-ccomaggobject-and-ccompolyobject"></a>Implementazione di CComObject, CComAggObject e CComPolyObject
Classi modello [CComObject](../atl/reference/ccomobject-class.md), [CComAggObject](../atl/reference/ccomaggobject-class.md), e [CComPolyObject](../atl/reference/ccompolyobject-class.md) sono sempre le classi nella catena di ereditarietà. È responsabilità di gestire tutti i metodi in **IUnknown**: `QueryInterface`, `AddRef`, e **versione**. Inoltre, `CComAggObject` e `CComPolyObject` (quando viene utilizzato per gli oggetti aggregati) fornisce il conteggio speciale e `QueryInterface` semantica necessaria per l'inner unknown.  
  
 Se `CComObject`, `CComAggObject`, o `CComPolyObject` utilizzato varia a seconda se si dichiara uno o nessuno delle macro seguenti:  
  
|Macro|Effetto|  
|-----------|------------|  
|`DECLARE_NOT_AGGREGATABLE`|Usa sempre `CComObject`.|  
|`DECLARE_AGGREGATABLE`|Usa `CComAggObject` se l'oggetto è aggregato e `CComObject` in caso contrario. `CComCoClass`contiene la macro se nessuno del **viene\*Aggregatable** macro vengono dichiarati nella classe, questo sarà il valore predefinito.|  
|`DECLARE_ONLY_AGGREGATABLE`|Usa sempre `CComAggObject`. Restituisce un errore se l'oggetto non è aggregato.|  
|`DECLARE_POLY_AGGREGATABLE`|ATL crea un'istanza di **CComPolyObject\<CClasse >** quando **IClassFactory::CreateInstance** viene chiamato. Durante la creazione, viene controllato il valore unknown esterno. Se è **NULL**, **IUnknown** è implementata per un oggetto non aggregato. Se non è unknown esterno **NULL**, **IUnknown** è implementata per un oggetto aggregato.|  
  
 Il vantaggio dell'utilizzo `CComAggObject` e `CComObject` è che l'implementazione di **IUnknown** è ottimizzato per il tipo di oggetto creato. Ad esempio, un oggetto non aggregato solo un conteggio dei riferimenti, mentre un oggetto aggregato deve un conteggio dei riferimenti per l'inner unknown sia un puntatore a unknown esterno.  
  
 Il vantaggio dell'utilizzo `CComPolyObject` è che si evita che entrambi `CComAggObject` e `CComObject` nel modulo per gestire i casi aggregati e non aggregati. Un singolo `CComPolyObject` oggetto gestisce entrambi i casi. Ciò significa che nel modulo è presente solo una copia dell'oggetto vtable e una copia delle funzioni. Se la vtable è elevata, questo può ridurre notevolmente le dimensioni del modulo. Tuttavia, se la vtable è piccola, utilizzando `CComPolyObject` può comportare una dimensione leggermente maggiore di modulo perché non è ottimizzato per un oggetto aggregato o aggregato, come `CComAggObject` e `CComObject`.  
  
## <a name="see-also"></a>Vedere anche  
 [Nozioni di base di oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)   
 [Macro di aggregazione e class factory](../atl/reference/aggregation-and-class-factory-macros.md)

