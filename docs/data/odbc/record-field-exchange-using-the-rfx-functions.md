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
ms.openlocfilehash: f1afded360cfeff564f1f3d8bb9b294aa33cb733
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367137"
---
# <a name="record-field-exchange-using-the-rfx-functions"></a>Trasferimento di campi di record: utilizzo delle funzioni RFX

In questo argomento viene illustrato come utilizzare le chiamate di `DoFieldExchange` funzione RFX che costituiscono il corpo dell'override.

> [!NOTE]
> Questo argomento si applica alle classi derivate da [CRecordset](../../mfc/reference/crecordset-class.md) in cui il recupero di massa di righe non è stato implementato. Se si usa il recupero di massa di righe, viene implementato il trasferimento di massa di campi di record (RFX di massa). RFX di massa è simile a RFX. Per informazioni sulle differenze, vedere [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Le funzioni globali RFX scambiano dati tra le colonne dell'origine dati e i membri dati di campo del recordset. Scrivere le chiamate di funzione RFX nella funzione membro [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) del recordset. In questo argomento vengono descritte brevemente le funzioni e vengono illustrati i tipi di dati per i quali sono disponibili le funzioni RFX. [Nota tecnica 43](../../mfc/tn043-rfx-routines.md) viene descritto come scrivere funzioni RFX personalizzate per tipi di dati aggiuntivi.

## <a name="rfx-function-syntax"></a><a name="_core_rfx_function_syntax"></a>Sintassi delle funzioni RFX

Ogni funzione RFX accetta tre parametri (e alcuni accettano un quarto o quinto parametro facoltativo):

- Puntatore a un oggetto [CFieldExchange.](../../mfc/reference/cfieldexchange-class.md) È sufficiente passare `pFX` lungo `DoFieldExchange`il puntatore passato a .

- Nome della colonna visualizzata nell'origine dati.

- Nome del membro dati di campo o del membro dati di parametro corrispondente nella classe recordset.

- (Facoltativo) In alcune funzioni, la lunghezza massima della stringa o della matrice da trasferire. Il valore predefinito è 255 byte, ma è possibile modificarlo. La dimensione massima si basa sulla `CString` dimensione massima di un oggetto, **ovvero INT_MAX** (2.147.483.647) byte, ma è probabile che si verifichino limiti di driver prima di tale dimensione.

- (Facoltativo) Nella `RFX_Text` funzione, talvolta si utilizza un quinto parametro per specificare il tipo di dati di una colonna.

Per ulteriori informazioni, vedere le funzioni RFX in [Macro e variabili globali](../../mfc/reference/mfc-macros-and-globals.md) in Riferimenti alla libreria *di*classi . Per un esempio di utilizzo speciale dei parametri, vedere [Recordset: recupero di SOMMA e altri risultati aggregati (ODBC).](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md)

## <a name="rfx-data-types"></a><a name="_core_rfx_data_types"></a>Tipi di dati RFX

La libreria di classi fornisce funzioni RFX per il trasferimento di molti tipi di dati diversi tra l'origine dati e i recordset. Nell'elenco seguente vengono riepilogate le funzioni RFX in base al tipo di dati. Nei casi in cui è necessario scrivere le proprie chiamate di funzione RFX, selezionare da queste funzioni per tipo di dati.

|Funzione|Tipo di dati|
|--------------|---------------|
|`RFX_Bool`|**Bool**|
|`RFX_Byte`|**BYTE**|
|`RFX_Binary`|`CByteArray`|
|`RFX_Double`|**double**|
|`RFX_Single`|**Galleggiante**|
|`RFX_Int`|**Int**|
|`RFX_Long`|**Lungo**|
|`RFX_LongBinary`|`CLongBinary`|
|`RFX_Text`|`CString`|
|`RFX_Date`|`CTime`|

Per ulteriori informazioni, vedere la documentazione relativa alla funzione RFX in [Macro e variabili globali](../../mfc/reference/mfc-macros-and-globals.md) in Riferimenti alla *libreria*di classi . Per informazioni sul mapping dei tipi di dati di C, vedere la tabella Tipi di dati SQL ANSI mappati a tipi di dati in formato SQL: SQL e i tipi [di dati (ODBC, SQL)](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md).

## <a name="see-also"></a>Vedere anche

[Scambio di campi record (RFX)](../../data/odbc/record-field-exchange-rfx.md)<br/>
[Trasferimento di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md)<br/>
[Recordset: applicazione di parametri a un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md)<br/>
[Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md)<br/>
[CRecordset (classe)](../../mfc/reference/crecordset-class.md)<br/>
[Classe CFieldExchange](../../mfc/reference/cfieldexchange-class.md)
