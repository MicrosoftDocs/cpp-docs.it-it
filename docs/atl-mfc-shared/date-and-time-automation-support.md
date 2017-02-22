---
title: "Date and Time: Automation Support | Microsoft Docs"
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
  - "adding dates"
  - "automazione, date and time support"
  - "calculating dates and times"
  - "calcoli, data e ora"
  - "COleDateTime class, Automation date/time support"
  - "COleDateTimeSpan class, Automation date/time support"
  - "date, Automation support"
  - "tempo trascorso, calculating in Automation"
  - "formattazione [Visual Studio], date"
  - "formattazione [Visual Studio], ora"
  - "ora [Visual Studio], Automation support"
ms.assetid: 6eee94c4-943d-4ffc-bf7c-bdda89337ab0
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Date and Time: Automation Support
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene descritto come sfruttare i servizi della libreria di classi correlate fino a quel momento e gestione di tempo.  Le procedure riportate di seguito:  
  
-   [Ottenere l'ora corrente](../atl-mfc-shared/current-time-automation-classes.md)  
  
-   [Tempo trascorso](../atl-mfc-shared/elapsed-time-automation-classes.md)  
  
-   [Formattare una rappresentazione di stringa di una data\/ora](../atl-mfc-shared/formatting-time-automation-classes.md)  
  
 La classe [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) fornisce una modalità per rappresentare le informazioni su data e ora.  Fornisce la granularità più precisa e un intervallo maggiore della classe [CTime](../atl-mfc-shared/reference/ctime-class.md).  La classe [COleDateTimeSpan](../atl-mfc-shared/reference/coledatetimespan-class.md) rappresenta il tempo trascorso, ad esempio la differenza tra due oggetti `COleDateTime`.  
  
 Le classi `COleDateTimeSpan` e `COleDateTime` sono progettate per essere utilizzate con la classe `COleVariant` utilizzata in automazione.  `COleDateTime` e `COleDateTimeSpan` sono utili anche nella programmazione di database MFC, ma può essere utilizzato ogni qualvolta si desidera modificare i valori di data e ora.  Sebbene la classe `COleDateTime` dispongono di un elevato intervallo di valori e di granularità più precisa della classe `CTime`, richiede più archiviazione per l'oggetto che `CTime`.  Esistono inoltre alcune considerazioni speciali quando si utilizza il tipo sottostante **DATE**.  Vedere [Il tipo RELATIVO ALLA DATA](../atl-mfc-shared/date-type.md) per ulteriori informazioni sull'implementazione **DATE**.  
  
 Gli oggetti di`COleDateTime` possono essere utilizzati per rappresentare date tra il 1° gennaio, 100 e il 31 dicembre, 9999.  Gli oggetti di`COleDateTime` sono valori a virgola mobile, con una risoluzione approssimativa di 1 millisecondi.  `COleDateTime` è basato sul tipo di dati **DATE**, definito nella documentazione MFC in [DATA di COleDateTime::operator](../Topic/COleDateTime::operator%20DATE.md).  L'effettiva implementazione **DATE** estende oltre i limiti.  L'implementazione `COleDateTime` impone questi limiti per facilitare l'utilizzo della classe.  
  
 `COleDateTime` non supporta le date giuliano.  Il calendario gregoriano viene utilizzato per estendere indietro nel tempo fino il 1° gennaio, 100.  
  
 `COleDateTime` ignora l'ora legale \(DST\).  Nell'esempio di codice confronta due metodi di calcolo dell'intervallo di tempo crossing la data di modifica di DST: uno tramite CRT e l'altro utilizzando `COleDateTime`.  DST cambia, nella maggior parte delle impostazioni locali, la seconda settimana ad aprile e il terzo ad ottobre.  
  
 Il primo metodo imposta due oggetti `CTime`, *time1* e *time2*, a 5 aprile e il 6 aprile rispettivamente, utilizzando le strutture **tm** e `time_t`di tipo C standard.  Il codice visualizza *time1* e *time2* e l'intervallo tra loro.  
  
 Il secondo metodo crea due oggetti, `oletime1` e `oletime2`di `COleDateTime` e vengono impostati sulle stesse date *di time1* e *di time2*.  Visualizzare `oletime1` e `oletime2` e l'intervallo tra loro.  
  
 CRT correttamente calcola la differenza di 23 ore.  `COleDateTimeSpan` calcola la differenza di 24 ore.  
  
 Si noti che una soluzione alternativa è utilizzata da alla fine dell'esempio per visualizzare la data l'utilizzo corretto `COleDateTime::Format`.  Vedere l'articolo della Knowledge Base "OSTACOLARE: Formattare \("%D"\) non riesce a `COleDateTime` e `COleDateTimeSpan`" \(Q167338\).  
  
 [!code-cpp[NVC_ATLMFC_Utilities#176](../atl-mfc-shared/codesnippet/CPP/date-and-time-automation-support_1.cpp)]  
  
## Vedere anche  
 [Date and Time](../atl-mfc-shared/date-and-time.md)