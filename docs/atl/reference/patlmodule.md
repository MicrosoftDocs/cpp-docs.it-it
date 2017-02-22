---
title: "_pAtlModule | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATLBASE/_pAtlModule"
  - "_pAtlModule"
  - "ATL::_pAtlModule"
  - "ATL._pAtlModule"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_pAtlModule variable"
  - "pAtlModule variable"
ms.assetid: 0ecde3a9-3f4d-4c7b-bb54-713ce05c4777
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# _pAtlModule
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una variabile globale che contiene un puntatore al modulo corrente.  
  
## Sintassi  
  
```  
__declspec(selectany) CAtlModule * _pAtlModule  
```  
  
## Note  
 I metodi su questa variabile globale possono essere utilizzati per fornire funzionalità che \(ora\) la classe precedente [CComModule](../../atl/reference/ccommodule-class.md) fornito in Visual C\+\+ 6,0.  
  
## Esempio  
 [!code-cpp[NVC_ATL_Windowing#97](../../atl/codesnippet/CPP/patlmodule_1.cpp)]  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [Global Variables](../../atl/reference/atl-global-variables.md)