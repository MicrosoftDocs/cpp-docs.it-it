---
title: "Aggregation and Class Factory Macros | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "aggregation [C++], ATL macros"
  - "class factories, ATL macros"
ms.assetid: d99d379a-0eec-481f-8daa-252dac18f163
caps.latest.revision: 17
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggregation and Class Factory Macros
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Queste macro forniscono modalità di controllo dell'aggregazione e di dichiarazione delle class factory.  
  
|||  
|-|-|  
|[DECLARE\_AGGREGATABLE](../Topic/DECLARE_AGGREGATABLE.md)|Dichiara che l'oggetto può essere aggregatoe \(impostazione predefinita\).|  
|[DECLARE\_CLASSFACTORY](../Topic/DECLARE_CLASSFACTORY.md)|Dichiara il class factory per essere [CComClassFactory](../../atl/reference/ccomclassfactory-class.md), la factory la classe predefinita ATL.|  
|[DECLARE\_CLASSFACTORY\_EX](../Topic/DECLARE_CLASSFACTORY_EX.md)|Dichiara l'oggetto class factory per essere il class factory.|  
|[DECLARE\_CLASSFACTORY2](../Topic/DECLARE_CLASSFACTORY2.md)|Dichiara [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md) per essere il class factory.|  
|[DECLARE\_CLASSFACTORY\_AUTO\_THREAD](../Topic/DECLARE_CLASSFACTORY_AUTO_THREAD.md)|Dichiara [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) per essere il class factory.|  
|[DECLARE\_CLASSFACTORY\_SINGLETON](../Topic/DECLARE_CLASSFACTORY_SINGLETON.md)|Dichiara [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md) per essere il class factory.|  
|[DECLARE\_GET\_CONTROLLING\_UNKNOWN](../Topic/DECLARE_GET_CONTROLLING_UNKNOWN.md)|Dichiara una funzione virtuale `GetControllingUnknown`.|  
|[DECLARE\_NOT\_AGGREGATABLE](../Topic/DECLARE_NOT_AGGREGATABLE.md)|Dichiara che l'oggetto non può essere aggregatoe.|  
|[DECLARE\_ONLY\_AGGREGATABLE](../Topic/DECLARE_ONLY_AGGREGATABLE.md)|Dichiara che l'oggetto deve essere aggregatoe.|  
|[DECLARE\_POLY\_AGGREGATABLE](../Topic/DECLARE_POLY_AGGREGATABLE.md)|Controlla il valore di sconosciuto esterno e dichiara l'oggetto aggregabile o non aggregabile, in base alle esigenze.|  
|[DECLARE\_PROTECT\_FINAL\_CONSTRUCT](../Topic/DECLARE_PROTECT_FINAL_CONSTRUCT.md)|Protegge l'oggetto esterno da utilizzare durante la costruzione di un oggetto interno.|  
|[DECLARE\_VIEW\_STATUS](../Topic/DECLARE_VIEW_STATUS.md)|Specifica i flag **VIEWSTATUS** al contenitore.|  
  
## Vedere anche  
 [Macros](../../atl/reference/atl-macros.md)