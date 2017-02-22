---
title: "_ATL_WIN_MODULE70 Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_ATL_WIN_MODULE70"
  - "ATL::_ATL_WIN_MODULE70"
  - "ATL._ATL_WIN_MODULE70"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ATL_WIN_MODULE70 structure"
  - "ATL_WIN_MODULE70 structure"
ms.assetid: a0aaf3ea-ca77-46ec-bd53-4dfb61dffbea
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 16
---
# _ATL_WIN_MODULE70 Structure
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato dal codice di utilizzo di windows in ATL.  
  
## Sintassi  
  
```  
  
      struct _ATL_WIN_MODULE70{  
   UNIT cbSize;  
   CRITICAL_SECTION m_csWindowCreate;  
   _AtlCreateWndData* m_pCreateWndList;  
   CSimpleArray<ATOM> m_rgWindowClassAtoms;  
};  
```  
  
## Membri  
 `cbSize`  
 La dimensione della struttura, utilizzata per controllare la versione.  
  
 `m_csWindowCreate`  
 Utilizzato per serializzare accesso al codice di registrazione della finestra.  Utilizzato internamente da ATL.  
  
 **m\_pCreateWndList**  
 Utilizzata per associare finestre agli oggetti.  Utilizzato internamente da ATL.  
  
 **m\_rgWindowClassAtoms**  
 Utilizzato per tenere traccia delle archiviazioni della classe della finestra in modo da poter correttamente annullare la registrazione della chiusura.  Utilizzato internamente da ATL.  
  
## Note  
 [\_ATL\_WIN\_MODULE](../Topic/_ATL_WIN_MODULE.md) viene definito come typedef `_ATL_WIN_MODULE70`.  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [Strutture](../../atl/reference/atl-structures.md)