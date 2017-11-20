---
title: Modifica la Class Factory predefinita e il modello di aggregazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
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
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: a963c1fba2d3eda9c86fa1e6db74de739bf45182
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="changing-the-default-class-factory-and-aggregation-model"></a>Modifica la Class Factory predefinita e il modello di aggregazione
Utilizza ATL [CComCoClass](../atl/reference/ccomcoclass-class.md) per definire la classe factory e l'aggregazione modello predefinito per l'oggetto. `CComCoClass`Specifica le due macro seguenti:  
  
-   [DECLARE_CLASSFACTORY](reference/aggregation-and-class-factory-macros.md#declare_classfactory) dichiara la class factory da [CComClassFactory](../atl/reference/ccomclassfactory-class.md).  
  
-   [DECLARE_AGGREGATABLE](reference/aggregation-and-class-factory-macros.md#declare_aggregatable) dichiara che è possibile aggregare l'oggetto.  
  
 È possibile eseguire l'override di una di queste impostazioni predefinite specificando un'altra macro nella definizione della classe. Ad esempio, per usare [CComClassFactory2](../atl/reference/ccomclassfactory2-class.md) anziché `CComClassFactory`, specificare il [macro DECLARE_CLASSFACTORY2](reference/aggregation-and-class-factory-macros.md#declare_classfactory2) macro:  
  
 [!code-cpp[NVC_ATL_COM#2](../atl/codesnippet/cpp/changing-the-default-class-factory-and-aggregation-model_1.h)]  
  
 Altre due macro che definiscono una class factory è [: DECLARE_CLASSFACTORY_AUTO_THREAD](reference/aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) e [DECLARE_CLASSFACTORY_SINGLETON](reference/aggregation-and-class-factory-macros.md#declare_classfactory_singleton).  
  
 ATL Usa anche il `typedef` meccanismo per implementare il comportamento predefinito. Ad esempio, il `DECLARE_AGGREGATABLE` macro utilizza `typedef` per definire un tipo denominato **CreatorClass**, cui viene fatto riferimento in ATL. Si noti che in una classe derivata, un `typedef` utilizzando lo stesso nome della classe base `typedef` comporta ATL utilizzando la definizione e si esegue l'override del comportamento predefinito.  
  
## <a name="see-also"></a>Vedere anche  
 [Nozioni di base di oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)   
 [Macro di aggregazione e class factory](../atl/reference/aggregation-and-class-factory-macros.md)

