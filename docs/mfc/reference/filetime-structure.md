---
title: Struttura FILETIME | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- FILETIME
dev_langs:
- C++
helpviewer_keywords:
- FILETIME structure [MFC]
ms.assetid: e09557e2-b6d7-4dd5-a5b9-6328bca88595
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b0d1128442300d3f6fc153733be8b23b9d69444d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="filetime-structure"></a>Struttura FILETIME
Il `FILETIME` struttura è un valore a 64 bit che rappresenta il numero di intervalli da 100 nanosecondi trascorsi dal 1 gennaio 1601.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct _FILETIME {  
    DWORD dwLowDateTime;   /* low 32 bits */  
    DWORD dwHighDateTime;  /* high 32 bits */  
} FILETIME, *PFILETIME, *LPFILETIME;  
```  
  
#### <a name="parameters"></a>Parametri  
 *relativo membro dwLowDateTime*  
 Specifica il basso 32 bit dell'ora del file.  
  
 *FILETIME*  
 Specifica l'elevata 32 bit dell'ora del file.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** WINDEF. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [Costruttori CTime::](../../atl-mfc-shared/reference/ctime-class.md#ctime)

