---
title: 'Data e ora: Supporto di automazione'
ms.date: 11/04/2016
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
ms.openlocfilehash: c26534189c7b6f904611e78c5d2d6d0b1d6d7382
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57750203"
---
# <a name="date-and-time-automation-support"></a>Data e ora: Supporto di automazione

Questo articolo descrive come sfruttare i servizi di libreria di classi correlate alla gestione di data e ora. Le procedure descritte includono:

- [Recupero dell'ora corrente](../atl-mfc-shared/current-time-automation-classes.md)

- [Calcolo del tempo trascorso](../atl-mfc-shared/elapsed-time-automation-classes.md)

- [Formattazione di una rappresentazione di stringa di una data/ora](../atl-mfc-shared/formatting-time-automation-classes.md)

Il [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) classe fornisce un modo per rappresentare le informazioni di data e ora. Offre una maggiore granularità e un intervallo più ampio i [CTime](../atl-mfc-shared/reference/ctime-class.md) classe. Il [COleDateTimeSpan](../atl-mfc-shared/reference/coledatetimespan-class.md) classe rappresenta il tempo trascorso, ad esempio la differenza tra due `COleDateTime` oggetti.

Il `COleDateTime` e `COleDateTimeSpan` classi sono progettate per essere usato con il `COleVariant` classe usata nell'automazione. `COleDateTime` e `COleDateTimeSpan` sono anche utili nella programmazione di database MFC, ma possono essere usati ogni volta che si desidera modificare i valori di data e ora. Anche se il `COleDateTime` classe dispone di un intervallo di valori e granularità maggiore rispetto a più di `CTime` (classe), richiede più spazio di archiviazione per ogni oggetto più `CTime`. Esistono inoltre alcune considerazioni speciali quando si lavora nel tipo di dati sottostante. Visualizzare [nel tipo di dati](../atl-mfc-shared/date-type.md) per altri dettagli sull'implementazione di Data.

`COleDateTime` gli oggetti possono essere utilizzati per rappresentare le date comprese tra il 1 gennaio 100 e il 31 dicembre 9999. `COleDateTime` gli oggetti sono valori a virgola mobile, con una risoluzione approssimativa di 1 millisecondo. `COleDateTime` si basa sul tipo di dati DATE, definito nella documentazione di MFC sotto [COleDateTime:: operator data](../atl-mfc-shared/reference/coledatetime-class.md#operator_date). L'implementazione effettiva della data si estende oltre i limiti. Il `COleDateTime` implementazione impone tali limiti per facilitare l'uso con la classe.

`COleDateTime` non supporta giuliana. Si presuppone che il calendario gregoriano per estendere indietro nel tempo per il 1 gennaio 100.

`COleDateTime` Ignora l'ora legale (DST). Esempio di codice seguente vengono confrontate due metodi di calcolo di un intervallo di tempo che attraversa il relativo alla data dell'ora legale: uno che utilizza la libreria CRT, mentre l'altro `COleDateTime`. Ora legale passa, la maggior parte delle impostazioni locali, la seconda settimana nel mese di aprile e il terzo nel mese di ottobre.

Il primo metodo imposta due `CTime` oggetti *time1* e *time2*per aprile 5 e 6 aprile, rispettivamente, con le strutture di tipo C standard `tm` e `time_t`. Consente di visualizzare il codice *time1* e *time2* e l'intervallo di tempo tra di essi.

Il secondo metodo vengono creati due `COleDateTime` oggetti `oletime1` e `oletime2`e li imposta le date come stesso *time1* e *time2*. Viene visualizzato `oletime1` e `oletime2` e l'intervallo di tempo tra di essi.

La libreria CRT calcola in modo corretto una differenza di ore 23. `COleDateTimeSpan` Calcola una differenza di 24 ore.

[!code-cpp[NVC_ATLMFC_Utilities#176](../atl-mfc-shared/codesnippet/cpp/date-and-time-automation-support_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Data e ora](../atl-mfc-shared/date-and-time.md)
