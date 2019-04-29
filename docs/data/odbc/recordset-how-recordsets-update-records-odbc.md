---
title: 'Recordset: Aggiornamento dei record (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- records, updating
- ODBC recordsets, updating
- recordsets, editing records
- updating recordsets
- recordsets, updating
ms.assetid: 5ceecc06-7a86-43b1-93db-a54fb1e717c7
ms.openlocfilehash: bf71f562714e2dacfe75540e1e532219b3eb307f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62397809"
---
# <a name="recordset-how-recordsets-update-records-odbc"></a>Recordset: Aggiornamento dei record (ODBC)

Questo argomento si applica alle classi ODBC MFC.

Oltre alla loro capacità di selezionare i record da un'origine dati, recordset, facoltativamente, aggiornare o eliminare i record selezionati o aggiungere nuovi record. Tre fattori che determinano updateability del recordset: indica se l'origine dati connessa è aggiornabile, le opzioni specificate quando si crea un oggetto recordset e il tipo SQL che viene creato.

> [!NOTE]
>  Il codice SQL in cui il `CRecordset` è basato l'oggetto può influire sulla updateability del recordset. Ad esempio, se la stringa SQL contiene un join o un **GROUP BY** clausola, MFC l'aggiornabilità su FALSE.

> [!NOTE]
>  In questo argomento si applica a oggetti derivati da `CRecordset` in quale riga bulk il recupero non è stato implementato. Se si usa il recupero di righe bulk, vedere [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Questo argomento viene illustrato:

- [Ruolo del programmatore nell'aggiornamento di recordset](#_core_your_role_in_recordset_updating) e ciò che il framework esegue automaticamente.

- [Il recordset in un buffer di modifica](#_core_the_edit_buffer) e il [differenze tra gli snapshot e dynaset](#_core_dynasets_and_snapshots).

[Recordset: La modalità dei metodi AddNew, Edit e Delete (ODBC)](../../data/odbc/recordset-how-addnew-edit-and-delete-work-odbc.md) descrive le azioni di queste funzioni dal punto di vista del set di record.

[Recordset: Altre su aggiornamenti (ODBC)](../../data/odbc/recordset-more-about-updates-odbc.md) completa la sequenza di aggiornamento di recordset per spiegare in che modo delle transazioni sugli aggiornamenti, influenza gli aggiornamenti in corso la chiusura di un recordset o lo scorrimento e interazione con gli aggiornamenti di altri utenti.

##  <a name="_core_your_role_in_recordset_updating"></a> Ruolo del programmatore nell'aggiornamento di Recordset

Nella tabella seguente viene illustrato il ruolo nell'utilizzo di recordset per aggiungere, modificare o eliminare i record, insieme a ciò che il framework esegue automaticamente.

### <a name="recordset-updating-you-and-the-framework"></a>L'aggiornamento di Recordset: Programmatore e Framework

|Programmatore|Framework|
|---------|-------------------|
|Determinare se l'origine dati è aggiornabile (o videoregistrazione).|Forniture [CDatabase](../../mfc/reference/cdatabase-class.md) funzioni membro per verificare se l'origine dati è abilitata per l'aggiornamento o per le aggiunte.|
|Aprire un oggetto recordset aggiornabile (di qualsiasi tipo).||
|Determina se il recordset è aggiornabile tramite una chiamata `CRecordset` aggiornare le funzioni, ad esempio `CanUpdate` o `CanAppend`.||
|Chiamare funzioni membro per aggiungere, modificare ed eliminare i record di recordset.|Gestisce i meccanismi di scambio dei dati tra l'oggetto recordset e l'origine dati.|
|Facoltativamente, utilizzare le transazioni per controllare il processo di aggiornamento.|Forniture `CDatabase` funzioni membro per il supporto delle transazioni.|

Per altre informazioni sulle transazioni, vedere [transazione (ODBC)](../../data/odbc/transaction-odbc.md).

##  <a name="_core_the_edit_buffer"></a> Buffer di modifica

Acquisizione collettivamente, membri dati del campo di un recordset fungono da buffer di modifica contenente un record, ovvero il record corrente. Operazioni di aggiornamento usano questo buffer per operare sul record corrente.

- Quando si aggiunge un record, il buffer di modifica consente di creare un nuovo record. Dopo aver aggiunto il record, il record che è stata precedentemente corrente diventa di nuovo.

- Quando si aggiorna buffer (modifica) un record, la modifica viene usato per impostare i membri di dati del campo del recordset ai nuovi valori. Al termine dell'aggiornamento, è ancora aggiornato il record aggiornato.

Quando si chiama [AddNew](../../mfc/reference/crecordset-class.md#addnew) oppure [modificare](../../mfc/reference/crecordset-class.md#edit), il record corrente viene archiviato in modo che può essere ripristinato in un secondo momento in base alle esigenze. Quando si chiama [eliminare](../../mfc/reference/crecordset-class.md#delete), il record corrente non viene archiviato, ma è contrassegnato come eliminato ed è necessario scorrere a un altro record.

> [!NOTE]
>  Buffer di modifica non ha alcun ruolo nell'eliminazione dei record. Quando si elimina il record corrente, il record viene contrassegnato come eliminato e il set di record è "non in un record" fino a quando non si scorre verso un altro record.

##  <a name="_core_dynasets_and_snapshots"></a> I dynaset e gli snapshot

[I dynaset](../../data/odbc/dynaset.md) aggiorna il contenuto di un record durante lo scorrimento al record. [Le istantanee](../../data/odbc/snapshot.md) sono statiche rappresentazioni dei record, in modo che il contenuto di un record non viene aggiornato a meno che non si chiama [Requery](../../mfc/reference/crecordset-class.md#requery). Per usare tutte le funzionalità di dynaset, è necessario operare con un driver ODBC che è conforme per il corretto livello di supporto dell'API ODBC. Per altre informazioni, vedere [ODBC](../../data/odbc/odbc-basics.md) e [Dynaset](../../data/odbc/dynaset.md).

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: funzionamento dei metodi AddNew, Edit e Delete (ODBC)](../../data/odbc/recordset-how-addnew-edit-and-delete-work-odbc.md)