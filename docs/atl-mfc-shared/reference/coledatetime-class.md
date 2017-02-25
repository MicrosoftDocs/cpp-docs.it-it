---
title: "COleDateTime Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleDateTime"
  - "ATL.COleDateTime"
  - "ATL::COleDateTime"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleDateTime class"
  - "Date (tipo di dati), MFC encapsulation of"
  - "date, handling in MFC"
  - "shared classes, COleDateTime"
  - "ora, handling in MFC"
  - "time-only values"
ms.assetid: e718f294-16ec-4649-88b6-a4dbae5178fb
caps.latest.revision: 34
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 35
---
# COleDateTime Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula il tipo di dati `DATE` di automazione OLE.  
  
## Sintassi  
  
```  
class COleDateTime  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDateTime::COleDateTime](../Topic/COleDateTime::COleDateTime.md)|Costruisce un oggetto `COleDateTime`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDateTime::Format](../Topic/COleDateTime::Format.md)|Genera una rappresentazione di stringa formattata di un oggetto `COleDateTime`.|  
|[COleDateTime::GetAsDBTIMESTAMP](../Topic/COleDateTime::GetAsDBTIMESTAMP.md)|Chiamare questo metodo per ottenere l'ora nell'oggetto `COleDateTime` come struttura dati **DBTIMESTAMP**.|  
|[COleDateTime::GetAsSystemTime](../Topic/COleDateTime::GetAsSystemTime.md)|Chiamare questo metodo per ottenere l'ora nell'oggetto `COleDateTime` come struttura dati [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950).|  
|[COleDateTime::GetAsUDATE](../Topic/COleDateTime::GetAsUDATE.md)|Chiamare questo metodo per ottenere l'ora in `COleDateTime` come struttura dati **UDATE**.|  
|[COleDateTime::GetCurrentTime](../Topic/COleDateTime::GetCurrentTime.md)|Crea un oggetto `COleDateTime` che rappresenta l'ora corrente \(funzione membro statico\).|  
|[COleDateTime::GetDay](../Topic/COleDateTime::GetDay.md)|Restituisce il giorno che l'oggetto `COleDateTime` rappresenta \(da 1 a 31\).|  
|[COleDateTime::GetDayOfWeek](../Topic/COleDateTime::GetDayOfWeek.md)|Restituisce il giorno della settimana che l'oggetto `COleDateTime` rappresenta \(domenica \= 1\).|  
|[COleDateTime::GetDayOfYear](../Topic/COleDateTime::GetDayOfYear.md)|Restituisce il giorno dell'anno che l'oggetto `COleDateTime` per \(1° gennaio \= 1\).|  
|[COleDateTime::GetHour](../Topic/COleDateTime::GetHour.md)|Restituisce l'ora che l'oggetto `COleDateTime` rappresenta \(da 0 a 23\).|  
|[COleDateTime::GetMinute](../Topic/COleDateTime::GetMinute.md)|Restituisce il minuto che l'oggetto `COleDateTime` rappresenta \(da 0 a 59\).|  
|[COleDateTime::GetMonth](../Topic/COleDateTime::GetMonth.md)|Restituisce il mese che l'oggetto `COleDateTime` rappresenta \(da 1 a 12\).|  
|[COleDateTime::GetSecond](../Topic/COleDateTime::GetSecond.md)|Restituisce il secondo di questo oggetto rappresenta `COleDateTime` \(da 0 a 59\).|  
|[COleDateTime::GetStatus](../Topic/COleDateTime::GetStatus.md)|Ottiene lo stato \(validità\) di questo oggetto `COleDateTime`.|  
|[COleDateTime::GetYear](../Topic/COleDateTime::GetYear.md)|Restituisce l'anno di questo oggetto `COleDateTime` rappresenta.|  
|[COleDateTime::ParseDateTime](../Topic/COleDateTime::ParseDateTime.md)|Legge un valore data\/ora da una stringa e imposta il valore `COleDateTime`.|  
|[COleDateTime::SetDate](../Topic/COleDateTime::SetDate.md)|Imposta il valore di questo oggetto `COleDateTime` il valore solo data specificato.|  
|[COleDateTime::SetDateTime](../Topic/COleDateTime::SetDateTime.md)|Imposta il valore di questo oggetto `COleDateTime` il valore data\/ora specificato.|  
|[COleDateTime::SetStatus](../Topic/COleDateTime::SetStatus.md)|Imposta lo stato \(validità\) di questo oggetto `COleDateTime`.|  
|[COleDateTime::SetTime](../Topic/COleDateTime::SetTime.md)|Imposta il valore di questo oggetto `COleDateTime` al valore di ora specificato.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[\=\= Di COleDateTime::operator, COleDateTime::operator \<, e così via.](../Topic/COleDateTime%20Relational%20Operators.md)|Confronta due valori `COleDateTime`.|  
|[COleDateTime::operator \+, \- COleDateTime::operator](../Topic/COleDateTime::operator%20+,%20-.md)|Aggiungere e sottrarre i valori `COleDateTime`.|  
|[COleDateTime::operator \+\=, COleDateTime::operator \- \=](../Topic/COleDateTime::operator%20+=,%20-=.md)|Aggiungere e sottrarre un valore `COleDateTime` da questo oggetto `COleDateTime`.|  
|[COleDateTime::operator \=](../Topic/COleDateTime::operator%20=.md)|Copia un valore `COleDateTime`.|  
|[DATA di COleDateTime::operator, COleDateTime::operator Date\*](../Topic/COleDateTime::operator%20DATE.md)|Converte un valore `COleDateTime` in `DATE` o in `DATE*`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDateTime::m\_dt](../Topic/COleDateTime::m_dt.md)|Contiene **date** sottostante per questo oggetto `COleDateTime`.|  
|[COleDateTime::m\_status](../Topic/COleDateTime::m_status.md)|Contiene lo stato di questo oggetto `COleDateTime`.|  
  
## Note  
 `COleDateTime` non dispone di una classe base.  
  
 È uno dei tipi possibili per il tipo di dati [VARIANT](http://msdn.microsoft.com/it-it/e305240e-9e11-4006-98cc-26f4932d2118) di automazione OLE.  Un valore `COleDateTime` rappresenta un valore assoluto di data e ora.  
  
 Il tipo `DATE` viene implementato come valore a virgola mobile.  I giorni sono misurati dal 30 dicembre 1899, la mezzanotte.  Nella tabella seguente vengono illustrate alcune date e i relativi valori collegati:  
  
|Data|Valore|  
|----------|------------|  
|29 dicembre 1899, Mezzanotte|\-1.0|  
|29 dicembre 1899, 6 A.m.|\-1.25|  
|30 dicembre 1899, Mezzanotte|0.0|  
|31 dicembre 1899, Mezzanotte|1.0|  
|1° gennaio 1900, 6 AM..|2.25|  
  
> [!CAUTION]
>  La nota nella tabella sopra quella sebbene il giorno stimare diventano negativo prima di mezzanotte il 30 dicembre 1899, valori di ora contrario.  Ad esempio, il 6:00 è rappresentato sempre un valore frazionario 0,25 indipendentemente dall'intero che rappresenta il giorno è positivo \(dopo il 30 dicembre 1899\) o negativo \(prima del 30 dicembre 1899\).  Ciò significa che un confronto semplice a virgola mobile ordinerebbe erroneamente `COleDateTime` che rappresenta il 6:00 del 12\/29\/1899 come **later** che un 7:00 di rappresentazione lo stesso giorno.  
  
 La classe `COleDateTime` gestisce le date dal 1° gennaio, 100, fino al 31 dicembre, 9999.  La classe `COleDateTime` utilizza il calendario gregoriano, non supporta le date giuliano.  `COleDateTime` ignora l'ora legale.  \(Vedere\) [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
> [!NOTE]
>  È possibile utilizzare il formato `%y` per recuperare un anno a due cifre solo per le date di iniziare a 1900.  Se si utilizza il formato `%y` a una data prima del 1900, il codice generato un errore ASSERT.  
  
 Questo tipo viene utilizzato per rappresentare valori di data o solo ora.  Per convenzione, la data 0 \(30 dicembre 1899\) per i valori solo ora e il 00:00 di tempo \(mezzanotte\) per i valori solo data.  
  
 Se si crea un oggetto `COleDateTime` utilizzando una data precedente alla 100, la data viene accettata, ma chiamate successive a `GetYear`, `GetMonth`, `GetDay`, `GetHour`, `GetMinute`e permette `GetSecond` e restituiscono \-1.  In precedenza, utilizzare le date a due cifre, ma le date devono essere 100 o maggiore in MFC 4,2 e versioni successive.  
  
 Per evitare problemi, specificare una data a quattro cifre.  Ad esempio:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#1](../../atl-mfc-shared/codesnippet/CPP/coledatetime-class_1.cpp)]  
  
 Le operazioni aritmetiche di base per i valori `COleDateTime` utilizzano la classe complementare [COleDateTimeSpan](../../atl-mfc-shared/reference/coledatetimespan-class.md).  i valori di`COleDateTimeSpan` definiscono un intervallo di tempo.  La relazione tra queste classi è simile a quella tra [CTime](../../atl-mfc-shared/reference/ctime-class.md) e [CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md).  
  
 Per ulteriori informazioni sulle classi `COleDateTimeSpan` e `COleDateTime`, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
## Requisiti  
 **intestazione:** ATLComTime.h  
  
## Vedere anche  
 [COleVariant Class](../../mfc/reference/colevariant-class.md)   
 [CTime Class](../../atl-mfc-shared/reference/ctime-class.md)   
 [CTimeSpan Class](../../atl-mfc-shared/reference/ctimespan-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [ATL\/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)