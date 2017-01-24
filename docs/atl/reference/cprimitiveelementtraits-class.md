---
title: "CPrimitiveElementTraits Class | Microsoft Docs"
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
  - "ATL.CPrimitiveElementTraits<T>"
  - "CPrimitiveElementTraits"
  - "ATL.CPrimitiveElementTraits"
  - "ATL::CPrimitiveElementTraits<T>"
  - "ATL::CPrimitiveElementTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPrimitiveElementTraits class"
ms.assetid: 21c1cea8-2c5a-486c-b65c-85490f3ed4e6
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CPrimitiveElementTraits Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce i metodi e funzioni per una classe di raccolte composta dei tipi di dati primitivi.  
  
## Sintassi  
  
```  
  
      template<  
   typename T  
> class CPrimitiveElementTraits :   
   public CDefaultElementTraits< T >  
```  
  
#### Parametri  
 `T`  
 Il tipo di dati da archiviare nell'oggetto classe di raccolte.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrimitiveElementTraits::INARGTYPE](../Topic/CPrimitiveElementTraits::INARGTYPE.md)|Il tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe di raccolte.|  
|[CPrimitiveElementTraits::OUTARGTYPE](../Topic/CPrimitiveElementTraits::OUTARGTYPE.md)|Il tipo di dati da utilizzare per recuperare gli elementi dall'oggetto classe di raccolte.|  
  
## Note  
 Questa classe fornisce funzioni statiche predefinite e metodi per lo spostamento, la copia, confrontare e l'hashing degli elementi di tipo di dati primitivi archiviati in una classe di raccolte oggetto.  
  
 Per ulteriori informazioni, vedere [Classi di raccolte ATL](../../atl/atl-collection-classes.md).  
  
## Gerarchia di ereditarietà  
 [CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)  
  
 [CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)  
  
 [CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)  
  
 [CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)  
  
 `CPrimitiveElementTraits`  
  
## Requisiti  
 **Header:** atlcoll.h  
  
## Vedere anche  
 [CDefaultElementTraits Class](../../atl/reference/cdefaultelementtraits-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)