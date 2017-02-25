---
title: "ATL Collection and Enumerator Classes | Microsoft Docs"
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
  - "classi di raccolte, ATL"
  - "enumeratori, ATL classes"
ms.assetid: 6818db73-7094-48d8-a0ca-18147beec362
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# ATL Collection and Enumerator Classes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

ATL fornisce le classi per aiutare l'utente a distribuire le raccolte e gli enumeratori.  
  
|Classe|Descrizione|  
|------------|-----------------|  
|[ICollectionOnSTLImpl](../atl/reference/icollectiononstlimpl-class.md)|Implementazione dell'interfaccia di raccolta|  
|[IEnumOnSTLImpl](../atl/reference/ienumonstlimpl-class.md)|Implementazione dell'enumeratore \(presuppone che i dati archiviati in un contenitore STL\- compatibile\)|  
|[CComEnumImpl](../atl/reference/ccomenumimpl-class.md)|Implementazione dell'enumeratore \(assume i dati archiviati in una matrice\)|  
|[CComEnumOnSTL](../atl/reference/ccomenumonstl-class.md)|Implementazione dell'oggetto enumerator \(utilizzare `IEnumOnSTLImpl`\)|  
|[CComEnum](../atl/reference/ccomenum-class.md)|Implementazione dell'oggetto enumerator \(utilizzare `CComEnumImpl`\)|  
|[\_Copy](../atl/atl-copy-policy-classes.md)|Classe criteri di copia|  
|[\_CopyInterface](../atl/atl-copy-policy-classes.md)|Classe criteri di copia|  
|[CAdapt](../atl/reference/cadapt-class.md)|Classe di adattatori \(nasconde **operator &** che consente `CComPtr`, `CComQIPtr`e `CComBSTR` da archiviare nei contenitori STL\)|  
  
## Vedere anche  
 [Raccolte ed enumeratori](../atl/atl-collections-and-enumerators.md)