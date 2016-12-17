---
title: "SQL: tipi di dati SQL e C++ (ODBC) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tipi di dati [C++], SQL e C++"
  - "SQL [C++], e tipi di dati C++"
  - "tipi di dati SQL [C++]"
ms.assetid: 066e0070-d4da-435c-9c4b-f7cab3352c86
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# SQL: tipi di dati SQL e C++ (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  Queste informazioni si riferiscono alle classi ODBC MFC.  Se si utilizzano le classi DAO di MFC, vedere l'argomento relativo al confronto tra la sintassi SQL del modulo di gestione di database Microsoft Jet e quella ANSI nella Guida di DAO.  
  
 Nella tabella riportata di seguito i tipi di dati SQL ANSI sono associati ai tipi di dati C\+\+.  Questa tabella integra le informazioni sul linguaggio C fornite nell'appendice D in *ODBC SDK* *Programmer's Reference* nel CD di MSDN Library.  Le procedure guidate gestiscono automaticamente l'associazione per la maggior parte dei tipi di dati.  Per la scrittura manuale del codice per il trasferimento di campi, è possibile utilizzare le informazioni di mapping anziché una procedura guidata.  
  
### Tipi di dati SQL ANSI e corrispondenti tipi di dati C\+\+  
  
|Tipo di dati SQL ANSI|Tipo di dati C\+\+|  
|---------------------------|------------------------|  
|**CHAR**|`CString`|  
|**DECIMAL**|`CString` 1|  
|**SMALLINT**|`int`|  
|`REAL`|**float**|  
|**INTEGER**|**long**|  
|**FLOAT**|**double**|  
|**DOUBLE**|**double**|  
|**NUMERIC**|`CString` 1|  
|**VARCHAR**|`CString`|  
|**LONGVARCHAR**|`CLongBinary`, `CString` 2|  
|**BIT**|**BOOL**|  
|**TINYINT**|**BYTE**|  
|**BIGINT**|`CString` 1|  
|**BINARY**|`CByteArray`|  
|**VARBINARY**|`CByteArray`|  
|**LONGVARBINARY**|`CLongBinary`, `CByteArray` 3|  
|**DATE**|`CTime`, `CString`|  
|**TIME**|**CTime, CString**|  
|**TIMESTAMP**|**CTime, CString**|  
  
 1.  I tipi di dati ANSI **DECIMAL** e **NUMERIC** vengono associati a `CString`, in quanto **SQL\_C\_CHAR** è il tipo di trasferimento ODBC predefinito.  
  
 2.  Per impostazione predefinita, i dati di tipo carattere composti da più di 255 caratteri, quando associati a `CString`, vengono troncati.  È possibile estendere la lunghezza del troncamento impostando in modo esplicito l'argomento `nMaxLength` di `RFX_Text`.  
  
 3.  Per impostazione predefinita, i dati binari composti da più di 255 caratteri, quando associati a `CByteArray`, vengono troncati.  È possibile estendere la lunghezza del troncamento impostando in modo esplicito l'argomento `nMaxLength` di `RFX_Binary`.  
  
 Se non si utilizza la libreria di cursori ODBC e si tenta di aggiornare due o più campi long di lunghezza variabile mediante il driver ODBC di Microsoft SQL Server e le classi di database ODBC MFC, è possibile che si verifichino problemi.  I tipi di dati ODBC, ovvero **SQL\_LONGVARCHAR** e **SQL\_LONGVARBINARY**, vengono associati ai tipi text e image di SQL Server.  Se si aggiornano due o più campi long di lunghezza variabile nella stessa chiamata a `CRecordset::Update`, verrà generata un'eccezione `CDBException`.  Si consiglia pertanto di non aggiornare più colonne long contemporaneamente mediante `CRecordset::Update`.  È possibile eseguire questa operazione con l'API ODBC **SQLPutData**.  È inoltre possibile utilizzare la libreria di cursori ODBC. Si consiglia tuttavia di non adottare questo metodo per i driver che supportano i cursori e non richiedono la libreria di cursori, come il driver per SQL Server.  
  
 Se si utilizza la libreria di cursori ODBC con le classi di database ODBC MFC e il driver ODBC per Microsoft SQL Server, è possibile che venga generata un'istruzione **ASSERT** con un'eccezione `CDBException`, nel caso in cui venga eseguita una chiamata a `CRecordset::Update` dopo una chiamata a `CRecordset::Requery`.  Si consiglia di chiamare invece `CRecordset::Close` e `CRecordset::Open` anziché `CRecordset::Requery`.  Un'altra soluzione consiste nel non utilizzare la libreria di cursori ODBC, in quanto i driver SQL Server e ODBC per SQL Server forniscono il supporto incorporato per i cursori e quindi la libreria di cursori ODBC non è necessaria.  
  
## Vedere anche  
 [SQL](../../data/odbc/sql.md)   
 [SQL: esecuzione di chiamate SQL dirette \(ODBC\)](../../data/odbc/sql-making-direct-sql-calls-odbc.md)