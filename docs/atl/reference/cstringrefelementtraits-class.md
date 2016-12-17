---
title: "CStringRefElementTraits Class | Microsoft Docs"
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
  - "CStringRefElementTraits"
  - "ATL.CStringRefElementTraits"
  - "ATL::CStringRefElementTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CStringRefElementTraits class"
ms.assetid: cc15062d-5627-46cc-ac2b-1744afdc2dbd
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CStringRefElementTraits Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce funzioni statiche correlate alle stringhe memorizzate negli oggetti della classe di raccolte.  Gli oggetti stringa all'utilizzo di come riferimenti.  
  
## Sintassi  
  
```  
  
      template<   
   typename T  
>  
class CStringRefElementTraits : public CElementTraitsBase< T >  
```  
  
#### Parametri  
 `T`  
 Il tipo di dati da archiviare nella libreria.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStringRefElementTraits::CompareElements](../Topic/CStringRefElementTraits::CompareElements.md)|Chiamare questa funzione statica per confrontare due elementi stringa per uguaglianza.|  
|[CStringRefElementTraits::CompareElementsOrdered](../Topic/CStringRefElementTraits::CompareElementsOrdered.md)|Chiamare questa funzione statica per confrontare due elementi della stringa.|  
|[CStringRefElementTraits::Hash](../Topic/CStringRefElementTraits::Hash.md)|Chiamare questa funzione statica per calcolare un valore hash per l'elemento specificato della stringa.|  
  
## Note  
 Questa classe fornisce funzioni statiche per confrontare le stringhe e creare un valore hash.  Queste funzioni sono utili quando si utilizza una classe di raccolte da archiviare dati basati su stringa.  A differenza [CStringElementTraits](../../atl/reference/cstringelementtraits-class.md) e [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md), `CStringRefElementTraits` negli argomenti `CString` venga passato come riferimenti **const CString&**.  
  
 Per ulteriori informazioni, vedere [Classi di raccolte ATL](../../atl/atl-collection-classes.md).  
  
## Gerarchia di ereditarietà  
 [CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)  
  
 `CStringRefElementTraits`  
  
## Requisiti  
 **Header:** atlcoll.h  
  
## Vedere anche  
 [CElementTraitsBase Class](../../atl/reference/celementtraitsbase-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)