---
title: 'SQL: SQL e tipi di dati C++ (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- data types [C++], SQL vs. C++
- SQL data types [C++]
- SQL [C++], vs. C++ data types
ms.assetid: 066e0070-d4da-435c-9c4b-f7cab3352c86
ms.openlocfilehash: 3efa36342b7d16968113acd818a7a1386e4cefcc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62329887"
---
# <a name="sql-sql-and-c-data-types-odbc"></a>SQL: SQL e tipi di dati C++ (ODBC)

> [!NOTE]
>  Queste informazioni si applicano alle classi ODBC MFC. Se si lavora con le classi DAO MFC, vedere l'argomento "Confronto di Microsoft Jet motore di Database SQL e ANSI SQL" nella Guida di DAO.

Nella tabella seguente viene eseguito il mapping tipi di dati di ANSI SQL ai tipi di dati C++. Ciò aumenta le informazioni sul linguaggio C dato nell'appendice D i *SDK di ODBC* *riferimento per programmatori* sul CD di MSDN Library. Le procedure guidate consente di gestire la maggior parte dei mapping dei tipi di dati per l'utente. Se non si utilizza una procedura guidata, è possibile usare le informazioni di mapping che consentono di scrivere manualmente il codice di exchange di campo.

### <a name="ansi-sql-data-types-mapped-to-c-data-types"></a>Tipi di dati SQL ANSI mappati ai tipi di dati C++

|Tipo di dati di ANSI SQL|Tipo di dati C++|
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
|**TIME**|`CTime`, `CString`|
|**TIMESTAMP**|`CTime`, `CString`|

1. ANSI **decimale** e **numerico** eseguire il mapping a `CString` perché **SQL_C_CHAR** è il tipo di trasferimento ODBC predefinito.

2. Per impostazione predefinita quando viene eseguito il mapping a dati carattere oltre 255 caratteri vengono troncati `CString`. È possibile estendere la lunghezza di troncamento in modo esplicito impostando il *nMaxLength* argomento di `RFX_Text`.

3. Dati binari oltre 255 caratteri vengono troncati per impostazione predefinita quando mappato a `CByteArray`. È possibile estendere la lunghezza di troncamento in modo esplicito impostando il *nMaxLength* argomento di `RFX_Binary`.

Se non si usa la libreria di cursori ODBC, si potrebbe verificarsi un problema durante il tentativo di aggiornare due o più campi di long a lunghezza variabile con il driver ODBC di Microsoft SQL Server e le classi di database ODBC MFC. I tipi di ODBC **SQL_LONGVARCHAR** e **SQL_LONGVARBINARY**, eseguire il mapping di testo e immagine tipi SQL Server. Oggetto `CDBException` viene generata se si aggiornano due o più campi di long a lunghezza variabile nella stessa chiamata a `CRecordset::Update`. Pertanto, non verranno più lunghe colonne contemporaneamente con `CRecordset::Update`. È possibile aggiornare più colonne long contemporaneamente con l'API ODBC `SQLPutData`. È anche possibile usare la libreria di cursori ODBC, ma questa operazione è sconsigliata per i driver, ad esempio il driver SQL Server, che supportano i cursori e non richiedono la libreria di cursori.

Se si usa la libreria di cursori ODBC con le classi di database ODBC MFC e il driver ODBC di Microsoft SQL Server, un' **ASSERT** può verificarsi insieme a un `CDBException` se una chiamata al `CRecordset::Update` segue una chiamata a `CRecordset::Requery`. Chiamare invece `CRecordset::Close` e `CRecordset::Open` anziché `CRecordset::Requery`. Un'altra soluzione consiste nel non usare la libreria di cursori ODBC, perché SQL Server e il driver ODBC di SQL Server offrono supporto nativo per i cursori in modo nativo e non è necessaria la libreria di cursori ODBC.

## <a name="see-also"></a>Vedere anche

[SQL](../../data/odbc/sql.md)<br/>
[SQL: esecuzione di chiamate SQL dirette (ODBC)](../../data/odbc/sql-making-direct-sql-calls-odbc.md)