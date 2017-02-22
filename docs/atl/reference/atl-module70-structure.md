---
title: "_ATL_MODULE70 Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_ATL_MODULE70"
  - "ATL::_ATL_MODULE70"
  - "ATL._ATL_MODULE70"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ATL_MODULE70 structure"
  - "ATL_MODULE70 structure"
ms.assetid: b059b2c8-dfd1-4ac9-b07d-39df638cc7b3
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 17
---
# _ATL_MODULE70 Structure
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Contiene i dati utilizzati da ciascun modulo ATL.  
  
## Sintassi  
  
```  
  
      struct _ATL_MODULE70{  
   UINT cbSize;  
   LONG m_nLockCnt;  
   _ATL_TERMFUNC_ELEM* m_pTermFuncs;  
   CComCriticalSection m_csStaticDataInitAndTypeInfo;  
};  
```  
  
## Membri  
 `cbSize`  
 La dimensione della struttura, utilizzata per controllare la versione.  
  
 `m_nLockCnt`  
 Conteggio dei riferimenti per determinare la durata del modulo deve rimanere attivo.  
  
 **m\_pTermFuncs**  
 Tenere traccia delle funzioni che sono registrate per essere chiamate quando ATL viene chiusa.  
  
 **m\_csStaticDataInitAndTypeInfo**  
 Utilizzato per coordinare l'accesso ai dati interni in situazioni multithreading.  
  
## Note  
 [\_ATL\_MODULE](../Topic/_ATL_MODULE.md) viene definito come typedef `_ATL_MODULE70`.  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [Strutture](../../atl/reference/atl-structures.md)