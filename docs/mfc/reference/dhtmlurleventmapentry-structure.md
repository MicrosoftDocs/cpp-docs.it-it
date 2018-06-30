---
title: Struttura DHtmlUrlEventMapEntry | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- DHtmlUrlEventMapEntry
dev_langs:
- C++
helpviewer_keywords:
- DHtmlUrlEventMapEntry structure [MFC]
ms.assetid: 43117c1f-1a51-406c-aa2f-fea647080049
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ee629d9dcffc80ce20306989cad72d466722af87
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37123331"
---
# <a name="dhtmlurleventmapentry-structure"></a>Struttura DHtmlUrlEventMapEntry
Il `DHtmlUrlEventMapEntry` struttura fornisce il supporto mappe eventi multi-URL.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct DHtmlUrlEventMapEntry  
{  
LPCTSTR szUrl;  
const DHtmlEventMapEntry *pEventMap;  
};  
```  
  
#### <a name="parameters"></a>Parametri  
 *szUrl*  
 L'URL.  
  
 *pEventMap*  
 La mappa di evento associata all'URL.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdhtml. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)

