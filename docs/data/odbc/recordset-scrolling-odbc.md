---
title: 'Recordset: scorrimento (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- recordsets [C++], end of
- recordsets [C++], beginning of
- navigation [C++], recordsets
- recordsets [C++], moving to records
- ODBC recordsets, scrolling
- recordsets [C++], navigating
- scrolling [C++], recordsets
- Move method (recordsets)
ms.assetid: f38d2dcb-1e88-4e41-af25-98b00c276be4
ms.openlocfilehash: 8a8305d2acacc79f5d7fe395087a0bd13dcbd196
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212771"
---
# <a name="recordset-scrolling-odbc"></a>Recordset: scorrimento (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

Dopo aver aperto un recordset, è necessario accedere ai record per visualizzare i valori, eseguire calcoli, generare report e così via. Lo scorrimento consente di spostarsi da un record all'interno del recordset.

In questo argomento:

- [Come scorrere da un record all'altro in un recordset](#_core_scrolling_from_one_record_to_another).

- [In quali circostanze lo scorrimento è e non è supportato](#_core_when_scrolling_is_supported).

##  <a name="scrolling-from-one-record-to-another"></a><a name="_core_scrolling_from_one_record_to_another"></a>Scorrimento da un record a un altro

Classe `CRecordset` fornisce le funzioni membro `Move` per lo scorrimento all'interno di un recordset. Queste funzioni spostano il record corrente per set di righe. Se è stato implementato il recupero di righe bulk, un'operazione `Move` riposiziona il recordset in base alla dimensione del set di righe. Se non è stato implementato il recupero di righe bulk, una chiamata a una funzione `Move` riposiziona il recordset di un record ogni volta. Per ulteriori informazioni sul recupero di righe in blocco, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

> [!NOTE]
>  Quando si esegue il passaggio da un recordset, i record eliminati potrebbero non essere ignorati. Per ulteriori informazioni, vedere la funzione membro è stata [eliminata](../../mfc/reference/crecordset-class.md#isdeleted) .

Oltre alle funzioni di `Move`, `CRecordset` fornisce funzioni membro per verificare se è stato eseguito lo scorrimento oltre la fine o prima dell'inizio del recordset.

Per determinare se lo scorrimento è possibile nel recordset, chiamare la funzione membro `CanScroll`.

#### <a name="to-scroll"></a>Per scorrere

1. Invio di un record o di un set di righe: chiamare la funzione membro [MoveNext](../../mfc/reference/crecordset-class.md#movenext) .

1. Indietro di un record o di un set di righe: chiamare la funzione membro [MovePrev](../../mfc/reference/crecordset-class.md#moveprev) .

1. Al primo record nel recordset: chiamare la funzione membro [MoveFirst](../../mfc/reference/crecordset-class.md#movefirst) .

1. All'ultimo record del recordset o all'ultimo set di righe: chiamare la funzione membro [MoveLast](../../mfc/reference/crecordset-class.md#movelast) .

1. *N* record relativi alla posizione corrente: chiamare la funzione membro [Move](../../mfc/reference/crecordset-class.md#move) .

#### <a name="to-test-for-the-end-or-the-beginning-of-the-recordset"></a>Per verificare la fine o l'inizio del recordset

1. È stato eseguito lo scorrimento oltre l'ultimo record? Chiamare la funzione membro [IsEOF](../../mfc/reference/crecordset-class.md#iseof) .

1. È stato eseguito lo scorrimento avanti del primo record (spostamento indietro)? Chiamare la funzione membro [IsBOF](../../mfc/reference/crecordset-class.md#isbof) .

Nell'esempio di codice seguente vengono utilizzati `IsBOF` e `IsEOF` per rilevare i limiti di un recordset durante lo scorrimento in entrambe le direzioni.

```
// Open a recordset; first record is current
CCustSet rsCustSet( NULL );
rsCustSet.Open( );

if( rsCustSet.IsBOF( ) )
    return;
    // The recordset is empty

// Scroll to the end of the recordset, past
// the last record, so no record is current
while ( !rsCustSet.IsEOF( ) )
    rsCustSet.MoveNext( );

// Move to the last record
rsCustSet.MoveLast( );

// Scroll to beginning of the recordset, before
// the first record, so no record is current
while( !rsCustSet.IsBOF( ) )
    rsCustSet.MovePrev( );

// First record is current again
rsCustSet.MoveFirst( );
```

`IsEOF` restituisce un valore diverso da zero se il recordset è posizionato oltre l'ultimo record. `IsBOF` restituisce un valore diverso da zero se il recordset è posizionato in avanti rispetto al primo record (prima di tutti i record). In entrambi i casi, non esiste alcun record corrente su cui operare. Se si chiama `MovePrev` quando `IsBOF` è già TRUE o si chiama `MoveNext` quando `IsEOF` è già TRUE, il Framework genera un'`CDBException`. È inoltre possibile utilizzare `IsBOF` e `IsEOF` per verificare la presenza di un recordset vuoto.

Per ulteriori informazioni sull'esplorazione dei recordset, vedere [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).

##  <a name="when-scrolling-is-supported"></a><a name="_core_when_scrolling_is_supported"></a>Quando lo scorrimento è supportato

Come originariamente progettato, SQL fornisce solo lo scorrimento in diretta, ma ODBC estende le funzionalità di scorrimento. Il livello di supporto disponibile per lo scorrimento dipende dai driver ODBC con cui funziona l'applicazione, dal livello di conformità dell'API ODBC del driver e dal fatto che la libreria di cursori ODBC venga caricata in memoria. Per ulteriori informazioni, vedere [ODBC](../../data/odbc/odbc-basics.md) e [ODBC: la libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md).

> [!TIP]
>  È possibile controllare se viene utilizzata la libreria di cursori. Vedere i parametri *bUseCursorLib* e *dwOptions* per [CDatabase:: Open](../../mfc/reference/cdatabase-class.md#open).

> [!NOTE]
>  Diversamente dalle classi DAO MFC, le classi ODBC MFC non forniscono un set di funzioni `Find` per individuare il record successivo (o precedente) che soddisfa i criteri specificati.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[CRecordset:: CanScroll](../../mfc/reference/crecordset-class.md#canscroll)<br/>
[CRecordset:: CheckRowsetError](../../mfc/reference/crecordset-class.md#checkrowseterror)<br/>
[Recordset: applicazione di filtri ai record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md)
