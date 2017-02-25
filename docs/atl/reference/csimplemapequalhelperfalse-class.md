---
title: "CSimpleMapEqualHelperFalse Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CSimpleMapEqualHelperFalse"
  - "CSimpleMapEqualHelperFalse"
  - "ATL.CSimpleMapEqualHelperFalse"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSimpleMapEqualHelperFalse class"
ms.assetid: a873eea3-e130-45cc-a476-61ee79511c3b
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CSimpleMapEqualHelperFalse Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe è un helper per la classe [CSimpleMap](../../atl/reference/csimplemap-class.md).  
  
## Sintassi  
  
```  
  
template < class TKey, class TVal > class CSimpleMapEqualHelperFalse  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleMapEqualHelperFalse::IsEqualKey](../Topic/CSimpleMapEqualHelperFalse::IsEqualKey.md)|\(Proprietà statica\) testa due chiavi per uguaglianza.|  
|[CSimpleMapEqualHelperFalse::IsEqualValue](../Topic/CSimpleMapEqualHelperFalse::IsEqualValue.md)|Restituisce \(statico\) false.|  
  
## Note  
 Questa classe di tratti è un oggetto aggiuntivo nella classe `CSimpleMap`.  Fornisce un metodo per confrontare due elementi contenuti nell'oggetto `CSimpleMap`, in particolare due elementi di valore o due elementi chiave.  
  
 Il confronto di valore restituirà sempre false e inoltre, chiamerà `ATLASSERT` con un argomento di false se viene mai fatto riferimento.  In situazioni in cui il test di uguaglianza sufficientemente non è definito, questa classe consente un mapping che contiene coppie chiave\-valore per funzionare correttamente per la maggior parte dei metodi ma non venga completata in modo ben definito per i metodi che dipendono dai confronti come [CSimpleMap::FindVal](../Topic/CSimpleMap::FindVal.md).  
  
## Requisiti  
 **Header:** atlsimpcoll.h  
  
## Vedere anche  
 [CSimpleMapEqualHelper Class](../../atl/reference/csimplemapequalhelper-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)