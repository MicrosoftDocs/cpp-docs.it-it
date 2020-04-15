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
ms.openlocfilehash: 931051296dff495939fcbd894102a1b00e48ee90
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366931"
---
# <a name="recordset-scrolling-odbc"></a>Recordset: scorrimento (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

Dopo aver aperto un recordset, è necessario accedere ai record per visualizzare valori, eseguire calcoli, generare report e così via. Lo scorrimento consente di spostarsi da un record all'altro all'interno del recordset.

In questo argomento:

- [Come scorrere da un record a un altro in un recordset](#_core_scrolling_from_one_record_to_another).

- [In quali circostanze lo scorrimento è e non è supportato](#_core_when_scrolling_is_supported).

## <a name="scrolling-from-one-record-to-another"></a><a name="_core_scrolling_from_one_record_to_another"></a>Scorrimento da un record a un altro

Classe `CRecordset` fornisce `Move` le funzioni membro per lo scorrimento all'interno di un recordset. Queste funzioni spostano il record corrente in base ai set di righe. Se è stato implementato il `Move` recupero di massa di righe, un'operazione riposiziona il recordset in base alle dimensioni del set di righe. Se non è stato implementato il recupero `Move` di massa di righe, una chiamata a una funzione riposiziona il recordset di un record ogni volta. Per ulteriori informazioni sul recupero di massa di righe, vedere Recordset: recupero di massa di [record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

> [!NOTE]
> Quando ci si sposta in un recordset, i record eliminati potrebbero non essere ignorati. Per altre informazioni, vedere la funzione membro [IsDeleted.For](../../mfc/reference/crecordset-class.md#isdeleted) more information, see the IsDeleted member function.

Oltre alle `Move` funzioni, `CRecordset` fornisce funzioni membro per controllare se è stato eseguito lo scorrimento oltre la fine o prima dell'inizio del recordset.

Per determinare se lo scorrimento è possibile `CanScroll` nel recordset, chiamare la funzione membro.

#### <a name="to-scroll"></a>Per scorrere

1. Inoltrare un record o un set di righe: chiamare la funzione membro [MoveNext.Forward](../../mfc/reference/crecordset-class.md#movenext) one record or one rowset: call the MoveNext member function.

1. Indietro di un record o di un set di righe: chiamare la funzione membro [MovePrev.](../../mfc/reference/crecordset-class.md#moveprev)

1. Per il primo record del recordset: chiamare la funzione membro [MoveFirst.](../../mfc/reference/crecordset-class.md#movefirst)

1. Per l'ultimo record nel recordset o nell'ultimo set di righe: chiamare la funzione membro [MoveLast.](../../mfc/reference/crecordset-class.md#movelast)

1. *N* registra rispetto alla posizione corrente: chiamare la funzione membro [Move.](../../mfc/reference/crecordset-class.md#move)

#### <a name="to-test-for-the-end-or-the-beginning-of-the-recordset"></a>Per verificare la fine o l'inizio del recordset

1. È stato eseguito lo scorrimento oltre l'ultimo record? Chiamare la funzione membro [IsEOF.](../../mfc/reference/crecordset-class.md#iseof)

1. È stato eseguito lo scorrimento prima del primo record (spostamento all'indietro)? Chiamare la funzione membro [IsBOF.](../../mfc/reference/crecordset-class.md#isbof)

Nell'esempio di `IsBOF` `IsEOF` codice riportato di seguito viene utilizzato e rilevato i limiti di un recordset durante lo scorrimento in entrambe le direzioni.

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

`IsEOF`restituisce un valore diverso da zero se il recordset è posizionato oltre l'ultimo record. `IsBOF`restituisce un valore diverso da zero se il recordset è posizionato prima del primo record (prima di tutti i record). In entrambi i casi, non vi è alcun record corrente su cui operare. Se si `MovePrev` `IsBOF` chiama quando è `MoveNext` `IsEOF` già TRUE o chiamare quando `CDBException`è già TRUE, il framework genera un oggetto . È inoltre `IsBOF` possibile `IsEOF` utilizzare e per verificare la presenza di un recordset vuoto.

Per ulteriori informazioni sullo spostamento tra recordset, vedere [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).

## <a name="when-scrolling-is-supported"></a><a name="_core_when_scrolling_is_supported"></a>Quando lo scorrimento è supportato

Come originariamente progettato, SQL fornito solo lo scorrimento in avanti, ma ODBC estende le funzionalità di scorrimento. Il livello di supporto disponibile per lo scorrimento dipende dai driver ODBC con cui lavora l'applicazione, dal livello di conformità dell'API ODBC del driver e dal fatto che la libreria di cursori ODBC sia caricata in memoria. Per ulteriori informazioni, vedere [ODBC](../../data/odbc/odbc-basics.md) e [ODBC: la libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md).

> [!TIP]
> È possibile controllare se viene utilizzata la libreria di cursori. Vedere i parametri *bUseCursorLib* e *dwOptions* per [CDatabase::Open](../../mfc/reference/cdatabase-class.md#open).

> [!NOTE]
> A differenza delle classi DAO MFC, le classi `Find` ODBC MFC non forniscono un set di funzioni per individuare il record successivo (o precedente) che soddisfa i criteri specificati.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[CRecordset::CanScroll](../../mfc/reference/crecordset-class.md#canscroll)<br/>
[CRecordset::CheckRowsetError](../../mfc/reference/crecordset-class.md#checkrowseterror)<br/>
[Recordset: applicazione di filtri ai record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md)
