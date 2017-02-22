---
title: "SYSTEMTIME Structure1 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SYSTEMTIME"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SYSTEMTIME (struttura)"
ms.assetid: 9aaef4d6-de79-4fa1-8158-86b245ef5bff
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 16
---
# Struttura SYSTEMTIME
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura `SYSTEMTIME` rappresenta un valore di data e ora che utilizza membri singoli per mese, giorno, anno, giorno della settimana, ora, minuto, secondo e millisecondo.  
  
## Sintassi  
  
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
  
#### Parametri  
 *wYear*  
 L'anno corrente.  
  
 *wMonth*  
 Mese corrente; Gennaio corrisponde a 1.  
  
 *wDayOfWeek*  
 Il giorno corrente della settimana; domenica è 0, lunedì è 1 e così via.  
  
 *wDay*  
 Il giorno corrente del mese.  
  
 *wHour*  
 L'ora corrente.  
  
 *wMinute*  
 Il minuto corrente.  
  
 *wSecond*  
 Il secondo corrente.  
  
 *wMilliseconds*  
 Il millisecondo corrente.  
  
## Esempio  
 [!code-cpp[NVC_MFC_Utilities#39](../../mfc/codesnippet/CPP/systemtime-structure1_1.cpp)]  
  
## Requisiti  
 **Intestazione:** winbase.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CTime::CTime](../Topic/CTime::CTime.md)