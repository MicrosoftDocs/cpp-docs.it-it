---
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
ms.openlocfilehash: 56629f8c5ff74aff4e0df589cda1e7b988fb5fd3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376418"
---
# <a name="transaction-odbc"></a>Transazione (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

Una transazione è un modo per raggruppare, o batch, una serie di aggiornamenti a [un'origine dati](../../data/odbc/data-source-odbc.md) in modo che tutti vengaee eseguito il commit contemporaneamente o nessuno viene eseguito il commit se si esegue il rollback della transazione. Se non si utilizza una transazione, il commit automatico delle modifiche all'origine dati viene eseguito automaticamente anziché su richiesta.

> [!NOTE]
> Non tutti i driver di database ODBC supportano le transazioni. Chiamare `CanTransact` la funzione membro del [CDatabase](../../mfc/reference/cdatabase-class.md) o [CRecordset](../../mfc/reference/crecordset-class.md) oggetto per determinare se il driver supporta le transazioni per un determinato database. Si `CanTransact` noti che non indica se l'origine dati fornisce il supporto completo delle transazioni. È inoltre `CDatabase::GetCursorCommitBehavior` necessario `CDatabase::GetCursorRollbackBehavior` `CommitTrans` chiamare `Rollback` e dopo e per verificare l'effetto della transazione sull'oggetto aperto. `CRecordset`

Le chiamate `AddNew` `Edit` alle funzioni `CRecordset` membro e di un oggetto `Update`influiscono immediatamente sull'origine dati quando si chiama . `Delete`le chiamate hanno effetto immediato. Al contrario, è possibile utilizzare una `AddNew` `Edit`transazione costituita da più chiamate a , , `Update`e `Delete`, che vengono eseguite ma non sottoposte a commit fino a quando non viene chiamato `CommitTrans` in modo esplicito. Stabilendo una transazione, è possibile eseguire una serie di tali chiamate mantenendo la possibilità di eseguirne il rollback. Se una risorsa critica non è disponibile o un'altra condizione impedisce il completamento dell'intera transazione, è possibile eseguire il rollback della transazione anziché eseguirne il commit. In tal caso, nessuna delle modifiche appartenenti alla transazione influisce sull'origine dati.

> [!NOTE]
> Attualmente, `CRecordset` la classe non supporta gli aggiornamenti all'origine dati se è stato implementato il recupero di massa di righe. Ciò significa che `AddNew`non `Edit` `Delete`è `Update`possibile effettuare chiamate a , , o . Tuttavia, è possibile scrivere funzioni personalizzate per eseguire gli aggiornamenti e quindi chiamare tali funzioni all'interno di una determinata transazione. Per ulteriori informazioni sul recupero di massa di righe, vedere Recordset: recupero di massa di [record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

> [!NOTE]
> Oltre a influire sul recordset, le transazioni influiscono sulle istruzioni SQL eseguite direttamente, `CDatabase` purché si utilizzi l'HDBC ODBC associato all'oggetto o un **HSTMT** ODBC basato su **tale HDBC.** **HDBC**

Le transazioni sono particolarmente utili quando si dispone di più record che devono essere aggiornati contemporaneamente. In questo caso, si desidera evitare una transazione semi-completata, ad esempio potrebbe verificarsi se è stata generata un'eccezione prima dell'ultimo aggiornamento è stato fatto. Il raggruppamento di tali aggiornamenti in una transazione consente un ripristino (rollback) dalle modifiche e riporta i record allo stato precedente alla transazione. Ad esempio, se una banca trasferisce denaro dal conto A al conto B, sia il prelievo da A che il deposito a B devono avere esito positivo o l'intera transazione deve avere esito negativo.

Nelle classi di database, le `CDatabase` transazioni vengono eseguite tramite oggetti. Un `CDatabase` oggetto rappresenta una connessione a un'origine dati e `CDatabase` uno o più recordset associati a tale oggetto operano sulle tabelle del database tramite le funzioni membro recordset.

> [!NOTE]
> È supportato un solo livello di transazioni. Non è possibile nidificare le transazioni né una transazione può estendersi su più oggetti di database.

Negli argomenti riportati di seguito vengono fornite ulteriori informazioni sulle modalità di esecuzione delle transazioni:

- [Transazione: esecuzione di una transazione in un recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md)

- [Transazione: effetti delle transazioni sugli aggiornamenti (ODBC)](../../data/odbc/transaction-how-transactions-affect-updates-odbc.md)

## <a name="see-also"></a>Vedere anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)
