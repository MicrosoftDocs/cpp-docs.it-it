---
description: 'Altre informazioni su: TN068: esecuzione di transazioni con il driver ODBC di Microsoft Access 7'
title: 'TN068: esecuzione di transazioni con il driver ODBC di Microsoft Access 7'
ms.date: 06/28/2018
f1_keywords:
- vc.data.odbc
helpviewer_keywords:
- TN068 [MFC]
- transactions [MFC], calling BeginTrans
- transactions [MFC], Microsoft Access
ms.assetid: d3f8f5d9-b118-4194-be36-a1aefb630c45
ms.openlocfilehash: ebc98a0fd2bea78c0159daa9a53a11a292482257
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97214546"
---
# <a name="tn068-performing-transactions-with-the-microsoft-access-7-odbc-driver"></a>TN068: esecuzione di transazioni con il driver ODBC di Microsoft Access 7

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota viene descritto come eseguire transazioni quando si utilizzano le classi di database ODBC MFC e il driver ODBC di Microsoft Access 7,0 incluso in Microsoft ODBC Desktop Driver Pack versione 3,0.

## <a name="overview"></a>Panoramica

Se l'applicazione di database esegue transazioni, è necessario prestare attenzione a chiamare `CDatabase::BeginTrans` e `CRecordset::Open` nella sequenza corretta nell'applicazione. Il driver Microsoft Access 7,0 utilizza il motore di database di Microsoft Jet e Jet richiede che l'applicazione non avvii una transazione in qualsiasi database che disponga di un cursore aperto. Per le classi di database ODBC MFC, un cursore aperto corrisponde a un `CRecordset` oggetto aperto.

Se si apre un recordset prima di chiamare `BeginTrans` , è possibile che non vengano visualizzati messaggi di errore. Tuttavia, gli aggiornamenti dell'applicazione diventeranno permanenti dopo `CRecordset::Update` la chiamata a e non verrà eseguito il rollback degli aggiornamenti chiamando `Rollback` . Per evitare questo problema, è necessario chiamare `BeginTrans` prima e quindi aprire il recordset.

MFC controlla la funzionalità del driver per il comportamento di commit e rollback del cursore. `CDatabase`La classe fornisce due funzioni membro, `GetCursorCommitBehavior` e `GetCursorRollbackBehavior` , per determinare l'effetto di una transazione sull'oggetto aperto `CRecordset` . Per il driver ODBC di Microsoft Access 7,0, queste funzioni membro restituiscono `SQL_CB_CLOSE` perché il driver di accesso non supporta la conservazione del cursore. Pertanto, è necessario chiamare `CRecordset::Requery` dopo un' `CommitTrans` `Rollback` operazione o.

Quando è necessario eseguire più transazioni una dopo l'altra, non è possibile chiamare `Requery` dopo la prima transazione e quindi avviare quella successiva. È necessario chiudere il recordset prima della chiamata successiva a per `BeginTrans` soddisfare i requisiti di Jet. Questa nota tecnica descrive due metodi di gestione di questa situazione:

- Chiusura del recordset dopo ciascuna `CommitTrans` `Rollback` operazione OR.

- Utilizzo della funzione API ODBC `SQLFreeStmt` .

## <a name="closing-the-recordset-after-each-committrans-or-rollback-operation"></a>Chiusura del recordset dopo ogni operazione CommitTrans o rollback

Prima di avviare una transazione, assicurarsi che l'oggetto recordset sia chiuso. Dopo la chiamata a `BeginTrans` , chiamare la `Open` funzione membro del recordset. Chiudere il recordset immediatamente dopo aver chiamato `CommitTrans` o `Rollback` . Si noti che l'apertura e la chiusura ripetute del recordset possono rallentare le prestazioni di un'applicazione.

## <a name="using-sqlfreestmt"></a>Uso di SQLFreeStmt

È inoltre possibile utilizzare la funzione API ODBC `SQLFreeStmt` per chiudere in modo esplicito il cursore dopo la fine di una transazione. Per avviare un'altra transazione, chiamare `BeginTrans` seguito da `CRecordset::Requery` . Quando `SQLFreeStmt` si chiama, è necessario specificare il HSTMT del recordset come primo parametro e *SQL_CLOSE* come secondo parametro. Questo metodo è più veloce della chiusura e dell'apertura del recordset all'inizio di ogni transazione. Il codice seguente illustra come implementare questa tecnica:

```cpp
CMyDatabase db;
db.Open("MYDATASOURCE");
CMyRecordset rs(&db);

// start transaction 1 and
// open the recordset
db.BeginTrans();
rs.Open();

// manipulate data

// end transaction 1
db.CommitTrans(); // or Rollback()

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

Un altro modo per implementare questa tecnica è scrivere una nuova funzione, `RequeryWithBeginTrans` , che è possibile chiamare per avviare la transazione successiva dopo aver eseguito il commit o il rollback della prima. Per scrivere una funzione di questo tipo, seguire questa procedura:

1. Copiare il codice per nella `CRecordset::Requery( )` nuova funzione.

2. Aggiungere la riga seguente subito dopo la chiamata a `SQLFreeStmt` :

   `m_pDatabase->BeginTrans( );`

A questo punto è possibile chiamare questa funzione tra ogni coppia di transazioni:

```cpp
// start transaction 1 and
// open the recordset
db.BeginTrans();

rs.Open();

// manipulate data

// end transaction 1
db.CommitTrans();   // or Rollback()

// close the cursor, start new transaction,
// and get the result set
rs.RequeryWithBeginTrans();

// manipulate data

// end transaction 2
db.CommitTrans();   // or Rollback()
```

> [!NOTE]
> Non utilizzare questa tecnica se è necessario modificare le variabili membro del recordset *m_strFilter* o *m_strSort* tra le transazioni. In tal caso, è necessario chiudere il recordset dopo ogni `CommitTrans` `Rollback` operazione o.

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
