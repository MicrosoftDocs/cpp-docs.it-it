---
title: SYSTEMTIME Structure1 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- SYSTEMTIME
dev_langs:
- C++
helpviewer_keywords:
- SYSTEMTIME structure
ms.assetid: 9aaef4d6-de79-4fa1-8158-86b245ef5bff
caps.latest.revision: 15
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 298b2673a3eb05525683f8269fcd415d5be1c80a
ms.lasthandoff: 02/24/2017

---
# <a name="systemtime-structure1"></a>SYSTEMTIME Structure1
Il `SYSTEMTIME` struttura rappresenta una data e ora utilizzando singoli membri per il mese, giorno, anno, giorno della settimana, ora, minuto, secondo e millisecondo.  
  
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
 Il giorno corrente del mese.  
  
 *wHour*  
 L'ora corrente.  
  
 *wMinute*  
 Il minuto corrente.  
  
 *wSecond*  
 Il secondo corrente.  
  
 *wMilliseconds*  
 Al millisecondo corrente.  
  
## <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities&#39;](../../mfc/codesnippet/cpp/systemtime-structure1_1.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** winbase. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [Costruttori CTime::](../../atl-mfc-shared/reference/ctime-class.md#ctime)


