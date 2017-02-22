---
title: "CFileTime Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CFileTime"
  - "CFileTime"
  - "ATL.CFileTime"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFileTime class"
  - "shared classes, CFileTime"
ms.assetid: 1a358a65-1383-4124-b0d4-59b026e6860f
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# CFileTime Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per gestire i valori di data e ora associati a un file.  
  
## Sintassi  
  
```  
  
   class CFileTime :   
public FILETIME  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileTime::CFileTime](../Topic/CFileTime::CFileTime.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileTime::GetCurrentTime](../Topic/CFileTime::GetCurrentTime.md)|Chiamare questa funzione statica per recuperare un oggetto `CFileTime` che rappresenta la data e l'ora di sistema.|  
|[CFileTime::GetTime](../Topic/CFileTime::GetTime.md)|Chiamare questo metodo per recuperare il tempo dall'oggetto `CFileTime`.|  
|[CFileTime::LocalToUTC](../Topic/CFileTime::LocalToUTC.md)|Chiamare questo metodo per convertire un'ora del file locale all'ora del file in base al formato UTC \(\(UTC\).|  
|[CFileTime::SetTime](../Topic/CFileTime::SetTime.md)|Chiamare questo metodo per impostare la data e l'ora archiviata dall'oggetto `CFileTime`.|  
|[CFileTime::UTCToLocal](../Topic/CFileTime::UTCToLocal.md)|Chiamare questo metodo per convertire l'ora in base al formato UTC \(\(UTC\) durante il file locale.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileTime::operator \-](../Topic/CFileTime::operator%20-.md)|Questo operatore viene utilizzato per eseguire la sottrazione su un oggetto `CFileTimeSpan` o `CFileTime`.|  
|[CFileTime::operator \!\=](../Topic/CFileTime::operator%20!=.md)|Questo operatore confronta due oggetti `CFileTime` disuguaglianza.|  
|[CFileTime::operator \+](../Topic/CFileTime::operator%20+.md)|Questo operatore viene utilizzato per eseguire l'operazione aggiungi su un oggetto `CFileTimeSpan`.|  
|[CFileTime::operator \+\=](../Topic/CFileTime::operator%20+=.md)|Questo operatore viene utilizzato per eseguire l'operazione aggiungi su un oggetto `CFileTimeSpan` e assegnare il risultato all'oggetto corrente.|  
|[CFileTime::operator \<](../Topic/CFileTime::operator%20%3C.md)|Questo operatore confronta due oggetti `CFileTime` per determinare il minore.|  
|[CFileTime::operator \<\=](../Topic/CFileTime::operator%20%3C=.md)|Questo operatore confronta due oggetti `CFileTime` per determinare l'uguaglianza o di minore.|  
|[CFileTime::operator \=](../Topic/CFileTime::operator%20=.md)|l'operatore di assegnazione.|  
|[CFileTime::operator \-\=](../Topic/CFileTime::operator%20-=.md)|Questo operatore viene utilizzato per eseguire la sottrazione su un oggetto `CFileTimeSpan` e assegnare il risultato all'oggetto corrente.|  
|[CFileTime::operator \=\=](../Topic/CFileTime::operator%20==.md)|Questo operatore confronta due oggetti `CFileTime` l'uguaglianza.|  
|[CFileTime::operator \>](../Topic/CFileTime::operator%20%3E.md)|Questo operatore confronta due oggetti `CFileTime` per determinare il più grande.|  
|[CFileTime::operator \>\=](../Topic/CFileTime::operator%20%3E=.md)|Questo operatore confronta due oggetti `CFileTime` per determinare l'uguaglianza o il più grande.|  
  
### Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileTime::Day](../Topic/CFileTime::Day.md)|Un membro dati statici che memorizza il numero di 100 intervalli di nanosecondo che costituiscono un giorno.|  
|[CFileTime::Hour](../Topic/CFileTime::Hour.md)|Un membro dati statici che memorizza il numero di 100 intervalli di nanosecondo che costituiscono un'ora.|  
|[CFileTime::Millisecond](../Topic/CFileTime::Millisecond.md)|Un membro dati statici che memorizza il numero di 100 intervalli di nanosecondo che costituiscono un millisecondo.|  
|[CFileTime::Minute](../Topic/CFileTime::Minute.md)|Un membro dati statici che memorizza il numero di 100 intervalli di nanosecondo che costituiscono un minuto.|  
|[CFileTime::Second](../Topic/CFileTime::Second.md)|Un membro dati statici che memorizza il numero di 100 intervalli di nanosecondo che costituiscono un secondo.|  
|[CFileTime::Week](../Topic/CFileTime::Week.md)|Un membro dati statici che memorizza il numero di 100 intervalli di nanosecondo che costituiscono una settimana.|  
  
## Note  
 Questa classe fornisce metodi per gestire i valori di data e ora associati alla creazione, l'accesso e la modifica dei file.  I metodi e della classe sono spesso utilizzati insieme a oggetti `CFileTimeSpan`, che si occupano di valori relativi.  
  
 Il valore di data e ora è archiviato come valore a 64 bit che rappresenta il numero di 100 intervalli di nanosecondo dal 1° gennaio 1601.  È il formato \(UTC\) di Coordinated Universal Time\).  
  
 Le variabili membro const statici sono forniti per semplificare i calcoli:  
  
|Variabile membro|Un numero a 100 intervalli di nanosecondo|  
|----------------------|-----------------------------------------------|  
|Millisecond|10,000|  
|Secondo|\* 1.000 Millisecondi|  
|Minuto|In secondo luogo \* 60|  
|Ora|\* 60 Minuto|  
|Giorno|Ora \* 24|  
|Settimana|Giorno \* 7|  
  
 **Note** non tutti i file system può creazione record e l'ora dell'ultimo accesso e non tutti i file system registrarli nello stesso modo.  Ad esempio, nel file system FAT Windows NT, creare il tempo ha una risoluzione di 10 millisecondi, il tempo di scrittura con una risoluzione di 2 secondi e il tempo di accesso con una risoluzione di 1 giorni \(accedere alla data\).  In NTFS, il tempo di accesso con una risoluzione di 1 ore.  Inoltre, tempi di record FAT su disco in tempi di record NTFS, ma di ora locale sul disco in ora UTC.  Per ulteriori informazioni, vedere [Ore del file](http://msdn.microsoft.com/library/windows/desktop/ms724290).  
  
## Gerarchia di ereditarietà  
 `FILETIME`  
  
 `CFileTime`  
  
## Requisiti  
 **Header:** atltime.h  
  
## Vedere anche  
 [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284)   
 [CFileTimeSpan Class](../../atl-mfc-shared/reference/cfiletimespan-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [ATL\/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)