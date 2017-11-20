---
title: Struttura FILETIME | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: FILETIME
dev_langs: C++
helpviewer_keywords: FILETIME structure [MFC]
ms.assetid: e09557e2-b6d7-4dd5-a5b9-6328bca88595
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 1ecb4814a8bfc0b94bce8e160b973a81bb54cd48
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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

