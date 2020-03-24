---
title: 'Recordset: blocco dei record (ODBC)'
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
ms.openlocfilehash: d4e80816a131c997e9f5bfaa34f025394b05a358
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212862"
---
# <a name="recordset-locking-records-odbc"></a>Recordset: blocco dei record (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In questo argomento:

- [Tipi di blocco dei record disponibili](#_core_record.2d.locking_modes).

- [Come bloccare i record nel recordset durante gli aggiornamenti](#_core_locking_records_in_your_recordset).

Quando si usa un recordset per aggiornare un record nell'origine dati, l'applicazione può bloccare il record in modo che nessun altro utente possa aggiornare il record nello stesso momento. Lo stato di un record aggiornato da due utenti nello stesso momento non è definito, a meno che il sistema non sia in grado di garantire che due utenti non possano aggiornare un record simultaneamente.

> [!NOTE]
>  Questo argomento si applica agli oggetti derivati da `CRecordset` in cui non è stato implementato il recupero di massa di righe. Se è stato implementato il recupero di righe bulk, alcune informazioni non sono valide. Non è ad esempio possibile chiamare le funzioni membro `Edit` e `Update`. Per ulteriori informazioni sul recupero di righe in blocco, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

##  <a name="record-locking-modes"></a><a name="_core_record.2d.locking_modes"></a>Modalità di blocco di record

Le classi di database forniscono due [modalità di blocco dei record](../../mfc/reference/crecordset-class.md#setlockingmode):

- Blocco ottimistico (impostazione predefinita)

- Blocco pessimistico

L'aggiornamento di un record viene eseguito in tre passaggi:

1. Si inizia l'operazione chiamando la funzione membro [Edit](../../mfc/reference/crecordset-class.md#edit) .

1. Modificare i campi appropriati del record corrente.

1. Si termina l'operazione, e in genere si esegue il commit dell'aggiornamento, chiamando la funzione membro [Update](../../mfc/reference/crecordset-class.md#update) .

Il blocco ottimistico blocca il record nell'origine dati solo durante la chiamata di `Update`. Se si utilizza il blocco ottimistico in un ambiente multiutente, l'applicazione deve gestire una condizione di errore `Update`. Il blocco pessimistico blocca il record non appena si chiama `Edit` e non lo rilascia fino a quando non si chiama `Update` (gli errori vengono indicati tramite il meccanismo `CDBException`, non con il valore FALSE restituito da `Update`). Il blocco pessimistico presenta una potenziale riduzione delle prestazioni per altri utenti, perché l'accesso simultaneo allo stesso record potrebbe dover attendere fino al completamento del processo di `Update` dell'applicazione.

##  <a name="locking-records-in-your-recordset"></a><a name="_core_locking_records_in_your_recordset"></a>Blocco dei record nel recordset

Se si desidera modificare la [modalità di blocco](#_core_record.2d.locking_modes) di un oggetto recordset da quello predefinito, è necessario modificare la modalità prima di chiamare `Edit`.

#### <a name="to-change-the-current-locking-mode-for-your-recordset"></a>Per modificare la modalità di blocco corrente per il recordset

1. Chiamare la funzione membro [SetLockingMode](../../mfc/reference/crecordset-class.md#setlockingmode) , specificando `CRecordset::pessimistic` o `CRecordset::optimistic`.

La nuova modalità di blocco rimane attiva fino a quando non viene modificata di nuovo o il recordset viene chiuso.

> [!NOTE]
>  Un numero relativamente ridotto di driver ODBC supporta attualmente il blocco pessimistico.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: esecuzione di un join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md)<br/>
[Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)
