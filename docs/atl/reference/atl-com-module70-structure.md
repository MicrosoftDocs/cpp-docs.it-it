---
title: "_ATL_COM_MODULE70 Structure | Microsoft Docs"
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
  - "ATL::_ATL_COM_MODULE70"
  - "ATL._ATL_COM_MODULE70"
  - "_ATL_COM_MODULE70"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ATL_COM_MODULE70 structure"
  - "ATL_COM_MODULE70 structure"
ms.assetid: 5b0b2fd0-bdeb-4c7e-8870-78fa69ace6e6
caps.latest.revision: 15
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _ATL_COM_MODULE70 Structure
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato dal codice rimozione correlato in ATL.  
  
## Sintassi  
  
```  
  
      struct _ATL_COM_MODULE70{  
   UINT cbSize;  
   HINSTANCE m_hInstTypeLib;  
   _ATL_OBJMAP_ENTRY** m_ppAutoObjMapFirst;  
   _ATL_OBJMAP_ENTRY** m_ppAutoObjMapLast;  
   CRITICAL_SECTION m_csObjMap;  
};  
```  
  
## Membri  
 `cbSize`  
 La dimensione della struttura, utilizzata per controllare la versione.  
  
 `m_hInstTypeLib`  
 L'istanza di handle alla libreria dei tipi per questo modulo.  
  
 **m\_ppAutoObjMapFirst**  
 Indirizzo dell'elemento di matrice che indica l'inizio delle voci della mappa oggetto per questo modulo.  
  
 **m\_ppAutoObjMapLast**  
 Indirizzo dell'elemento di matrice che indica la fine delle voci della mappa oggetto per questo modulo.  
  
 `m_csObjMap`  
 Sezione critica per serializzare accesso alle voci della mappa oggetto.  Utilizzato internamente da ATL.  
  
## Note  
 [\_ATL\_COM\_MODULE](../Topic/_ATL_COM_MODULE.md) viene definito come typedef `_ATL_COM_MODULE70`.  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [Strutture](../../atl/reference/atl-structures.md)