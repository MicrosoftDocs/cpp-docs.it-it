---
title: 'TN068: Esecuzione di transazioni con il Driver ODBC di Microsoft Access 7 | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.data.odbc
dev_langs:
- C++
helpviewer_keywords:
- TN068 [MFC]
- transactions [MFC], calling BeginTrans
- transactions [MFC], Microsoft Access
ms.assetid: d3f8f5d9-b118-4194-be36-a1aefb630c45
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 653e1cf29ff2b2e2338df7e8e3a1e74d73a7d6fe
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36950227"
---
# <a name="tn068-performing-transactions-with-the-microsoft-access-7-odbc-driver"></a>TN068: esecuzione di transazioni con il driver ODBC di Microsoft Access 7
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota viene descritto come eseguire transazioni quando si utilizzano le classi di database ODBC MFC e il driver ODBC di Microsoft Access 7.0 inclusa nella versione di Microsoft ODBC Desktop Driver Pack 3.0.  
  
## <a name="overview"></a>Panoramica  
 Se l'applicazione di database esegue transazioni, è necessario prestare attenzione chiamare `CDatabase::BeginTrans` e `CRecordset::Open` nella sequenza corretta nell'applicazione. Il driver Microsoft Access 7.0 utilizza il motore di database Microsoft Jet e Jet richiede che l'applicazione inizia una transazione in qualsiasi database che dispone di un cursore aperto. Per le classi di database ODBC MFC, un cursore aperto equivale a open `CRecordset` oggetto.  
  
 Se si apre un recordset prima di chiamare `BeginTrans`, potrebbero non essere visualizzate eventuali messaggi di errore. Tuttavia, per qualsiasi recordset gli aggiornamenti dell'applicazione consente diventi permanente dopo la chiamata `CRecordset::Update`, e gli aggiornamenti non essere rollback chiamando `Rollback`. Per evitare questo problema, è necessario chiamare `BeginTrans` prima e quindi aprire il recordset.  
  
 MFC controlla la funzionalità del driver per il comportamento del cursore commit e rollback. Classe `CDatabase` fornisce due funzioni membro, `GetCursorCommitBehavior` e `GetCursorRollbackBehavior`, per determinare l'effetto di qualsiasi transazione in aperto il `CRecordset` oggetto. Per il driver ODBC di Microsoft Access 7.0, queste funzioni membro restituiscono `SQL_CB_CLOSE` perché il driver di accesso non supporta la conservazione del cursore. Pertanto, è necessario chiamare `CRecordset::Requery` seguente una `CommitTrans` o `Rollback` operazione.  
  
 Quando è necessario eseguire più transazioni uno dopo l'altro, è possibile chiamare `Requery` dopo la prima transazione e quindi avviare quello successivo. È necessario chiudere il recordset prima della chiamata successiva a `BeginTrans` per soddisfare il requisito di Jet. In questa nota tecnica descrive due metodi per gestire questa situazione:  
  
-   Chiusura del recordset dopo ogni `CommitTrans` o `Rollback` operazione.  
  
-   Utilizzo della funzione API ODBC `SQLFreeStmt`.  
  
## <a name="closing-the-recordset-after-each-committrans-or-rollback-operation"></a>Chiusura di Recordset dopo ogni operazione di Rollback o CommitTrans  
 Prima di avviare una transazione, verificare che l'oggetto recordset è chiuso. Dopo la chiamata `BeginTrans`, chiamare il recordset `Open` funzione membro. Chiudere il recordset immediatamente dopo la chiamata `CommitTrans` o `Rollback`. Si noti che più volte di apertura e chiusura del recordset può rallentare le prestazioni dell'applicazione.  
  
## <a name="using-sqlfreestmt"></a>Utilizzando SQLFreeStmt  
 È inoltre possibile utilizzare la funzione API ODBC `SQLFreeStmt` per chiudere in modo esplicito il cursore dopo la fine di una transazione. Per avviare un'altra transazione, chiamare `BeginTrans` seguita da `CRecordset::Requery`. Quando si chiama `SQLFreeStmt`, è necessario specificare HSTMT del recordset come primo parametro e *SQL_CLOSE* come secondo parametro. Questo metodo è superiore alla velocità del recordset all'inizio di ogni transazione di apertura e di chiusura. Il codice seguente viene illustrato come implementare questa tecnica:  
  
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
  
 Un altro modo per implementare questa tecnica consiste nello scrivere una funzione nuova, `RequeryWithBeginTrans`, che è possibile chiamare per avviare la transazione successiva dopo il commit o rollback al primo. Per scrivere una funzione di questo tipo, effettuare i passaggi seguenti:  
  
1.  Copiare il codice per `CRecordset::Requery( )` alla nuova funzione.  
  
2.  Aggiungere la riga seguente immediatamente dopo la chiamata a `SQLFreeStmt`:  
  
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
>  Non usare questa tecnica se è necessario modificare le variabili membro recordset *m_strFilter* oppure *m_strSort* tra le transazioni. In tal caso, è consigliabile chiudere il recordset dopo ogni `CommitTrans` o `Rollback` operazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

