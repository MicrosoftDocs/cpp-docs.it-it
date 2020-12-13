---
description: 'Altre informazioni su: implementazione di CComObject, Ccomaggobjec e CComPolyObject'
title: Implementazione di CComObject, CComAggObject e CComPolyObject
ms.date: 11/04/2016
helpviewer_keywords:
- CComPolyObject class, implementing
- CreateInstance method
- CComAggObject class
- CComObject class, implementing
ms.assetid: 5aabe938-104d-492e-9c41-9f7fb1c62098
ms.openlocfilehash: e0cc8a6b65ec9d85249cd47e2f43cf1bec2b8ce2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97147771"
---
# <a name="implementing-ccomobject-ccomaggobject-and-ccompolyobject"></a>Implementazione di CComObject, CComAggObject e CComPolyObject

Le classi modello [CComObject](../atl/reference/ccomobject-class.md), [ccomaggobjec](../atl/reference/ccomaggobject-class.md)e [CComPolyObject](../atl/reference/ccompolyobject-class.md) sono sempre le classi più derivate nella catena di ereditarietà. È responsabilità della gestione di tutti i metodi in `IUnknown` : `QueryInterface` , `AddRef` e `Release` . Inoltre, `CComAggObject` e `CComPolyObject` (se utilizzati per gli oggetti aggregati) forniscono la semantica e il conteggio dei riferimenti speciali `QueryInterface` necessari per l'oggetto sconosciuto interno.

Se `CComObject` si `CComAggObject` USA, o, `CComPolyObject` dipende dal fatto che si dichiari una o nessuna delle macro seguenti:

|Macro|Effetto|
|-----------|------------|
|DECLARE_NOT_AGGREGATABLE|Usa sempre `CComObject` .|
|DECLARE_AGGREGATABLE|Utilizza `CComAggObject` se l'oggetto è aggregato e in `CComObject` caso contrario. `CComCoClass` contiene questa macro, pertanto se nessuna delle macro DECLARE_ * _AGGREGATABLE è dichiarata nella classe, questo sarà il valore predefinito.|
|DECLARE_ONLY_AGGREGATABLE|Usa sempre `CComAggObject` . Restituisce un errore se l'oggetto non è aggregato.|
|DECLARE_POLY_AGGREGATABLE|ATL crea un'istanza di **CComPolyObject \<CYourClass>** quando `IClassFactory::CreateInstance` viene chiamato il metodo. Durante la creazione, il valore dell'oggetto sconosciuto esterno viene controllato. Se è NULL, `IUnknown` viene implementato per un oggetto non aggregato. Se l'oggetto sconosciuto esterno non è NULL, `IUnknown` viene implementato per un oggetto aggregato.|

Il vantaggio dell'utilizzo di `CComAggObject` e `CComObject` è che l'implementazione di `IUnknown` è ottimizzata per il tipo di oggetto creato. Un oggetto non aggregato, ad esempio, richiede solo un conteggio dei riferimenti, mentre un oggetto aggregato necessita sia di un conteggio dei riferimenti per l'oggetto sconosciuto interno che di un puntatore all'oggetto sconosciuto esterno.

Il vantaggio dell'utilizzo di è la possibilità di `CComPolyObject` evitare `CComAggObject` che `CComObject` nel modulo sia e nel modulo di gestire i case aggregati e non aggregati. Un singolo `CComPolyObject` oggetto gestisce entrambi i casi. Ciò significa che nel modulo esiste una sola copia di vtable e una copia delle funzioni. Se la tabella vtable è di grandi dimensioni, è possibile ridurre notevolmente le dimensioni del modulo. Tuttavia, se il valore vtable è ridotto, l'utilizzo di `CComPolyObject` può comportare una dimensione del modulo leggermente maggiore perché non è ottimizzato per un oggetto aggregato o non aggregato, così come sono `CComAggObject` e `CComObject` .

## <a name="see-also"></a>Vedi anche

[Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)<br/>
[Macro di aggregazione e di class factory](../atl/reference/aggregation-and-class-factory-macros.md)
