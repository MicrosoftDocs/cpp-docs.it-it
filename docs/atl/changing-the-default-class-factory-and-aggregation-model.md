---
title: Modifica la Class Factory predefinita e il modello di aggregazione
ms.date: 11/04/2016
helpviewer_keywords:
- CComClassFactory class, making the default
- aggregation [C++], using ATL
- aggregation [C++], aggregation models
- defaults [C++], aggregation model in ATL
- default class factory
- class factories, changing default
- CComCoClass class, default class factory and aggregation model
- default class factory, ATL
- defaults [C++], class factory
ms.assetid: 6e040e95-0f38-4839-8a8b-c9800dd47e8c
ms.openlocfilehash: 34e838eea201f96acd7dcc647c4410fb244c8424
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50485545"
---
# <a name="changing-the-default-class-factory-and-aggregation-model"></a>Modifica la Class Factory predefinita e il modello di aggregazione

Usa ATL [CComCoClass](../atl/reference/ccomcoclass-class.md) per definire la classe factory e l'aggregazione modello predefinito per l'oggetto. `CComCoClass` Specifica le due macro seguenti:

- [DECLARE_CLASSFACTORY](reference/aggregation-and-class-factory-macros.md#declare_classfactory) dichiara la class factory per essere [CComClassFactory](../atl/reference/ccomclassfactory-class.md).

- [DECLARE_AGGREGATABLE](reference/aggregation-and-class-factory-macros.md#declare_aggregatable) dichiara che è possibile aggregare l'oggetto.

È possibile eseguire l'override di uno di questi valori predefiniti specificando un'altra macro nella definizione della classe. Ad esempio, per usare [CComClassFactory2](../atl/reference/ccomclassfactory2-class.md) invece di `CComClassFactory`, specificare il [macro DECLARE_CLASSFACTORY2](reference/aggregation-and-class-factory-macros.md#declare_classfactory2) macro:

[!code-cpp[NVC_ATL_COM#2](../atl/codesnippet/cpp/changing-the-default-class-factory-and-aggregation-model_1.h)]

Altre due macro che definiscono una class factory viene [: DECLARE_CLASSFACTORY_AUTO_THREAD](reference/aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) e [DECLARE_CLASSFACTORY_SINGLETON](reference/aggregation-and-class-factory-macros.md#declare_classfactory_singleton).

ATL Usa anche il **typedef** meccanismo per implementare il comportamento predefinito. Ad esempio, Usa la macro DECLARE_AGGREGATABLE **typedef** per definire un tipo denominato `_CreatorClass`, cui viene fatto riferimento in ATL. Si noti che in una classe derivata, una **typedef** usando lo stesso nome della classe base **typedef** comporta ATL utilizzando la definizione e si esegue l'override del comportamento predefinito.

## <a name="see-also"></a>Vedere anche

[Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)<br/>
[Macro di aggregazione e class factory](../atl/reference/aggregation-and-class-factory-macros.md)

