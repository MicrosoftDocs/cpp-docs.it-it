---
title: SYSTEMTIME Structure1 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- SYSTEMTIME
dev_langs:
- C++
helpviewer_keywords:
- SYSTEMTIME structure [MFC]
ms.assetid: 9aaef4d6-de79-4fa1-8158-86b245ef5bff
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 97a0042adaa223fc5898c057f191f7b750fa230f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33372392"
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

