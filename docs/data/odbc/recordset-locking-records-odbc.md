---
description: 'Ulteriori informazioni su: Recordset: blocco dei record (ODBC)'
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
ms.openlocfilehash: 1833aff2a1a68affe02cdcf5294007802452bbf9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97304480"
---
# <a name="recordset-locking-records-odbc"></a>Recordset: blocco dei record (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In questo argomento:

- [Tipi di blocco dei record disponibili](#_core_record.2d.locking_modes).

- [Come bloccare i record nel recordset durante gli aggiornamenti](#_core_locking_records_in_your_recordset).

Quando si usa un recordset per aggiornare un record nell'origine dati, l'applicazione può bloccare il record in modo che nessun altro utente possa aggiornare il record nello stesso momento. Lo stato di un record aggiornato da due utenti nello stesso momento non è definito, a meno che il sistema non sia in grado di garantire che due utenti non possano aggiornare un record simultaneamente.

> [!NOTE]
> Questo argomento si applica agli oggetti derivati da `CRecordset` in cui non è stato implementato il recupero di massa di righe. Se è stato implementato il recupero di righe bulk, alcune informazioni non sono valide. Ad esempio, non è possibile chiamare `Edit` le `Update` funzioni membro e. Per ulteriori informazioni sul recupero di righe in blocco, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="record-locking-modes"></a><a name="_core_record.2d.locking_modes"></a> Modalità Record-Locking

Le classi di database forniscono due [modalità di blocco dei record](../../mfc/reference/crecordset-class.md#setlockingmode):

- Blocco ottimistico (impostazione predefinita)

- Blocco pessimistico

L'aggiornamento di un record viene eseguito in tre passaggi:

1. Si inizia l'operazione chiamando la funzione membro [Edit](../../mfc/reference/crecordset-class.md#edit) .

1. Modificare i campi appropriati del record corrente.

1. Si termina l'operazione, e in genere si esegue il commit dell'aggiornamento, chiamando la funzione membro [Update](../../mfc/reference/crecordset-class.md#update) .

Il blocco ottimistico blocca il record nell'origine dati solo durante la `Update` chiamata. Se si utilizza il blocco ottimistico in un ambiente multiutente, l'applicazione deve gestire una `Update` condizione di errore. Il blocco pessimistico blocca il record non appena si chiama `Edit` e non lo rilascia fino a quando non viene chiamato `Update` (gli errori vengono indicati tramite il `CDBException` meccanismo, non con il valore false restituito da `Update` ). Il blocco pessimistico presenta una potenziale riduzione delle prestazioni per altri utenti, perché l'accesso simultaneo allo stesso record potrebbe dover attendere fino al completamento del `Update` processo dell'applicazione.

## <a name="locking-records-in-your-recordset"></a><a name="_core_locking_records_in_your_recordset"></a> Blocco dei record nel recordset

Se si desidera modificare la [modalità di blocco](#_core_record.2d.locking_modes) di un oggetto recordset da quello predefinito, è necessario modificare la modalità prima di chiamare `Edit` .

#### <a name="to-change-the-current-locking-mode-for-your-recordset"></a>Per modificare la modalità di blocco corrente per il recordset

1. Chiamare la funzione membro [SetLockingMode](../../mfc/reference/crecordset-class.md#setlockingmode) , specificando `CRecordset::pessimistic` o `CRecordset::optimistic` .

La nuova modalità di blocco rimane attiva fino a quando non viene modificata di nuovo o il recordset viene chiuso.

> [!NOTE]
> Un numero relativamente ridotto di driver ODBC supporta attualmente il blocco pessimistico.

## <a name="see-also"></a>Vedi anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: esecuzione di un join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md)<br/>
[Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)
