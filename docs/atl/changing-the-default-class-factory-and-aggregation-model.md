---
description: 'Altre informazioni su: modifica della class factory e del modello di aggregazione predefiniti'
title: Modifica della class factory e del modello di aggregazione predefiniti
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
ms.openlocfilehash: b25dc1c2cf3378532f02b1c0d5ba56cd43ee4ae4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97148278"
---
# <a name="changing-the-default-class-factory-and-aggregation-model"></a>Modifica della class factory e del modello di aggregazione predefiniti

ATL utilizza [CComCoClass](../atl/reference/ccomcoclass-class.md) per definire il class factory e il modello di aggregazione predefiniti per l'oggetto. `CComCoClass` Specifica le due macro seguenti:

- [DECLARE_CLASSFACTORY](reference/aggregation-and-class-factory-macros.md#declare_classfactory) Dichiara l'class factory [CComClassFactory](../atl/reference/ccomclassfactory-class.md).

- [DECLARE_AGGREGATABLE](reference/aggregation-and-class-factory-macros.md#declare_aggregatable) Dichiara che l'oggetto può essere aggregato.

È possibile eseguire l'override di uno di questi valori predefiniti specificando un'altra macro nella definizione della classe. Ad esempio, per usare [CComClassFactory2](../atl/reference/ccomclassfactory2-class.md) anziché `CComClassFactory` , specificare la macro [DECLARE_CLASSFACTORY2](reference/aggregation-and-class-factory-macros.md#declare_classfactory2) :

[!code-cpp[NVC_ATL_COM#2](../atl/codesnippet/cpp/changing-the-default-class-factory-and-aggregation-model_1.h)]

Sono [DECLARE_CLASSFACTORY_AUTO_THREAD](reference/aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) e [DECLARE_CLASSFACTORY_SINGLETON](reference/aggregation-and-class-factory-macros.md#declare_classfactory_singleton)altre due macro che definiscono un class factory.

ATL utilizza inoltre il **`typedef`** meccanismo per implementare il comportamento predefinito. Ad esempio, la macro DECLARE_AGGREGATABLE USA **`typedef`** per definire un tipo denominato `_CreatorClass` , a cui viene fatto riferimento in tutti gli ATL. Si noti che in una classe derivata, un oggetto che **`typedef`** Usa lo stesso nome dei risultati della classe base **`typedef`** in ATL USA la definizione ed esegue l'override del comportamento predefinito.

## <a name="see-also"></a>Vedi anche

[Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)<br/>
[Macro di aggregazione e di class factory](../atl/reference/aggregation-and-class-factory-macros.md)
