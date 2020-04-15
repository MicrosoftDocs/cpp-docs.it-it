---
title: 'Recordset: aggiornamento dei record (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- records, updating
- ODBC recordsets, updating
- recordsets, editing records
- updating recordsets
- recordsets, updating
ms.assetid: 5ceecc06-7a86-43b1-93db-a54fb1e717c7
ms.openlocfilehash: 03fb696c1fadd834962d37c8e75b5f8910af819e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366971"
---
# <a name="recordset-how-recordsets-update-records-odbc"></a>Recordset: aggiornamento dei record (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

Oltre alla possibilità di selezionare record da un'origine dati, i recordset possono (facoltativamente) aggiornare o eliminare i record selezionati o aggiungere nuovi record. L'aggiornabilità di un recordset determina l'aggiornabilità di un recordset: se l'origine dati connessa è aggiornabile, le opzioni specificate quando si crea un oggetto recordset e il codice SQL creato.

> [!NOTE]
> Il codice SQL `CRecordset` su cui si basa l'oggetto può influire sull'aggiornabilità del recordset. Ad esempio, se il codice SQL contiene un join o una clausola **GROUP BY,** MFC imposta l'aggiornabilità su FALSE.

> [!NOTE]
> Questo argomento si applica agli oggetti derivati da `CRecordset` in cui non è stato implementato il recupero di massa di righe. Se si utilizza il recupero di massa di righe, vedere [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

In questo argomento:

- [Il ruolo nell'aggiornamento dei recordset](#_core_your_role_in_recordset_updating) e le operazioni eseguite dal framework.

- [Il recordset come buffer di modifica](#_core_the_edit_buffer) e le [differenze tra dynaset e snapshot](#_core_dynasets_and_snapshots).

[Recordset: come AddNew, Edit, and Delete Work (ODBC)](../../data/odbc/recordset-how-addnew-edit-and-delete-work-odbc.md) descrive le azioni di queste funzioni dal punto di vista del recordset.

[Recordset: ulteriori informazioni sugli aggiornamenti (ODBC)](../../data/odbc/recordset-more-about-updates-odbc.md) completano la storia di aggiornamento del recordset spiegando in che modo le transazioni influiscono sugli aggiornamenti, come la chiusura di un recordset o lo scorrimento influisce sugli aggiornamenti in corso e come gli aggiornamenti interagiscono con gli aggiornamenti di altri utenti.

## <a name="your-role-in-recordset-updating"></a><a name="_core_your_role_in_recordset_updating"></a>Il ruolo nell'aggiornamento dell'oggetto Recordset

Nella tabella seguente viene illustrato il ruolo dell'utente nell'utilizzo dei recordset per aggiungere, modificare o eliminare record, insieme alle operazioni eseguite automaticamente dal framework.

### <a name="recordset-updating-you-and-the-framework"></a>Aggiornamento dei recordset: tu e il framework

|Queste informazioni verranno usate|Framework|
|---------|-------------------|
|Determinare se l'origine dati è aggiornabile (o appendibile).|Fornisce le funzioni membro [CDatabase](../../mfc/reference/cdatabase-class.md) per testare l'aggiornabilità o l'appendice dell'origine dati.|
|Aprire un recordset aggiornabile (di qualsiasi tipo).||
|Determinare se il recordset è `CRecordset` aggiornabile chiamando `CanUpdate` `CanAppend`funzioni di aggiornamento quali o .||
|Chiamare le funzioni membro del recordset per aggiungere, modificare ed eliminare record.|Gestisce i meccanismi di scambio di dati tra l'oggetto recordset e l'origine dati.|
|Facoltativamente, utilizzare le transazioni per controllare il processo di aggiornamento.|Fornisce `CDatabase` funzioni membro per supportare le transazioni.|

Per ulteriori informazioni sulle transazioni, vedere [Transazione (ODBC)](../../data/odbc/transaction-odbc.md).

## <a name="the-edit-buffer"></a><a name="_core_the_edit_buffer"></a>Modifica buffer

Prese collettivamente, i membri dati di campo di un recordset fungono da buffer di modifica che contiene un record, ovvero il record corrente. Le operazioni di aggiornamento utilizzano questo buffer per operare sul record corrente.

- Quando si aggiunge un record, il buffer di modifica viene utilizzato per creare un nuovo record. Al termine dell'aggiunta del record, il record precedentemente corrente diventa nuovamente corrente.

- Quando si aggiorna (modifica) un record, il buffer di modifica viene utilizzato per impostare i membri dati di campo del recordset su nuovi valori. Al termine dell'aggiornamento, il record aggiornato è ancora corrente.

Quando si chiama [AddNew](../../mfc/reference/crecordset-class.md#addnew) o [Edit](../../mfc/reference/crecordset-class.md#edit), il record corrente viene archiviato in modo che possa essere ripristinato in un secondo momento in base alle esigenze. Quando si chiama [Delete](../../mfc/reference/crecordset-class.md#delete), il record corrente non viene archiviato ma contrassegnato come eliminato ed è necessario scorrere fino a un altro record.

> [!NOTE]
> Il buffer di modifica non svolge alcun ruolo nell'eliminazione dei record. Quando si elimina il record corrente, il record viene contrassegnato come eliminato e il recordset è "non su un record" fino a quando non si scorre su un record diverso.

## <a name="dynasets-and-snapshots"></a><a name="_core_dynasets_and_snapshots"></a>Dinamidi e istantanee

[I dynaset](../../data/odbc/dynaset.md) aggiornano il contenuto di un record mentre si scorre il record. [Gli snapshot](../../data/odbc/snapshot.md) sono rappresentazioni statiche dei record, pertanto il contenuto di un record non viene aggiornato a meno che non venga chiamato [Requery](../../mfc/reference/crecordset-class.md#requery). Per utilizzare tutte le funzionalità dei dynaset, è necessario utilizzare un driver ODBC conforme al livello corretto di supporto dell'API ODBC. Per ulteriori informazioni, vedere [ODBC](../../data/odbc/odbc-basics.md) e [Dynaset](../../data/odbc/dynaset.md).

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: funzionamento dei metodi AddNew, Edit e Delete (ODBC)](../../data/odbc/recordset-how-addnew-edit-and-delete-work-odbc.md)
