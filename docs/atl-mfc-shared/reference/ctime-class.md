---
title: "CTime Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CTime"
  - "CTime"
  - "ATL::CTime"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTime class"
  - "shared classes, CTime"
ms.assetid: 0a299544-485b-48dc-9d3c-fdc30f57d612
caps.latest.revision: 30
caps.handback.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CTime Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un'ora e una data assolute.  
  
## Sintassi  
  
```  
class CTime  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTime::CTime](../Topic/CTime::CTime.md)|Costruisce oggetti `CTime` in diversi modi.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTime::Format](../Topic/CTime::Format.md)|Converte un oggetto `CTime` in un basato su stringa formattata sul fuso orario locale.|  
|[CTime::FormatGmt](../Topic/CTime::FormatGmt.md)|Converte un oggetto `CTime` in un basato su stringa formattata nell'ora UTC.|  
|[CTime::GetAsDBTIMESTAMP](../Topic/CTime::GetAsDBTIMESTAMP.md)|Converte le informazioni audio memorizzate nell'oggetto `CTime` a una struttura di Win32\-compatible <xref:System.Data.OleDb.OleDbType>.|  
|[CTime::GetAsSystemTime](../Topic/CTime::GetAsSystemTime.md)|Converte le informazioni audio memorizzate nell'oggetto `CTime` a una struttura di Win32\-compatible [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950).|  
|[CTime::GetCurrentTime](../Topic/CTime::GetCurrentTime.md)|Crea un oggetto `CTime` che rappresenta l'ora corrente \(funzione membro statico\).|  
|[CTime::GetDay](../Topic/CTime::GetDay.md)|Restituisce il giorno rappresentano dall'oggetto `CTime`.|  
|[CTime::GetDayOfWeek](../Topic/CTime::GetDayOfWeek.md)|Restituisce il giorno della settimana rappresentata dall'oggetto `CTime`.|  
|[CTime::GetGmtTm](../Topic/CTime::GetGmtTm.md)|Suddivide un oggetto `CTime` in componenti — basate sull'ora UTC.|  
|[CTime::GetHour](../Topic/CTime::GetHour.md)|Restituisce l'ora rappresentata dall'oggetto `CTime`.|  
|[CTime::GetLocalTm](../Topic/CTime::GetLocalTm.md)|Suddivide un oggetto `CTime` in componenti — basate sul fuso orario locale.|  
|[CTime::GetMinute](../Topic/CTime::GetMinute.md)|Restituisce il minuto rappresentato dall'oggetto `CTime`.|  
|[CTime::GetMonth](../Topic/CTime::GetMonth.md)|Restituisce il mese rappresentato dall'oggetto `CTime`.|  
|[CTime::GetSecond](../Topic/CTime::GetSecond.md)|Restituisce il secondo rappresentato dall'oggetto `CTime`.|  
|[CTime::GetTime](../Topic/CTime::GetTime.md)|Restituisce un valore **\_\_time64\_t** per l'oggetto specificato `CTime`.|  
|[CTime::GetYear](../Topic/CTime::GetYear.md)|Restituisce l'anno rappresentato dall'oggetto `CTime`.|  
|[CTime::Serialize64](../Topic/CTime::Serialize64.md)|Serializza i dati a un archivio.|  
  
### Operatori  
  
|||  
|-|-|  
|[operatore \+ \)](../Topic/CTime::operator%20+,%20-.md)|Questi operatori aggiunti e nascondono `CTimeSpan` e gli oggetti `CTime`.|  
|[l'operatore \+\=, – \=](../Topic/CTime::operator%20+=,%20-=.md)|Questi operatori aggiunti e nascondono un oggetto `CTimeSpan` da questo oggetto `CTime`.|  
|[operatore \=](../Topic/CTime::operator%20=.md)|l'operatore di assegnazione.|  
|[\=\= l'operatore, \<, e così via.](../Topic/CTime%20Comparison%20Operators.md)|Operatori di confronto.|  
  
## Note  
 `CTime` non dispone di una classe base.  
  
 i valori di`CTime` sono basati tempo in formato UTC \(UTC\), che equivale a formato UTC \(ora di Greenwich, GMT\).  Vedere [Gestione dell'ora](../../c-runtime-library/time-management.md) per informazioni sul fuso orario viene determinato.  
  
 Quando si crea un oggetto `CTime`, impostare il parametro `nDST` a 0 per indicare che l'ora solare è in effetti, o un valore superiore a 0 per indicare che l'ora legale è in effetti, o un valore inferiore a zero per disporre il calcolo di codice della libreria di runtime C se l'ora solare o l'ora legale è attiva.  `tm_isdst` è un campo obbligatorio.  Se non impostata, il valore viene definito e il valore restituito da [mktime](../../c-runtime-library/reference/mktime-mktime32-mktime64.md) è imprevedibile.  Se i punti `timeptr` a una struttura di TM restituita da una chiamata precedente a [asctime\_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md), a [\_gmtime\_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md), o a [localtime\_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md), il campo `tm_isdst` contiene il valore corretto.  
  
 Una classe complementare, [CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md), rappresenta un intervallo di tempo.  
  
 Le classi `CTimeSpan` e `CTime` non sono progettate per la derivazione.  Poiché non sono presenti funzioni virtuali, la dimensione `CTime` e oggetti `CTimeSpan` è esattamente 8 byte.  La maggior parte delle funzioni membro sono inline.  
  
> [!NOTE]
>  La data limite superiore è 12\/31\/3000.  Il limite inferiore è 1\/1\/1970 delle 12:00: 00 AM GMT.  
  
 Per ulteriori informazioni su l `CTime`, vedere gli articoli [data e ora](../../atl-mfc-shared/date-and-time.md)e [gestione di tempo](../../c-runtime-library/time-management.md) in riferimenti alla libreria di runtime.  
  
> [!NOTE]
>  La struttura `CTime` modificata da MFC 7,1 a MFC 8.0.  Se serializzare una struttura `CTime` utilizzando `operator <<` in MFC 8.0 o una versione successiva, il file risultante non risulterà leggibile alle versioni precedenti di MFC.  
  
## Requisiti  
 **intestazione:** atltime.h  
  
## Vedere anche  
 [asctime\_s, \_wasctime\_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)   
 [\_ftime\_s, \_ftime32\_s, \_ftime64\_s](../../c-runtime-library/reference/ftime-s-ftime32-s-ftime64-s.md)   
 [gmtime\_s, \_gmtime32\_s, \_gmtime64\_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)   
 [localtime\_s, \_localtime32\_s, \_localtime64\_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)   
 [strftime, wcsftime, \_strftime\_l, \_wcsftime\_l](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [CTimeSpan Class](../../atl-mfc-shared/reference/ctimespan-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [ATL\/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)