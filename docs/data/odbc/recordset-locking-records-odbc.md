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
ms.openlocfilehash: abd5f817ad321241df2d8565bd6bf346c0792088
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366967"
---
# <a name="recordset-locking-records-odbc"></a>Recordset: blocco dei record (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In questo argomento:

- [Tipi di blocco dei record disponibili.](#_core_record.2d.locking_modes)

- [Come bloccare i record nel recordset durante gli aggiornamenti.](#_core_locking_records_in_your_recordset)

Quando si utilizza un recordset per aggiornare un record nell'origine dati, l'applicazione può bloccare il record in modo che nessun altro utente possa aggiornare il record contemporaneamente. Lo stato di un record aggiornato da due utenti contemporaneamente non è definito, a meno che il sistema non possa garantire che due utenti non possano aggiornare un record contemporaneamente.

> [!NOTE]
> Questo argomento si applica agli oggetti derivati da `CRecordset` in cui non è stato implementato il recupero di massa di righe. Se è stato implementato il recupero di massa di righe, alcune delle informazioni non sono valide. Ad esempio, non `Edit` è `Update` possibile chiamare le funzioni membro e . Per ulteriori informazioni sul recupero di massa di righe, vedere Recordset: recupero di massa di [record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="record-locking-modes"></a><a name="_core_record.2d.locking_modes"></a>Modalità di blocco dei record

Le classi di database forniscono due modalità di [blocco dei record:](../../mfc/reference/crecordset-class.md#setlockingmode)

- Blocco ottimistico (impostazione predefinita)Optimistic locking (the default)

- Blocco pessimistico

L'aggiornamento di un record avviene in tre passaggi:Updating a record occurs in three steps:

1. Iniziare l'operazione chiamando il [Edit](../../mfc/reference/crecordset-class.md#edit) funzione membro.

1. Modificare i campi appropriati del record corrente.

1. Terminare l'operazione, e normalmente eseguire il commit dell'aggiornamento, chiamando la funzione membro [Update.](../../mfc/reference/crecordset-class.md#update)

Il blocco ottimistico blocca il record `Update` nell'origine dati solo durante la chiamata. Se si utilizza il blocco ottimistico in un `Update` ambiente multiutente, l'applicazione deve gestire una condizione di errore. Il blocco pessimistico blocca il `Edit` record non appena viene `Update` chiamato e non lo `CDBException` rilascia fino a quando non viene `Update`chiamato (gli errori vengono indicati tramite il meccanismo, non da un valore FALSE restituito da ). Il blocco pessimistico comporta una potenziale riduzione delle prestazioni per altri utenti, perché `Update` l'accesso simultaneo allo stesso record potrebbe dover attendere il completamento del processo dell'applicazione.

## <a name="locking-records-in-your-recordset"></a><a name="_core_locking_records_in_your_recordset"></a>Blocco dei record nel recordset

Se si desidera modificare la [modalità](#_core_record.2d.locking_modes) di blocco predefinita di un oggetto `Edit`recordset, è necessario modificare la modalità prima di chiamare .

#### <a name="to-change-the-current-locking-mode-for-your-recordset"></a>Per modificare la modalità di blocco corrente per il recordset

1. Chiamare la funzione membro [SetLockingMode](../../mfc/reference/crecordset-class.md#setlockingmode) `CRecordset::optimistic`, specificando o `CRecordset::pessimistic` .

La nuova modalità di blocco rimane attiva fino a quando non viene modificata nuovamente o il recordset non viene chiuso.

> [!NOTE]
> Relativamente pochi driver ODBC supportano attualmente il blocco pessimistico.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: esecuzione di un join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md)<br/>
[Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)
