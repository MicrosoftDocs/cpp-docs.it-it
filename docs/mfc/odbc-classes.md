---
title: Classi ODBC
ms.date: 11/04/2016
helpviewer_keywords:
- database classes [MFC], ODBC
- ODBC classes [MFC]
ms.assetid: 6c40fca8-3033-4873-9abe-7f51725de0e0
ms.openlocfilehash: a4cfa0d7afa197de7b65b6a0bd6b881a09534ef6
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447691"
---
# <a name="odbc-classes"></a>Classi ODBC

Queste classi interagiscono con le altre classi del Framework applicazione per consentire un facile accesso a un'ampia gamma di database per cui sono disponibili i driver Open Database Connectivity (ODBC).

I programmi che utilizzano i database ODBC avranno almeno un oggetto `CDatabase` e un oggetto `CRecordset`.

[CDatabase](../mfc/reference/cdatabase-class.md)<br/>
Incapsula una connessione a un'origine dati tramite la quale è possibile operare sull'origine dati.

[CRecordset](../mfc/reference/crecordset-class.md)<br/>
Incapsula un set di record selezionati da un'origine dati. I recordset consentono lo scorrimento da record a record, l'aggiornamento dei record (aggiunta, modifica ed eliminazione di record), la qualificazione della selezione con un filtro, l'ordinamento della selezione e la parametrizzazione della selezione con le informazioni ottenute o calcolate in fase di esecuzione.

[CRecordView](../mfc/reference/crecordview-class.md)<br/>
Fornisce una visualizzazione form connessa direttamente a un oggetto recordset. Il meccanismo DDX (Dialog Data Exchange) scambia i dati tra il recordset e i controlli della visualizzazione di record. Analogamente a tutte le visualizzazioni form, una visualizzazione di record si basa su una risorsa modello di finestra di dialogo. Le visualizzazioni di record supportano anche il passaggio da record a record nel recordset, l'aggiornamento dei record e la chiusura del recordset associato alla chiusura della visualizzazione di record.

[CDBException](../mfc/reference/cdbexception-class.md)<br/>
Eccezione generata da errori nell'elaborazione dell'accesso ai dati. Questa classe svolge la stessa funzione di altre classi di eccezione nel meccanismo di gestione delle eccezioni della libreria di classi.

[CFieldExchange](../mfc/reference/cfieldexchange-class.md)<br/>
Fornisce informazioni sul contesto per supportare il servizio RFX (record Field Exchange), che scambia i dati tra i membri dati del campo e i membri dati dei parametri di un oggetto recordset e le colonne della tabella corrispondenti nell'origine dati. Analogo alla classe [CDataExchange](../mfc/reference/cdataexchange-class.md), che viene utilizzata in modo analogo per il DDX (Dialog Data Exchange).

## <a name="related-classes"></a>Classi correlate

[CLongBinary](../mfc/reference/clongbinary-class.md)<br/>
Incapsula un handle per l'archiviazione per un oggetto binario di grandi dimensioni (BLOB), ad esempio una bitmap. gli oggetti `CLongBinary` vengono utilizzati per gestire oggetti dati di grandi dimensioni archiviati nelle tabelle di database.

[CDBVariant](../mfc/reference/cdbvariant-class.md)<br/>
Consente di archiviare un valore senza doversi preoccupare del tipo di dati del valore. `CDBVariant` tiene traccia del tipo di dati del valore corrente, memorizzato in un'Unione.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
