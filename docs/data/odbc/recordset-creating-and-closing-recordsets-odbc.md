---
title: 'Recordset: creazione e chiusura di recordset (ODBC)'
ms.date: 05/09/2019
helpviewer_keywords:
- ODBC recordsets, creating
- recordsets, creating
- recordsets, opening
- recordsets, closing
- ODBC recordsets, closing
- ODBC recordsets, opening
ms.assetid: 8d2aac23-4396-4ce2-8c60-5ecf1b360d3d
ms.openlocfilehash: 155b51debfb6eacd3cbdd3293875274ca2dc4ab5
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212979"
---
# <a name="recordset-creating-and-closing-recordsets-odbc"></a>Recordset: creazione e chiusura di recordset (ODBC)

> [!NOTE]
> La Creazione guidata consumer ODBC MFC non è disponibile in Visual Studio 2019 e versioni successive. È comunque possibile creare manualmente un consumer.

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

Per usare un recordset, costruire un oggetto recordset e quindi chiamare la relativa funzione membro `Open` per eseguire la query del recordset e selezionare i record. Al termine del recordset, chiudere ed eliminare definitivamente l'oggetto.

In questo argomento:

- [Quando e come creare un oggetto recordset](#_core_creating_recordsets_at_run_time).

- [Quando e come qualificare il comportamento del recordset tramite la parametrizzazione, il filtro, l'ordinamento o il blocco](#_core_setting_recordset_options).

- [Quando e come chiudere un oggetto recordset](#_core_closing_a_recordset).

##  <a name="creating-recordsets-at-run-time"></a><a name="_core_creating_recordsets_at_run_time"></a> Creazione di recordset in fase di esecuzione

Prima di poter creare oggetti recordset in un programma, in genere si scrivono le classi recordset specifiche dell'applicazione. Per altre informazioni su questo passaggio preliminare, vedere [Aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md).

Aprire un oggetto dynaset o snapshot quando è necessario selezionare record da un'origine dati. Il tipo di oggetto da creare dipende dalle operazioni che è necessario eseguire con i dati nell'applicazione e dagli elementi supportati dal driver ODBC. Per altre informazioni, vedere [Dynaset](../../data/odbc/dynaset.md) e [Snapshot](../../data/odbc/snapshot.md).

#### <a name="to-open-a-recordset"></a>Per aprire un recordset

1. Costruire un oggetto della classe derivata da `CRecordset`.

   È possibile costruire l'oggetto nell'heap o nello stack frame di una funzione.

1. Facoltativamente, è possibile modificare il comportamento del recordset predefinito. Per le opzioni disponibili, vedere [Impostazione delle opzioni del recordset](#_core_setting_recordset_options).

1. Chiamare la funzione membro [Open](../../mfc/reference/crecordset-class.md#open) dell'oggetto.

Nel costruttore, passare un puntatore a un oggetto `CDatabase` o passare NULL per usare un oggetto di database temporaneo che viene costruito e aperto dal framework in base alla stringa di connessione restituita dalla funzione membro [GetDefaultConnect](../../mfc/reference/crecordset-class.md#getdefaultconnect). L'oggetto `CDatabase` potrebbe essere già connesso a un'origine dati.

La chiamata a `Open` usa SQL per selezionare i record dall'origine dati. Il primo record selezionato (se presente) è il record corrente. I valori dei campi di questo record sono archiviati nei membri dati di campo dell'oggetto recordset. Se sono stati selezionati record, le funzioni membro `IsBOF` e `IsEOF` restituiscono 0.

Nella chiamata [Open](../../mfc/reference/crecordset-class.md#open) è possibile:

- Specificare se il recordset è un dynaset o uno snapshot. Per impostazione predefinita, i recordset vengono aperti come snapshot. In alternativa, è possibile specificare un recordset forward-only, che consente solo lo scorrimento in avanti, un record alla volta.

   Per impostazione predefinita, un recordset usa il tipo predefinito archiviato nel membro dati `CRecordset` di `m_nDefaultType`. Le procedure guidate scrivono il codice per inizializzare `m_nDefaultType` per il tipo di recordset scelto nella procedura guidata. Invece di accettare questa impostazione predefinita, è possibile sostituire un altro tipo di recordset.

- Specificare una stringa per sostituire l'istruzione SQL **SELECT** predefinita costruita dal recordset.

- Specificare se il recordset è di sola lettura o di solo accodamento. Per impostazione predefinita, i recordset consentono un aggiornamento completo, ma è possibile limitare questo comportamento solo all'aggiunta di nuovi record oppure disattivare tutti gli aggiornamenti.

Nell'esempio seguente viene illustrato come aprire un oggetto snapshot di sola lettura della classe `CStudentSet`, una classe specifica dell'applicazione:

```cpp
// Construct the snapshot object
CStudentSet rsStudent( NULL );
// Set options if desired, then open the recordset
if(!rsStudent.Open(CRecordset::snapshot, NULL, CRecordset::readOnly))
    return FALSE;
// Use the snapshot to operate on its records...
```

Dopo aver chiamato `Open`, usare le funzioni membro e i membri dati dell'oggetto per lavorare con i record. In alcuni casi, può essere necessario ripetere una query o aggiornare il recordset in modo da includere le modifiche apportate nell'origine dati. Per ulteriori informazioni, vedere [Recordset: esecuzione di una query in un recordset (ODBC)](../../data/odbc/recordset-requerying-a-recordset-odbc.md).

> [!TIP]
>  La stringa di connessione usata durante lo sviluppo può non essere la stessa stringa di connessione necessaria per gli utenti finali. Per le idee sulla generalizzazione dell'applicazione in questo senso, vedere [origine dati: gestione delle connessioni (ODBC)](../../data/odbc/data-source-managing-connections-odbc.md).

##  <a name="setting-recordset-options"></a><a name="_core_setting_recordset_options"></a> Impostazione delle opzioni del recordset

Dopo la costruzione dell'oggetto recordset ma prima della chiamata a `Open` per selezionare i record, è possibile impostare alcune opzioni per controllare il comportamento del recordset. Per tutti i recordset, è possibile:

- Specificare un [filtro](../../data/odbc/recordset-filtering-records-odbc.md) per vincolare la selezione dei record.

- Specificare un criterio di [ordinamento](../../data/odbc/recordset-sorting-records-odbc.md) per i record.

- Specificare [parametri](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) in modo da selezionare i record tramite informazioni recuperate o calcolate in fase di esecuzione.

Se le condizioni lo richiedono, è anche possibile impostare l'opzione seguente:

- Se il recordset è aggiornabile e supporta le opzioni di blocco, specificare il metodo di [blocco](../../data/odbc/recordset-locking-records-odbc.md) usato per gli aggiornamenti.

> [!NOTE]
>  Per influire sulla selezione dei record, è necessario impostare queste opzioni prima di chiamare la funzione membro `Open`.

##  <a name="closing-a-recordset"></a><a name="_core_closing_a_recordset"></a> Chiusura di un recordset

Al termine del recordset, è necessario eliminarlo e deallocare la relativa memoria.

#### <a name="to-close-a-recordset"></a>Per chiudere un recordset

1. Chiamare la relativa funzione membro [Close](../../mfc/reference/crecordset-class.md#close).

1. Eliminare definitivamente l'oggetto recordset.

   Se è stato dichiarato nello stack frame di una funzione, l'oggetto viene eliminato automaticamente quando esce dall'ambito. In caso contrario, usare l'operatore **delete**.

`Close` libera l'handle `HSTMT` del recordset. Non elimina definitivamente l'oggetto C++.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md)<br/>
[Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)
