---
title: 'SQL: Tipi di dati C++ (ODBC) e SQL | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- data types [C++], SQL vs. C++
- SQL data types [C++]
- SQL [C++], vs. C++ data types
ms.assetid: 066e0070-d4da-435c-9c4b-f7cab3352c86
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 6a137c4f648f518420d06f5cbd98ea189a030aee
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33095408"
---
# <a name="sql-sql-and-c-data-types-odbc"></a>SQL: tipi di dati SQL e C++ (ODBC)
> [!NOTE]
>  Queste informazioni si applicano alle classi ODBC MFC. Se si lavora con le classi DAO MFC, vedere l'argomento "Confronto del Database del motore SQL e ANSI SQL di Microsoft Jet" nella Guida di DAO.  
  
 Nella tabella seguente viene eseguito il mapping tipi di dati ANSI SQL per tipi di dati C++. Ciò aumenta le informazioni sul linguaggio C fornite nell'appendice D il *ODBC SDK* *di riferimento per programmatori* sul CD di MSDN Library. Le procedure guidate di gestiscono la maggior parte dei mapping dei tipi di dati per l'utente. Se non si utilizza una procedura guidata, è possibile utilizzare le informazioni di mapping che consentiranno di scrivere manualmente il codice di exchange di campo.  
  
### <a name="ansi-sql-data-types-mapped-to-c-data-types"></a>Tipi di dati SQL ANSI mappati ai tipi di dati C++  
  
|Tipo di dati SQL ANSI|Tipo di dati C++|  
|------------------------|---------------------|  
|**CHAR**|`CString`|  
|**DECIMAL**|`CString` 1|  
|**SMALLINT**|`int`|  
|`REAL`|**float**|  
|**VALORE INTEGER**|**long**|  
|**FLOAT**|**double**|  
|**DOUBLE**|**double**|  
|**NUMERICO**|`CString` 1|  
|**VARCHAR**|`CString`|  
|**LONGVARCHAR**|`CLongBinary`, `CString` 2|  
|**BIT**|**BOOL**|  
|**TINYINT**|**BYTE**|  
|**BIGINT**|`CString` 1|  
|**BINARIO**|`CByteArray`|  
|**VARBINARY**|`CByteArray`|  
|**LONGVARBINARY**|`CLongBinary`, `CByteArray` 3|  
|**DATE**|`CTime`, `CString`|  
|**ORA**|**CTime, CString**|  
|**TIMESTAMP**|**CTime, CString**|  
  
 1. ANSI **decimale** e **numerico** eseguire il mapping a `CString` perché **SQL_C_CHAR** è il tipo di trasferimento ODBC predefinito.  
  
 2. Per impostazione predefinita quando viene eseguito il mapping a dati carattere oltre 255 caratteri vengono troncati `CString`. È possibile estendere la lunghezza del troncamento impostando in modo esplicito il `nMaxLength` argomento di `RFX_Text`.  
  
 3. Dati binari oltre 255 caratteri vengono troncati per impostazione predefinita quando il mapping a `CByteArray`. È possibile estendere la lunghezza del troncamento impostando in modo esplicito il `nMaxLength` argomento di `RFX_Binary`.  
  
 Se non si utilizza la libreria di cursori ODBC, si potrebbe verificarsi un problema durante il tentativo di aggiornare due o più campi long a lunghezza variabile con il driver ODBC di Microsoft SQL Server e le classi di database ODBC MFC. I tipi di ODBC, **SQL_LONGVARCHAR** e **SQL_LONGVARBINARY**, eseguire il mapping di testo e immagine di tipi di SQL Server. Oggetto `CDBException` viene generata se si aggiornano due o più campi di long a lunghezza variabile nella stessa chiamata a `CRecordset::Update`. Pertanto, non verranno più colonne long contemporaneamente con `CRecordset::Update`. È possibile aggiornare più colonne long contemporaneamente con l'API ODBC **SQLPutData**. È inoltre possibile utilizzare la libreria di cursori ODBC, ma questa operazione è sconsigliata per driver, come il driver SQL Server, che supportano i cursori e non richiedono la libreria di cursori.  
  
 Se si utilizza la libreria di cursori ODBC con le classi di database ODBC MFC e il driver ODBC di Microsoft SQL Server, un **ASSERT** potrebbero verificarsi insieme a un `CDBException` se una chiamata a `CRecordset::Update` segue una chiamata a `CRecordset::Requery`. Chiamare invece `CRecordset::Close` e `CRecordset::Open` anziché `CRecordset::Requery`. Un'altra soluzione consiste nel non utilizzare la libreria di cursori ODBC, in quanto SQL Server e il driver ODBC di SQL Server forniscono il supporto nativo per i cursori in modo nativo e non è necessaria la libreria di cursori ODBC.  
  
## <a name="see-also"></a>Vedere anche  
 [SQL](../../data/odbc/sql.md)   
 [SQL: esecuzione di chiamate SQL dirette (ODBC)](../../data/odbc/sql-making-direct-sql-calls-odbc.md)