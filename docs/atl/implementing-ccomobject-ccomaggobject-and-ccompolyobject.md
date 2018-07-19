---
title: Implementazione di CComObject, Ccomaggobjec e CComPolyObject | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
f1_keywords:
- CComPolyObject
- CComAggObject
- CComObject
dev_langs:
- C++
helpviewer_keywords:
- CComPolyObject class, implementing
- CreateInstance method
- CComAggObject class
- CComObject class, implementing
ms.assetid: 5aabe938-104d-492e-9c41-9f7fb1c62098
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c3b1f8a0cf466e5364907dd87eefe8bbdc0a003d
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37848363"
---
# <a name="implementing-ccomobject-ccomaggobject-and-ccompolyobject"></a>Implementazione di CComObject, Ccomaggobjec e CComPolyObject
Le classi modello [CComObject](../atl/reference/ccomobject-class.md), [CComAggObject](../atl/reference/ccomaggobject-class.md), e [CComPolyObject](../atl/reference/ccompolyobject-class.md) sono sempre le classi derivate nella catena di ereditarietà. È loro responsabilità di gestire tutti i metodi nel `IUnknown`: `QueryInterface`, `AddRef`, e `Release`. È inoltre `CComAggObject` e `CComPolyObject` (se usato per gli oggetti aggregati) fornisce il conteggio dei riferimenti speciali e `QueryInterface` semantica necessaria per l'interno sconosciuto.  
  
 Se `CComObject`, `CComAggObject`, o `CComPolyObject` viene usato dipende dal fatto che si dichiara uno (o nessuna) delle macro seguenti:  
  
|Macro|Effetto|  
|-----------|------------|  
|DECLARE_NOT_AGGREGATABLE|Usa sempre `CComObject`.|  
|DECLARE_AGGREGATABLE|Viene utilizzato `CComAggObject` se l'oggetto è aggregato e `CComObject` in caso contrario. `CComCoClass` contiene la macro se nessuno dei viene * macro Aggregatable vengono dichiarati nella classe, si tratterà il valore predefinito.|  
|DECLARE_ONLY_AGGREGATABLE|Usa sempre `CComAggObject`. Restituisce un errore se l'oggetto non è aggregato.|  
|DECLARE_POLY_AGGREGATABLE|ATL crea un'istanza di **CComPolyObject\<CClasse >** quando `IClassFactory::CreateInstance` viene chiamato. Durante la creazione, viene controllato il valore di unknown esterno. Se è NULL, `IUnknown` viene implementata per un oggetto non aggregato. Se unknown esterno non è NULL, `IUnknown` è implementata per un oggetto aggregato.|  
  
 Il vantaggio dell'utilizzo `CComAggObject` e `CComObject` che rappresenta l'implementazione di `IUnknown` è ottimizzato per il tipo di oggetto da creare. Ad esempio, non aggregato è un oggetto solo un conteggio dei riferimenti, mentre un oggetto aggregato deve un conteggio dei riferimenti per sconosciuto interna sia un puntatore a unknown esterno.  
  
 Il vantaggio dell'utilizzo `CComPolyObject` non si rischia che dispone di entrambe `CComAggObject` e `CComObject` nel modulo per gestire i casi aggregati e non aggregati. Un singolo `CComPolyObject` oggetto gestisce entrambi i casi. Ciò significa che esiste solo una copia dell'oggetto vtable e una copia delle funzioni nel modulo. Se la vtable è grande, questo può ridurre notevolmente le dimensioni del modulo. Tuttavia, se la vtable è piccola, usando `CComPolyObject` può comportare una dimensione modulo leggermente maggiore perché non è ottimizzato per un oggetto aggregato o aggregato, perché sono `CComAggObject` e `CComObject`.  
  
## <a name="see-also"></a>Vedere anche  
 [Nozioni fondamentali su oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)   
 [Macro di aggregazione e class factory](../atl/reference/aggregation-and-class-factory-macros.md)

