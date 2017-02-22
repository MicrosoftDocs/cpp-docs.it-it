---
title: "CStringElementTraits Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CStringElementTraits<T>"
  - "ATL::CStringElementTraits<T>"
  - "CStringElementTraits"
  - "ATL.CStringElementTraits"
  - "ATL::CStringElementTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CStringElementTraits class"
ms.assetid: 74d7134b-099d-4455-bf91-3e68ccbf95bc
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CStringElementTraits Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce funzioni statiche utilizzate dalle classi di raccolte che archiviano gli oggetti `CString`.  
  
## Sintassi  
  
```  
  
      template<  
   typename T   
>  
class CStringElementTraits  
```  
  
#### Parametri  
 `T`  
 Il tipo di dati da archiviare nella libreria.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStringElementTraits::INARGTYPE](../Topic/CStringElementTraits::INARGTYPE.md)|Il tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe di raccolte.|  
|[CStringElementTraits::OUTARGTYPE](../Topic/CStringElementTraits::OUTARGTYPE.md)|Il tipo di dati da utilizzare per recuperare gli elementi dall'oggetto classe di raccolte.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStringElementTraits::CompareElements](../Topic/CStringElementTraits::CompareElements.md)|\(Proprietà statica\) chiamare questa funzione per confrontare due elementi stringa per uguaglianza.|  
|[CStringElementTraits::CompareElementsOrdered](../Topic/CStringElementTraits::CompareElementsOrdered.md)|\(Proprietà statica\) chiamare questa funzione per confrontare due elementi della stringa.|  
|[CStringElementTraits::CopyElements](../Topic/CStringElementTraits::CopyElements.md)|\(Proprietà statica\) chiamare questa funzione per copiare elementi `CString` archiviati in un oggetto classe di raccolte.|  
|[CStringElementTraits::Hash](../Topic/CStringElementTraits::Hash.md)|\(Proprietà statica\) chiamare questa funzione per calcolare un valore hash per l'elemento specificato della stringa.|  
|[CStringElementTraits::RelocateElements](../Topic/CStringElementTraits::RelocateElements.md)|\(Proprietà statica\) chiamare questa funzione per riassegnare gli elementi `CString` archiviati in un oggetto classe di raccolte.|  
  
## Note  
 Questa classe fornisce funzioni statiche per copiare, spostare e il confronto di stringhe e creare un valore hash.  Queste funzioni sono utili quando si utilizza una classe di raccolte da archiviare dati basati su stringa.  Utilizzo [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md) quando i confronti senza distinzione tra maiuscole e minuscole sono necessari.  Utilizzare [CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md) quando gli oggetti stringa devono interagire con come riferimenti.  
  
 Per ulteriori informazioni, vedere [Classi di raccolte ATL](../../atl/atl-collection-classes.md).  
  
## Requisiti  
 **Header:** cstringt.h  
  
## Vedere anche  
 [CElementTraitsBase Class](../../atl/reference/celementtraitsbase-class.md)   
 [CStringElementTraitsI Class](../../atl/reference/cstringelementtraitsi-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)