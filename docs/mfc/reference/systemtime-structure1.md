---
title: SYSTEMTIME Structure1 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: SYSTEMTIME
dev_langs: C++
helpviewer_keywords: SYSTEMTIME structure [MFC]
ms.assetid: 9aaef4d6-de79-4fa1-8158-86b245ef5bff
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 17bf546d6de5008f8c846a9735d406394f1db856
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="systemtime-structure1"></a>SYSTEMTIME Structure1
Il `SYSTEMTIME` struttura rappresenta una data e ora utilizzando singoli membri per mese, giorno, anno, giorno della settimana, ora, minuto, secondo e millisecondo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct _SYSTEMTIME {  
    WORD wYear;  
    WORD wMonth;  
    WORD wDayOfWeek;  
    WORD wDay;  
    WORD wHour;  
    WORD wMinute;  
    WORD wSecond;  
    WORD wMilliseconds;  
} SYSTEMTIME;  
```  
  
#### <a name="parameters"></a>Parametri  
 *wYear*  
 L'anno corrente.  
  
 *wMonth*  
 Il mese corrente; Gennaio è 1.  
  
 *Desiderato*  
 Il giorno corrente della settimana; Domenica è 0, lunedì è 1 e così via.  
  
 *wDay*  
 Il giorno del mese corrente.  
  
 *wHour*  
 L'ora corrente.  
  
 *wMinute*  
 Il minuto corrente.  
  
 *wSecond*  
 Il secondo corrente.  
  
 *wMilliseconds*  
 Al millisecondo corrente.  
  
## <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#39](../../mfc/codesnippet/cpp/systemtime-structure1_1.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** winbase  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [Costruttori CTime::](../../atl-mfc-shared/reference/ctime-class.md#ctime)

