---
title: "TN068: esecuzione di transazioni con il driver ODBC di Microsoft Access 7 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.data.odbc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "TN068"
  - "transazioni, chiamata a BeginTrans"
  - "transazioni, Microsoft Access"
ms.assetid: d3f8f5d9-b118-4194-be36-a1aefb630c45
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# TN068: esecuzione di transazioni con il driver ODBC di Microsoft Access 7
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota viene descritto come eseguire transazioni durante l'utilizzo delle classi di database ODBC MFC e driver ODBC di Microsoft Access 7,0 inclusi nella versione 3,0 del desktop di tipo pack per driver Microsoft ODBC.  
  
## Panoramica  
 Se l'applicazione di database esegue le transazioni, accertarsi di chiamare `CDatabase::BeginTrans` e `CRecordset::Open` nella sequenza corretta nell'applicazione.  Il driver per Microsoft Access 7,0 utilizza il modulo di gestione di database Microsoft Jet e Jet è necessario che sul avviata l'applicazione non una transazione in un database con un cursore apri.  Per le classi di database ODBC MFC, un cursore aperto è uguale a `CRecordset` un oggetto apri.  
  
 Se si apre un recordset prima di chiamare **BeginTrans**, non viene visualizzato alcun messaggio di errore.  Tuttavia, il recordset aggiorna l'applicazione è diventata permanente dopo aver chiamato `CRecordset::Update` e gli aggiornamenti non verranno il rollback chiamando **Rollback**.  Per evitare questo problema, è necessario chiamare **BeginTrans** innanzitutto quindi si apre il recordset.  
  
 MFC controlla la funzionalità del driver per il commit del cursore e il comportamento di annullamento.  La classe `CDatabase` vengono fornite due funzioni membro, `GetCursorCommitBehavior` e `GetCursorRollbackBehavior`, per determinare l'effetto di una transazione sull'oggetto su apri `CRecordset`.  Per il driver ODBC di Microsoft Access 7,0, queste funzioni membro restituiscono `SQL_CB_CLOSE` perché il driver di accesso non supporta la conservazione del cursore.  Pertanto, è necessario chiamare `CRecordset::Requery` dopo un'operazione di **Rollback** o di **CommitTrans**.  
  
 Quando è necessario eseguire più transazioni uno dopo l'altro, non è possibile chiamare **Riesegui query** dopo la prima transazione quindi avviare il seguente.  È necessario chiudere il recordset prima della chiamata successiva a **BeginTrans** per rispondere alle esigenze di getto.  Questa nota tecnica descritti due metodi di gestire questa situazione:  
  
-   Chiusura del recordset dopo ogni operazione di **Rollback** o di **CommitTrans**.  
  
-   Utilizzando la funzione API ODBC **SQLFreeStmt**.  
  
## Chiusura del recordset dopo ogni operazione di annullamento o di CommitTrans  
 Prima di avviare una transazione, assicurarsi che l'oggetto recordset sia chiuso.  Dopo aver chiamato **BeginTrans**, chiamare la funzione membro di **Apri** del recordset.  Chiudere il recordset immediatamente dopo il chiamare **CommitTrans** o **Rollback**.  Si noti che ripetutamente aprire e chiudere il recordset possono rallentare le prestazioni di un'applicazione.  
  
## Utilizzando SQLFreeStmt  
 È inoltre possibile utilizzare la funzione API ODBC **SQLFreeStmt** in modo esplicito per chiudere il cursore dopo avere terminato una transazione.  Per avviare un'altra transazione, chiamare **BeginTrans** seguito da `CRecordset::Requery`.  Quando si chiama **SQLFreeStmt**, è necessario specificare il HSTMT del recordset come primo parametro e **SQL\_CLOSE** come secondo parametro.  Questo metodo è più veloce di chiusura e all'apertura del recordset all'inizio di ogni transazione.  Il codice seguente viene illustrato come implementare questa tecnica:  
  
```  
CMyDatabase db;  
db.Open( "MYDATASOURCE" );  
CMyRecordset rs( &db );  
  
// start transaction 1 and   
// open the recordset  
db.BeginTrans( );  
rs.Open( );  
  
// manipulate data  
  
// end transaction 1  
db.CommitTrans( );  // or Rollback( )  
  
// close the cursor  
::SQLFreeStmt( rs.m_hstmt, SQL_CLOSE );  
  
// start transaction 2  
db.BeginTrans( );  
  
// now get the result set  
rs.Requery( );  
  
// manipulate data  
  
// end transaction 2  
db.CommitTrans( );  
  
rs.Close( );  
db.Close( );  
```  
  
 Un altro modo per implementare questa tecnica è scrivere una nuova funzione, **RequeryWithBeginTrans**, che è possibile chiamare per avviare la transazione seguente dopo aver eseguito il commit o il rollback della prima.  Per scrivere tale funzione, eseguire i passaggi seguenti:  
  
1.  Copiare il codice per **CRecordset::Requery\( \)** nella nuova funzione.  
  
2.  Aggiungere la riga seguente immediatamente dopo la chiamata a **SQLFreeStmt**:  
  
     `m_pDatabase->BeginTrans( );`  
  
 Ora è possibile chiamare la funzione tra le transazioni:  
  
```  
// start transaction 1 and   
// open the recordset  
db.BeginTrans( );  
rs.Open( );  
  
// manipulate data  
  
// end transaction 1  
db.CommitTrans( );  // or Rollback( )  
  
// close the cursor, start new transaction,  
// and get the result set  
rs.RequeryWithBeginTrans( );  
  
// manipulate data  
  
// end transaction 2  
db.CommitTrans( );  // or Rollback( )  
```  
  
> [!NOTE]
>  Non utilizzare questa tecnica se è necessario modificare le variabili membro **m\_strFilter** o `m_strSort` di recordset tra le transazioni.  In tal caso, è necessario chiudere il recordset dopo ogni operazione di **Rollback** o di **CommitTrans**.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)