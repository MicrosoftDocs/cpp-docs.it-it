---
title: "Changing the Default Class Factory and Aggregation Model | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "aggregation [C++], aggregation models"
  - "aggregation [C++], mediante ATL"
  - "CComClassFactory class, making the default"
  - "CComCoClass class, default class factory and aggregation model"
  - "class factories, modifica predefiniti"
  - "default class factory"
  - "default class factory, ATL"
  - "impostazioni predefinite [C++], aggregation model in ATL"
  - "impostazioni predefinite [C++], class factory"
ms.assetid: 6e040e95-0f38-4839-8a8b-c9800dd47e8c
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Changing the Default Class Factory and Aggregation Model
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare [CComCoClass](../atl/reference/ccomcoclass-class.md) ATL definire la factory della classe predefinita e il modello di aggregazione per l'oggetto.  `CComCoClass` specifica le seguenti due macro:  
  
-   [DECLARE\_CLASSFACTORY](../Topic/DECLARE_CLASSFACTORY.md) dichiara la class factory per essere [CComClassFactory](../atl/reference/ccomclassfactory-class.md).  
  
-   [DECLARE\_AGGREGATABLE](../Topic/DECLARE_AGGREGATABLE.md) indicare che l'oggetto può essere aggregatoe.  
  
 È possibile eseguire l'override di queste impostazioni predefinite specificando un'altra macro nella definizione della classe.  Ad esempio, per utilizzare [CComClassFactory2](../atl/reference/ccomclassfactory2-class.md) anziché `CComClassFactory`, specificare la macro [DECLARE\_CLASSFACTORY2](../Topic/DECLARE_CLASSFACTORY2.md) :  
  
 [!code-cpp[NVC_ATL_COM#2](../atl/codesnippet/CPP/changing-the-default-class-factory-and-aggregation-model_1.h)]  
  
 Altre due macro che definiscono una class factory sono [DECLARE\_CLASSFACTORY\_AUTO\_THREAD](../Topic/DECLARE_CLASSFACTORY_AUTO_THREAD.md) e [DECLARE\_CLASSFACTORY\_SINGLETON](../Topic/DECLARE_CLASSFACTORY_SINGLETON.md).  
  
 ATL utilizza il meccanismo `typedef` per implementare il comportamento predefinito.  Ad esempio, la macro `DECLARE_AGGREGATABLE` utilizza `typedef` per definire un tipo denominato **\_CreatorClass**, che viene fatto riferimento in qualsiasi ATL.  Si noti che in una classe derivata, `typedef` utilizzando gli stessi nomi dei risultati `typedef` della classe base in ATL mediante la definizione di eseguire l'override del comportamento predefinito.  
  
## Vedere anche  
 [Fundamentals of ATL COM Objects](../atl/fundamentals-of-atl-com-objects.md)   
 [Aggregation and Class Factory Macros](../atl/reference/aggregation-and-class-factory-macros.md)