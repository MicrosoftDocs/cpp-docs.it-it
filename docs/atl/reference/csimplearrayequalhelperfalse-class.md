---
title: "CSimpleArrayEqualHelperFalse Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CSimpleArrayEqualHelperFalse<T>"
  - "ATL::CSimpleArrayEqualHelperFalse"
  - "ATL.CSimpleArrayEqualHelperFalse"
  - "ATL::CSimpleArrayEqualHelperFalse<T>"
  - "CSimpleArrayEqualHelperFalse"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSimpleArrayEqualHelperFalse class"
ms.assetid: 6918af6f-d23d-49eb-8482-c44272f5ffeb
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CSimpleArrayEqualHelperFalse Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe è un helper per la classe [CSimpleArray](../../atl/reference/csimplearray-class.md).  
  
## Sintassi  
  
```  
  
      template <  
   class T   
>   
class CSimpleArrayEqualHelperFalse  
```  
  
#### Parametri  
 `T`  
 Una classe derivata.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleArrayEqualHelperFalse::IsEqual](../Topic/CSimpleArrayEqualHelperFalse::IsEqual.md)|Restituisce \(statico\) false.|  
  
## Note  
 Questa classe di tratti è un complemento alla classe `CSimpleArray`.  Restituisce sempre false e inoltre, chiamerà `ATLASSERT` con un argomento di false se viene mai fatto riferimento.  In situazioni in cui il test di uguaglianza sufficientemente non è definito, questa classe consente degli elementi contenitore di una matrice funzionino correttamente per la maggior parte dei metodi ma verifica un errore in modo ben definito per i metodi che dipendono dai confronti come [CSimpleArray::Find](../Topic/CSimpleArray::Find.md).  
  
## Requisiti  
 **Header:** atlsimpcoll.h  
  
## Vedere anche  
 [CSimpleArrayEqualHelper Class](../../atl/reference/csimplearrayequalhelper-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)