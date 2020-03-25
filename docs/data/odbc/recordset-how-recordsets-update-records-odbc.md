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
ms.openlocfilehash: 578b3b39d90b3beb80dbd201d4982fee30dc6bce
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212875"
---
# <a name="recordset-how-recordsets-update-records-odbc"></a>Recordset: aggiornamento dei record (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

Oltre alla possibilità di selezionare record da un'origine dati, i recordset possono (facoltativamente) aggiornare o eliminare i record selezionati o aggiungere nuovi record. Tre fattori determinano l'aggiornamento di un recordset: se l'origine dati connessa è aggiornabile, le opzioni specificate durante la creazione di un oggetto recordset e l'oggetto SQL creato.

> [!NOTE]
>  Il SQL su cui si basa l'oggetto `CRecordset` può influire sull'aggiornamento del recordset. Se, ad esempio, SQL contiene una clausola join o **Group by** , MFC imposta l'aggiornamento su false.

> [!NOTE]
>  Questo argomento si applica agli oggetti derivati da `CRecordset` in cui non è stato implementato il recupero di massa di righe. Se si utilizza il recupero di righe bulk, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

In questo argomento:

- [Il ruolo dell'utente nell'aggiornamento del recordset](#_core_your_role_in_recordset_updating) e il funzionamento del Framework.

- [Il recordset come buffer di modifica](#_core_the_edit_buffer) e le [differenze tra i dynaset e gli snapshot](#_core_dynasets_and_snapshots).

[Recordset: il funzionamento di AddNew, Edit e Delete (ODBC)](../../data/odbc/recordset-how-addnew-edit-and-delete-work-odbc.md) descrive le azioni di queste funzioni dal punto di vista del recordset.

[Recordset: ulteriori informazioni sugli aggiornamenti (ODBC)](../../data/odbc/recordset-more-about-updates-odbc.md) completano la storia degli aggiornamenti dei recordset spiegando in che modo le transazioni influiscono sugli aggiornamenti, in che modo la chiusura di un recordset o lo scorrimento influisce sugli aggiornamenti in corso e su come gli aggiornamenti interagiscono con gli aggiornamenti di altri utenti.

##  <a name="your-role-in-recordset-updating"></a><a name="_core_your_role_in_recordset_updating"></a>Ruolo nell'aggiornamento del recordset

Nella tabella seguente viene illustrato il ruolo nell'utilizzo di recordset per aggiungere, modificare o eliminare record, oltre a ciò che il Framework esegue per l'utente.

### <a name="recordset-updating-you-and-the-framework"></a>Aggiornamento del recordset: l'utente e il Framework

|Queste informazioni verranno usate|Framework|
|---------|-------------------|
|Determinare se l'origine dati è aggiornabile (o accodabile).|Fornisce funzioni membro di [CDatabase](../../mfc/reference/cdatabase-class.md) per testare l'aggiornamento o l'aggiunta dell'origine dati.|
|Apre un recordset aggiornabile (di qualsiasi tipo).||
|Determinare se il recordset è aggiornabile chiamando `CRecordset` funzioni di aggiornamento, ad esempio `CanUpdate` o `CanAppend`.||
|Chiamare le funzioni membro recordset per aggiungere, modificare ed eliminare record.|Gestisce i meccanismi di scambio dei dati tra l'oggetto recordset e l'origine dati.|
|Facoltativamente, utilizzare le transazioni per controllare il processo di aggiornamento.|Fornisce `CDatabase` funzioni membro per supportare le transazioni.|

Per ulteriori informazioni sulle transazioni, vedere [Transaction (ODBC)](../../data/odbc/transaction-odbc.md).

##  <a name="the-edit-buffer"></a><a name="_core_the_edit_buffer"></a>Buffer di modifica

Considerati collettivamente, i membri dati del campo di un recordset vengono utilizzati come un buffer di modifica contenente un record, ovvero il record corrente. Le operazioni di aggiornamento usano questo buffer per operare sul record corrente.

- Quando si aggiunge un record, il buffer di modifica viene usato per compilare un nuovo record. Al termine dell'aggiunta del record, il record precedentemente aggiornato diventa nuovamente corrente.

- Quando si aggiorna (modifica) un record, il buffer di modifica viene utilizzato per impostare i membri dati del campo del recordset su nuovi valori. Al termine dell'aggiornamento, il record aggiornato è ancora aggiornato.

Quando si chiama [AddNew](../../mfc/reference/crecordset-class.md#addnew) o [Edit](../../mfc/reference/crecordset-class.md#edit), il record corrente viene archiviato in modo che possa essere ripristinato in un secondo momento, se necessario. Quando si chiama [Delete](../../mfc/reference/crecordset-class.md#delete), il record corrente non viene archiviato, ma è contrassegnato come eliminato ed è necessario scorrere fino a un altro record.

> [!NOTE]
>  Il buffer di modifica non svolge alcun ruolo nell'eliminazione dei record. Quando si elimina il record corrente, il record viene contrassegnato come eliminato e il recordset è "non in un record" fino a quando non si scorre un record diverso.

##  <a name="dynasets-and-snapshots"></a><a name="_core_dynasets_and_snapshots"></a>Dynaset e snapshot

I [Dynaset](../../data/odbc/dynaset.md) aggiornano il contenuto di un record mentre si scorre il record. Gli [snapshot](../../data/odbc/snapshot.md) sono rappresentazioni statiche dei record, quindi il contenuto di un record non viene aggiornato a meno che non si chiami [Requery](../../mfc/reference/crecordset-class.md#requery). Per utilizzare tutte le funzionalità dei dynaset, è necessario utilizzare un driver ODBC conforme al livello corretto del supporto delle API ODBC. Per ulteriori informazioni, vedere [ODBC](../../data/odbc/odbc-basics.md) e [Dynaset](../../data/odbc/dynaset.md).

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: funzionamento dei metodi AddNew, Edit e Delete (ODBC)](../../data/odbc/recordset-how-addnew-edit-and-delete-work-odbc.md)
