---
title: "CFileTimeSpan Class | Microsoft Docs"
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
  - "CFileTimeSpan"
  - "ATL.CFileTimeSpan"
  - "ATL::CFileTimeSpan"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFileTimeSpan class"
  - "shared classes, CFileTimeSpan"
ms.assetid: 5856fb39-9c82-4027-8ccf-8760890491ec
caps.latest.revision: 18
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CFileTimeSpan Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per gestire i relativi valori di data e ora associati a un file.  
  
## Sintassi  
  
```  
  
class CFileTimeSpan  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileTimeSpan::CFileTimeSpan](../Topic/CFileTimeSpan::CFileTimeSpan.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileTimeSpan::GetTimeSpan](../Topic/CFileTimeSpan::GetTimeSpan.md)|Chiamare questo metodo per recuperare l'intervallo di tempo dall'oggetto `CFileTimeSpan`.|  
|[CFileTimeSpan::SetTimeSpan](../Topic/CFileTimeSpan::SetTimeSpan.md)|Chiamare questo metodo per impostare l'intervallo di tempo dell'oggetto `CFileTimeSpan`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileTimeSpan::operator \-](../Topic/CFileTimeSpan::operator%20-.md)|Esegue la sottrazione su un oggetto `CFileTimeSpan`.|  
|[CFileTimeSpan::operator \!\=](../Topic/CFileTimeSpan::operator%20!=.md)|Confronta due oggetti `CFileTimeSpan` per stabilirne la disuguaglianza.|  
|[CFileTimeSpan::operator \+](../Topic/CFileTimeSpan::operator%20+.md)|Esegue l'aggiunta di un oggetto `CFileTimeSpan`.|  
|[CFileTimeSpan::operator \+\=](../Topic/CFileTimeSpan::operator%20+=.md)|Esegue l'aggiunta di un oggetto `CFileTimeSpan` e assegnare il risultato all'oggetto corrente.|  
|[CFileTimeSpan::operator \<](../Topic/CFileTimeSpan::operator%20%3C.md)|Confronta due oggetti `CFileTimeSpan` per determinare il minore.|  
|[CFileTimeSpan::operator \<\=](../Topic/CFileTimeSpan::operator%20%3C=.md)|Confronta due oggetti `CFileTimeSpan` per determinare l'uguaglianza o di minore.|  
|[CFileTimeSpan::operator \=](../Topic/CFileTimeSpan::operator%20=.md)|l'operatore di assegnazione.|  
|[CFileTimeSpan::operator \-\=](../Topic/CFileTimeSpan::operator%20-=.md)|Esegue la sottrazione su un oggetto `CFileTimeSpan` e assegnare il risultato all'oggetto corrente.|  
|[CFileTimeSpan::operator \=\=](../Topic/CFileTimeSpan::operator%20==.md)|Confronta due oggetti `CFileTimeSpan` per stabilirne l'uguaglianza.|  
|[CFileTimeSpan::operator \>](../Topic/CFileTimeSpan::operator%20%3E.md)|Confronta due oggetti `CFileTimeSpan` per determinare il più grande.|  
|[CFileTimeSpan::operator \>\=](../Topic/CFileTimeSpan::operator%20%3E=.md)|Confronta due oggetti `CFileTimeSpan` per determinare l'uguaglianza o il più grande.|  
  
## Note  
 Questa classe fornisce metodi per gestire i punti relativi verificano spesso quando si eseguono operazioni relative alla data di creazione di un file, ultimo accesso o dell'ultima modifica.  I metodi di questa classe vengono spesso utilizzati insieme a oggetti [classe di CFileTime](../../atl-mfc-shared/reference/cfiletime-class.md).  
  
## Esempio  
 Vedere l'esempio relativo [CFileTime::Millisecond](../Topic/CFileTime::Millisecond.md).  
  
## Requisiti  
 **Header:** atltime.h  
  
## Vedere anche  
 [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284)   
 [CFileTime Class](../../atl-mfc-shared/reference/cfiletime-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [ATL\/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)