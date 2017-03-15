---
title: "Multiple Dual Interfaces | Microsoft Docs"
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
  - "COM_INTERFACE_ENTRY_IID macro"
  - "COM_INTERFACE_ENTRY2 macro"
  - "interfacce duali, exposing multiple"
  - "IDispatchImpl (classe), multiple dual interfaces"
  - "multiple dual interfaces"
  - "multiple dual interfaces, exposing with ATL"
ms.assetid: 7fea86e6-247f-4063-be6e-85588a9e3719
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Multiple Dual Interfaces
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile combinare i vantaggi di un'interfaccia duale \(ovvero la flessibilità di vtable che l'associazione tardiva, pertanto rendendo disponibili la classe dei linguaggi di script e C\+\+ con le tecniche di ereditarietà multipla.  
  
 Sebbene sia possibile esporre le interfacce duali più su un singolo oggetto COM, non è consigliabile.  Se sono presenti più interfacce duali, deve esistere solo un'interfaccia `IDispatch` esposta.  Le tecniche disponibili assicurarsi che questo caso trasportano le pene come perdita di funzione o di aumenta la complessità di codice.  Lo sviluppatore che considera questo approccio deve valutare attentamente i vantaggi e gli svantaggi.  
  
## Esporre una singola interfaccia IDispatch  
 È possibile esporre le interfacce duali più su un singolo oggetto derivazione da due o più specializzazioni `IDispatchImpl`.  Tuttavia, se si consente ai client alla query per l'interfaccia `IDispatch`, è necessario utilizzare la macro [COM\_INTERFACE\_ENTRY2](../Topic/COM_INTERFACE_ENTRY2.md) \(o [COM\_INTERFACE\_ENTRY\_IID](../Topic/COM_INTERFACE_ENTRY_IID.md)\) per specificare che una classe base da utilizzare per l'implementazione `IDispatch`.  
  
 [!code-cpp[NVC_ATL_COM#23](../atl/codesnippet/CPP/multiple-dual-interfaces_1.h)]  
  
 Poiché solo un'interfaccia `IDispatch` viene esposta, i client che possono accedere solo gli oggetti tramite l'interfaccia `IDispatch` non saranno in grado di accedere ai metodi o le proprietà in qualsiasi altra interfaccia.  
  
## Combinando le interfacce duali multiple in un'unica implementazione IDispatch  
 ATL non fornisce alcun supporto per combinare le interfacce duali multiple in un'unica implementazione `IDispatch`.  Tuttavia, esistono numerosi approcci noti manualmente a combinare le interfacce, come creare una classe basata su modelli che contiene un'unione delle interfacce distinte `IDispatch`, creando un nuovo oggetto per eseguire la funzione `QueryInterface`, o tramite a un'implementazione basata typeinfo degli oggetti annidati per creare l'interfaccia `IDispatch`.  
  
 Questi approcci hanno problemi con i conflitti potenziali dello spazio dei nomi nonché della complessità e la manutenibilità.  Non è consigliabile creare le interfacce duali più.  
  
## Vedere anche  
 [Dual Interfaces and ATL](../atl/dual-interfaces-and-atl.md)