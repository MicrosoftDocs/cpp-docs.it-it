---
title: "_AtlCreateWndData Structure | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::_AtlCreateWndData"
  - "ATL._AtlCreateWndData"
  - "_AtlCreateWndData"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_AtlCreateWndData structure"
  - "AtlCreateWndData structure"
ms.assetid: 76ed5382-bfbf-4b8b-8a29-912688dfd2ae
caps.latest.revision: 15
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _AtlCreateWndData Structure
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa struttura contiene i dati di istanza della classe nel codice di utilizzo di windows in ATL.  
  
## Sintassi  
  
```  
  
      struct _AtlCreateWndData{  
   void* m_pThis;  
   DWORD m_dwThreadID;  
   _AtlCreateWndData* m_pNext;  
};  
```  
  
## Membri  
 **m\_pThis**  
 Il puntatore **this** utilizzato per ottenere l'accesso all'istanza della classe nelle procedure di finestra.  
  
 `m_dwThreadID`  
 ID thread dell'istanza della classe corrente.  
  
 **m\_pNext**  
 Puntatore all'`_AtlCreateWndData`.  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [Strutture](../../atl/reference/atl-structures.md)