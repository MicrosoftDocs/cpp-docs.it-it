---
title: Transazione (ODBC) | Microsoft Docs
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
ms.openlocfilehash: 3cb02b9bc9c9a8e151532e79ffbdbfb0d8ad4000
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39337450"
---
# <a name="transaction-odbc"></a>Transazione (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 Una transazione è un modo per raggruppare una serie di aggiornamenti da un [zdroj dat](../../data/odbc/data-source-odbc.md) in modo che tutto viene eseguito il commit in una sola volta o non venga eseguito in caso di rollback della transazione. Se non si utilizza una transazione, le modifiche apportate all'origine dati vengono eseguito il commit automaticamente anziché l'esecuzione del commit su richiesta.  
  
> [!NOTE]
>  Non tutti i driver di database ODBC supportano le transazioni. Chiamare il `CanTransact` funzione membro delle [CDatabase](../../mfc/reference/cdatabase-class.md) oppure [CRecordset](../../mfc/reference/crecordset-class.md) oggetto per determinare se il driver supporta le transazioni per un determinato database. Si noti che `CanTransact` non indicano se l'origine dati fornisce il supporto delle transazioni pieno. È anche necessario chiamare `CDatabase::GetCursorCommitBehavior` e `CDatabase::GetCursorRollbackBehavior` dopo `CommitTrans` e `Rollback` per controllare l'effetto della transazione all'apertura `CRecordset` oggetto.  
  
 Le chiamate al `AddNew` e `Edit` dalle funzioni membro di un `CRecordset` oggetto influenzano l'origine dati immediatamente quando si chiama `Update`. `Delete` anche le chiamate vengono applicate immediatamente. Al contrario, è possibile usare una transazione costituito da più chiamate a `AddNew`, `Edit`, `Update`, e `Delete`, che vengono eseguite, ma non eseguito il commit finché non si chiama `CommitTrans` in modo esplicito. Mediante la definizione di una transazione, è possibile eseguire una serie di tali chiamate, mantenendo la possibilità di annullarle. Se non è disponibile una risorsa critica o un'altra condizione impedisce il completamento dell'intera transazione, è possibile eseguire il rollback della transazione anziché eseguirne il commit. In tal caso, nessuna delle modifiche che appartengono alla transazione influisce sull'origine dati.  
  
> [!NOTE]
>  Attualmente la classe `CRecordset` non supporta gli aggiornamenti all'origine dati se è stato implementato il recupero di righe bulk. Ciò significa che è possibile eseguire chiamate a `AddNew`, `Edit`, `Delete`, o `Update`. Tuttavia, è possibile scrivere funzioni personalizzate per eseguire aggiornamenti e quindi chiamare tali funzioni all'interno di una determinata transazione. Per altre informazioni sul recupero di righe bulk, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
> [!NOTE]
>  Oltre che interessano il recordset, le transazioni hanno effetto sulle istruzioni SQL eseguite direttamente, purché si utilizzino ODBC **HDBC** associati con il `CDatabase` oggetto o un database ODBC **HSTMT** base che **HDBC**.  
  
 Le transazioni sono particolarmente utili quando si dispone di più record che devono essere aggiornati contemporaneamente. In questo caso, si desidera evitare una transazione completata a metà, come può accadere se è stata generata un'eccezione prima che la data dell'ultimo aggiornamento. Raggruppamento di tali aggiornamenti in una transazione consente di ripristinare (rollback) le modifiche e restituisce i record sullo stato riportare. Ad esempio, se una banca trasferisce denaro dal conto al conto B, sia il prelievo da a e il deposito in B deve essere completati correttamente o deve avere esito negativo dell'intera transazione.  
  
 Nelle classi di database, si eseguono le transazioni attraverso `CDatabase` oggetti. Oggetto `CDatabase` oggetto rappresenta una connessione a un'origine dati e uno o più recordset associato che `CDatabase` oggetto operare sulle tabelle del database tramite le funzioni membro oggetto recordset.  
  
> [!NOTE]
>  È supportato solo un livello di transazioni. Non è possibile annidare le transazioni né può estendersi su una transazione più oggetti di database.  
  
 Gli argomenti seguenti forniscono altre informazioni sull'esecuzione delle transazioni:  
  
-   [Transazione: esecuzione di una transazione in un recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md)  
  
-   [Transazione: effetti delle transazioni sugli aggiornamenti (ODBC)](../../data/odbc/transaction-how-transactions-affect-updates-odbc.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)