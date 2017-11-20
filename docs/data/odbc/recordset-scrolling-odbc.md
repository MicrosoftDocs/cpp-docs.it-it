---
title: 'Recordset: Scorrimento (ODBC) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
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
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 0bb5e426e17c0a91c53abf5393b3c98bef02da14
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="recordset-scrolling-odbc"></a>Recordset: scorrimento (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 Dopo aver aperto un recordset, è necessario accedere ai record per visualizzare i valori, eseguire calcoli, generare report e così via. Lo scorrimento è che possibile passare da un record a altro all'interno del recordset.  
  
 Questo argomento viene illustrato:  
  
-   [La modalità di scorrimento da un record a altro in un recordset](#_core_scrolling_from_one_record_to_another).  
  
-   [In quali circostanze lo scorrimento è e non è supportate](#_core_when_scrolling_is_supported).  
  
##  <a name="_core_scrolling_from_one_record_to_another"></a>Scorrimento da un Record a altro  
 Classe `CRecordset` fornisce il **spostare** le funzioni membro per lo scorrimento all'interno di un recordset. Queste funzioni consentono di spostare il record corrente dal set di righe. Se è stato implementato il recupero di massa di righe, un **spostare** operazione Riposiziona il recordset dalle dimensioni del set di righe. Se non è stato implementato il recupero di massa, una chiamata a di massa di righe un **spostare** funzione viene spostato il recordset da un record alla volta. Per ulteriori informazioni sulle righe di massa, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
> [!NOTE]
>  Quando si sposta all'interno di un recordset, non è possibile ignorare i record eliminati. Per ulteriori informazioni, vedere il [IsDeleted](../../mfc/reference/crecordset-class.md#isdeleted) funzione membro.  
  
 Oltre al **spostare** funzioni, `CRecordset` fornisce funzioni membro di verificare se è eseguito lo scorrimento oltre la fine o prima dell'inizio del recordset.  
  
 Per determinare se lo scorrimento è possibile nel recordset, chiamare il `CanScroll` funzione membro.  
  
#### <a name="to-scroll"></a>Scorrimento  
  
1.  Per passare un record o un set di righe: chiamare il [MoveNext](../../mfc/reference/crecordset-class.md#movenext) funzione membro.  
  
2.  Record o un set di righe: chiamare il [MovePrev](../../mfc/reference/crecordset-class.md#moveprev) funzione membro.  
  
3.  Al primo record del recordset: chiamare il [MoveFirst](../../mfc/reference/crecordset-class.md#movefirst) funzione membro.  
  
4.  All'ultimo record del recordset o all'ultimo rowset: chiamare il [MoveLast](../../mfc/reference/crecordset-class.md#movelast) funzione membro.  
  
5.  *N* record relazione alla posizione corrente: chiamare il [spostare](../../mfc/reference/crecordset-class.md#move) funzione membro.  
  
#### <a name="to-test-for-the-end-or-the-beginning-of-the-recordset"></a>Per verificare se la fine o all'inizio del recordset  
  
1.  È eseguito lo scorrimento oltre l'ultimo record? Chiamare il [IsEOF](../../mfc/reference/crecordset-class.md#iseof) funzione membro.  
  
2.  Scorre prima del primo record (spostamento all'indietro)? Chiamare il [IsBOF](../../mfc/reference/crecordset-class.md#isbof) funzione membro.  
  
 Nell'esempio di codice viene illustrato come utilizzare `IsBOF` e `IsEOF` per rilevare i limiti di un recordset durante lo scorrimento in entrambe le direzioni.  
  
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
  
 `IsEOF`Restituisce un valore diverso da zero se il recordset è posizionato oltre l'ultimo record. `IsBOF`Restituisce un valore diverso da zero se il recordset è posizionato prima del primo record (prima tutti i record). In entrambi i casi, non sono presenti record corrente su cui operare. Se si chiama `MovePrev` quando `IsBOF` già **TRUE** o chiamare `MoveNext` quando `IsEOF` già **TRUE**, il framework genera un `CDBException`. È inoltre possibile utilizzare `IsBOF` e `IsEOF` per verificare la presenza di un recordset vuoto.  
  
 Per ulteriori informazioni sulla navigazione del recordset, vedere [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).  
  
##  <a name="_core_when_scrolling_is_supported"></a>Supporto dello scorrimento  
 Come, originariamente progettato SQL fornita solo scorrimento in avanti, ma ODBC estende le funzionalità di scorrimento. Il livello di supporto per lo scorrimento disponibile dipende dal driver ODBC l'applicazione funzioni con livello di conformità del driver ODBC API, e se la libreria di cursori ODBC viene caricata in memoria. Per ulteriori informazioni, vedere [ODBC](../../data/odbc/odbc-basics.md) e [ODBC: libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md).  
  
> [!TIP]
>  È possibile controllare se viene utilizzata la libreria di cursori. Vedere il `bUseCursorLib` e `dwOptions` parametri [CDatabase:: Open](../../mfc/reference/cdatabase-class.md#open).  
  
> [!NOTE]
>  A differenza delle classi DAO MFC, le classi ODBC MFC non forniscono un set di **trovare** funzioni per l'individuazione del record successivo (o precedente) che soddisfi i criteri specificati.  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [CRecordset::CanScroll](../../mfc/reference/crecordset-class.md#canscroll)   
 [CRecordset::CheckRowsetError](../../mfc/reference/crecordset-class.md#checkrowseterror)   
 [Recordset: applicazione di filtri ai record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md)