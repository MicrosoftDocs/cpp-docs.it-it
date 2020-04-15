---
title: Classi DAO
ms.date: 09/17/2019
helpviewer_keywords:
- database classes [MFC], DAO
- DAO [MFC], classes
ms.assetid: b15d0cd6-328b-4288-9c19-d037a795db57
ms.openlocfilehash: 7ae85cbeb7790cadb8c26dfbdb7a5163dbcd47c0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373508"
---
# <a name="dao-classes"></a>Classi DAO

DAO viene utilizzato con i database di Access ed è supportato tramite Office 2013. DAO 3.6 è la versione finale ed è considerata obsoleta.

Queste classi funzionano con le altre classi del framework dell'applicazione per fornire un facile accesso ai database DAO (Data Access Object), che utilizzano lo stesso modulo di gestione di database di Microsoft Visual Basic e Microsoft Access. Le classi DAO possono inoltre accedere a un'ampia gamma di database per i quali sono disponibili driver ODBC (Open Database Connectivity).

I programmi che utilizzano database `CDaoDatabase` DAO `CDaoRecordset` dislasceranno almeno un oggetto e un oggetto.

> [!NOTE]
> L'ambiente e le procedure guidate di Visual C, non supportano più DAO (anche se le classi DAO sono incluse ed è comunque possibile utilizzarle). Microsoft consiglia di utilizzare ODBC per i nuovi progetti MFC. È consigliabile utilizzare DAO solo nella gestione delle applicazioni esistenti.

[CDaoWorkspace](../mfc/reference/cdaoworkspace-class.md)<br/>
Gestisce una sessione di database denominata protetta da password dall'accesso alla disconnessione. La maggior parte dei programmi utilizza l'area di lavoro predefinita.

[CDaoDatabase](../mfc/reference/cdaodatabase-class.md)<br/>
Una connessione a un database tramite la quale è possibile operare sui dati.

[Cdaorecordset](../mfc/reference/cdaorecordset-class.md)<br/>
Rappresenta un set di record selezionati da un'origine dati.

[CDaoRecordView](../mfc/reference/cdaorecordview-class.md)<br/>
Visualizzazione che mostra i record del database nei controlli.

[CDaoQueryDef](../mfc/reference/cdaoquerydef-class.md)<br/>
Rappresenta una definizione di query, in genere salvata in un database.

[CDaoTableDef](../mfc/reference/cdaotabledef-class.md)<br/>
Rappresenta la definizione archiviata di una tabella di base o di una tabella collegata.

[CDaoException](../mfc/reference/cdaoexception-class.md)<br/>
Rappresenta una condizione di eccezione derivante dalle classi DAO.

[CDaoFieldExchange](../mfc/reference/cdaofieldexchange-class.md)<br/>
Supporta le routine DFX DAO (record field exchange) utilizzate dalle classi di database DAO. In genere questa classe non viene utilizzata direttamente.

## <a name="related-classes"></a>Classi correlate

[CLongBinary](../mfc/reference/clongbinary-class.md)<br/>
Incapsula un handle all'archiviazione per un oggetto binario di grandi dimensioni (BLOB), ad esempio una bitmap. `CLongBinary`gli oggetti vengono utilizzati per gestire oggetti dati di grandi dimensioni archiviati nelle tabelle di database.

[COleCurrency](../mfc/reference/colecurrency-class.md)<br/>
Wrapper per il tipo di automazione OLE **CURRENCY**, un tipo aritmetico a virgola fissa, con 15 cifre prima del separatore decimale e 4 cifre dopo.

[COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md)<br/>
Wrapper per il tipo di automazione OLE **DATE**. Rappresenta valori di data e ora.

[COleVariant](../mfc/reference/colevariant-class.md)<br/>
Wrapper per il tipo di automazione OLE **VARIANT**. I dati in **VARIANT**s possono essere memorizzati in molti formati.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../mfc/class-library-overview.md)
