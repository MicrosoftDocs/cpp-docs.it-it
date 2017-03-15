---
title: "Date and Time | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "date, MFC"
  - "MFC, data e ora"
  - "ora"
  - "ora, programmazione MFC"
ms.assetid: ecf56dc5-d418-4603-ad3e-af7e205a6403
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Date and Time
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

MFC supporta vari modi di lavorare con date e ore.  tra cui:  
  
-   Classi per tutti gli utilizzi di tempo.  Le classi [CTimeSpan](../atl-mfc-shared/reference/ctimespan-class.md) e [CTime](../atl-mfc-shared/reference/ctime-class.md) incapsulano la maggior parte delle funzionalità associata alla raccolta di tempo ANSI standard, dichiarata in TIME.H.  
  
-   Supporto all'orologio di sistema.  Con la versione 3,0 di MFC, supporto viene aggiunto a `CTime` per il `SYSTEMTIME` Win32 e i tipi di dati `FILETIME`.  
  
-   Supporto all'automazione [tipo di dati RELATIVO ALLA DATA](../atl-mfc-shared/date-type.md).  I supporti di**DATE** data, ora e valori di data e ora.  Le classi [COleDateTimeSpan](../atl-mfc-shared/reference/coledatetimespan-class.md) e [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) incapsulano questa funzionalità.  Utilizzano la classe [COleVariant](../mfc/reference/colevariant-class.md) utilizzando il supporto di automazione.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Data e ora: Classi di utilizzo generale](../atl-mfc-shared/date-and-time-general-purpose-classes.md)  
  
-   [Data e ora: supporto di SYSTEMTIME](../atl-mfc-shared/date-and-time-systemtime-support.md)  
  
-   [Data e ora: supporto di automazione](../atl-mfc-shared/date-and-time-automation-support.md)  
  
-   [Data e ora: Supporto database](../atl-mfc-shared/date-and-time-database-support.md)  
  
## Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)   
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)