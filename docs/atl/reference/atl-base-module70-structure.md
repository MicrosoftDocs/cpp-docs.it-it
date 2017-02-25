---
title: "_ATL_BASE_MODULE70 Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::_ATL_BASE_MODULE70"
  - "ATL._ATL_BASE_MODULE70"
  - "_ATL_BASE_MODULE70"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ATL_BASE_MODULE70 structure"
  - "ATL_BASE_MODULE70 structure"
ms.assetid: 4539282f-15b8-4d7c-aafa-a85dc56f4980
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 16
---
# _ATL_BASE_MODULE70 Structure
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato da alcun progetto che utilizza ATL.  
  
## Sintassi  
  
```  
  
      struct _ATL_BASE_MODULE70{  
   UINT cbSize;  
   HINSTANCE m_hInst;  
   HINSTANCE m_hInstResource;  
   bool m_bNT5orWin98;  
   DWORD dwAtlBuildVer;  
   GUID* pguidVer;  
   CRITICAL_SECTION m_csResource;  
   CSimpleArray<HINSTANCE> m_rgResourceInstance;  
};  
```  
  
## Membri  
 `cbSize`  
 La dimensione della struttura, utilizzata per controllare la versione.  
  
 `m_hInst`  
 **hInstance** per questo modulo \(EXE o DLL\).  
  
 `m_hInstResource`  
 Handle di risorse predefinite dell'istanza.  
  
 **m\_bNT5orWin98**  
 Informazioni sulla versione del sistema operativo.  Utilizzato internamente da ATL.  
  
 **dwAtlBuildVer**  
 Archivia la versione ATL.  Attualmente 0x0700.  
  
 **pguidVer**  
 Il GUID interno ATL.  
  
 **m\_csResource**  
 Utilizzato per sincronizzare l'accesso alla matrice **m\_rgResourceInstance**.  Utilizzato internamente da ATL.  
  
 **m\_rgResourceInstance**  
 Matrice impiegata per trovare le risorse in tutte le istanze delle risorse di cui ATL è presente.  Utilizzato internamente da ATL.  
  
## Note  
 [\_ATL\_BASE\_MODULE](../Topic/_ATL_BASE_MODULE.md) viene definito come typedef `_ATL_BASE_MODULE70`.  
  
## Requisiti  
 **Header:** atlcore.h  
  
## Vedere anche  
 [Strutture](../../atl/reference/atl-structures.md)