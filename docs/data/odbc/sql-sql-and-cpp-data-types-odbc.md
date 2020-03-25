---
title: 'SQL: tipi di dati SQL e C++ (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- data types [C++], SQL vs. C++
- SQL data types [C++]
- SQL [C++], vs. C++ data types
ms.assetid: 066e0070-d4da-435c-9c4b-f7cab3352c86
ms.openlocfilehash: 1c1ce908b5c8d345906d49adc79e322225ed49f5
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212615"
---
# <a name="sql-sql-and-c-data-types-odbc"></a>SQL: tipi di dati SQL e C++ (ODBC)

> [!NOTE]
>  Queste informazioni sono valide per le classi ODBC MFC. Se si utilizzano le classi DAO MFC, vedere l'argomento "confronto tra Microsoft Jet motore di database SQL e ANSI SQL" nella Guida di DAO.

Nella tabella seguente viene eseguito il mapping dei tipi C++ di dati SQL ANSI ai tipi di dati di. Ciò aumenta le informazioni del linguaggio C fornite nell'Appendice D di *ODBC SDK* *Programmer ' s Reference* nel CD di MSDN Library. Le procedure guidate gestiscono la maggior parte del mapping dei tipi di dati. Se non si utilizza una procedura guidata, è possibile utilizzare le informazioni di mapping per scrivere manualmente il codice di scambio dei campi.

### <a name="ansi-sql-data-types-mapped-to-c-data-types"></a>Tipi di dati SQL ANSI mappati ai tipi di C++ dati

|Tipo di dati SQL ANSI|Tipo di dati C++|
|------------------------|---------------------|
|**CHAR**|`CString`|
|**DECIMAL**|`CString` 1|
|**SMALLINT**|**int**|
|**REAL**|**float**|
|**INTEGER**|**long**|
|**FLOAT**|**double**|
|**DOUBLE**|**double**|
|**NUMERIC**|`CString` 1|
|**VARCHAR**|`CString`|
|**LONGVARCHAR**|`CLongBinary`, `CString` 2|
|**BIT**|**BOOL**|
|**TINYINT**|**BYTE**|
|**BIGINT**|`CString` 1|
|**BINARIO**|`CByteArray`|
|**VARBINARY**|`CByteArray`|
|**LONGVARBINARY**|`CLongBinary`, `CByteArray` 3|
|**DATE**|`CTime`, `CString`|
|**ORA**|`CTime`, `CString`|
|**TIMESTAMP**|`CTime`, `CString`|

1. Il mapping **decimale** e **numerico** ANSI `CString` perché **SQL_C_CHAR** è il tipo di trasferimento ODBC predefinito.

2. I dati di tipo carattere oltre 255 caratteri vengono troncati per impostazione predefinita quando viene eseguito il mapping a `CString`. È possibile estendere la lunghezza del troncamento impostando in modo esplicito l'argomento *nMaxLength* di `RFX_Text`.

3. I dati binari oltre 255 caratteri vengono troncati per impostazione predefinita quando viene eseguito il mapping a `CByteArray`. È possibile estendere la lunghezza del troncamento impostando in modo esplicito l'argomento *nMaxLength* di `RFX_Binary`.

Se non si utilizza la libreria di cursori ODBC, è possibile che si verifichi un problema durante il tentativo di aggiornare due o più campi a lunghezza variabile lungo utilizzando il Microsoft SQL Server driver ODBC e le classi di database ODBC MFC. I tipi ODBC, **SQL_LONGVARCHAR** e **SQL_LONGVARBINARY**, vengono mappati ai tipi di SQL Server di testo e di immagine. Viene generata un'`CDBException` se si aggiornano due o più campi a lunghezza variabile lungo nella stessa chiamata a `CRecordset::Update`. Pertanto, non aggiornare più colonne long simultaneamente con `CRecordset::Update`. È possibile aggiornare contemporaneamente più colonne long con l'API ODBC `SQLPutData`. È inoltre possibile utilizzare la libreria di cursori ODBC, ma questa operazione non è consigliata per i driver, ad esempio il driver SQL Server, che supportano i cursori e non richiedono la libreria di cursori.

Se si utilizza la libreria di cursori ODBC con le classi di database ODBC MFC e il driver ODBC di Microsoft SQL Server, è possibile che venga eseguita un' **asserzione** insieme a una `CDBException` se una chiamata a `CRecordset::Update` segue una chiamata a `CRecordset::Requery`. Al contrario, chiamare `CRecordset::Close` e `CRecordset::Open` invece di `CRecordset::Requery`. Un'altra soluzione consiste nell'evitare di utilizzare la libreria di cursori ODBC, perché il SQL Server e il SQL Server driver ODBC forniscono il supporto nativo per i cursori in modo nativo e la libreria di cursori ODBC non è necessaria.

## <a name="see-also"></a>Vedere anche

[SQL](../../data/odbc/sql.md)<br/>
[SQL: esecuzione di chiamate SQL dirette (ODBC)](../../data/odbc/sql-making-direct-sql-calls-odbc.md)
