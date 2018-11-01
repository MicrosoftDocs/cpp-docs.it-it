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
ms.openlocfilehash: e41b526b86922bafd1d923fa5848a5ef8ed4825e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50579600"
---
# <a name="recordset-scrolling-odbc"></a>Recordset: scorrimento (ODBC)

Questo argomento si applica alle classi ODBC MFC.

Dopo aver aperto un recordset, è necessario accedere ai record per visualizzare i valori, eseguire calcoli, generare report e così via. Lo scorrimento è che possibile passare da un record a altro all'interno del recordset.

Questo argomento viene illustrato:

- [La modalità di scorrimento da un record a altro in un recordset](#_core_scrolling_from_one_record_to_another).

- [In quali circostanze lo scorrimento viene e non è supportati](#_core_when_scrolling_is_supported).

##  <a name="_core_scrolling_from_one_record_to_another"></a> Lo scorrimento da un Record a un altro

Classe `CRecordset` fornisce il `Move` funzioni membro di uno scorrimento all'interno di un set di record. Queste funzioni sposterà il record corrente dal set di righe. Se è stato implementato il recupero di righe bulk, un `Move` operazione Riposiziona il recordset dalle dimensioni del set di righe. Se non è stato implementato il recupero, una chiamata a di massa di righe un `Move` funzione Riposiziona il recordset dal record di uno ogni volta. Per altre informazioni sul recupero di righe bulk, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

> [!NOTE]
>  Quando si sposta all'interno di un recordset, non è possibile ignorare i record eliminati. Per altre informazioni, vedere la [IsDeleted](../../mfc/reference/crecordset-class.md#isdeleted) funzione membro.

Oltre al `Move` funzioni, `CRecordset` fornisce funzioni membro di verificare se è eseguito lo scorrimento oltre la fine o prima dell'inizio del recordset.

Per determinare se lo scorrimento è possibile eseguire nel set di record, chiamare il `CanScroll` funzione membro.

#### <a name="to-scroll"></a>Da scorrere

1. Inoltrare un record o un set di righe: chiama il [MoveNext](../../mfc/reference/crecordset-class.md#movenext) funzione membro.

1. Un record con le versioni precedenti o un set di righe: chiama il [MovePrev](../../mfc/reference/crecordset-class.md#moveprev) funzione membro.

1. Per il primo record del recordset: chiama il [MoveFirst](../../mfc/reference/crecordset-class.md#movefirst) funzione membro.

1. Per l'ultimo record del recordset o all'ultimo set di righe: chiama il [MoveLast](../../mfc/reference/crecordset-class.md#movelast) funzione membro.

1. *N* record rispetto alla posizione corrente: chiamare il [spostare](../../mfc/reference/crecordset-class.md#move) funzione membro.

#### <a name="to-test-for-the-end-or-the-beginning-of-the-recordset"></a>Per verificare se la fine o all'inizio del set di record

1. È eseguito lo scorrimento oltre l'ultimo record? Chiamare il [IsEOF](../../mfc/reference/crecordset-class.md#iseof) funzione membro.

1. Scorre prima del primo record (spostamento all'indietro)? Chiamare il [IsBOF](../../mfc/reference/crecordset-class.md#isbof) funzione membro.

Il codice seguente viene illustrato come utilizzare `IsBOF` e `IsEOF` per rilevare i limiti di un set di record durante lo scorrimento in entrambe le direzioni.

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

`IsEOF` Restituisce un valore diverso da zero se il recordset è posizionato oltre l'ultimo record. `IsBOF` Restituisce un valore diverso da zero se il recordset è posizionato prima del primo record (prima di tutti i record). In entrambi i casi, non è presente nessun record corrente su cui operare. Se si chiama `MovePrev` quando si `IsBOF` è già TRUE o chiamare `MoveNext` quando `IsEOF` è già impostato su TRUE, il framework genera un `CDBException`. È anche possibile usare `IsBOF` e `IsEOF` per verificare la presenza di un set di record vuoto.

Per altre informazioni sull'esplorazione del recordset, vedere [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).

##  <a name="_core_when_scrolling_is_supported"></a> Quando lo scorrimento è supportato

Come, originariamente progettato SQL fornita solo scorrimento in avanti, ma ODBC estende le funzionalità di scorrimento. Il livello di supporto per lo scorrimento disponibile dipende dal driver ODBC l'applicazione funziona con, livello di conformità del driver ODBC API e indica se la libreria di cursori ODBC viene caricata in memoria. Per altre informazioni, vedere [ODBC](../../data/odbc/odbc-basics.md) e [ODBC: libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md).

> [!TIP]
>  È possibile controllare se viene utilizzata la libreria di cursori. Vedere le *bUseCursorLib* e *dwOptions* parametri [CDatabase:: Open](../../mfc/reference/cdatabase-class.md#open).

> [!NOTE]
>  A differenza delle classi DAO MFC, le classi ODBC MFC non forniscono un set di `Find` funzioni per l'individuazione del record successivo (o precedente) che soddisfi i criteri specificati.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[CRecordset::CanScroll](../../mfc/reference/crecordset-class.md#canscroll)<br/>
[CRecordset::CheckRowsetError](../../mfc/reference/crecordset-class.md#checkrowseterror)<br/>
[Recordset: applicazione di filtri ai record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md)