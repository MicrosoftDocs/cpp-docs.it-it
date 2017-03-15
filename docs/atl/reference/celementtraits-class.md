---
title: "CElementTraits Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CElementTraits<T>"
  - "ATL::CElementTraits"
  - "ATL.CElementTraits"
  - "ATL::CElementTraits<T>"
  - "CElementTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CElementTraits class"
ms.assetid: 496528e5-7f80-4b45-be0c-6f646feb43c5
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 20
---
# CElementTraits Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe utilizzata dalle classi di raccolte per fornire metodi e funzioni per lo spostamento, la copia, il confronto e l'hashing operazioni.  
  
## Sintassi  
  
```  
  
      template<  
   typename T  
>  
class CElementTraits : public CDefaultElementTraits< T >  
```  
  
#### Parametri  
 `T`  
 Il tipo di dati da archiviare nella libreria.  
  
## Note  
 Questa classe fornisce funzioni statiche predefinite e metodi per lo spostamento, la copia, confrontare e l'hashing degli elementi memorizzati in una classe di raccolte oggetto.  `CElementTraits` viene specificato come provider predefinito di queste operazioni dalle classi di raccolte [CAtlArray](../../atl/reference/catlarray-class.md), [CAtlList](../../atl/reference/catllist-class.md), [CRBMap](../../atl/reference/crbmap-class.md), [CRBMultiMap](../../atl/reference/crbmultimap-class.md)e [CRBTree](../../atl/reference/crbtree-class.md).  
  
 Le implementazioni predefinite appropriata per i tipi di dati semplici, ma se le classi di raccolte utilizzate per memorizzare più oggetti complessi, funzioni e metodi devono essere sottoposti a override dalle implementazioni fornite.  
  
 Per ulteriori informazioni, vedere [Classi di raccolte ATL](../../atl/atl-collection-classes.md).  
  
## Requisiti  
 **Header:** atlcoll.h  
  
## Vedere anche  
 [CDefaultElementTraits Class](../../atl/reference/cdefaultelementtraits-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)