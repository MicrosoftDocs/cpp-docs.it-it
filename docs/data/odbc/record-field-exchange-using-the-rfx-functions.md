---
title: 'Trasferimento di campi di record: utilizzo delle funzioni RFX'
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC [C++], data types
- data types [C++], ODBC record field exchange
- RFX (ODBC) [C++], function syntax and parameters
- DoFieldExchange method, and RFX functions
- ODBC [C++], RFX
- RFX (ODBC) [C++], data types
- function calls, RFX functions
ms.assetid: c594300b-5a29-4119-a68b-e7ca32def696
ms.openlocfilehash: d281f801349527a065f4975b7cc3d88888f88367
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213031"
---
# <a name="record-field-exchange-using-the-rfx-functions"></a>Trasferimento di campi di record: utilizzo delle funzioni RFX

In questo argomento viene illustrato come utilizzare le chiamate di funzione RFX che costituiscono il corpo dell'override del `DoFieldExchange`.

> [!NOTE]
>  Questo argomento si applica alle classi derivate da [CRecordset](../../mfc/reference/crecordset-class.md) in cui il recupero di righe bulk non è stato implementato. Se si usa il recupero di massa di righe, viene implementato il trasferimento di massa di campi di record (RFX di massa). RFX di massa è simile a RFX. Per comprendere le differenze, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Le funzioni globali RFX scambiano i dati tra le colonne nei membri dati del campo e dell'origine dati nel recordset. È possibile scrivere le chiamate di funzione RFX nella funzione membro [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) del recordset. Questo argomento descrive brevemente le funzioni e Mostra i tipi di dati per cui sono disponibili le funzioni RFX. [Nota tecnica 43](../../mfc/tn043-rfx-routines.md) descrive come scrivere funzioni RFX personalizzate per tipi di dati aggiuntivi.

##  <a name="rfx-function-syntax"></a><a name="_core_rfx_function_syntax"></a>Sintassi della funzione RFX

Ogni funzione RFX accetta tre parametri (e alcuni accettano un quarto o un quinto parametro facoltativo):

- Puntatore a un oggetto [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) . È sufficiente passare il puntatore `pFX` passato al `DoFieldExchange`.

- Nome della colonna visualizzato nell'origine dati.

- Nome del membro dati del campo o del membro dati del parametro corrispondente nella classe recordset.

- Opzionale In alcune delle funzioni, la lunghezza massima della stringa o della matrice da trasferire. Il valore predefinito è 255 byte, ma potrebbe essere necessario modificarlo. La dimensione massima è basata sulla dimensione massima di un oggetto `CString`, ovvero **INT_MAX** (2.147.483.647) byte, ma probabilmente si verificheranno limiti di driver prima di tale dimensione.

- Opzionale Nella funzione `RFX_Text` si usa talvolta un quinto parametro per specificare il tipo di dati di una colonna.

Per ulteriori informazioni, vedere le funzioni RFX in [macro e Globals](../../mfc/reference/mfc-macros-and-globals.md) in *riferimenti alla libreria di classi*. Per un esempio di quando è possibile usare i parametri in modo speciale, vedere [Recordset: recupero di somme e altri risultati aggregati (ODBC)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md).

##  <a name="rfx-data-types"></a><a name="_core_rfx_data_types"></a>Tipi di dati RFX

La libreria di classi fornisce funzioni RFX per il trasferimento di diversi tipi di dati tra l'origine dati e i recordset. Nell'elenco seguente vengono riepilogate le funzioni RFX per tipo di dati. Nei casi in cui è necessario scrivere chiamate di funzione RFX personalizzate, selezionare una di queste funzioni in base al tipo di dati.

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

Per ulteriori informazioni, vedere la documentazione della funzione RFX in [macro e Globals](../../mfc/reference/mfc-macros-and-globals.md) in *riferimenti alla libreria di classi*. Per informazioni sul mapping C++ dei tipi di dati ai tipi di dati SQL, vedere la tabella tipi di dati SQL C++ ANSI mappati ai tipi di dati in [SQL: SQL e C++ tipi di dati (ODBC)](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md).

## <a name="see-also"></a>Vedere anche

[Trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)<br/>
[Trasferimento di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md)<br/>
[Recordset: applicazione di parametri a un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md)<br/>
[Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)<br/>
[Classe CFieldExchange](../../mfc/reference/cfieldexchange-class.md)
