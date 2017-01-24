---
title: "CDefaultCompareTraits Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CDefaultCompareTraits<T>"
  - "ATL::CDefaultCompareTraits"
  - "ATL.CDefaultCompareTraits"
  - "ATL::CDefaultCompareTraits<T>"
  - "CDefaultCompareTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDefaultCompareTraits class"
ms.assetid: a17e2740-e7b4-48f2-aeb7-c80ce84b63f7
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDefaultCompareTraits Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce funzioni di confronto predefinite dell'elemento.  
  
## Sintassi  
  
```  
  
      template<  
   typename T  
>  
class CDefaultCompareTraits  
```  
  
#### Parametri  
 `T`  
 Il tipo di dati da archiviare nella libreria.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDefaultCompareTraits::CompareElements](../Topic/CDefaultCompareTraits::CompareElements.md)|\(Proprietà statica\) chiamare questa funzione per confrontare due elementi per uguaglianza.|  
|[CDefaultCompareTraits::CompareElementsOrdered](../Topic/CDefaultCompareTraits::CompareElementsOrdered.md)|\(Proprietà statica\) chiamare questa funzione per determinare la maggiore e poco elemento.|  
  
## Note  
 Questa classe contiene due funzioni statiche per confrontare gli elementi archiviati in un oggetto classe di raccolte.  Questa classe viene utilizzata da [classe di CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md).  
  
 Per ulteriori informazioni, vedere [Classi di raccolte ATL](../../atl/atl-collection-classes.md).  
  
## Requisiti  
 **Header:** atlcoll.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)