---
title: 'Trasferimento di campi di record: Utilizzo delle funzioni RFX | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ODBC [C++], data types
- data types [C++], ODBC record field exchange
- RFX (ODBC) [C++], function syntax and parameters
- DoFieldExchange method, and RFX functions
- ODBC [C++], RFX
- RFX (ODBC) [C++], data types
- function calls, RFX functions
ms.assetid: c594300b-5a29-4119-a68b-e7ca32def696
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: bc49ede976fe8126e2996b72174c98f5abba780a
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50060715"
---
# <a name="record-field-exchange-using-the-rfx-functions"></a>Trasferimento di campi di record: utilizzo delle funzioni RFX

Questo argomento viene illustrato come utilizzare le chiamate di funzione RFX che costituiscono il corpo del `DoFieldExchange` eseguire l'override.

> [!NOTE]
>  Questo argomento si applica alle classi derivate da [CRecordset](../../mfc/reference/crecordset-class.md) in quale riga bulk il recupero non è stato implementato. Se si usa il recupero di righe bulk, viene implementata exchange di massa di campi di record (RFX di massa). RFX di massa è simile a RFX. Per comprendere le differenze, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Le funzioni globali RFX scambiano dati tra le colonne i membri dati i dati di origine e il campo nel set di record. È necessario scrivere la funzione RFX nel set di record [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) funzione membro. Questo argomento vengono brevemente descritte le funzioni e illustra i tipi di dati per cui RFX sono disponibili le funzioni. [Nota tecnica 43](../../mfc/tn043-rfx-routines.md) viene descritto come scrivere funzioni RFX personalizzate per i tipi di dati aggiuntivi.

##  <a name="_core_rfx_function_syntax"></a> Sintassi delle funzioni RFX

Ogni funzione RFX accetta tre parametri (e alcuni accettano un parametro facoltativo di quarto e quinto):

- Un puntatore a un [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) oggetto. È sufficiente passare il `pFX` puntatore passato a `DoFieldExchange`.

- Il nome della colonna come visualizzato nell'origine dati.

- Il nome del membro dati del campo corrispondente o membro dati del parametro nella classe recordset.

- (Facoltativo) In alcune delle funzioni, la lunghezza massima della stringa o matrice da trasferire. Il valore predefinito è lunga 255 byte, ma è possibile modificarla. La dimensione massima è basata sulla dimensione massima di un `CString` oggetti, ovvero **INT_MAX** (2.147.483.647) byte, ma probabilmente si riscontreranno i limiti del driver prima che la dimensione.

- (Facoltativo) Nel `RFX_Text` (funzione), talvolta usano un quinto parametro per specificare il tipo di dati di una colonna.

Per altre informazioni, vedere le funzioni RFX sotto [macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md) nel *Class Library Reference*. Per un esempio di quando è possibile apportare speciali usano i parametri, vedere [Recordset: recupero di somme e altri risultati aggregati (ODBC)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md).

##  <a name="_core_rfx_data_types"></a> Tipi di dati RFX

La libreria di classi fornisce le funzioni RFX per il trasferimento di molti diversi tipi di dati tra l'origine dati e i recordset. Nell'elenco seguente sono riepilogate le funzioni RFX dal tipo di dati. Nei casi in cui è necessario scrivere il proprio chiamate di funzioni RFX, selezionare da queste funzioni in base al tipo di dati.

|Funzione|Tipo di dati|
|--------------|---------------|
|`RFX_Bool`|**BOOL**|
|`RFX_Byte`|**BYTE**|
|`RFX_Binary`|`CByteArray`|
|`RFX_Double`|**double**|
|`RFX_Single`|**float**|
|`RFX_Int`|**int**|
|`RFX_Long`|**long**|
|`RFX_LongBinary`|`CLongBinary`|
|`RFX_Text`|`CString`|
|`RFX_Date`|`CTime`|


Per altre informazioni, vedere la documentazione di funzioni RFX sotto [macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md) nel *Class Library Reference*. Per informazioni su come eseguire il mapping tipi di dati C++ ai tipi di dati SQL, vedere la tabella ANSI SQL dati i tipi mappati ai tipi di dati C++ nelle [SQL: tipi di dati C++ (ODBC) e SQL](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md).

## <a name="see-also"></a>Vedere anche

[Trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)<br/>
[Trasferimento di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md)<br/>
[Recordset: applicazione di parametri a un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md)<br/>
[Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)<br/>
[Classe CFieldExchange](../../mfc/reference/cfieldexchange-class.md)