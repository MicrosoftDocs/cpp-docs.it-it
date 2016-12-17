---
title: "CDefaultElementTraits Class | Microsoft Docs"
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
  - "ATL::CDefaultElementTraits<T>"
  - "ATL.CDefaultElementTraits"
  - "ATL::CDefaultElementTraits"
  - "ATL.CDefaultElementTraits<T>"
  - "CDefaultElementTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDefaultElementTraits class"
ms.assetid: ac5ee610-7957-4b7c-92b6-38ff72e4118e
caps.latest.revision: 17
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDefaultElementTraits Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce i metodi e funzioni per una classe di raccolte.  
  
## Sintassi  
  
```  
  
      template<  
   typename T  
>  
class CDefaultElementTraits : public CElementTraitsBase< T >,  
   public CDefaultHashTraits< T >,  
   public CDefaultCompareTraits< T >  
```  
  
#### Parametri  
 `T`  
 Il tipo di dati da archiviare nella libreria.  
  
## Note  
 Questa classe fornisce funzioni statiche predefinite e metodi per lo spostamento, la copia, confrontare e l'hashing degli elementi memorizzati in una classe di raccolte oggetto.  Questa classe deriva le funzioni e metodi da [CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md), da [CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)e da [CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)e utilizzata da [CElementTraits](../../atl/reference/celementtraits-class.md), da [CPrimitiveElementTraits](../../atl/reference/cprimitiveelementtraits-class.md)e da [CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md).  
  
 Per ulteriori informazioni, vedere [Classi di raccolte ATL](../../atl/atl-collection-classes.md).  
  
## Requisiti  
 **Header:** atlcoll.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)