---
title: Struttura DHtmlUrlEventMapEntry | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- DHtmlUrlEventMapEntry
dev_langs:
- C++
helpviewer_keywords:
- DHtmlUrlEventMapEntry structure [MFC]
ms.assetid: 43117c1f-1a51-406c-aa2f-fea647080049
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 4a770b6508067913aec51b8b3878f33e30eed4bb
ms.openlocfilehash: 37e43514c116f93841b1479103a6f29ec708bfa0
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="dhtmlurleventmapentry-structure"></a>Struttura DHtmlUrlEventMapEntry
Il `DHtmlUrlEventMapEntry` struttura fornisce il supporto di mappa eventi multi-URL.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct DHtmlUrlEventMapEntry  
{  
LPCTSTR szUrl;  
const DHtmlEventMapEntry *pEventMap;  
};  
```  
  
#### <a name="parameters"></a>Parametri  
 `szUrl`  
 L'URL.  
  
 *pEventMap*  
 La mappa di evento associata all'URL.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdhtml. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)


