---
description: 'Altre informazioni su: classi DAO'
title: Classi DAO
ms.date: 09/17/2019
helpviewer_keywords:
- database classes [MFC], DAO
- DAO [MFC], classes
ms.assetid: b15d0cd6-328b-4288-9c19-d037a795db57
ms.openlocfilehash: bf30a4d985947ca435c53391ce9529caf9ec2c81
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97169411"
---
# <a name="dao-classes"></a>Classi DAO

DAO viene usato con i database di Access ed è supportato tramite Office 2013. DAO 3,6 è la versione finale ed è considerata obsoleta.

Queste classi interagiscono con le altre classi del Framework applicazione per consentire un facile accesso ai database DAO (Data Access Object), che usano lo stesso motore di database di Microsoft Visual Basic e Microsoft Access. Le classi DAO possono inoltre accedere a una vasta gamma di database per cui sono disponibili i driver Open Database Connectivity (ODBC).

I programmi che utilizzano i database DAO avranno almeno un `CDaoDatabase` oggetto e un `CDaoRecordset` oggetto.

> [!NOTE]
> L'ambiente Visual C++ e le procedure guidate non supportano più DAO (sebbene le classi DAO siano incluse ed è comunque possibile usarle). Microsoft consiglia di utilizzare ODBC per i nuovi progetti MFC. È consigliabile utilizzare solo DAO per la gestione delle applicazioni esistenti.

[CDaoWorkspace](reference/cdaoworkspace-class.md)<br/>
Gestisce una sessione di database denominata e protetta da password dall'accesso alla disconnessione. La maggior parte dei programmi usa l'area di lavoro predefinita.

[CDaoDatabase](reference/cdaodatabase-class.md)<br/>
Connessione a un database tramite la quale è possibile operare sui dati.

[CDaoRecordset](reference/cdaorecordset-class.md)<br/>
Rappresenta un set di record selezionati da un'origine dati.

[CDaoRecordView](reference/cdaorecordview-class.md)<br/>
Visualizzazione che mostra i record del database nei controlli.

[CDaoQueryDef](reference/cdaoquerydef-class.md)<br/>
Rappresenta una definizione di query, in genere una salvata in un database.

[CDaoTableDef](reference/cdaotabledef-class.md)<br/>
Rappresenta la definizione archiviata di una tabella di base o di una tabella collegata.

[CDaoException](reference/cdaoexception-class.md)<br/>
Rappresenta una condizione di eccezione risultante dalle classi DAO.

[CDaoFieldExchange](reference/cdaofieldexchange-class.md)<br/>
Supporta le routine DFX DAO (record field exchange) utilizzate dalle classi di database DAO. Normalmente non si userà direttamente questa classe.

## <a name="related-classes"></a>Classi correlate

[CLongBinary](reference/clongbinary-class.md)<br/>
Incapsula un handle per l'archiviazione per un oggetto binario di grandi dimensioni (BLOB), ad esempio una bitmap. `CLongBinary` gli oggetti vengono utilizzati per gestire oggetti dati di grandi dimensioni archiviati nelle tabelle di database.

[COleCurrency](reference/colecurrency-class.md)<br/>
Wrapper per la **valuta** del tipo di automazione OLE, un tipo aritmetico a virgola fissa, con 15 cifre prima del separatore decimale e 4 cifre dopo.

[COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md)<br/>
Wrapper per la **Data** del tipo di automazione OLE. Rappresenta valori di data e ora.

[COleVariant](reference/colevariant-class.md)<br/>
Wrapper per la **variante** del tipo di automazione OLE. I dati nei **Variant** possono essere archiviati in molti formati.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](class-library-overview.md)
