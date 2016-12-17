---
title: "Funzioni di trasferimento di campi di record | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DAO (Data Access Objects), trasferimento di campi di record (DFX)"
  - "ODBC, funzioni di scambio di dati RFX di massa"
  - "RFX (trasferimento di campi di record), classi ODBC"
  - "DFX (trasferimento di campi di record DAO), funzioni di scambio di dati"
  - "DFX (funzioni)"
  - "funzioni RFX di massa"
  - "DFX (trasferimento di campi di record DAO)"
  - "RFX (trasferimento di campi di record), classi DAO"
  - "ODBC, RFX"
  - "RFX (trasferimento di campi di record), funzioni di scambio di dati"
  - "RFX (Trasferimento di campi di record)"
ms.assetid: 6e4c5c1c-acb7-4c18-bf51-bf7959a696cd
caps.latest.revision: 13
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzioni di trasferimento di campi di record
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questo argomento elenca le funzioni di trasferimento di campi di record \([RFX](#_mfc_rfx_functions_.28.odbc.29), [RFX di massa](#_mfc_bulk_rfx_functions_.28.odbc.29) e [DFX](#_mfc_dfx_functions_.28.dao.29)\) usate per automatizzare il trasferimento dei dati tra un oggetto recordset e la relativa origine dati per eseguire altre operazioni sui dati.  
  
 Se si usano le classi basate su ODBC e si è implementato il recupero di massa di righe, è necessario eseguire manualmente l'override della funzione membro `DoBulkFieldExchange` di `CRecordset` chiamando le funzioni RFX di massa per ogni membro dati corrispondente a una colonna di origine dati.  
  
 Se non è stato implementato il recupero di massa di righe nelle classi basate su ODBC, o se si usano le classi basate su DAO, ClassWizard eseguirà l'override della funzione membro `DoFieldExchange` di `CRecordset` o `CDaoRecordset` chiamando le funzioni RFX \(per le classi ODBC\) o le funzioni DFX \(per le classi DAO\) per ogni membro dati di campo nel recordset.  
  
 Le funzioni di trasferimento di campi di record trasferiscono dati ogni volta che il framework chiama `DoFieldExchange` o `DoBulkFieldExchange`. Ogni funzione trasferisce un tipo di dati specifico.  
  
 Per altre informazioni sull'uso di queste funzioni, vedere gli articoli [Record Field Exchange: How RFX Works \(ODBC\)](../../data/odbc/record-field-exchange-how-rfx-works.md) \(Trasferimento di campi di record: funzionamento di RFX \(ODBC\)\). Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Per le colonne di dati associate in modo dinamico, è anche possibile chiamare le funzioni RFX e DFX manualmente, come descritto negli articoli[Recordset: Dynamically Binding Data Columns \(ODBC\)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md) \(Recordset: associazione dinamica di colonne di dati \(ODBC\)\). Inoltre, è possibile scrivere routine RFX o DFX personalizzate, come spiegato nella Nota tecnica [43](../../mfc/tn043-rfx-routines.md) \(per ODBC\) e [53](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md) \(per DAO\).  
  
 Per un esempio di funzioni RFX e RFX di massa come appaiono nelle funzioni `DoFieldExchange` e `DoBulkFieldExchange`, vedere [RFX\_Text](../Topic/RFX_Text.md) e [RFX\_Text\_Bulk](../Topic/RFX_Text_Bulk.md). Le funzioni DFX sono molto simili alle funzioni RFX.  
  
### Funzioni RFX \(ODBC\)  
  
|||  
|-|-|  
|[RFX\_Binary](../Topic/RFX_Binary.md)|Trasferisce matrici di byte di tipo [CByteArray](../../mfc/reference/cbytearray-class.md).|  
|[RFX\_Bool](../Topic/RFX_Bool.md)|Trasferisce dati Boolean.|  
|[RFX\_Byte](../Topic/RFX_Byte.md)|Trasferisce un singolo byte di dati.|  
|[RFX\_Date](../Topic/RFX_Date.md)|Trasferisce dati su data e ora usando [CTime](../../atl-mfc-shared/reference/ctime-class.md) o **TIMESTAMP\_STRUCT**.|  
|[RFX\_Double](../Topic/RFX_Double.md)|Trasferisce dati a virgola mobile e precisione doppia.|  
|[RFX\_Int](../Topic/RFX_Int.md)|Trasferisce dati di tipo Integer.|  
|[RFX\_Long](../Topic/RFX_Long.md)|Trasferisce dati long integer.|  
|[RFX\_LongBinary](../Topic/RFX_LongBinary.md)|Trasferisce dati di oggetti binari di grandi dimensioni \(BLOB\) con un oggetto della classe [CLongBinary](../../mfc/reference/clongbinary-class.md).|  
|[RFX\_Single](../Topic/RFX_Single.md)|Trasferisce dati float.|  
|[RFX\_Text](../Topic/RFX_Text.md)|Trasferisce dati di tipo stringa.|  
  
### Funzioni RFX di massa \(ODBC\)  
  
|||  
|-|-|  
|[RFX\_Binary\_Bulk](../Topic/RFX_Binary_Bulk.md)|Trasferisce matrici di dati byte.|  
|[RFX\_Bool\_Bulk](../Topic/RFX_Bool_Bulk.md)|Trasferisce matrici di dati Boolean.|  
|[RFX\_Byte\_Bulk](../Topic/RFX_Byte_Bulk.md)|Trasferisce matrici di byte singoli.|  
|[RFX\_Date\_Bulk](../Topic/RFX_Date_Bulk.md)|Trasferisce matrici di dati di tipo **TIMESTAMP\_STRUCT**.|  
|[RFX\_Double\_Bulk](../Topic/RFX_Double_Bulk.md)|Trasferisce matrici di dati a virgola mobile e precisione doppia.|  
|[RFX\_Int\_Bulk](../Topic/RFX_Int_Bulk.md)|Trasferisce matrici di dati Integer.|  
|[RFX\_Long\_Bulk](../Topic/RFX_Long_Bulk.md)|Trasferisce matrici di dati long integer.|  
|[RFX\_Single\_Bulk](../Topic/RFX_Single_Bulk.md)|Trasferisce matrici di dati a virgola mobile.|  
|[RFX\_Text\_Bulk](../Topic/RFX_Text_Bulk.md)|Trasferisce matrici di dati di tipo **LPSTR**.|  
  
### Funzioni DFX \(DAO\)  
  
|||  
|-|-|  
|[DFX\_Binary](../Topic/DFX_Binary.md)|Trasferisce matrici di byte di tipo [CByteArray](../../mfc/reference/cbytearray-class.md).|  
|[DFX\_Bool](../Topic/DFX_Bool.md)|Trasferisce dati Boolean.|  
|[DFX\_Byte](../Topic/DFX_Byte.md)|Trasferisce un singolo byte di dati.|  
|[DFX\_Currency](../Topic/DFX_Currency.md)|Trasferisce dati di valuta, di tipo [COleCurrency](../../mfc/reference/colecurrency-class.md).|  
|[DFX\_DateTime](../Topic/DFX_DateTime.md)|Trasferisce dati su data e ora, di tipo [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md).|  
|[DFX\_Double](../Topic/DFX_Double.md)|Trasferisce dati a virgola mobile e precisione doppia.|  
|[DFX\_Long](../Topic/DFX_Long.md)|Trasferisce dati long integer.|  
|[DFX\_LongBinary](../Topic/DFX_LongBinary.md)|Trasferisce dati di oggetti binari di grandi dimensioni \(BLOB\) con un oggetto della classe `CLongBinary`. Per DAO, è invece consigliabile usare [DFX\_Binary](../Topic/DFX_Binary.md).|  
|[DFX\_Short](../Topic/DFX_Short.md)|Trasferisce dati short integer.|  
|[DFX\_Single](../Topic/DFX_Single.md)|Trasferisce dati float.|  
|[DFX\_Text](../Topic/DFX_Text.md)|Trasferisce dati di tipo stringa.|  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)   
 [CRecordset::DoFieldExchange](../Topic/CRecordset::DoFieldExchange.md)   
 [CRecordset::DoBulkFieldExchange](../Topic/CRecordset::DoBulkFieldExchange.md)   
 [CDaoRecordset::DoFieldExchange](../Topic/CDaoRecordset::DoFieldExchange.md)