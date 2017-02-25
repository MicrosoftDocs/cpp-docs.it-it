---
title: "Recordset: scorrimento (ODBC) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Move (recordset del metodo)"
  - "navigazione [C++], recordset"
  - "recordset ODBC, scorrimento"
  - "recordset [C++], inizio"
  - "recordset [C++], fine"
  - "recordset [C++], spostamento di record"
  - "recordset [C++], esplorazione"
  - "scorrimento [C++], recordset"
ms.assetid: f38d2dcb-1e88-4e41-af25-98b00c276be4
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Recordset: scorrimento (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 Una volta aperto un recordset, è necessario accedere ai record per visualizzare valori, eseguire calcoli, generare report e così via.  Mediante lo scorrimento è possibile passare da un record a un altro all'interno del recordset.  
  
 In questo argomento vengono fornite informazioni su:  
  
-   [Scorrimento di record in un recordset](#_core_scrolling_from_one_record_to_another)  
  
-   [Supporto dello scorrimento](#_core_when_scrolling_is_supported)  
  
##  <a name="_core_scrolling_from_one_record_to_another"></a> Scorrimento di record  
 La classe `CRecordset` include le funzioni membro **Move** per eseguire lo scorrimento all'interno di un recordset.  Queste funzioni consentono di spostare il record corrente per rowset.  Se si è implementato il recupero di massa di righe, tramite un'operazione **Move** il recordset viene riposizionato in base alle dimensioni del rowset.  Se il recupero di massa di righe non è stato implementato, mediante una chiamata alla funzione **Move** il recordset viene spostato di un record alla volta.  Per ulteriori informazioni sul recupero di massa di righe, vedere [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
> [!NOTE]
>  Quando ci si sposta all'interno di un recordset, non è possibile ignorare i record eliminati.  Per ulteriori informazioni, vedere la funzione membro [IsDeleted](../Topic/CRecordset::IsDeleted.md).  
  
 Oltre alle funzioni **Move**, `CRecordset` fornisce funzioni membro che consentono di verificare se lo scorrimento è stato eseguito oltre la fine o prima dell'inizio del recordset.  
  
 Per determinare se è possibile eseguire lo scorrimento nel recordset, chiamare la funzione membro `CanScroll`.  
  
#### Per eseguire lo scorrimento  
  
1.  Per passare al record o al rowset successivo, chiamare la funzione membro [MoveNext](../Topic/CRecordset::MoveNext.md).  
  
2.  Per tornare al record o al rowset precedente, chiamare la funzione membro [MovePrev](../Topic/CRecordset::MovePrev.md).  
  
3.  Per passare al primo record del recordset, chiamare la funzione membro [MoveFirst](../Topic/CRecordset::MoveFirst.md).  
  
4.  Per passare all'ultimo record del recordset o all'ultimo rowset, chiamare la funzione membro [MoveLast](../Topic/CRecordset::MoveLast.md).  
  
5.  Per spostarsi di *N* record rispetto alla posizione corrente, chiamare la funzione membro [Move](../Topic/CRecordset::Move.md).  
  
#### Per verificare la fine o l'inizio del recordset  
  
1.  Nel caso si sia eseguito lo scorrimento in avanti oltre l'ultimo record,  chiamare la funzione membro [IsEOF](../Topic/CRecordset::IsEOF.md).  
  
2.  Nel caso si sia eseguito lo scorrimento indietro oltre il primo record,  chiamare la funzione membro [IsBOF](../Topic/CRecordset::IsBOF.md).  
  
 Nell'esempio di codice riportato di seguito vengono utilizzate le funzioni membro `IsBOF` e `IsEOF` per il rilevamento dei limiti di un recordset quando si esegue lo scorrimento in entrambe le direzioni.  
  
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
  
 `IsEOF` restituisce un valore diverso da zero se il recordset è posizionato dopo l'ultimo record.  `IsBOF` restituisce un valore diverso da zero se il recordset è posizionato prima del primo record, ovvero prima di tutti i record.  In entrambi i casi, non è disponibile alcun record corrente da utilizzare.  Se si chiama `MovePrev` quando `IsBOF` è già impostato su **TRUE** o si chiama `MoveNext` quando `IsEOF` è già impostato su **TRUE**, il framework genera l'eccezione `CDBException`.  È inoltre possibile utilizzare `IsBOF` e `IsEOF` per verificare l'esistenza di un recordset vuoto.  
  
 Per ulteriori informazioni sulla navigazione all'interno di un recordset, vedere [Recordset: bookmark e absolute position \(ODBC\)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).  
  
##  <a name="_core_when_scrolling_is_supported"></a> Supporto dello scorrimento  
 ODBC estende le capacità di scorrimento rispetto a SQL, originariamente progettato per supportare solo lo scorrimento in avanti.  Il livello di supporto disponibile per lo scorrimento dipende dai driver ODBC utilizzati dall'applicazione, dal livello di conformità dell'API ODBC del driver utilizzato e dal caricamento in memoria o meno della libreria di cursori ODBC.  Per ulteriori informazioni, vedere [ODBC](../../data/odbc/odbc-basics.md) e [ODBC: libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md).  
  
> [!TIP]
>  È possibile determinare se la libreria di cursori è in uso  controllando i parametri `bUseCursorLib` e `dwOptions` per [CDatabase::Open](../Topic/CDatabase::Open.md).  
  
> [!NOTE]
>  A differenza delle classi DAO MFC, le classi ODBC MFC non includono un insieme di funzioni **Find** per l'individuazione del record successivo o precedente che soddisfa i criteri specificati.  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [CRecordset::CanScroll](../Topic/CRecordset::CanScroll.md)   
 [CRecordset::CheckRowsetError](../Topic/CRecordset::CheckRowsetError.md)   
 [Recordset: applicazione di filtri ai record \(ODBC\)](../../data/odbc/recordset-filtering-records-odbc.md)