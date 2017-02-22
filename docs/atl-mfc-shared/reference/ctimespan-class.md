---
title: "CTimeSpan Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CTimeSpan"
  - "CTimeSpan"
  - "timespan"
  - "ATL::CTimeSpan"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTimeSpan class"
  - "tempo trascorso, CTimeSpan object"
  - "shared classes, CTimeSpan"
  - "time span"
  - "ora, elapsed"
  - "timespan"
ms.assetid: ee1e42f6-1839-477a-8435-fb26ad475140
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# CTimeSpan Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una quantità di tempo, che viene archiviato come numero di secondi nell'intervallo di tempo.  
  
## Sintassi  
  
```  
class CTimeSpan  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTimeSpan::CTimeSpan](../Topic/CTimeSpan::CTimeSpan.md)|Costruisce oggetti `CTimeSpan` in diversi modi.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTimeSpan::Format](../Topic/CTimeSpan::Format.md)|Converte `CTimeSpan` in una stringa formattata.|  
|[CTimeSpan::GetDays](../Topic/CTimeSpan::GetDays.md)|Restituisce un valore che rappresenta il numero di giorni completi in questo `CTimeSpan`.|  
|[CTimeSpan::GetHours](../Topic/CTimeSpan::GetHours.md)|Restituisce un valore che rappresenta il numero di ore il giorno corrente \(– da 23 a 23\).|  
|[CTimeSpan::GetMinutes](../Topic/CTimeSpan::GetMinutes.md)|Restituisce un valore che rappresenta il numero di minuti nell'ora corrente \(– da 59 a 59\).|  
|[CTimeSpan::GetSeconds](../Topic/CTimeSpan::GetSeconds.md)|Restituisce un valore che rappresenta il numero di secondi del minuto corrente \(– da 59 a 59\).|  
|[CTimeSpan::GetTimeSpan](../Topic/CTimeSpan::GetTimeSpan.md)|Viene restituito il valore dell'oggetto `CTimeSpan`.|  
|[CTimeSpan::GetTotalHours](../Topic/CTimeSpan::GetTotalHours.md)|Restituisce un valore che rappresenta il numero complessivo di ore completate in questo `CTimeSpan`.|  
|[CTimeSpan::GetTotalMinutes](../Topic/CTimeSpan::GetTotalMinutes.md)|Restituisce un valore che rappresenta il numero totale di minuti completi in questo `CTimeSpan`.|  
|[CTimeSpan::GetTotalSeconds](../Topic/CTimeSpan::GetTotalSeconds.md)|Restituisce un valore che rappresenta il numero totale di secondi completi in questo `CTimeSpan`.|  
|[CTimeSpan::Serialize64](../Topic/CTimeSpan::Serialize64.md)|Serializza i dati a un archivio.|  
  
### Operatori  
  
|||  
|-|-|  
|[operatore \+ \)](../Topic/CTimeSpan::operator%20+,%20-.md)|Aggiunta e sottrae gli oggetti `CTimeSpan`.|  
|[l'operatore \+\= – \=](../Topic/CTimeSpan::operator%20+=,%20-=.md)|Aggiunta e sottrae un oggetto `CTimeSpan` in questo `CTimeSpan`.|  
|[\=\= dell'operatore \< e così via.](../Topic/CTimeSpan%20Comparison%20Operators.md)|Confronta due valori relativi.|  
  
## Note  
 `CTimeSpan` non dispone di una classe base.  
  
 Le funzioni di`CTimeSpan` convertono i secondi alle varie combinazioni di giorni, in ore, di minuti e secondi.  
  
 L'oggetto `CTimeSpan` memorizzato in una struttura **\_\_time64\_t**, che è di 8 byte.  
  
 Una classe complementare, [CTime](../../atl-mfc-shared/reference/ctime-class.md), rappresenta un tempo assoluto.  
  
 Le classi `CTimeSpan` e `CTime` non sono progettate per la derivazione.  Poiché non sono presenti funzioni virtuali, la dimensione di entrambi gli oggetti `CTimeSpan` e `CTime` è esattamente 8 byte.  La maggior parte delle funzioni membro sono inline.  
  
 Per ulteriori informazioni su l `CTimeSpan`, vedere gli articoli [data e ora](../../atl-mfc-shared/date-and-time.md)e [gestione di tempo](../../c-runtime-library/time-management.md)*in riferimenti alla libreria di runtime*.  
  
## Requisiti  
 **Header:** atltime.h  
  
## Vedere anche  
 [asctime, \_wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [\_ftime, \_ftime32, \_ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime, \_gmtime32, \_gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime, \_localtime32, \_localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [strftime, wcsftime, \_strftime\_l, \_wcsftime\_l](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [ATL\/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)