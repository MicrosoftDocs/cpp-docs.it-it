---
title: 'SQL: tipi di dati SQL e C++ (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- data types [C++], SQL vs. C++
- SQL data types [C++]
- SQL [C++], vs. C++ data types
ms.assetid: 066e0070-d4da-435c-9c4b-f7cab3352c86
ms.openlocfilehash: cffe44b832ac1eb28d368072b8f0e92ea9f57feb
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374470"
---
# <a name="sql-sql-and-c-data-types-odbc"></a>SQL: tipi di dati SQL e C++ (ODBC)

> [!NOTE]
> Queste informazioni sono valide per le classi ODBC MFC. Se si utilizzano le classi DAO MFC, vedere l'argomento "Confronto di Microsoft Jet Database Engine SQL e ANSI SQL" nella Guida in linea daO.

Nella tabella seguente viene eseguito il mapping dei tipi di dati SQL ANSI ai tipi di dati di C. In questo modo vengono aumentate le informazioni sul linguaggio C fornite nell'appendice D di *ODBC SDK* *Programmer's Reference* nel CD di MSDN Library. Le procedure guidate gestiscono la maggior parte dei mapping dei tipi di dati. Se non si utilizza una procedura guidata, è possibile utilizzare le informazioni di mapping per scrivere manualmente il codice di scambio dei campi.

### <a name="ansi-sql-data-types-mapped-to-c-data-types"></a>Tipi di dati ANSI SQL mappati a tipi di dati C

|Tipo di dati SQL ANSI|Tipo di dati C++|
|------------------------|---------------------|
|**Char**|`CString`|
|**Decimale**|`CString`1|
|**Smallint**|**int**|
|**Reale**|**float**|
|**Intero**|**Lungo**|
|**Galleggiante**|**double**|
|**Doppia**|**double**|
|**Numerico**|`CString`1|
|**Varchar**|`CString`|
|**Longvarchar**|`CLongBinary`, `CString` 2|
|**pezzo**|**Bool**|
|**Tinyint**|**BYTE**|
|**Bigint**|`CString`1|
|**Binario**|`CByteArray`|
|**Varbinary**|`CByteArray`|
|**LONGVARBINARY**|`CLongBinary`, `CByteArray` 3|
|**Data**|`CTime`, `CString`|
|**Tempo**|`CTime`, `CString`|
|**Timestamp**|`CTime`, `CString`|

1. ANSI **DECIMAL** e `CString` **NUMERIC** mappano a causa **SQL_C_CHAR** è il tipo di trasferimento ODBC predefinito.

2. I dati di tipo carattere oltre i 255 caratteri vengono troncati per impostazione predefinita quando vengono mappati a `CString`. È possibile estendere la lunghezza del troncamento impostando `RFX_Text`in modo esplicito l'argomento *nMaxLength* di .

3. I dati binari oltre i 255 caratteri `CByteArray`vengono troncati per impostazione predefinita quando vengono mappati a . È possibile estendere la lunghezza del troncamento impostando `RFX_Binary`in modo esplicito l'argomento *nMaxLength* di .

Se non si utilizza la libreria di cursori ODBC, è possibile che si verifichi un problema quando si tenta di aggiornare due o più campi di lunghezza variabile lunga utilizzando il driver ODBC di Microsoft SQL Server e le classi di database ODBC MFC. I tipi ODBC, **SQL_LONGVARCHAR** e **SQL_LONGVARBINARY**, eseguono il mapping ai tipi di SQL Server di tipo testo e immagine. Viene `CDBException` generata un'eccezione se si aggiornano due `CRecordset::Update`o più campi di lunghezza variabile long nella stessa chiamata a . Pertanto, non aggiornare più `CRecordset::Update`colonne lunghe contemporaneamente a . È possibile aggiornare più colonne lunghe `SQLPutData`contemporaneamente con l'API ODBC. È anche possibile usare la libreria di cursori ODBC, ma questa operazione non è consigliata per i driver, ad esempio il driver di SQL Server, che supportano i cursori e non richiedono la libreria di cursori.

Se si utilizza la libreria di cursori ODBC con le classi di database ODBC `CDBException` MFC e `CRecordset::Update` il driver ODBC di Microsoft SQL Server, potrebbe verificarsi un **ASSERT** insieme a un if una chiamata a seguito di una chiamata a `CRecordset::Requery`. Chiamare `CRecordset::Close` invece `CRecordset::Open` e `CRecordset::Requery`anziché . Un'altra soluzione consiste nel non utilizzare la libreria di cursori ODBC, perché il driver ODBC di SQL Server e SQL Server forniscono il supporto nativo per i cursori in modo nativo e la libreria di cursori ODBC non è necessaria.

## <a name="see-also"></a>Vedere anche

[SQL](../../data/odbc/sql.md)<br/>
[SQL: esecuzione di chiamate SQL dirette (ODBC)](../../data/odbc/sql-making-direct-sql-calls-odbc.md)
