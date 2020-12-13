---
description: 'Ulteriori informazioni su: Transaction (ODBC)'
title: Transazione (ODBC)
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC recordsets [C++], updating
- transactions [C++], MFC ODBC classes
- ODBC [C++], transactions
- recordsets [C++], updating
- databases [C++], transactions
- recordsets [C++], transactions
- ODBC recordsets [C++], transactions
ms.assetid: a2ec0995-2029-45f2-8092-6efd6f2a77f4
ms.openlocfilehash: a7b769c37b58b34433939a18cb0dccf5fb4a798d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333873"
---
# <a name="transaction-odbc"></a>Transazione (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

Una transazione è un modo per raggruppare, o batch, una serie di aggiornamenti a un' [origine dati](../../data/odbc/data-source-odbc.md) , in modo che venga eseguito il commit di tutti in una sola volta o che non ne venga eseguito il commit se si esegue il rollback della transazione. Se non si utilizza una transazione, viene eseguito il commit automatico delle modifiche apportate all'origine dati anziché eseguire il commit su richiesta.

> [!NOTE]
> Non tutti i driver di database ODBC supportano le transazioni. Chiamare la `CanTransact` funzione membro dell'oggetto [CDatabase](../../mfc/reference/cdatabase-class.md) o [CRecordset](../../mfc/reference/crecordset-class.md) per determinare se il driver supporta le transazioni per un determinato database. Si noti che `CanTransact` non indica se l'origine dati fornisce un supporto completo per le transazioni. È inoltre necessario chiamare `CDatabase::GetCursorCommitBehavior` e `CDatabase::GetCursorRollbackBehavior` dopo `CommitTrans` e `Rollback` per controllare l'effetto della transazione sull' `CRecordset` oggetto aperto.

Le chiamate alle `AddNew` `Edit` funzioni membro e di un `CRecordset` oggetto influiscono sull'origine dati immediatamente quando si chiama `Update` . `Delete` le chiamate hanno effetto immediato. Al contrario, è possibile utilizzare una transazione composta da più chiamate a `AddNew` , `Edit` , `Update` e `Delete` , che vengono eseguite, ma non sottoposte a commit, fino a quando non si chiama in `CommitTrans` modo esplicito. Stabilendo una transazione, è possibile eseguire una serie di chiamate di questo tipo mantenendo la possibilità di eseguire il rollback. Se una risorsa critica non è disponibile o un'altra condizione impedisce il completamento dell'intera transazione, è possibile eseguire il rollback della transazione anziché eseguirne il commit. In tal caso, nessuna delle modifiche appartenenti alla transazione influisce sull'origine dati.

> [!NOTE]
> Attualmente, `CRecordset` la classe non supporta gli aggiornamenti all'origine dati se è stato implementato il recupero di righe BULK. Ciò significa che non è possibile effettuare chiamate a `AddNew` , `Edit` , `Delete` o `Update` . È tuttavia possibile scrivere funzioni personalizzate per eseguire gli aggiornamenti e quindi chiamare tali funzioni all'interno di una determinata transazione. Per ulteriori informazioni sul recupero di righe in blocco, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

> [!NOTE]
> Oltre a influenzare il recordset, le transazioni influiscono sulle istruzioni SQL che vengono eseguite direttamente purché si utilizzi il **HDBC** ODBC associato all' `CDatabase` oggetto o un **HSTMT** ODBC basato su tale **HDBC**.

Le transazioni sono particolarmente utili quando si dispone di più record che devono essere aggiornati contemporaneamente. In questo caso, si desidera evitare una transazione con metà completamento, ad esempio se è stata generata un'eccezione prima dell'ultimo aggiornamento. Il raggruppamento di tali aggiornamenti in una transazione consente il ripristino (rollback) dalle modifiche e restituisce i record allo stato PreTransaction. Se, ad esempio, una banca trasferisce denaro dall'account A al conto B, sia il ritiro da a che il deposito a B devono essere riusciti a elaborare correttamente i fondi oppure l'intera transazione deve avere esito negativo.

Nelle classi di database è possibile eseguire transazioni tramite `CDatabase` oggetti. Un `CDatabase` oggetto rappresenta una connessione a un'origine dati e uno o più recordset associati a tale `CDatabase` oggetto operano sulle tabelle del database tramite le funzioni membro recordset.

> [!NOTE]
> È supportato un solo livello di transazioni. Non è possibile nidificare le transazioni né una transazione in più oggetti di database.

Negli argomenti seguenti vengono fornite ulteriori informazioni sulla modalità di esecuzione delle transazioni:

- [Transazione: esecuzione di una transazione in un recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md)

- [Transazione: come le transazioni influiscono sugli aggiornamenti (ODBC)](../../data/odbc/transaction-how-transactions-affect-updates-odbc.md)

## <a name="see-also"></a>Vedi anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)
