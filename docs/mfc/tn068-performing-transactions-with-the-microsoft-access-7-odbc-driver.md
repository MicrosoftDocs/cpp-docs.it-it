---
title: 'TN068: Esecuzione di transazioni con il Driver ODBC di Microsoft Access 7 | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.data.odbc
dev_langs:
- C++
helpviewer_keywords:
- TN068 [MFC]
- transactions [MFC], calling BeginTrans
- transactions [MFC], Microsoft Access
ms.assetid: d3f8f5d9-b118-4194-be36-a1aefb630c45
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6db31d6301f2f0937d7bb5b83e77bf59936efdfe
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tn068-performing-transactions-with-the-microsoft-access-7-odbc-driver"></a>TN068: esecuzione di transazioni con il driver ODBC di Microsoft Access 7
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota viene descritto come eseguire transazioni quando si utilizzano le classi di database ODBC MFC e il driver ODBC di Microsoft Access 7.0 inclusa nella versione di Microsoft ODBC Desktop Driver Pack 3.0.  
  
## <a name="overview"></a>Panoramica  
 Se l'applicazione di database esegue transazioni, è necessario assicurarsi di chiamare `CDatabase::BeginTrans` e `CRecordset::Open` nella sequenza corretta nell'applicazione. Il driver Microsoft Access 7.0 utilizza il motore di database Microsoft Jet e Jet richiede che l'applicazione inizia una transazione in qualsiasi database che dispone di un cursore aperto. Per le classi di database ODBC MFC, un cursore aperto equivale a open `CRecordset` oggetto.  
  
 Se si apre un recordset prima di chiamare **BeginTrans**, potrebbero non essere visualizzati messaggi di errore. Tuttavia, per qualsiasi recordset gli aggiornamenti dell'applicazione consente diventi permanenti dopo la chiamata `CRecordset::Update`, e gli aggiornamenti non essere rollback chiamando **Rollback**. Per evitare questo problema, è necessario chiamare **BeginTrans** prima e quindi aprire il recordset.  
  
 MFC consente di controllare la funzionalità del driver per il comportamento del cursore commit e rollback. Classe `CDatabase` fornisce due funzioni membro, `GetCursorCommitBehavior` e `GetCursorRollbackBehavior`, per determinare l'effetto di qualsiasi transazione in aperto il `CRecordset` oggetto. Per il driver ODBC di Microsoft Access 7.0, queste funzioni membro restituiscono `SQL_CB_CLOSE` perché il driver di accesso non supporta la conservazione del cursore. Pertanto, è necessario chiamare `CRecordset::Requery` seguente un **CommitTrans** o **Rollback** operazione.  
  
 Quando è necessario eseguire più transazioni uno dopo l'altro, è possibile chiamare **Requery** dopo la prima transazione e quindi avviare quello successivo. È necessario chiudere il recordset prima della chiamata successiva a **BeginTrans** per soddisfare il requisito di Jet. Questa nota tecnica descrive due metodi per gestire questa situazione:  
  
-   Chiusura del recordset dopo ogni **CommitTrans** o **Rollback** operazione.  
  
-   Utilizzando la funzione API ODBC **SQLFreeStmt**.  
  
## <a name="closing-the-recordset-after-each-committrans-or-rollback-operation"></a>Chiusura di Recordset dopo ogni CommitTrans o l'operazione di Rollback  
 Prima di avviare una transazione, verificare che l'oggetto recordset è chiuso. Dopo la chiamata **BeginTrans**, chiamare il recordset **aprire** funzione membro. Chiudere il recordset immediatamente dopo la chiamata **CommitTrans** o **Rollback**. Si noti che più volte di apertura e chiusura del recordset possono rallentare le prestazioni di un'applicazione.  
  
## <a name="using-sqlfreestmt"></a>Utilizzando SQLFreeStmt  
 È inoltre possibile utilizzare la funzione API ODBC **SQLFreeStmt** per chiudere in modo esplicito il cursore dopo la fine di una transazione. Per avviare un'altra transazione, chiamare **BeginTrans** seguito da `CRecordset::Requery`. Quando si chiama **SQLFreeStmt**, è necessario specificare HSTMT del recordset come primo parametro e **SQL_CLOSE** come secondo parametro. Questo metodo è superiore alla velocità del recordset all'inizio di ogni transazione di apertura e di chiusura. Il codice seguente viene illustrato come implementare questa tecnica:  
  
```  
CMyDatabase db;  
db.Open("MYDATASOURCE");

CMyRecordset rs(&db);

 
// start transaction 1 and   
// open the recordset  
db.BeginTrans();

rs.Open();

 
// manipulate data  
 
// end transaction 1  
db.CommitTrans();
*// or Rollback()  
 
// close the cursor  
::SQLFreeStmt(rs.m_hstmt, SQL_CLOSE);

 
// start transaction 2  
db.BeginTrans();

 
// now get the result set  
rs.Requery();

 
// manipulate data  
 
// end transaction 2  
db.CommitTrans();

 
rs.Close();

db.Close();
```  
  
 Per implementare questa tecnica è inoltre possibile scrivere una funzione nuova, **RequeryWithBeginTrans**, che è possibile chiamare per avviare la transazione successiva dopo il commit o rollback al primo. Per scrivere tale funzione, effettuare i passaggi seguenti:  
  
1.  Copiare il codice per **() CRecordset:: Requery** alla nuova funzione.  
  
2.  Aggiungere la riga seguente immediatamente dopo la chiamata a **SQLFreeStmt**:  
  
 `m_pDatabase->BeginTrans( );`  
  
 Ora è possibile chiamare questa funzione tra ogni coppia di transazioni:  
  
```  
// start transaction 1 and   
// open the recordset  
db.BeginTrans();

rs.Open();

 
// manipulate data  
 
// end transaction 1  
db.CommitTrans();
*// or Rollback()  
 
// close the cursor,
    start new transaction,  
// and get the result set  
rs.RequeryWithBeginTrans();

 
// manipulate data  
 
// end transaction 2  
db.CommitTrans();
*// or Rollback()  
```  
  
> [!NOTE]
>  Non utilizzare questa tecnica se è necessario modificare le variabili membro recordset **m_strFilter** o `m_strSort` tra le transazioni. In tal caso, è necessario chiudere il recordset dopo ogni **CommitTrans** o **Rollback** operazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

