---
title: 'Recordset: creazione e chiusura di recordset (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC recordsets, creating
- recordsets, creating
- recordsets, opening
- recordsets, closing
- ODBC recordsets, closing
- ODBC recordsets, opening
ms.assetid: 8d2aac23-4396-4ce2-8c60-5ecf1b360d3d
ms.openlocfilehash: d98f7e59e52b86a1b9b1c3ffac5c3e7160e6c36d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50581506"
---
# <a name="recordset-creating-and-closing-recordsets-odbc"></a>Recordset: creazione e chiusura di recordset (ODBC)

Questo argomento si applica alle classi ODBC MFC.

Per usare un set di record, costruire un oggetto recordset e quindi chiamare relativo `Open` funzione membro per eseguire la query del recordset e selezionare i record. Dopo aver terminato il recordset, chiudere ed eliminare definitivamente l'oggetto.

Questo argomento viene illustrato:

- [Quando e come creare un oggetto recordset](#_core_creating_recordsets_at_run_time).

- [Quando e come è possibile qualificare il comportamento del recordset da parametrizzata, il filtro, ordinamento o bloccandolo](#_core_setting_recordset_options).

- [Quando e come chiudere un oggetto recordset](#_core_closing_a_recordset).

##  <a name="_core_creating_recordsets_at_run_time"></a> Creazione di recordset in fase di esecuzione

Prima di poter creare gli oggetti recordset nel programma, si scrivono in genere le classi del recordset specifici dell'applicazione. Per altre informazioni su questo passaggio preliminare, vedere [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md).

Aprire un oggetto dynaset o di uno snapshot quando è necessario selezionare record da un'origine dati. Il tipo dell'oggetto da creare dipende cosa occorre per eseguire operazioni con i dati nell'applicazione e su quali il driver ODBC supporta. Per altre informazioni, vedere [Dynaset](../../data/odbc/dynaset.md) e [Snapshot](../../data/odbc/snapshot.md).

#### <a name="to-open-a-recordset"></a>Per aprire un set di record

1. Costruire un oggetto del `CRecordset`-classe derivata.

   È possibile costruire l'oggetto nell'heap o nello stack frame di una funzione.

1. Facoltativamente è possibile modificare il comportamento di recordset predefinito. Per le opzioni disponibili, vedere [impostazione delle opzioni di Recordset](#_core_setting_recordset_options).

1. Chiamare l'oggetto [aperto](../../mfc/reference/crecordset-class.md#open) funzione membro.

Nel costruttore, passare un puntatore a un `CDatabase` dell'oggetto o passare NULL per usare un oggetto di database temporaneo che costruisce il framework e verrà aperto in base alla stringa di connessione restituita dal [GetDefaultConnect](../../mfc/reference/crecordset-class.md#getdefaultconnect) funzione membro. Il `CDatabase` oggetto potrebbe già essere connesso a un'origine dati.

La chiamata a `Open` Usa SQL per selezionare record dall'origine dati. Il primo record selezionati (se presente) è il record corrente. I valori dei campi del record vengono archiviati nei membri dati di campo dell'oggetto recordset. Se sono stati selezionati tutti i record, sia la `IsBOF` e `IsEOF` funzioni membro restituiscono 0.

Nel [aperto](../../mfc/reference/crecordset-class.md#open) chiamata, è possibile:

- Specificare se il set di record è un dynaset o uno snapshot. I recordset aperti come snapshot per impostazione predefinita. In alternativa, è possibile specificare un recordset forward-only, che consente solo scorrimento in avanti, un record alla volta.

   Per impostazione predefinita, un set di record Usa il tipo predefinito archiviato nel `CRecordset` membro dati `m_nDefaultType`. Procedure guidate di scrivono codice per inizializzare `m_nDefaultType` per il tipo di recordset scelto nella procedura guidata. Invece di accettazione di questa impostazione predefinita, è possibile sostituire un altro tipo di recordset.

- Specificare una stringa per sostituire il valore predefinito SQL **seleziona** istruzione che crea il recordset.

- Specificare se il recordset è di sola lettura o di solo accodamento. Recordset consentono completi l'aggiornamento per impostazione predefinita, ma è possibile limitare che per l'aggiunta di record solo o è possibile disattivare tutti gli aggiornamenti.

Nell'esempio seguente viene illustrato come aprire un oggetto di snapshot di sola lettura della classe `CStudentSet`, una classe specifica dell'applicazione:

```cpp
// Construct the snapshot object
CStudentSet rsStudent( NULL );
// Set options if desired, then open the recordset
if(!rsStudent.Open(CRecordset::snapshot, NULL, CRecordset::readOnly))
    return FALSE;
// Use the snapshot to operate on its records...
```

Dopo aver chiamato `Open`, usare i membri di dati e funzioni membro dell'oggetto per lavorare con i record. In alcuni casi, è possibile rieseguire una query o aggiornare il recordset in modo da includere le modifiche apportate nell'origine dati. Per altre informazioni, vedere [Recordset: ripetizione di query in un Recordset (ODBC)](../../data/odbc/recordset-requerying-a-recordset-odbc.md).

> [!TIP]
>  La stringa di connessione utilizzata durante lo sviluppo potrebbe non essere la stessa stringa di connessione che servono agli utenti finali. Per informazioni sulla generalizzazione dell'applicazione a questo proposito, vedere [Zdroj dat: gestione delle connessioni (ODBC)](../../data/odbc/data-source-managing-connections-odbc.md).

##  <a name="_core_setting_recordset_options"></a> Impostazione delle opzioni di Recordset

Dopo la costruzione dell'oggetto recordset ma prima di chiamare `Open` per selezionare record, si potrebbe voler impostare alcune opzioni per controllare il comportamento del recordset. Per tutti i recordset, è possibile:

- Specificare una [filtro](../../data/odbc/recordset-filtering-records-odbc.md) alla selezione dei record.

- Specificare una [ordinamento](../../data/odbc/recordset-sorting-records-odbc.md) affinché i record.

- Specificare [parametri](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) pertanto è possibile selezionare i record usando le informazioni recuperate o calcolati in fase di esecuzione.

Se le condizioni, è anche possibile impostare l'opzione seguente:

- Se il recordset è aggiornabile e supporta le opzioni di blocco, specificare il [blocco](../../data/odbc/recordset-locking-records-odbc.md) metodo usato per gli aggiornamenti.

> [!NOTE]
>  Per influire sulla selezione del record, è necessario impostare queste opzioni prima di chiamare il `Open` funzione membro.

##  <a name="_core_closing_a_recordset"></a> Chiusura di un Recordset

Al termine del recordset, è necessario eliminarlo e deallocare la memoria.

#### <a name="to-close-a-recordset"></a>Per chiudere un recordset

1. Chiamare relativi [Chiudi](../../mfc/reference/crecordset-class.md#close) funzione membro.

1. Eliminare definitivamente l'oggetto recordset.

   Se è stata dichiarata nello stack frame di una funzione, l'oggetto viene eliminato automaticamente quando l'oggetto esce dall'ambito. In caso contrario, usare il **eliminare** operatore.

`Close` libera il recordset `HSTMT` gestire. Ma non elimina l'oggetto di C++.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md)<br/>
[Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)