---
title: 'Recordset: Blocco dei record (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- locks [C++], recordsets
- optimistic locking
- pessimistic locking in ODBC
- recordsets [C++], locking records
- optimistic locking, ODBC
- ODBC recordsets [C++], locking records
- data [C++], locking
ms.assetid: 8fe8fcfe-b55a-41a8-9136-94a7cd1e4806
ms.openlocfilehash: 1265899e7060527d7e586689eb4c3148eebc4080
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59037289"
---
# <a name="recordset-locking-records-odbc"></a>Recordset: Blocco dei record (ODBC)

Questo argomento si applica alle classi ODBC MFC.

Questo argomento viene illustrato:

- [I tipi di blocco dei record disponibili](#_core_record.2d.locking_modes).

- [Blocco dei record nel set di record durante gli aggiornamenti](#_core_locking_records_in_your_recordset).

Quando si usa un set di record per aggiornare un record nell'origine dati, l'applicazione può bloccare il record in modo che nessun altro utente può aggiornare il record nello stesso momento. Lo stato di un record di due utenti aggiornato allo stesso tempo è definito, a meno che il sistema in grado di garantire che due utenti non è possibile aggiornare un record contemporaneamente.

> [!NOTE]
>  In questo argomento si applica a oggetti derivati da `CRecordset` in quale riga bulk il recupero non è stato implementato. Se è stato implementato il recupero di righe bulk, alcune informazioni non è applicabile. Ad esempio, non è possibile chiamare il `Edit` e `Update` funzioni membro. Per altre informazioni sul recupero di righe bulk, vedere [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

##  <a name="_core_record.2d.locking_modes"></a> Modalità di blocco dei record

Le classi di database offrono due [modalità di blocco dei record](../../mfc/reference/crecordset-class.md#setlockingmode):

- Ottimistica (impostazione predefinita) il blocco

- Il blocco pessimistico

Aggiornamento di un record si svolge in tre passaggi:

1. Per avviare l'operazione, chiamare il [modifica](../../mfc/reference/crecordset-class.md#edit) funzione membro.

1. Si modificano i campi appropriati del record corrente.

1. Per terminare l'operazione, ovvero ed eseguire il commit in genere l'aggiornamento, ovvero chiamando il [aggiornare](../../mfc/reference/crecordset-class.md#update) funzione membro.

Il blocco ottimistico blocca il record nell'origine dati solo durante la `Update` chiamare. Se si usa il blocco ottimistico in un ambiente multiutente, l'applicazione deve gestire un `Update` condizione di errore. Il blocco pessimistico blocca il record, non appena si chiama `Edit` e non lo rilascia finché non verrà chiamata `Update` (errori sono indicati tramite il `CDBException` meccanismo, non da un valore FALSE restituito da `Update`). Il blocco pessimistico comporta una riduzione delle prestazioni potenziali di altri utenti, perché l'accesso simultaneo allo stesso record potrebbe essere necessario attendere fino al completamento di un'applicazione `Update` processo.

##  <a name="_core_locking_records_in_your_recordset"></a> Blocco dei record nel set di record

Se si desidera modificare un oggetto recordset [la modalità di blocco](#_core_record.2d.locking_modes) da quello predefinito, è necessario modificare la modalità prima di chiamare `Edit`.

#### <a name="to-change-the-current-locking-mode-for-your-recordset"></a>Per modificare la modalità di blocco corrente per il recordset

1. Chiamare il [SetLockingMode](../../mfc/reference/crecordset-class.md#setlockingmode) funzione di membro, specificando `CRecordset::pessimistic` o `CRecordset::optimistic`.

La nuova modalità del blocco rimane attiva fino a quando non si modificherà nuovamente o viene chiuso il recordset.

> [!NOTE]
>  Un numero relativamente basso i driver ODBC supportano attualmente il blocco pessimistico.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: Esecuzione di un Join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md)<br/>
[Recordset: Aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)