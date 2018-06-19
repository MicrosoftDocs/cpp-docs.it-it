---
title: Transazione (ODBC) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ODBC recordsets [C++], updating
- transactions [C++], MFC ODBC classes
- ODBC [C++], transactions
- recordsets [C++], updating
- databases [C++], transactions
- recordsets [C++], transactions
- ODBC recordsets [C++], transactions
ms.assetid: a2ec0995-2029-45f2-8092-6efd6f2a77f4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 3acd47746d3a920b679fb5509c34e5978ad43eed
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33094026"
---
# <a name="transaction-odbc"></a>Transazione (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 Una transazione è un modo per raggruppare una serie di aggiornamenti da un [origine dati](../../data/odbc/data-source-odbc.md) in modo che tutti viene eseguito il commit in una sola volta o non venga eseguito in caso di rollback della transazione. Se non si utilizza una transazione, le modifiche apportate all'origine dati vengono eseguite automaticamente anziché su richiesta.  
  
> [!NOTE]
>  Non tutti i driver di database ODBC supportano le transazioni. Chiamare il `CanTransact` funzione membro del [CDatabase](../../mfc/reference/cdatabase-class.md) o [CRecordset](../../mfc/reference/crecordset-class.md) oggetto per determinare se il driver supporta le transazioni per un determinato database. Si noti che `CanTransact` non indica se l'origine dati fornisce supporto completo delle transazioni. È inoltre necessario chiamare `CDatabase::GetCursorCommitBehavior` e `CDatabase::GetCursorRollbackBehavior` dopo **CommitTrans** e **Rollback** per controllare l'effetto della transazione all'apertura `CRecordset` oggetto.  
  
 Le chiamate al `AddNew` e **modifica** funzioni membro di un `CRecordset` oggetto influenzano l'origine dati quando si chiama **aggiornamento**. **Eliminare** anche le chiamate hanno effetto immediatamente. Al contrario, è possibile utilizzare una transazione composta da più chiamate a `AddNew`, **modifica**, **aggiornamento**, e **eliminare**, che vengono eseguite, ma non eseguito il commit fino a si chiama **CommitTrans** in modo esplicito. Mediante la definizione di una transazione, è possibile eseguire una serie di tali chiamate mantenendo la possibilità di eseguire il rollback. Se non è disponibile una risorsa critica o un'altra condizione impedisce il completamento dell'intera transazione, è possibile il rollback della transazione anziché il commit. In tal caso, nessuna delle modifiche riguardanti la transazione viene applicata all'origine dati.  
  
> [!NOTE]
>  Attualmente la classe `CRecordset` non supporta gli aggiornamenti dell'origine dati se è stato implementato il recupero di massa di righe. Questo significa che è possibile eseguire chiamate a `AddNew`, **modifica**, **eliminare**, o **aggiornamento**. Tuttavia, è possibile scrivere funzioni personalizzate per eseguire gli aggiornamenti e quindi chiamare tali funzioni all'interno di una determinata transazione. Per ulteriori informazioni sulle righe di massa, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
> [!NOTE]
>  Oltre a influire sul recordset, le transazioni influiscono sulle istruzioni SQL eseguite direttamente, purché si utilizzi ODBC **HDBC** associato il `CDatabase` oggetto o un database ODBC **HSTMT** in base a che **HDBC**.  
  
 Le transazioni sono particolarmente utili quando si dispone di più record che devono essere aggiornati contemporaneamente. In questo caso, si desidera evitare una transazione completata metà come può accadere se è stata generata un'eccezione prima che venisse effettuato l'ultimo aggiornamento. Raggruppamento di tali aggiornamenti in una transazione consente di ripristinare (ripristino) le modifiche e restituisce i record sullo stato di dati. Ad esempio, se una banca trasferisce denaro dal conto al conto B, sia il prelievo da A che il deposito in B debba essere completati correttamente o l'intera transazione dovrà avere esito negativo.  
  
 Le classi di database, l'esecuzione delle transazioni tramite `CDatabase` oggetti. Oggetto `CDatabase` oggetto rappresenta una connessione a un'origine dati, e uno o più recordset associato `CDatabase` oggetto operano sulle tabelle del database tramite le funzioni membro oggetto recordset.  
  
> [!NOTE]
>  È supportato un solo livello di transazioni. Non è possibile nidificare le transazioni né una transazione può estendersi a più oggetti di database.  
  
 Gli argomenti seguenti forniscono ulteriori informazioni sull'eseguono delle transazioni:  
  
-   [Transazione: esecuzione di una transazione in un recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md)  
  
-   [Transazione: effetti delle transazioni sugli aggiornamenti (ODBC)](../../data/odbc/transaction-how-transactions-affect-updates-odbc.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)