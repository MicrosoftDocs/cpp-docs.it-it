---
description: 'Altre informazioni su: data e ora'
title: Data e ora
ms.date: 08/13/2019
helpviewer_keywords:
- time, MFC programming
- time
- MFC, date and time
- dates, MFC
ms.assetid: ecf56dc5-d418-4603-ad3e-af7e205a6403
ms.openlocfilehash: 4a8f2d5c9537f07c5d410361e79bf14a12778bc8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97167032"
---
# <a name="date-and-time"></a>Data e ora

MFC supporta diverse modalità di utilizzo di date e ore:

- Supporto per il [tipo di dati](../atl-mfc-shared/date-type.md)di automazione Data. Data supporta i valori di data, ora e data/ora. Le classi [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) e [COleDateTimeSpan](../atl-mfc-shared/reference/coledatetimespan-class.md) incapsulano questa funzionalità. Funzionano con la classe [COleVariant](../mfc/reference/colevariant-class.md) usando il supporto per l'automazione.

- Classi temporali per utilizzo generico. Le classi [CTime](../atl-mfc-shared/reference/ctime-class.md) e [CTimeSpan](../atl-mfc-shared/reference/ctimespan-class.md) incapsulano la maggior parte delle funzionalità associate alla libreria temporale ANSI-standard, dichiarata in time. H.

- Supporto per clock di sistema. Con la versione 3,0 di MFC, è stato aggiunto il supporto di `CTime` per i `SYSTEMTIME` tipi di dati Win32 e `FILETIME` .

## <a name="date-and-time-automation-support"></a>Data e ora: supporto per l'automazione

La classe [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) fornisce un modo per rappresentare le informazioni di data e ora. Fornisce granularità più fine e un intervallo maggiore rispetto alla classe [CTime](../atl-mfc-shared/reference/ctime-class.md) . La classe [COleDateTimeSpan](../atl-mfc-shared/reference/coledatetimespan-class.md) rappresenta il tempo trascorso, ad esempio la differenza tra due `COleDateTime` oggetti.

Le `COleDateTime` `COleDateTimeSpan` classi e sono progettate per essere utilizzate con la `COleVariant` classe. `COleDateTime` e `COleDateTimeSpan` sono utili anche nella programmazione di database MFC, ma possono essere usati quando si desidera modificare i valori di data e ora. Sebbene la `COleDateTime` classe disponga di un intervallo più ampio di valori e una granularità più fine rispetto alla `CTime` classe, richiede più spazio di archiviazione per oggetto rispetto a `CTime` . Quando si utilizza il tipo di data sottostante, è inoltre necessario tenere presenti alcune considerazioni speciali. Per ulteriori informazioni sull'implementazione di DATE, vedere [il tipo di data](../atl-mfc-shared/date-type.md).

`COleDateTime` gli oggetti possono essere utilizzati per rappresentare le date comprese tra il 1 gennaio 100 e il 31 dicembre 9999. `COleDateTime` gli oggetti sono valori a virgola mobile, con una risoluzione approssimativa di 1 millisecondo. `COleDateTime` si basa sul tipo di dati DATE, definito nella documentazione MFC in [COleDateTime:: operator Date](../atl-mfc-shared/reference/coledatetime-class.md#operator_date). L'implementazione effettiva della data si estende oltre questi limiti. L' `COleDateTime` implementazione impone questi limiti per semplificare l'utilizzo della classe.

`COleDateTime` non supporta le date di Julian. Si presuppone che il calendario gregoriano si estenda indietro nel tempo fino al 1 ° gennaio 100.

`COleDateTime` ignora l'ora legale (DST). Nell'esempio di codice seguente vengono confrontati due metodi di calcolo di un intervallo di tempo che supera la data di commutazione dell'ora legale: uno usando CRT e l'altro usando `COleDateTime` .

Il primo metodo imposta `CTime` rispettivamente due oggetti, *time1* e *time2*, a 5 aprile e 6 aprile, usando le strutture di tipo C standard `tm` e `time_t` . Il codice Visualizza *time1* e *time2* e l'intervallo di tempo tra di essi.

Il secondo metodo crea due `COleDateTime` oggetti, `oletime1` e e `oletime2` li imposta sulle stesse date di *time1* e *time2*. Vengono visualizzati `oletime1` e `oletime2` e l'intervallo di tempo tra di essi.

CRT calcola correttamente una differenza di 23 ore. `COleDateTimeSpan` calcola una differenza di 24 ore.

[!code-cpp[NVC_ATLMFC_Utilities#176](../atl-mfc-shared/codesnippet/cpp/date-and-time-automation-support_1.cpp)]

### <a name="get-the-current-time"></a>Ottiene l'ora corrente

Nella procedura seguente viene illustrato come creare un `COleDateTime` oggetto e inizializzarlo con l'ora corrente.

#### <a name="to-get-the-current-time"></a>Per ottenere l'ora corrente

1. Creare un oggetto `COleDateTime`.

1. Chiamare `GetCurrentTime`.

   [!code-cpp[NVC_ATLMFC_Utilities#177](../atl-mfc-shared/codesnippet/cpp/current-time-automation-classes_1.cpp)]

### <a name="calculate-elapsed-time"></a>Calcolare il tempo trascorso

In questa procedura viene illustrato come calcolare la differenza tra due `COleDateTime` oggetti e ottenere un `COleDateTimeSpan` risultato.

#### <a name="to-calculate-elapsed-time"></a>Per calcolare il tempo trascorso

1. Creare due `COleDateTime` oggetti.

1. Impostare uno degli `COleDateTime` oggetti sull'ora corrente.

1. Eseguire un'attività che richiede molto tempo.

1. Impostare l'altro `COleDateTime` oggetto sull'ora corrente.

1. Prendere la differenza tra le due volte.

   [!code-cpp[NVC_ATLMFC_Utilities#178](../atl-mfc-shared/codesnippet/cpp/elapsed-time-automation-classes_1.cpp)]

### <a name="format-a-time"></a>Formattare un'ora

#### <a name="to-format-a-time"></a>Per formattare un'ora

Utilizzare la `Format` funzione membro di [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) o [COleDateTimeSpan](../atl-mfc-shared/reference/coledatetimespan-class.md) per creare una stringa di caratteri che rappresenta l'ora o il tempo trascorso.

   [!code-cpp[NVC_ATLMFC_Utilities#179](../atl-mfc-shared/codesnippet/cpp/formatting-time-automation-classes_1.cpp)]

Per ulteriori informazioni, vedere la classe [COleVariant](../mfc/reference/colevariant-class.md).

## <a name="date-and-time-database-support"></a>Data e ora: supporto per database

A partire dalla versione 4,0, la programmazione di database MFC usa le classi [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) e [COleDateTimeSpan](../atl-mfc-shared/reference/coledatetimespan-class.md) per rappresentare i dati di data e ora. Queste classi, usate anche nell'automazione, derivano dalla classe [COleVariant](../mfc/reference/colevariant-class.md). Forniscono un supporto migliore per la gestione dei dati di data e ora rispetto a [CTime](../atl-mfc-shared/reference/ctime-class.md) e [CTimeSpan](../atl-mfc-shared/reference/ctimespan-class.md).

## <a name="date-and-time-systemtime-support"></a>Data e ora: supporto per SYSTEMTIME

La classe [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) dispone di costruttori che accettano i tempi di sistema e di file da Win32.

La `FILETIME` struttura Win32 rappresenta l'ora come valore a 64 bit. Si tratta di un formato più pratico per l'archiviazione interna rispetto a una `SYSTEMTIME` struttura e il formato usato da Win32 per rappresentare l'ora di creazione del file. Per informazioni sulla struttura SYSTEMTIME, vedere [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime). Per informazioni sulla struttura FILETIME, vedere [FILETIME](/windows/desktop/api/minwinbase/ns-minwinbase-filetime).

## <a name="see-also"></a>Vedi anche

[Concetti](../mfc/mfc-concepts.md)\
[Argomenti MFC generali](../mfc/general-mfc-topics.md)
