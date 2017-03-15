---
title: "Supporto per IDispatch e IErrorInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IErrorInfo"
  - "IDispatch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IDispatch (supporto della classe in ATL)"
  - "IDispatchImpl (classe)"
  - "IErrorInfo (supporto della classe in ATL)"
  - "ISupportErrorInfoImpl (metodo)"
ms.assetid: 7db2220f-319d-4ce9-9382-d340019f14f7
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Supporto per IDispatch e IErrorInfo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare la classe modello [IDispatchImpl](../atl/reference/idispatchimpl-class.md) per fornire un'implementazione predefinita della parte `IDispatch Interface` di tutte le interfacce duali sull'oggetto.  
  
 Se l'oggetto utilizza l'interfaccia `IErrorInfo` per segnalare gli errori del client, l'oggetto dovrà supportare l'interfaccia `ISupportErrorInfo Interface`.  La classe modello [ISupportErrorInfoImpl](../atl/reference/isupporterrorinfoimpl-class.md) fornisce un modo semplice per distribuire questa operazione se si dispone di una sola interfaccia che genera errori nell'oggetto.  
  
## Vedere anche  
 [Fundamentals of ATL COM Objects](../atl/fundamentals-of-atl-com-objects.md)