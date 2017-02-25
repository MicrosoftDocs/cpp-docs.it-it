---
title: "COleDateTimeSpan Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.COleDateTimeSpan"
  - "COleDateTimeSpan"
  - "ATL::COleDateTimeSpan"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleDateTimeSpan class"
  - "Date (tipo di dati), MFC encapsulation of"
  - "shared classes, COleDateTimeSpan"
  - "time span"
  - "timespan"
ms.assetid: 7441526d-a30a-4019-8fb3-3fee6f897cbe
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 20
---
# COleDateTimeSpan Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un'ora relativo, un intervallo di tempo.  
  
## Sintassi  
  
```  
class COleDateTimeSpan  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDateTimeSpan::COleDateTimeSpan](../Topic/COleDateTimeSpan::COleDateTimeSpan.md)|Costruisce un oggetto `COleDateTimeSpan`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDateTimeSpan::Format](../Topic/COleDateTimeSpan::Format.md)|Genera una rappresentazione di stringa formattata di un oggetto `COleDateTimeSpan`.|  
|[COleDateTimeSpan::GetDays](../Topic/COleDateTimeSpan::GetDays.md)|Restituisce parte del giorno di intervalli che l'oggetto `COleDateTimeSpan` rappresenta.|  
|[COleDateTimeSpan::GetHours](../Topic/COleDateTimeSpan::GetHours.md)|Restituisce la parte relativa all'ora di intervalli che l'oggetto `COleDateTimeSpan` rappresenta.|  
|[COleDateTimeSpan::GetMinutes](../Topic/COleDateTimeSpan::GetMinutes.md)|Restituisce la parte minuscole di intervalli che l'oggetto `COleDateTimeSpan` rappresenta.|  
|[COleDateTimeSpan::GetSeconds](../Topic/COleDateTimeSpan::GetSeconds.md)|Restituisce la seconda parte dell'intervallo che l'oggetto `COleDateTimeSpan` rappresenta.|  
|[COleDateTimeSpan::GetStatus](../Topic/COleDateTimeSpan::GetStatus.md)|Ottiene lo stato \(validità\) di questo oggetto `COleDateTimeSpan`.|  
|[COleDateTimeSpan::GetTotalDays](../Topic/COleDateTimeSpan::GetTotalDays.md)|Restituisce il numero di giorni che l'oggetto `COleDateTimeSpan` rappresenta.|  
|[COleDateTimeSpan::GetTotalHours](../Topic/COleDateTimeSpan::GetTotalHours.md)|Restituisce il numero di ore che l'oggetto `COleDateTimeSpan` rappresenta.|  
|[COleDateTimeSpan::GetTotalMinutes](../Topic/COleDateTimeSpan::GetTotalMinutes.md)|Restituisce il numero di minuti che l'oggetto `COleDateTimeSpan` rappresenta.|  
|[COleDateTimeSpan::GetTotalSeconds](../Topic/COleDateTimeSpan::GetTotalSeconds.md)|Restituisce il numero di secondi che l'oggetto `COleDateTimeSpan` rappresenta.|  
|[COleDateTimeSpan::SetDateTimeSpan](../Topic/COleDateTimeSpan::SetDateTimeSpan.md)|Imposta il valore di questo oggetto `COleDateTimeSpan`.|  
|[COleDateTimeSpan::SetStatus](../Topic/COleDateTimeSpan::SetStatus.md)|Imposta lo stato \(validità\) di questo oggetto `COleDateTimeSpan`.|  
  
### Operatori pubblici  
  
|||  
|-|-|  
|[operatore \+, \-](../Topic/COleDateTimeSpan::operator%20+,%20-.md)|Addizione, sottrazione e modificare il segno per i valori `COleDateTimeSpan`.|  
|[l'operatore \+\=, \- \=](../Topic/COleDateTimeSpan::operator%20+=,%20-=.md)|Aggiungere e sottrarre un valore `COleDateTimeSpan` dal valore `COleDateTimeSpan`.|  
|[operatore \=](../Topic/COleDateTimeSpan::operator%20=.md)|Copia un valore `COleDateTimeSpan`.|  
|[\=\= l'operatore, \<, \<\=](../Topic/COleDateTimeSpan%20Relational%20Operators.md)|Confronta due valori `COleDateTimeSpan`.|  
|[doppio dell'operatore](../Topic/COleDateTimeSpan::operator%20double.md)|Converte questo valore `COleDateTimeSpan` a **double**.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDateTimeSpan::m\_span](../Topic/COleDateTimeSpan::m_span.md)|Contiene **double** sottostante per questo oggetto `COleDateTimeSpan`.|  
|[COleDateTimeSpan::m\_status](../Topic/COleDateTimeSpan::m_status.md)|Contiene lo stato di questo oggetto `COleDateTimeSpan`.|  
  
## Note  
 `COleDateTimeSpan` non dispone di una classe base.  
  
 `COleDateTimeSpan` mantenere il tempo in giorni.  
  
 `COleDateTimeSpan` viene utilizzato con la classe complementare [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md).  `COleDateTime` incapsula il tipo di dati **DATE** di automazione OLE.  `COleDateTime` rappresenta i valori assoluti.  Tutti i calcoli `COleDateTime` includono i valori `COleDateTimeSpan`.  La relazione tra queste classi è analoga a quella tra [CTime](../../atl-mfc-shared/reference/ctime-class.md) e [CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md).  
  
 Per ulteriori informazioni sulle classi `COleDateTimeSpan` e `COleDateTime`, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
## Requisiti  
 **Header:** ATLComTime.h  
  
## Vedere anche  
 [COleDateTime Class](../../atl-mfc-shared/reference/coledatetime-class.md)   
 [CTime Class](../../atl-mfc-shared/reference/ctime-class.md)   
 [CTimeSpan Class](../../atl-mfc-shared/reference/ctimespan-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [ATL\/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)