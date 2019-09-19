---
title: Funzioni di trasferimento di campi di record
ms.date: 09/17/2019
f1_keywords:
- AFXDB/RFX_Binary
- AFXDB/RFX_Bool
- AFXDB/RFX_Byte
- AFXDB/RFX_Date
- AFXDB/RFX_Double
- AFXDB/RFX_Int
- AFXDB/RFX_Long
- AFXDB/RFX_LongBinary
- AFXDB/RFX_Single
- AFXDB/RFX_Text
- AFXDB/RFX_Binary_Bulk
- AFXDB/RFX_Bool_Bulk
- AFXDB/RFX_Byte_Bulk
- AFXDB/RFX_Date_Bulk
- AFXDB/RFX_Double_Bulk
- AFXDB/RFX_Int_Bulk
- AFXDB/RFX_Long_Bulk
- AFXDB/RFX_Single_Bulk
- AFXDB/RFX_Text_Bulk
- AFXDB/DFX_Binary
- AFXDB/DFX_Bool
- AFXDB/DFX_Byte
- AFXDB/DFX_Currency
- AFXDB/DFX_DateTime
- AFXDB/DFX_Double
- AFXDB/DFX_Long
- AFXDB/DFX_LongBinary
- AFXDB/DFX_Short
- AFXDB/DFX_Single
- AFXDB/DFX_Text
helpviewer_keywords:
- DAO (Data Access Objects), record field exchange (DFX)
- ODBC, bulk RFX data exchange functions [MFC]
- RFX (record field exchange), ODBC classes
- DFX (DAO record field exchange), data exchange functions [MFC]
- DFX functions [MFC]
- bulk RFX functions [MFC]
- DFX (DAO record field exchange)
- RFX (record field exchange), DAO classes
- ODBC, RFX
- RFX (record field exchange), data exchange functions [MFC]
- RFX (record field exchange)
ms.assetid: 6e4c5c1c-acb7-4c18-bf51-bf7959a696cd
ms.openlocfilehash: 491b00fe65634acf7c8805dd471fa6e3cc62acf0
ms.sourcegitcommit: 2f96e2fda591d7b1b28842b2ea24e6297bcc3622
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2019
ms.locfileid: "71095837"
---
# <a name="record-field-exchange-functions"></a>Funzioni di trasferimento di campi di record

Questo argomento elenca le funzioni di trasferimento di campi di record (RFX, RFX di massa e DFX) usate per automatizzare il trasferimento dei dati tra un oggetto recordset e la relativa origine dati e per eseguire altre operazioni sui dati.

Se si usano le classi basate su ODBC e si è implementato il recupero di massa di righe, è necessario eseguire manualmente l'override della funzione membro `DoBulkFieldExchange` di `CRecordset` chiamando le funzioni RFX di massa per ogni membro dati corrispondente a una colonna di origine dati.

Se non è stato implementato il recupero di righe bulk nelle classi basate su ODBC o se si utilizzano le classi basate su DAO (obsolete), ClassWizard eseguirà l'override della `DoFieldExchange` funzione membro di `CRecordset` o `CDaoRecordset` chiamando le funzioni RFX (per Classi ODBC) o le funzioni DFX (per le classi DAO) per ogni membro dati di campo nel recordset.

Le funzioni di trasferimento di campi di record trasferiscono dati ogni volta che il framework chiama `DoFieldExchange` o `DoBulkFieldExchange`. Ogni funzione trasferisce un tipo di dati specifico.

Per ulteriori informazioni sull'utilizzo di queste funzioni, vedere gli articoli [scambio di campi di record: Funzionamento di RFX (ODBC)](../../data/odbc/record-field-exchange-how-rfx-works.md). Per ulteriori informazioni sul recupero di righe bulk, vedere l'articolo [recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Per le colonne di dati che si associano dinamicamente, è anche possibile chiamare le funzioni RFX o DFX manualmente, come illustrato [nel recordset degli articoli: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md). Inoltre, è possibile scrivere routine RFX o DFX personalizzate, come spiegato nella Nota tecnica [43](../../mfc/tn043-rfx-routines.md) (per ODBC) e [53](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md) (per DAO).

Per un esempio di funzioni RFX e RFX di massa come appaiono nelle `DoFieldExchange` funzioni e `DoBulkFieldExchange` , vedere [RFX_Text](#rfx_text) e [RFX_Text_Bulk] #rfx_text_bulk). Le funzioni DFX sono molto simili alle funzioni RFX.

### <a name="rfx-functions-odbc"></a>Funzioni RFX (ODBC)

|||
|-|-|
|[RFX_Binary](#rfx_binary)|Trasferisce matrici di byte di tipo [CByteArray](cbytearray-class.md).|
|[RFX_Bool](#rfx_bool)|Trasferisce dati Boolean.|
|[RFX_Byte](#rfx_byte)|Trasferisce un singolo byte di dati.|
|[RFX_Date](#rfx_date)|Trasferisce i dati relativi a data e ora usando [CTime](../../atl-mfc-shared/reference/ctime-class.md) o TIMESTAMP_STRUCT.|
|[RFX_Double](#rfx_double)|Trasferisce dati a virgola mobile e precisione doppia.|
|[RFX_Int](#rfx_int)|Trasferisce dati di tipo Integer.|
|[RFX_Long](#rfx_long)|Trasferisce dati long integer.|
|[RFX_LongBinary](#rfx_longbinary)|Trasferisce dati di oggetti binari di grandi dimensioni (BLOB) con un oggetto della classe [CLongBinary](clongbinary-class.md) .|
|[RFX_Single](#rfx_single)|Trasferisce dati float.|
|[RFX_Text](#rfx_text)|Trasferisce dati di tipo stringa.|

### <a name="bulk-rfx-functions-odbc"></a>Funzioni RFX di massa (ODBC)

|||
|-|-|
|[RFX_Binary_Bulk](#rfx_binary_bulk)|Trasferisce matrici di dati byte.|
|[RFX_Bool_Bulk](#rfx_bool_bulk)|Trasferisce matrici di dati Boolean.|
|[RFX_Byte_Bulk](#rfx_byte_bulk)|Trasferisce matrici di byte singoli.|
|[RFX_Date_Bulk](#rfx_date_bulk)|Trasferisce matrici di dati di tipo TIMESTAMP_STRUCT.|
|[RFX_Double_Bulk](#rfx_double_bulk)|Trasferisce matrici di dati a virgola mobile e precisione doppia.|
|[RFX_Int_Bulk](#rfx_int_bulk)|Trasferisce matrici di dati Integer.|
|[RFX_Long_Bulk](#rfx_long_bulk)|Trasferisce matrici di dati long integer.|
|[RFX_Single_Bulk](#rfx_single_bulk)|Trasferisce matrici di dati a virgola mobile.|
|[RFX_Text_Bulk](#rfx_text_bulk)|Trasferisce matrici di dati di tipo LPSTR.|

### <a name="dfx-functions-dao"></a>Funzioni DFX (DAO)

|||
|-|-|
|[DFX_Binary](#dfx_binary)|Trasferisce matrici di byte di tipo [CByteArray](cbytearray-class.md).|
|[DFX_Bool](#dfx_bool)|Trasferisce dati Boolean.|
|[DFX_Byte](#dfx_byte)|Trasferisce un singolo byte di dati.|
|[DFX_Currency](#dfx_currency)|Trasferisce dati di valuta, di tipo [COleCurrency](colecurrency-class.md).|
|[DFX_DateTime](#dfx_datetime)|Trasferisce dati su data e ora, di tipo [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md).|
|[DFX_Double](#dfx_double)|Trasferisce dati a virgola mobile e precisione doppia.|
|[DFX_Long](#dfx_long)|Trasferisce dati long integer.|
|[DFX_LongBinary](#dfx_longbinary)|Trasferisce dati di oggetti binari di grandi dimensioni (BLOB) con un oggetto della classe `CLongBinary` . Per DAO, è invece consigliabile usare [DFX_Binary](#dfx_binary) .|
|[DFX_Short](#dfx_short)|Trasferisce dati short integer.|
|[DFX_Single](#dfx_single)|Trasferisce dati float.|
|[DFX_Text](#dfx_text)|Trasferisce dati di tipo stringa.|

=============================================

## <a name="rfx_binary"></a>  RFX_Binary

Trasferisce matrici di byte tra i membri dati del campo di `CRecordset` un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_BINARY, SQL_VARBINARY o SQL_LONGVARBINARY.

### <a name="syntax"></a>Sintassi

```
void RFX_Binary(
   CFieldExchange* pFX,
   const char* szName,
   CByteArray& value,
   int nMaxLength = 255);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni che un `CFieldExchange` oggetto può specificare, vedere l'articolo [scambio di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo [CByteArray](cbytearray-class.md)viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*nMaxLength*<br/>
Lunghezza massima consentita della stringa o della matrice da trasferire. Il valore predefinito di *nMaxLength* è 255. I valori validi sono compresi tra 1 e INT_MAX. Il framework alloca questa quantità di spazio per i dati. Per ottenere prestazioni ottimali, passare un valore sufficientemente grande da contenere l'elemento di dati più grande previsto.

### <a name="remarks"></a>Note

I dati nell'origine dati di questi tipi vengono mappati a e dal `CByteArray` tipo nel recordset.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_bool"></a>  RFX_Bool

Trasferisce i dati booleani tra i membri dati del `CRecordset` campo di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_BIT.

### <a name="syntax"></a>Sintassi

```
void RFX_Bool(
   CFieldExchange* pFX,
   const char* szName,
   BOOL& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni che un `CFieldExchange` oggetto può specificare, vedere l'articolo [scambio di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo BOOL viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_byte"></a>  RFX_Byte

Trasferisce singoli byte tra i membri dati del campo `CRecordset` di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_TINYINT.

### <a name="syntax"></a>Sintassi

```
void RFX_Byte(
   CFieldExchange* pFX,
   const char* szName,
   BYTE& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni che un `CFieldExchange` oggetto può specificare, vedere l'articolo [scambio di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo BYTE viene tratto dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_date"></a>  RFX_Date

Trasferisce `CTime` o TIMESTAMP_STRUCT i dati tra i membri dati del `CRecordset` campo di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_DATE, SQL_TIME o SQL_TIMESTAMP.

### <a name="syntax"></a>Sintassi

```
void RFX_Date(
   CFieldExchange* pFX,
   const char* szName,
   CTime& value);

void RFX_Date(
   CFieldExchange* pFX,
   const char* szName,
   TIMESTAMP_STRUCT& value);

void RFX_Date(
   CFieldExchange* pFX,
   const char* szName,
   COleDateTime& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni che un `CFieldExchange` oggetto può specificare, vedere l'articolo [scambio di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore archiviato nel membro dati indicato; valore da trasferire. Le varie versioni della funzione accettano tipi di dati diversi per valore:

La prima versione della funzione accetta un riferimento a un oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) . Per un trasferimento dal recordset all'origine dati, questo valore viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

La seconda versione della funzione accetta un riferimento a una `TIMESTAMP_STRUCT` struttura. È necessario configurare questa struttura manualmente prima della chiamata. Per questa versione non è disponibile alcun supporto per lo scambio di dati (DDX) o la creazione guidata codice. La terza versione della funzione funziona in modo simile alla prima versione con la differenza che accetta un riferimento a un oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) .

### <a name="remarks"></a>Note

La `CTime` versione della funzione impone l'overhead di un'elaborazione intermedia e ha un intervallo leggermente limitato. Se uno di questi fattori è troppo limitato, utilizzare la seconda versione della funzione. Si noti, tuttavia, la mancata creazione guidata codice e il supporto DDX e il requisito di configurare manualmente la struttura.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_double"></a>  RFX_Double

Trasferisce i dati **Double float** tra i membri dati del `CRecordset` campo di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_DOUBLE.

### <a name="syntax"></a>Sintassi

```
void RFX_Double(
   CFieldExchange* pFX,
   const char* szName,
   double& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni che un `CFieldExchange` oggetto può specificare, vedere l'articolo [scambio di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **Double**viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_int"></a>  RFX_Int

Trasferisce dati integer tra i membri dati del campo `CRecordset` di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_SMALLINT.

### <a name="syntax"></a>Sintassi

```
void RFX_Int(
   CFieldExchange* pFX,
   const char* szName,
   int& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni che un `CFieldExchange` oggetto può specificare, vedere l'articolo [scambio di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **int**viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_long"></a>  RFX_Long

Trasferisce dati Long Integer tra i membri dati del campo `CRecordset` di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_INTEGER.

### <a name="syntax"></a>Sintassi

```
void RFX_Long(
   CFieldExchange* pFX,
   const char* szName,
   LONG&
value );
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni che un `CFieldExchange` oggetto può specificare, vedere l'articolo [scambio di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **Long**viene tratto dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_longbinary"></a>  RFX_LongBinary

Trasferisce dati di oggetti binari di grandi dimensioni (BLOB) utilizzando la classe [CLongBinary](clongbinary-class.md) tra i `CRecordset` membri dati del campo di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_LONGVARBINARY o SQL_LONGVARCHAR.

### <a name="syntax"></a>Sintassi

```
void RFX_LongBinary(
   CFieldExchange* pFX,
   const char* szName,
   CLongBinary& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni che un `CFieldExchange` oggetto può specificare, vedere l'articolo [scambio di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo `CLongBinary`viene tratto dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_single"></a>  RFX_Single

Trasferisce i dati a virgola mobile tra i membri dati `CRecordset` del campo di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_REAL.

### <a name="syntax"></a>Sintassi

```
void RFX_Single(
   CFieldExchange* pFX,
   const char* szName,
   float& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni che un `CFieldExchange` oggetto può specificare, vedere l'articolo [scambio di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **float**viene tratto dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_text"></a>  RFX_Text

Trasferisce `CString` i dati tra i membri dati del `CRecordset` campo di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_LONGVARCHAR, SQL_CHAR, SQL_VARCHAR, SQL_DECIMAL o SQL_NUMERIC.

### <a name="syntax"></a>Sintassi

```
void RFX_Text(
   CFieldExchange* pFX,
   const char* szName,
   CString& value,
   int nMaxLength = 255,
   int nColumnType = SQL_VARCHAR,
   short nScale = 0);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe `CFieldExchange`. Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni che un `CFieldExchange` oggetto può specificare, vedere l'articolo [scambio di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo `CString`viene tratto dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*nMaxLength*<br/>
Lunghezza massima consentita della stringa o della matrice da trasferire. Il valore predefinito di *nMaxLength* è 255. I valori validi sono compresi tra 1 e INT_MAX. Il framework alloca questa quantità di spazio per i dati. Per ottenere prestazioni ottimali, passare un valore sufficientemente grande da contenere l'elemento di dati più grande previsto.

*nColumnType*<br/>
Utilizzato principalmente per i parametri. Integer che indica il tipo di dati del parametro. Il tipo è un tipo di dati ODBC nel formato **SQL_XXX**.

*nScale*<br/>
Specifica la scala per i valori di tipo ODBC SQL_DECIMAL o SQL_NUMERIC. *nScale* è utile solo quando si impostano i valori dei parametri. Per ulteriori informazioni, vedere l'argomento "precisione, scala, lunghezza e dimensioni di visualizzazione" nell'Appendice D di *ODBC SDK Programmer ' s Reference*.

### <a name="remarks"></a>Note

I dati nell'origine dati di tutti questi tipi vengono mappati a e da `CString` nel recordset.

### <a name="example"></a>Esempio

In questo esempio vengono illustrate `RFX_Text`diverse chiamate a. Si notino anche le due `CFieldExchange::SetFieldType`chiamate a. Per i parametri è necessario scrivere la chiamata `SetFieldType` a e la relativa chiamata RFX. La chiamata della colonna di output e le chiamate RFX associate vengono in genere scritte mediante una creazione guidata codice.

```cpp
void CCustomer::DoFieldExchange(CFieldExchange* pFX)
{
   pFX->SetFieldType(CFieldExchange::outputColumn);
   // Macros such as RFX_Text() and RFX_Int() are dependent on the
   // type of the member variable, not the type of the field in the database.
   // ODBC will try to automatically convert the column value to the requested type
   RFX_Long(pFX, _T("[CustomerID]"), m_CustomerID);
   RFX_Text(pFX, _T("[ContactFirstName]"), m_ContactFirstName);
   RFX_Text(pFX, _T("[PostalCode]"), m_PostalCode);
   RFX_Text(pFX, _T("[L_Name]"), m_L_Name);
   RFX_Long(pFX, _T("[BillingID]"), m_BillingID);

   pFX->SetFieldType(CFieldExchange::inputParam);
   RFX_Text(pFX, _T("Param"), m_strParam);
}
```

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_binary_bulk"></a>  RFX_Binary_Bulk

Trasferisce più righe di dati di byte da una colonna di un'origine dati ODBC a una matrice corrispondente `CRecordset`in un oggetto derivato da.

### <a name="syntax"></a>Sintassi

```
void RFX_Binary_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   BYTE** prgByteVals,
   long** prgLengths,
   int nMaxLength);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange](cfieldexchange-class.md) . Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo [relativo allo scambio di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*prgByteVals*<br/>
Puntatore a una matrice di valori di BYTE. In questa matrice verranno archiviati i dati da trasferire dall'origine dati al recordset.

*prgLengths*<br/>
Puntatore a una matrice di valori long integer. Questa matrice consente di archiviare la lunghezza in byte di ogni valore nella matrice a cui punta *prgByteVals*. Si noti che il valore SQL_NULL_DATA verrà archiviato se l'elemento di dati corrispondente contiene un valore null. Per ulteriori informazioni, vedere la funzione `SQLBindCol` API ODBC in *ODBC SDK Programmer ' s Reference*.

*nMaxLength*<br/>
Lunghezza massima consentita dei valori archiviati nella matrice a cui punta *prgByteVals*. Per assicurarsi che i dati non vengano troncati, passare un valore sufficientemente grande da contenere l'elemento di dati più grande previsto.

### <a name="remarks"></a>Note

Il tipo di colonna dell'origine dati può essere SQL_BINARY, SQL_VARBINARY o SQL_LONGVARBINARY. Il recordset deve definire un membro dati di campo di tipo pointer su BYTE.

Se si inizializzano *prgByteVals* e *prgLengths* su null, le matrici a cui puntano verranno allocate automaticamente, con dimensioni uguali alle dimensioni del set di righe.

> [!NOTE]
>  Lo scambio di campi di record bulk trasferisce solo i dati dall'origine dati all'oggetto recordset. Per rendere aggiornabile il recordset, è necessario utilizzare la funzione `SQLSetPos`API ODBC.

Per ulteriori informazioni, vedere gli articoli [recordset: Recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [RFX (record Field Exchange)](../../data/odbc/record-field-exchange-rfx.md).

### <a name="example"></a>Esempio

Vedere [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_bool_bulk"></a>  RFX_Bool_Bulk

Trasferisce più righe di dati booleani da una colonna di un'origine dati ODBC a una matrice corrispondente in `CRecordset`un oggetto derivato da.

### <a name="syntax"></a>Sintassi

```
void RFX_Bool_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   BOOL** prgBoolVals,
   long** prgLengths);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange](cfieldexchange-class.md) . Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo [relativo allo scambio di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*prgBoolVals*<br/>
Puntatore a una matrice di valori BOOL. In questa matrice verranno archiviati i dati da trasferire dall'origine dati al recordset.

*prgLengths*<br/>
Puntatore a una matrice di valori long integer. Questa matrice consente di archiviare la lunghezza in byte di ogni valore nella matrice a cui punta *prgBoolVals*. Si noti che il valore SQL_NULL_DATA verrà archiviato se l'elemento di dati corrispondente contiene un valore null. Per ulteriori informazioni, vedere la funzione `SQLBindCol` API ODBC in *ODBC SDK Programmer ' s Reference*.

### <a name="remarks"></a>Note

La colonna dell'origine dati deve avere un tipo ODBC di SQL_BIT. Il recordset deve definire un membro dati di campo di tipo puntatore a BOOL.

Se si inizializzano *prgBoolVals* e *prgLengths* su null, le matrici a cui puntano verranno allocate automaticamente, con dimensioni uguali alle dimensioni del set di righe.

> [!NOTE]
>  Lo scambio di campi di record bulk trasferisce solo i dati dall'origine dati all'oggetto recordset. Per rendere aggiornabile il recordset, è necessario utilizzare la funzione `SQLSetPos`API ODBC.

Per ulteriori informazioni, vedere gli articoli [recordset: Recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [RFX (record Field Exchange)](../../data/odbc/record-field-exchange-rfx.md).

### <a name="example"></a>Esempio

Vedere [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_byte_bulk"></a>  RFX_Byte_Bulk

Trasferisce più righe di byte singoli da una colonna di un'origine dati ODBC a una matrice corrispondente in `CRecordset`un oggetto derivato da.

### <a name="syntax"></a>Sintassi

```
void RFX_Byte_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   BYTE** prgByteVals,
   long** prgLengths);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange](cfieldexchange-class.md) . Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo [relativo allo scambio di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*prgByteVals*<br/>
Puntatore a una matrice di valori di BYTE. In questa matrice verranno archiviati i dati da trasferire dall'origine dati al recordset.

*prgLengths*<br/>
Puntatore a una matrice di valori long integer. Questa matrice consente di archiviare la lunghezza in byte di ogni valore nella matrice a cui punta *prgByteVals*. Si noti che il valore SQL_NULL_DATA verrà archiviato se l'elemento di dati corrispondente contiene un valore null. Per ulteriori informazioni, vedere la funzione `SQLBindCol` API ODBC in *ODBC SDK Programmer ' s Reference*.

### <a name="remarks"></a>Note

La colonna dell'origine dati deve avere un tipo ODBC di SQL_TINYINT. Il recordset deve definire un membro dati di campo di tipo pointer su BYTE.

Se si inizializzano *prgByteVals* e *prgLengths* su null, le matrici a cui puntano verranno allocate automaticamente, con dimensioni uguali alle dimensioni del set di righe.

> [!NOTE]
>  Lo scambio di campi di record bulk trasferisce solo i dati dall'origine dati all'oggetto recordset. Per rendere aggiornabile il recordset, è necessario utilizzare la funzione `SQLSetPos`API ODBC.

Per ulteriori informazioni, vedere gli articoli [recordset: Recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [RFX (record Field Exchange)](../../data/odbc/record-field-exchange-rfx.md).

### <a name="example"></a>Esempio

Vedere [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_date_bulk"></a>  RFX_Date_Bulk

Trasferisce più righe di dati TIMESTAMP_STRUCT da una colonna di un'origine dati ODBC a una matrice corrispondente in `CRecordset`un oggetto derivato da.

### <a name="syntax"></a>Sintassi

```
void RFX_Date_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   TIMESTAMP_STRUCT** prgTSVals,
   long** prgLengths);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange](cfieldexchange-class.md) . Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo [relativo allo scambio di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*prgTSVals*<br/>
Puntatore a una matrice di valori TIMESTAMP_STRUCT. In questa matrice verranno archiviati i dati da trasferire dall'origine dati al recordset. Per ulteriori informazioni sul tipo di dati TIMESTAMP_STRUCT, vedere l'argomento relativo ai tipi di dati C nell'Appendice D di *ODBC SDK Programmer ' s Reference*.

*prgLengths*<br/>
Puntatore a una matrice di valori long integer. Questa matrice consente di archiviare la lunghezza in byte di ogni valore nella matrice a cui punta *prgTSVals*. Si noti che il valore SQL_NULL_DATA verrà archiviato se l'elemento di dati corrispondente contiene un valore null. Per ulteriori informazioni, vedere la funzione `SQLBindCol` API ODBC in *ODBC SDK Programmer ' s Reference*.

### <a name="remarks"></a>Note

Il tipo di colonna dell'origine dati può essere SQL_DATE, SQL_TIME o SQL_TIMESTAMP. Il recordset deve definire un membro dati di campo di tipo pointer a TIMESTAMP_STRUCT.

Se si inizializzano *prgTSVals* e *prgLengths* su null, le matrici a cui puntano verranno allocate automaticamente, con dimensioni uguali alle dimensioni del set di righe.

> [!NOTE]
>  Lo scambio di campi di record bulk trasferisce solo i dati dall'origine dati all'oggetto recordset. Per rendere aggiornabile il recordset, è necessario utilizzare la funzione `SQLSetPos`API ODBC.

Per ulteriori informazioni, vedere gli articoli [recordset: Recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [RFX (record Field Exchange)](../../data/odbc/record-field-exchange-rfx.md).

### <a name="example"></a>Esempio

Vedere [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_double_bulk"></a>  RFX_Double_Bulk

Trasferisce più righe di dati a virgola mobile e precisione doppia da una colonna di un'origine dati ODBC a una matrice corrispondente in `CRecordset`un oggetto derivato da.

### <a name="syntax"></a>Sintassi

```
void RFX_Double_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   double** prgDblVals,
   long** prgLengths);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange](cfieldexchange-class.md) . Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo [relativo allo scambio di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*prgDblVals*<br/>
Puntatore a una matrice di valori **Double** . In questa matrice verranno archiviati i dati da trasferire dall'origine dati al recordset.

*prgLengths*<br/>
Puntatore a una matrice di valori long integer. Questa matrice consente di archiviare la lunghezza in byte di ogni valore nella matrice a cui punta *prgDblVals*. Si noti che il valore SQL_NULL_DATA verrà archiviato se l'elemento di dati corrispondente contiene un valore null. Per ulteriori informazioni, vedere la funzione `SQLBindCol` API ODBC in *ODBC SDK Programmer ' s Reference*.

### <a name="remarks"></a>Note

La colonna dell'origine dati deve avere un tipo ODBC di SQL_DOUBLE. Il recordset deve definire un membro dati di campo di tipo pointer su **Double**.

Se si inizializzano *prgDblVals* e *prgLengths* su null, le matrici a cui puntano verranno allocate automaticamente, con dimensioni uguali alle dimensioni del set di righe.

> [!NOTE]
>  Lo scambio di campi di record bulk trasferisce solo i dati dall'origine dati all'oggetto recordset. Per rendere aggiornabile il recordset, è necessario utilizzare la funzione `SQLSetPos`API ODBC.

Per ulteriori informazioni, vedere gli articoli [recordset: Recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [RFX (record Field Exchange)](../../data/odbc/record-field-exchange-rfx.md).

### <a name="example"></a>Esempio

Vedere [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_int_bulk"></a>  RFX_Int_Bulk

Trasferisce dati integer tra i membri dati del campo `CRecordset` di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_SMALLINT.

### <a name="syntax"></a>Sintassi

```
void RFX_Int(
   CFieldExchange* pFX,
   const char* szName,
   int& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni che un `CFieldExchange` oggetto può specificare, vedere l'articolo [scambio di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **int**viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_long_bulk"></a>  RFX_Long_Bulk

Trasferisce più righe di dati Long Integer da una colonna di un'origine dati ODBC a una matrice corrispondente in `CRecordset`un oggetto derivato da.

### <a name="syntax"></a>Sintassi

```
void RFX_Long_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   long** prgLongVals,
   long** prgLengths);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange](cfieldexchange-class.md) . Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo [relativo allo scambio di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*prgLongVals*<br/>
Puntatore a una matrice di valori long integer. In questa matrice verranno archiviati i dati da trasferire dall'origine dati al recordset.

*prgLengths*<br/>
Puntatore a una matrice di valori long integer. Questa matrice consente di archiviare la lunghezza in byte di ogni valore nella matrice a cui punta *prgLongVals*. Si noti che il valore SQL_NULL_DATA verrà archiviato se l'elemento di dati corrispondente contiene un valore null. Per ulteriori informazioni, vedere la funzione `SQLBindCol` API ODBC in *ODBC SDK Programmer ' s Reference*.

### <a name="remarks"></a>Note

La colonna dell'origine dati deve avere un tipo ODBC di SQL_INTEGER. Il recordset deve definire un membro dati di campo di tipo puntatore a **Long**.

Se si inizializzano *prgLongVals* e *prgLengths* su null, le matrici a cui puntano verranno allocate automaticamente, con dimensioni uguali alle dimensioni del set di righe.

> [!NOTE]
>  Lo scambio di campi di record bulk trasferisce solo i dati dall'origine dati all'oggetto recordset. Per rendere aggiornabile il recordset, è necessario utilizzare la funzione `SQLSetPos`API ODBC.

Per ulteriori informazioni, vedere gli articoli [recordset: Recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [RFX (record Field Exchange)](../../data/odbc/record-field-exchange-rfx.md).

### <a name="example"></a>Esempio

Vedere [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_single_bulk"></a>  RFX_Single_Bulk

Trasferisce più righe di dati a virgola mobile da una colonna di un'origine dati ODBC a una matrice corrispondente `CRecordset`in un oggetto derivato da.

### <a name="syntax"></a>Sintassi

```
void RFX_Single_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   float** prgFltVals,
   long** prgLengths);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange](cfieldexchange-class.md) . Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo [relativo allo scambio di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*prgFltVals*<br/>
Puntatore a una matrice di valori **float** . In questa matrice verranno archiviati i dati da trasferire dall'origine dati al recordset.

*prgLengths*<br/>
Puntatore a una matrice di valori long integer. Questa matrice consente di archiviare la lunghezza in byte di ogni valore nella matrice a cui punta *prgFltVals*. Si noti che il valore SQL_NULL_DATA verrà archiviato se l'elemento di dati corrispondente contiene un valore null. Per ulteriori informazioni, vedere la funzione `SQLBindCol` API ODBC in *ODBC SDK Programmer ' s Reference*.

### <a name="remarks"></a>Note

La colonna dell'origine dati deve avere un tipo ODBC di SQL_REAL. Il recordset deve definire un membro dati di campo di tipo pointer per **float**.

Se si inizializzano *prgFltVals* e *prgLengths* su null, le matrici a cui puntano verranno allocate automaticamente, con dimensioni uguali alle dimensioni del set di righe.

> [!NOTE]
>  Lo scambio di campi di record bulk trasferisce solo i dati dall'origine dati all'oggetto recordset. Per rendere aggiornabile il recordset, è necessario utilizzare la funzione `SQLSetPos`API ODBC.

Per ulteriori informazioni, vedere gli articoli [recordset: Recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [RFX (record Field Exchange)](../../data/odbc/record-field-exchange-rfx.md).

### <a name="example"></a>Esempio

Vedere [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_text_bulk"></a>  RFX_Text_Bulk

Trasferisce più righe di dati di tipo carattere da una colonna di un'origine dati ODBC a una matrice `CRecordset`corrispondente in un oggetto derivato da.

### <a name="syntax"></a>Sintassi

```
void RFX_Text_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   LPSTR* prgStrVals,
   long** prgLengths,
   int nMaxLength);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange](cfieldexchange-class.md) . Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo [relativo allo scambio di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*prgStrVals*<br/>
Puntatore a una matrice di valori LPSTR. In questa matrice verranno archiviati i dati da trasferire dall'origine dati al recordset. Si noti che con la versione corrente di ODBC, questi valori non possono essere Unicode.

*prgLengths*<br/>
Puntatore a una matrice di valori long integer. Questa matrice consente di archiviare la lunghezza in byte di ogni valore nella matrice a cui punta *prgStrVals*. Questa lunghezza esclude il carattere di terminazione null. Si noti che il valore SQL_NULL_DATA verrà archiviato se l'elemento di dati corrispondente contiene un valore null. Per ulteriori informazioni, vedere la funzione `SQLBindCol` API ODBC in *ODBC SDK Programmer ' s Reference*.

*nMaxLength*<br/>
Lunghezza massima consentita dei valori archiviati nella matrice a cui punta *prgStrVals*, incluso il carattere di terminazione null. Per assicurarsi che i dati non vengano troncati, passare un valore sufficientemente grande da contenere l'elemento di dati più grande previsto.

### <a name="remarks"></a>Note

La colonna origine dati può avere un tipo ODBC di SQL_LONGVARCHAR, SQL_CHAR, SQL_VARCHAR, SQL_DECIMAL o SQL_NUMERIC. Il recordset deve definire un membro dati di campo di tipo LPSTR.

Se si inizializzano *prgStrVals* e *prgLengths* su null, le matrici a cui puntano verranno allocate automaticamente, con dimensioni uguali alle dimensioni del set di righe.

> [!NOTE]
>  Lo scambio di campi di record bulk trasferisce solo i dati dall'origine dati all'oggetto recordset. Per rendere aggiornabile il recordset, è necessario utilizzare la funzione `SQLSetPos`API ODBC.

Per ulteriori informazioni, vedere gli articoli [recordset: Recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [RFX (record Field Exchange)](../../data/odbc/record-field-exchange-rfx.md).

### <a name="example"></a>Esempio

È necessario scrivere manualmente le `DoBulkFieldExchange` chiamate nell'override. In questo esempio viene illustrata `RFX_Text_Bulk`una chiamata a, nonché una chiamata `RFX_Long_Bulk`a, per il trasferimento dei dati. Queste chiamate sono precedute da una chiamata a [CFieldExchange:: SetFieldType](CFieldExchange::SetFieldType.md). Si noti che per i parametri è necessario chiamare le funzioni RFX anziché le funzioni RFX di massa.

```cpp
void CMultiCustomer::DoBulkFieldExchange(CFieldExchange* pFX)
{
   pFX->SetFieldType(CFieldExchange::outputColumn);
   RFX_Long_Bulk(pFX, _T("[CustomerID]"), &m_pCustomerID, &m_pcCustomerID);
   RFX_Text_Bulk(pFX, _T("[ContactFirstName]"), &m_pContactFirstName, &m_pcContactFirstName, 50);
   RFX_Text_Bulk(pFX, _T("[PostalCode]"), &m_pPostalCode, &m_pcPostalCode, 50);
   RFX_Text_Bulk(pFX, _T("[L_Name]"), &m_pL_Name, &m_pcL_Name, 50);
   RFX_Long_Bulk(pFX, _T("[BillingID]"), &m_pBillingID, &m_pcBillingID);

   pFX->SetFieldType(CFieldExchange::inputParam);
   RFX_Text(pFX, _T("Param"), m_strParam);
}
```

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="dfx_binary"></a>  DFX_Binary

Trasferisce matrici di byte tra i membri dati del campo di un oggetto [CDaoRecordset](cdaorecordset-class.md) e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```
void AFXAPI DFX_Binary(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   CByteArray& value,
   int nPreAllocSize = AFX_DAO_BINARY_DEFAULT_SIZE,
   DWORD dwBindOptions = 0);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo [CByteArray](cbytearray-class.md)viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*nPreAllocSize*<br/>
Il Framework prealloca questa quantità di memoria. Se i dati sono più grandi, il framework alloca più spazio in base alle esigenze. Per ottenere prestazioni migliori, impostare questa dimensione su un valore sufficientemente grande da impedire le riallocazioni. Le dimensioni predefinite sono definite in AFXDAO. File H come AFX_DAO_BINARY_DEFAULT_SIZE.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_DISABLE_FIELD_CACHE, non usa il doppio buffer ed è necessario chiamare [SetFieldDirty](cdaorecordset-class.md#setfielddirty) e [SetFieldNull](cdaorecordset-class.md#setfieldnull) . L'altro valore possibile, AFX_DAO_ENABLE_FIELD_CACHE, utilizza il doppio buffer e non è necessario eseguire operazioni aggiuntive per contrassegnare i campi Dirty o null. Per motivi di prestazioni e memoria, evitare questo valore a meno che i dati binari siano relativamente ridotti.

> [!NOTE]
>  Per impostazione predefinita, è possibile controllare se i dati vengono memorizzati nel doppio per tutti i campi impostando [CDaoRecordset:: m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

Viene eseguito il mapping dei dati tra il tipo DAO_BYTES in DAO e il tipo [CByteArray](cbytearray-class.md) nel recordset.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="dfx_bool"></a>  DFX_Bool

Trasferisce i dati booleani tra i membri dati del campo di un oggetto [CDaoRecordset](cdaorecordset-class.md) e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```
void AFXAPI DFX_Bool(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   BOOL& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo BOOL viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_ENABLE_FIELD_CACHE, usa il doppio buffering. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
>  È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset:: m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

Viene eseguito il mapping dei dati tra il tipo DAO_BOOL in DAO e il tipo BOOL nel recordset.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="dfx_byte"></a>  DFX_Byte

Trasferisce singoli byte tra i membri dati del campo di un oggetto [CDaoRecordset](cdaorecordset-class.md) e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```
void AFXAPI DFX_Byte(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   BYTE& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo BYTE viene tratto dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_ENABLE_FIELD_CACHE, usa il doppio buffering. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
>  È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset:: m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

Viene eseguito il mapping dei dati tra il tipo DAO_BYTES in DAO e il tipo BYTE nel recordset.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="dfx_currency"></a>  DFX_Currency

Trasferisce i dati di valuta tra i membri dati del campo di un oggetto [CDaoRecordset](cdaorecordset-class.md) e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```
void AFXAPI DFX_Currency(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   COleCurrency& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, questo valore viene ricavato dal membro dati specificato, di tipo [COleCurrency](colecurrency-class.md). Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_ENABLE_FIELD_CACHE, usa il doppio buffering. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
>  È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset:: m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

Viene eseguito il mapping dei dati tra il tipo DAO_CURRENCY in DAO e il tipo [COleCurrency](colecurrency-class.md) nel recordset.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="dfx_datetime"></a>  DFX_DateTime

Trasferisce i dati relativi a data e ora tra i membri dati del campo di un oggetto [CDaoRecordset](cdaorecordset-class.md) e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```
void AFXAPI DFX_DateTime(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   COleDateTime& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. La funzione accetta un riferimento a un oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) . Per un trasferimento dal recordset all'origine dati, questo valore viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_ENABLE_FIELD_CACHE, usa il doppio buffering. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
>  È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset:: m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

Viene eseguito il mapping dei dati tra il tipo DAO_DATE in DAO e il tipo [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) nel recordset.

> [!NOTE]
>  `COleDateTime`sostituisce [CTime](../../atl-mfc-shared/reference/ctime-class.md) e TIMESTAMP_STRUCT per questo scopo nelle classi DAO. `CTime`e TIMESTAMP_STRUCT vengono ancora utilizzati per le classi di accesso ai dati basate su ODBC.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="dfx_double"></a>  DFX_Double

Trasferisce i dati **Double float** tra i membri dati del campo di un oggetto [CDaoRecordset](cdaorecordset-class.md) e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```
void AFXAPI DFX_Double(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   double& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **Double**viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_ENABLE_FIELD_CACHE, usa il doppio buffering. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
>  È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset:: m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

Viene eseguito il mapping dei dati tra il tipo DAO_R8 in DAO e il tipo **Double float** nel recordset.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="dfx_long"></a>  DFX_Long

Trasferisce dati Long Integer tra i membri dati del campo di un oggetto [CDaoRecordset](cdaorecordset-class.md) e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```
void AFXAPI DFX_Long(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   long& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **Long**viene tratto dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_ENABLE_FIELD_CACHE, usa il doppio buffering. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
>  È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset:: m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

Viene eseguito il mapping dei dati tra il tipo DAO_I4 in DAO e il tipo **Long** nel recordset.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="dfx_longbinary"></a>  DFX_LongBinary

**Importante** Si consiglia di utilizzare [DFX_Binary](#dfx_binary) anziché questa funzione.

### <a name="syntax"></a>Sintassi

```
void AFXAPI DFX_LongBinary(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   CLongBinary& value,
   DWORD dwPreAllocSize = AFX_DAO_LONGBINARY_DEFAULT_SIZE,
   DWORD dwBindOptions = 0);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo [CLongBinary](clongbinary-class.md)viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwPreAllocSize*<br/>
Il Framework prealloca questa quantità di memoria. Se i dati sono più grandi, il framework alloca più spazio in base alle esigenze. Per ottenere prestazioni migliori, impostare questa dimensione su un valore sufficientemente grande da impedire le riallocazioni.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Per impostazione predefinita, AFX_DISABLE_FIELD_CACHE non usa il doppio buffer. L'altro valore possibile è AFX_DAO_ENABLE_FIELD_CACHE. Usa il doppio buffering e non è necessario eseguire operazioni aggiuntive per contrassegnare i campi Dirty o null. Per motivi di prestazioni e memoria, evitare questo valore a meno che i dati binari siano relativamente ridotti.

> [!NOTE]
>  È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset:: m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

`DFX_LongBinary`viene fornito per la compatibilità con le classi ODBC MFC. La `DFX_LongBinary` funzione trasferisce dati BLOB (Binary Large Object) usando la `CLongBinary` classe tra i membri dati del campo di un oggetto [CDaoRecordset](cdaorecordset-class.md) e le colonne di un record nell'origine dati. Viene eseguito il mapping dei dati tra il tipo DAO_BYTES in DAO e il tipo [CLongBinary](clongbinary-class.md) nel recordset.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="dfx_short"></a>  DFX_Short

Trasferisce dati di tipo integer brevi tra i membri dati del campo di un oggetto [CDaoRecordset](cdaorecordset-class.md) e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```
void AFXAPI DFX_Short(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   short& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **short**viene tratto dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_ENABLE_FIELD_CACHE, usa il doppio buffering. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
>  È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset:: m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

Viene eseguito il mapping dei dati tra il tipo DAO_I2 in DAO e il tipo **short** nel recordset.

> [!NOTE]
>  `DFX_Short`equivale a [RFX_Int](#rfx_int) per le classi basate su ODBC.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="dfx_single"></a>  DFX_Single

Trasferisce i dati a virgola mobile tra i membri dati del campo di un oggetto [CDaoRecordset](cdaorecordset-class.md) e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```
void AFXAPI DFX_Single(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   float& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **float**viene tratto dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_ENABLE_FIELD_CACHE, usa il doppio buffering. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
>  È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset:: m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

Viene eseguito il mapping dei dati tra il tipo DAO_R4 in DAO e il tipo **float** nel recordset.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="dfx_text"></a>  DFX_Text

Trasferisce `CString` i dati tra i membri dati del campo di un oggetto [CDaoRecordset](cdaorecordset-class.md) e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```
void AFXAPI DFX_Text(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   CString& value,
   int nPreAllocSize = AFX_DAO_TEXT_DEFAULT_SIZE,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo [CString](../../atl-mfc-shared/reference/cstringt-class.md)viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*nPreAllocSize*<br/>
Il Framework prealloca questa quantità di memoria. Se i dati sono più grandi, il framework alloca più spazio in base alle esigenze. Per ottenere prestazioni migliori, impostare questa dimensione su un valore sufficientemente grande da impedire le riallocazioni.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_ENABLE_FIELD_CACHE, usa il doppio buffering. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare [SetFieldDirty](cdaorecordset-class.md#setfielddirty) e [SetFieldNull](cdaorecordset-class.md#setfieldnull) .

> [!NOTE]
>  È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset:: m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

Viene eseguito il mapping dei dati tra il tipo DAO_CHAR in DAO (o, se il simbolo _UNICODE è definito, DAO_WCHAR) e il tipo [CString](../../atl-mfc-shared/reference/cstringt-class.md) nel recordset.  n

### <a name="example"></a>Esempio

In questo esempio vengono illustrate `DFX_Text`diverse chiamate a. Si notino anche le due chiamate a [CDaoFieldExchange:: SetFieldType](cdaofieldexchange-class.md#setfieldtype). È necessario scrivere la prima chiamata a `SetFieldType` e la relativa chiamata a **DFX** . La seconda chiamata e le chiamate a **DFX** associate vengono in genere scritte dalla procedura guidata del codice che ha generato la classe.

```cpp
void CCustSet::DoFieldExchange(CDaoFieldExchange* pFX)
{
   pFX->SetFieldType(CDaoFieldExchange::param);
   DFX_Text(pFX, _T("Param"), m_strParam);
   pFX->SetFieldType(CDaoFieldExchange::outputColumn);
   DFX_Short(pFX, _T("EmployeeID"), m_EmployeeID);
   DFX_Text(pFX, _T("LastName"), m_LastName);
   DFX_Short(pFX, _T("Age"), m_Age);
   DFX_DateTime(pFX, _T("hire_date"), m_hire_date);
   DFX_DateTime(pFX, _T("termination_date"), m_termination_date);

   CDaoRecordset::DoFieldExchange(pFX);
}
```

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="see-also"></a>Vedere anche

[Macro e globali](mfc-macros-and-globals.md)<br/>
[CRecordset::DoFieldExchange](crecordset-class.md#dofieldexchange)<br/>
[CRecordset::DoBulkFieldExchange](crecordset-class.md#dobulkfieldexchange)<br/>
[CDaoRecordset::DoFieldExchange](cdaorecordset-class.md#dofieldexchange)
