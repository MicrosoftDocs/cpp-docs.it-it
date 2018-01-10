---
title: 'Data e ora: supporto di automazione | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs: C++
helpviewer_keywords:
- adding dates
- calculating dates and times
- formatting [Visual Studio], dates
- dates, Automation support
- elapsed time, calculating in Automation
- COleDateTime class, Automation date/time support
- COleDateTimeSpan class, Automation date/time support
- Automation, date and time support
- formatting [Visual Studio], time
- calculations, date and time
- time [Visual Studio], Automation support
ms.assetid: 6eee94c4-943d-4ffc-bf7c-bdda89337ab0
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6a40a8fe49d9564714c328b657bc0d85d52ad84b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="date-and-time-automation-support"></a>Data e ora: supporto di automazione
In questo articolo viene descritto come sfruttare i servizi di libreria di classe relativi alla gestione di data e ora. Le procedure descritte comprendono:  
  
-   [Recupero dell'ora corrente](../atl-mfc-shared/current-time-automation-classes.md)  
  
-   [Il calcolo del tempo trascorso](../atl-mfc-shared/elapsed-time-automation-classes.md)  
  
-   [Formattazione di una rappresentazione di stringa di una data/ora](../atl-mfc-shared/formatting-time-automation-classes.md)  
  
 Il [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) classe fornisce un modo per rappresentare le informazioni di data e ora. Offre una maggiore granularità e un intervallo più ampio di [CTime](../atl-mfc-shared/reference/ctime-class.md) classe. Il [COleDateTimeSpan](../atl-mfc-shared/reference/coledatetimespan-class.md) classe rappresenta il tempo trascorso, ad esempio la differenza tra due `COleDateTime` oggetti.  
  
 Il `COleDateTime` e `COleDateTimeSpan` classi sono progettate per essere utilizzato con la `COleVariant` classe usata nell'automazione. `COleDateTime`e `COleDateTimeSpan` sono anche utili per la programmazione di database MFC, ma può essere utilizzati ogni volta che si desidera modificare i valori di data e ora. Sebbene il `COleDateTime` classe dispone di un intervallo di valori e granularità maggiore rispetto a più di `CTime` (classe), richiede più spazio di archiviazione per ogni oggetto di `CTime`. Esistono inoltre alcune considerazioni speciali quando si lavora con sottostante **data** tipo. Vedere [nel tipo di dati](../atl-mfc-shared/date-type.md) per ulteriori informazioni sull'implementazione di **data**.  
  
 `COleDateTime`gli oggetti possono essere utilizzati per rappresentare le date comprese tra il 1 gennaio 100 e il 31 dicembre 9999. `COleDateTime`gli oggetti sono valori a virgola mobile, con una risoluzione approssimativa di 1 millisecondo. `COleDateTime`si basa sul **data** tipo di dati, definito nella documentazione di MFC in [COleDateTime:: operator data](../atl-mfc-shared/reference/coledatetime-class.md#operator_date). L'implementazione effettiva del **data** si estende oltre i limiti. Il `COleDateTime` implementazione impone tali limiti per facilitare l'utilizzo della classe.  
  
 `COleDateTime`non supporta date basate sulla datazione giuliana. Si presuppone che il calendario gregoriano per estendere indietro nel tempo per il 1 gennaio 100.  
  
 `COleDateTime`Ignora l'ora legale (DST). Esempio di codice seguente vengono confrontate due metodi per il calcolo di un intervallo di tempo che attraversa il relativo alla data dell'ora legale: uno che utilizza la libreria CRT, mentre l'altro `COleDateTime`. Ora legale avviene, nella maggior parte dei casi, la seconda settimana di aprile e il terzo nel mese di ottobre.  
  
 Il primo metodo imposta due `CTime` oggetti, *time1* e *time2*per 5 e 6 di aprile, rispettivamente, con le strutture di tipo C standard **tm** e `time_t`. Il codice visualizza *time1* e *time2* e l'intervallo di tempo tra di essi.  
  
 Il secondo metodo consente di creare due `COleDateTime` oggetti, `oletime1` e `oletime2`e li imposta sulle stesse date di *time1* e *time2*. Visualizza `oletime1` e `oletime2` e l'intervallo di tempo tra di essi.  
  
 La libreria CRT calcola correttamente una differenza di 23 ore. `COleDateTimeSpan`Calcola una differenza di 24 ore.  
  
 Si noti che una soluzione alternativa viene utilizzata verso la fine dell'esempio per visualizzare la data in modo corretto utilizzando `COleDateTime::Format`. Vedere l'articolo della Knowledge Base "BUG: Format("%D") ha esito negativo per `COleDateTime` e `COleDateTimeSpan`" (Q167338).  
  
 [!code-cpp[NVC_ATLMFC_Utilities#176](../atl-mfc-shared/codesnippet/cpp/date-and-time-automation-support_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Data e ora](../atl-mfc-shared/date-and-time.md)

