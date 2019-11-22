---
title: Classi DAO
ms.date: 09/17/2019
f1_keywords:
- vc.classes.data
helpviewer_keywords:
- database classes [MFC], DAO
- DAO [MFC], classes
ms.assetid: b15d0cd6-328b-4288-9c19-d037a795db57
ms.openlocfilehash: cdd3fd9a733df73d36441693d049724878219df5
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74303402"
---
# <a name="dao-classes"></a>Classi DAO

DAO viene usato con i database di Access ed è supportato tramite Office 2013. DAO 3,6 è la versione finale ed è considerata obsoleta.

Queste classi interagiscono con le altre classi del Framework applicazione per consentire un facile accesso ai database DAO (Data Access Object), che usano lo stesso motore di database di Microsoft Visual Basic e Microsoft Access. Le classi DAO possono inoltre accedere a una vasta gamma di database per cui sono disponibili i driver Open Database Connectivity (ODBC).

I programmi che utilizzano i database DAO avranno almeno un oggetto `CDaoDatabase` e un oggetto `CDaoRecordset`.

> [!NOTE]
>  L'ambiente C++ visivo e le procedure guidate non supportano più DAO (sebbene le classi DAO siano incluse ed è comunque possibile usarle). Microsoft consiglia di utilizzare ODBC per i nuovi progetti MFC. È consigliabile utilizzare solo DAO per la gestione delle applicazioni esistenti.

[CDaoWorkspace](../mfc/reference/cdaoworkspace-class.md)<br/>
Gestisce una sessione di database denominata e protetta da password dall'accesso alla disconnessione. La maggior parte dei programmi usa l'area di lavoro predefinita.

[CDaoDatabase](../mfc/reference/cdaodatabase-class.md)<br/>
Connessione a un database tramite la quale è possibile operare sui dati.

[CDaoRecordset](../mfc/reference/cdaorecordset-class.md)<br/>
Rappresenta un set di record selezionati da un'origine dati.

[CDaoRecordView](../mfc/reference/cdaorecordview-class.md)<br/>
Visualizzazione che mostra i record del database nei controlli.

[CDaoQueryDef](../mfc/reference/cdaoquerydef-class.md)<br/>
Rappresenta una definizione di query, in genere una salvata in un database.

[CDaoTableDef](../mfc/reference/cdaotabledef-class.md)<br/>
Rappresenta la definizione archiviata di una tabella di base o di una tabella collegata.

[CDaoException](../mfc/reference/cdaoexception-class.md)<br/>
Rappresenta una condizione di eccezione risultante dalle classi DAO.

[CDaoFieldExchange](../mfc/reference/cdaofieldexchange-class.md)<br/>
Supporta le routine DFX DAO (record field exchange) utilizzate dalle classi di database DAO. Normalmente non si userà direttamente questa classe.

## <a name="related-classes"></a>Classi correlate

[CLongBinary](../mfc/reference/clongbinary-class.md)<br/>
Incapsula un handle per l'archiviazione per un oggetto binario di grandi dimensioni (BLOB), ad esempio una bitmap. gli oggetti `CLongBinary` vengono utilizzati per gestire oggetti dati di grandi dimensioni archiviati nelle tabelle di database.

[COleCurrency](../mfc/reference/colecurrency-class.md)<br/>
Wrapper per il tipo di automazione OLE **CURRENCY**, un tipo aritmetico a virgola fissa, con 15 cifre prima del separatore decimale e 4 cifre dopo.

[COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md)<br/>
Wrapper per il tipo di automazione OLE **DATA**. Rappresenta valori di data e ora.

[COleVariant](../mfc/reference/colevariant-class.md)<br/>
Wrapper per il tipo di automazione OLE **VARIANT**. I dati in **VARIANT** possono essere archiviati in numerosi formati.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
