---
title: 'TN068: Esecuzione di transazioni con il Driver ODBC di Microsoft Access 7'
ms.date: 06/28/2018
f1_keywords:
- vc.data.odbc
helpviewer_keywords:
- TN068 [MFC]
- transactions [MFC], calling BeginTrans
- transactions [MFC], Microsoft Access
ms.assetid: d3f8f5d9-b118-4194-be36-a1aefb630c45
ms.openlocfilehash: 3121587f85c4ea19cc92e39569008b597d24ea58
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62363791"
---
# <a name="tn068-performing-transactions-with-the-microsoft-access-7-odbc-driver"></a>TN068: Esecuzione di transazioni con il Driver ODBC di Microsoft Access 7

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota viene descritto come eseguire le transazioni quando si usano le classi di database ODBC MFC e il driver ODBC di Microsoft Access 7.0 incluse nella versione Desktop di Microsoft ODBC Driver Pack 3.0.

## <a name="overview"></a>Panoramica

Se l'applicazione di database esegue transazioni, è necessario prestare attenzione chiamare `CDatabase::BeginTrans` e `CRecordset::Open` nella sequenza corretta nell'applicazione. Il driver Microsoft Access 7.0 utilizza il motore di database Microsoft Jet e Jet richiede che l'applicazione inizia una transazione in qualsiasi database che dispone di un cursore aperto. Per le classi di database ODBC MFC, equivale a un elemento aperto un cursore aperto `CRecordset` oggetto.

Se si apre un recordset prima di chiamare `BeginTrans`, non sarà possibile visualizzare eventuali messaggi di errore. Tuttavia, qualsiasi recordset aggiornamenti dell'applicazione consente diventi permanente dopo la chiamata `CRecordset::Update`, e gli aggiornamenti non essere rollback chiamando `Rollback`. Per evitare questo problema, è necessario chiamare `BeginTrans` prima e quindi aprire il recordset.

MFC consente di verificare la funzionalità del driver per il funzionamento di commit e rollback del cursore. Classe `CDatabase` fornisce due funzioni membro, `GetCursorCommitBehavior` e `GetCursorRollbackBehavior`, per determinare l'effetto di qualsiasi transazione di apertura `CRecordset` oggetto. Per il driver ODBC di Microsoft Access 7.0, queste funzioni membro restituiscono `SQL_CB_CLOSE` perché il driver di accesso non supporta la conservazione del cursore. Pertanto, è necessario chiamare `CRecordset::Requery` segue un `CommitTrans` o `Rollback` operazione.

Quando è necessario eseguire più transazioni uno dopo l'altro, è possibile chiamare `Requery` dopo la prima transazione e quindi iniziare quello successivo. È necessario chiudere il recordset prima della chiamata successiva a `BeginTrans` per soddisfare il requisito di Jet. In questa nota tecnica descrive due metodi di gestione di questa situazione:

- Chiusura di recordset dopo ognuno `CommitTrans` o `Rollback` operazione.

- Usando la funzione API ODBC `SQLFreeStmt`.

## <a name="closing-the-recordset-after-each-committrans-or-rollback-operation"></a>Chiusura di Recordset dopo ogni operazione di Rollback o CommitTrans

Prima di iniziare una transazione, verificare che l'oggetto recordset è chiuso. Dopo avere chiamato `BeginTrans`, chiamare il recordset `Open` funzione membro. Chiudere il recordset immediatamente dopo la chiamata `CommitTrans` o `Rollback`. Si noti che più volte di apertura e chiusura del recordset possono rallentare le prestazioni di un'applicazione.

## <a name="using-sqlfreestmt"></a>Using SQLFreeStmt

È anche possibile usare la funzione API ODBC `SQLFreeStmt` per chiudere in modo esplicito il cursore dopo la fine di una transazione. Per avviare un'altra transazione, chiamare `BeginTrans` seguita da `CRecordset::Requery`. Quando si chiama `SQLFreeStmt`, è necessario specificare HSTMT del recordset come primo parametro e *SQL_CLOSE* come secondo parametro. Questo metodo è più veloce rispetto alla chiusura e apertura del recordset all'inizio di ogni transazione. Il codice seguente viene illustrato come implementare questa tecnica:

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

Un altro modo per implementare questa tecnica consiste nello scrivere una nuova funzione, `RequeryWithBeginTrans`, che è possibile chiamare per avviare la transazione successiva dopo il commit o rollback il primo elemento. Per scrivere una funzione di questo tipo, procedere come segue:

1. Copiare il codice per `CRecordset::Requery( )` alla nuova funzione.

2. Aggiungere la riga seguente immediatamente dopo la chiamata a `SQLFreeStmt`:

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
> Non usare questa tecnica se è necessario modificare le variabili membro recordset *m_strFilter* oppure *m_strSort* tra le transazioni. In tal caso, è necessario chiudere l'oggetto recordset dopo ogni `CommitTrans` o `Rollback` operazione.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
