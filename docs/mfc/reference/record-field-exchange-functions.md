---
title: Funzioni di trasferimento di campi di record
ms.date: 11/04/2016
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
ms.openlocfilehash: 865c67b88c37e32ef33fa410ef178b81b7a6ecac
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57297073"
---
# <a name="record-field-exchange-functions"></a>Funzioni di trasferimento di campi di record

Questo argomento elenca i campi di record (DFX, RFX e RFX di massa) le funzioni usate per automatizzare il trasferimento dei dati tra un oggetto recordset e la relativa origine dati ed eseguire altre operazioni sui dati.

Se si usano le classi basate su ODBC e si è implementato il recupero di massa di righe, è necessario eseguire manualmente l'override della funzione membro `DoBulkFieldExchange` di `CRecordset` chiamando le funzioni RFX di massa per ogni membro dati corrispondente a una colonna di origine dati.

Se non è stato implementato il recupero di massa di righe nelle classi basate su ODBC, o se si usano le classi basate su DAO, ClassWizard eseguirà l'override della funzione membro `DoFieldExchange` di `CRecordset` o `CDaoRecordset` chiamando le funzioni RFX (per le classi ODBC) o le funzioni DFX (per le classi DAO) per ogni membro dati di campo nel recordset.

Le funzioni di trasferimento di campi di record trasferiscono dati ogni volta che il framework chiama `DoFieldExchange` o `DoBulkFieldExchange`. Ogni funzione trasferisce un tipo di dati specifico.

Per altre informazioni sull'uso di queste funzioni, vedere gli articoli [Record Field Exchange: Funzionamento di RFX (ODBC)](../../data/odbc/record-field-exchange-how-rfx-works.md). Per altre informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Per le colonne di dati associate in modo dinamico, è possibile anche chiamare le funzioni RFX e DFX manualmente, come descritto negli articoli [Recordset: Associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md). Inoltre, è possibile scrivere routine RFX o DFX personalizzate, come spiegato nella Nota tecnica [43](../../mfc/tn043-rfx-routines.md) (per ODBC) e [53](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md) (per DAO).

Per un esempio di RFX e RFX di massa funzioni come appaiono nel `DoFieldExchange` e `DoBulkFieldExchange` le funzioni, vedere [RFX_Text](#rfx_text) e rfx_text_bulk & [RFX_Text_Bulk]). Le funzioni DFX sono molto simili alle funzioni RFX.

### <a name="rfx-functions-odbc"></a>Funzioni RFX (ODBC)

|||
|-|-|
|[RFX_Binary](#rfx_binary)|Trasferisce matrici di byte di tipo [CByteArray](cbytearray-class.md).|
|[RFX_Bool](#rfx_bool)|Trasferisce dati Boolean.|
|[RFX_Byte](#rfx_byte)|Trasferisce un singolo byte di dati.|
|[RFX_Date](#rfx_date)|Trasferisce usando dati di data e ora [CTime](../../atl-mfc-shared/reference/ctime-class.md) o TIMESTAMP_STRUCT.|
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

Trasferisce matrici di byte tra i membri di dati di campo di un `CRecordset` tipo di oggetto e le colonne di un record nell'origine dei dati di ODBC SQL_BINARY o SQL_VARBINARY SQL_LONGVARBINARY.

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
Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per altre informazioni sulle operazioni di un `CFieldExchange` l'oggetto può specificare, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo [CByteArray](cbytearray-class.md), da cui proviene il membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*nMaxLength*<br/>
Lunghezza della stringa o matrice in fase di trasferimento massima consentita. Il valore predefinito *nMaxLength* è 255. I valori validi sono da 1 a INT_MAX. Il framework alloca questa quantità di spazio per i dati. Per prestazioni ottimali, passare un valore sufficientemente grande da contenere l'elemento più grande di dati che previsto.

### <a name="remarks"></a>Note

I dati nell'origine dati di questi tipi viene mappati verso e dal tipo `CByteArray` nel recordset.

### <a name="example"></a>Esempio

Visualizzare [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_bool"></a>  RFX_Bool

Trasferisce dati Boolean tra i membri di dati di campo di un `CRecordset` SQL_BIT tipo di oggetto e le colonne di un record nell'origine dei dati di ODBC.

### <a name="syntax"></a>Sintassi

```
void RFX_Bool(
   CFieldExchange* pFX,
   const char* szName,
   BOOL& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per altre informazioni sulle operazioni di un `CFieldExchange` l'oggetto può specificare, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo BOOL, viene acquisito dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Visualizzare [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_byte"></a>  RFX_Byte

Trasferisce singoli byte tra i membri di dati di campo di un `CRecordset` SQL_TINYINT tipo di oggetto e le colonne di un record nell'origine dei dati di ODBC.

### <a name="syntax"></a>Sintassi

```
void RFX_Byte(
   CFieldExchange* pFX,
   const char* szName,
   BYTE& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per altre informazioni sulle operazioni di un `CFieldExchange` l'oggetto può specificare, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo BYTE, viene acquisito dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Visualizzare [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_date"></a>  RFX_Date

I trasferimenti `CTime` o dati TIMESTAMP_STRUCT tra i membri di dati di campo di un `CRecordset` oggetto e le colonne di un record nell'origine dei dati di ODBC digitare SQL_DATE, SQL_TIME o SQL_TIMESTAMP.

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
Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per altre informazioni sulle operazioni di un `CFieldExchange` l'oggetto può specificare, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Il valore archiviato nel membro dati indicato; il valore da trasferire. Le diverse versioni della funzione di eseguire diversi tipi di dati per il valore:

La prima versione della funzione accetta un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto. Per un trasferimento dal recordset all'origine dati, questo valore viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

La seconda versione della funzione accetta un riferimento a un `TIMESTAMP_STRUCT` struttura. È necessario configurare questa struttura manualmente prima della chiamata. Supporta nessuno dei due DDX (DDX) né supporto di codice della procedura guidata è disponibile per questa versione. La terza versione della funzione funziona in modo analogo per la prima versione con la differenza che accetta un riferimento a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto.

### <a name="remarks"></a>Note

Il `CTime` versione della funzione impone l'overhead di alcune operazioni intermedie di elaborazione e offre una gamma piuttosto limitata. Se si trova uno di questi fattori troppo limitante, utilizzare la seconda versione della funzione. Ma si noti la mancanza di procedura guidata per codice e supporto DDX e il requisito per cui si imposta la struttura.

### <a name="example"></a>Esempio

Visualizzare [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_double"></a>  RFX_Double

I trasferimenti **float doppie** dei dati tra i membri di dati di campo di un `CRecordset` oggetto e le colonne di un record nell'origine dati ODBC SQL_DOUBLE il tipo.

### <a name="syntax"></a>Sintassi

```
void RFX_Double(
   CFieldExchange* pFX,
   const char* szName,
   double& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per altre informazioni sulle operazioni di un `CFieldExchange` l'oggetto può specificare, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo **doppie**, da cui proviene il membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Visualizzare [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_int"></a>  RFX_Int

I trasferimenti di dati integer tra membri dati del campo di un `CRecordset` SQL_SMALLINT tipo di oggetto e le colonne di un record nell'origine dei dati di ODBC.

### <a name="syntax"></a>Sintassi

```
void RFX_Int(
   CFieldExchange* pFX,
   const char* szName,
   int& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per altre informazioni sulle operazioni di un `CFieldExchange` l'oggetto può specificare, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo **int**, da cui proviene il membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Visualizzare [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_long"></a>  RFX_Long

Trasferisce dati long integer tra i membri di dati di campo di un `CRecordset` SQL_INTEGER tipo di oggetto e le colonne di un record nell'origine dei dati di ODBC.

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
Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per altre informazioni sulle operazioni di un `CFieldExchange` l'oggetto può specificare, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo **lungo**, da cui proviene il membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Visualizzare [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_longbinary"></a>  RFX_LongBinary

Trasferisce i dati oggetto binario di grandi dimensioni (BLOB) utilizzando classi [CLongBinary](clongbinary-class.md) tra i membri di dati di campo di un `CRecordset` oggetto e le colonne di un record nell'origine dei dati di ODBC digitare SQL_LONGVARBINARY o SQL_LONGVARCHAR.

### <a name="syntax"></a>Sintassi

```
void RFX_LongBinary(
   CFieldExchange* pFX,
   const char* szName,
   CLongBinary& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per altre informazioni sulle operazioni di un `CFieldExchange` l'oggetto può specificare, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo `CLongBinary`, da cui proviene il membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Visualizzare [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_single"></a>  RFX_Single

Trasferisce i dati a virgola mobile tra i membri di dati di campo di un `CRecordset` SQL_REAL tipo di oggetto e le colonne di un record nell'origine dei dati di ODBC.

### <a name="syntax"></a>Sintassi

```
void RFX_Single(
   CFieldExchange* pFX,
   const char* szName,
   float& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per altre informazioni sulle operazioni di un `CFieldExchange` l'oggetto può specificare, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo **float**, da cui proviene il membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Visualizzare [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_text"></a>  RFX_Text

I trasferimenti `CString` dei dati tra i membri di dati di campo di un `CRecordset` oggetto e le colonne di un record nell'origine dei dati di ODBC SQL_LONGVARCHAR, SQL_CHAR, SQL_VARCHAR, SQL_DECIMAL o SQL_NUMERIC il tipo.

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
Un puntatore a un oggetto della classe `CFieldExchange`. Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per altre informazioni sulle operazioni di un `CFieldExchange` l'oggetto può specificare, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo `CString`, da cui proviene il membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*nMaxLength*<br/>
Lunghezza della stringa o matrice in fase di trasferimento massima consentita. Il valore predefinito *nMaxLength* è 255. I valori validi sono da 1 a INT_MAX). Il framework alloca questa quantità di spazio per i dati. Per prestazioni ottimali, passare un valore sufficientemente grande da contenere l'elemento più grande di dati che previsto.

*nColumnType*<br/>
Utilizzato principalmente per i parametri. Valore intero che indica il tipo di dati del parametro. Il tipo è un tipo di dati ODBC nel formato **SQL_XXX**.

*nScale*<br/>
Specifica la scala per i valori di tipo ODBC SQL_DECIMAL o SQL_NUMERIC. *nScale* è utile solo quando si impostano i valori dei parametri. Per altre informazioni, vedere l'argomento "Precisione, scala, lunghezza e dimensioni di visualizzazione" nell'appendice D i *di riferimento per programmatori ODBC SDK*.

### <a name="remarks"></a>Note

Mapping dei dati nell'origine dati di tutti questi tipi in e da `CString` nel recordset.

### <a name="example"></a>Esempio

Questo esempio illustra diverse chiamate a `RFX_Text`. Si noti che anche le due chiamate a `CFieldExchange::SetFieldType`. Per i parametri è necessario scrivere la chiamata a `SetFieldType` e la chiamata di RFX. La chiamata di colonna di output e le chiamate RFX associate sono normalmente scritti da una procedura guidata codice.

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

Trasferisce più righe di dati byte da una colonna di un'origine dati ODBC in una matrice corrispondente in un `CRecordset`-oggetto derivato.

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
Un puntatore a un [CFieldExchange](cfieldexchange-class.md) oggetto. Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per altre informazioni, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*prgByteVals*<br/>
Un puntatore a una matrice di valori di BYTE. Questa matrice verrà archiviati i dati da trasferire dall'origine dati per il recordset.

*prgLengths*<br/>
Un puntatore a una matrice di valori long integer. Questa matrice archivierà la lunghezza in byte di ogni valore nella matrice a cui punta *prgByteVals*. Si noti che il valore di SQL_NULL_DATA verrà archiviato se l'elemento dati corrispondente contiene un valore Null. Per altre informazioni, vedere la funzione API ODBC `SQLBindCol` nella *riferimento per programmatori ODBC SDK*.

*nMaxLength*<br/>
Massima lunghezza dei valori archiviati nella matrice a cui punta *prgByteVals*. Per garantire che i dati non verranno troncati, passare un valore sufficientemente grande da contenere l'elemento più grande di dati previsto.

### <a name="remarks"></a>Note

La colonna di origine dati può avere un tipo ODBC SQL_BINARY o SQL_VARBINARY SQL_LONGVARBINARY. Il recordset necessario definire un membro dati di campo di tipo puntatore BYTE.

Se si inizializza *prgByteVals* e *prgLengths* su NULL, quindi le matrici facciano riferimento verranno allocate automaticamente, con dimensioni pari alla dimensione del set di righe.

> [!NOTE]
>  Exchange di massa di campi di record trasferisce solo i dati dall'origine dati per l'oggetto recordset. Per rendere aggiornabili del recordset, è necessario usare la funzione API ODBC `SQLSetPos`.

Per altre informazioni, vedere gli articoli [Recordset: Il recupero di massa (ODBC) di record](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).

### <a name="example"></a>Esempio

Visualizzare [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_bool_bulk"></a>  RFX_Bool_Bulk

Trasferisce più righe di dati booleani da una colonna di un'origine dati ODBC in una matrice corrispondente in un `CRecordset`-oggetto derivato.

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
Un puntatore a un [CFieldExchange](cfieldexchange-class.md) oggetto. Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per altre informazioni, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*prgBoolVals*<br/>
Un puntatore a una matrice di valori BOOL. Questa matrice verrà archiviati i dati da trasferire dall'origine dati per il recordset.

*prgLengths*<br/>
Un puntatore a una matrice di valori long integer. Questa matrice archivierà la lunghezza in byte di ogni valore nella matrice a cui punta *prgBoolVals*. Si noti che il valore di SQL_NULL_DATA verrà archiviato se l'elemento dati corrispondente contiene un valore Null. Per altre informazioni, vedere la funzione API ODBC `SQLBindCol` nella *riferimento per programmatori ODBC SDK*.

### <a name="remarks"></a>Note

La colonna di origine dati deve avere un tipo ODBC SQL_BIT. Il recordset deve definire un membro dati di campo di tipo pointer a BOOL.

Se si inizializza *prgBoolVals* e *prgLengths* su NULL, quindi le matrici facciano riferimento verranno allocate automaticamente, con dimensioni pari alla dimensione del set di righe.

> [!NOTE]
>  Exchange di massa di campi di record trasferisce solo i dati dall'origine dati per l'oggetto recordset. Per rendere aggiornabili del recordset, è necessario usare la funzione API ODBC `SQLSetPos`.

Per altre informazioni, vedere gli articoli [Recordset: Il recupero di massa (ODBC) di record](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).

### <a name="example"></a>Esempio

Visualizzare [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_byte_bulk"></a>  RFX_Byte_Bulk

Trasferisce più righe di un byte singolo da una colonna di un'origine dati ODBC in una matrice corrispondente in un `CRecordset`-oggetto derivato.

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
Un puntatore a un [CFieldExchange](cfieldexchange-class.md) oggetto. Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per altre informazioni, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*prgByteVals*<br/>
Un puntatore a una matrice di valori di BYTE. Questa matrice verrà archiviati i dati da trasferire dall'origine dati per il recordset.

*prgLengths*<br/>
Un puntatore a una matrice di valori long integer. Questa matrice archivierà la lunghezza in byte di ogni valore nella matrice a cui punta *prgByteVals*. Si noti che il valore di SQL_NULL_DATA verrà archiviato se l'elemento dati corrispondente contiene un valore Null. Per altre informazioni, vedere la funzione API ODBC `SQLBindCol` nella *riferimento per programmatori ODBC SDK*.

### <a name="remarks"></a>Note

La colonna di origine dati deve avere un tipo ODBC SQL_TINYINT. Il recordset necessario definire un membro dati di campo di tipo puntatore BYTE.

Se si inizializza *prgByteVals* e *prgLengths* su NULL, quindi le matrici facciano riferimento verranno allocate automaticamente, con dimensioni pari alla dimensione del set di righe.

> [!NOTE]
>  Exchange di massa di campi di record trasferisce solo i dati dall'origine dati per l'oggetto recordset. Per rendere aggiornabili del recordset, è necessario usare la funzione API ODBC `SQLSetPos`.

Per altre informazioni, vedere gli articoli [Recordset: Il recupero di massa (ODBC) di record](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).

### <a name="example"></a>Esempio

Visualizzare [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_date_bulk"></a>  RFX_Date_Bulk

Trasferisce più righe di dati TIMESTAMP_STRUCT da una colonna di un'origine dati ODBC in una matrice corrispondente in un `CRecordset`-oggetto derivato.

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
Un puntatore a un [CFieldExchange](cfieldexchange-class.md) oggetto. Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per altre informazioni, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*prgTSVals*<br/>
Puntatore a una matrice di valori TIMESTAMP_STRUCT. Questa matrice verrà archiviati i dati da trasferire dall'origine dati per il recordset. Per altre informazioni sul tipo di dati TIMESTAMP_STRUCT, vedere l'argomento "Tipi di dati C" nell'appendice D i *di riferimento per programmatori ODBC SDK*.

*prgLengths*<br/>
Un puntatore a una matrice di valori long integer. Questa matrice archivierà la lunghezza in byte di ogni valore nella matrice a cui punta *prgTSVals*. Si noti che il valore di SQL_NULL_DATA verrà archiviato se l'elemento dati corrispondente contiene un valore Null. Per altre informazioni, vedere la funzione API ODBC `SQLBindCol` nella *riferimento per programmatori ODBC SDK*.

### <a name="remarks"></a>Note

La colonna di origine dati può avere un tipo ODBC SQL_DATE, SQL_TIME o SQL_TIMESTAMP. Il recordset deve definire un membro dati di campo di tipo pointer a TIMESTAMP_STRUCT.

Se si inizializza *prgTSVals* e *prgLengths* su NULL, quindi le matrici facciano riferimento verranno allocate automaticamente, con dimensioni pari alla dimensione del set di righe.

> [!NOTE]
>  Exchange di massa di campi di record trasferisce solo i dati dall'origine dati per l'oggetto recordset. Per rendere aggiornabili del recordset, è necessario usare la funzione API ODBC `SQLSetPos`.

Per altre informazioni, vedere gli articoli [Recordset: Il recupero di massa (ODBC) di record](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).

### <a name="example"></a>Esempio

Visualizzare [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_double_bulk"></a>  RFX_Double_Bulk

Trasferisce più righe di dati a virgola mobile a precisione doppia da una colonna di un'origine dati ODBC in una matrice corrispondente in un `CRecordset`-oggetto derivato.

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
Un puntatore a un [CFieldExchange](cfieldexchange-class.md) oggetto. Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per altre informazioni, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*prgDblVals*<br/>
Un puntatore a una matrice di **doppie** valori. Questa matrice verrà archiviati i dati da trasferire dall'origine dati per il recordset.

*prgLengths*<br/>
Un puntatore a una matrice di valori long integer. Questa matrice archivierà la lunghezza in byte di ogni valore nella matrice a cui punta *prgDblVals*. Si noti che il valore di SQL_NULL_DATA verrà archiviato se l'elemento dati corrispondente contiene un valore Null. Per altre informazioni, vedere la funzione API ODBC `SQLBindCol` nella *riferimento per programmatori ODBC SDK*.

### <a name="remarks"></a>Note

La colonna di origine dati deve avere un tipo ODBC SQL_DOUBLE. Il recordset deve definire un membro dati del campo di tipo puntatore a **doppie**.

Se si inizializza *prgDblVals* e *prgLengths* su NULL, quindi le matrici facciano riferimento verranno allocate automaticamente, con dimensioni pari alla dimensione del set di righe.

> [!NOTE]
>  Exchange di massa di campi di record trasferisce solo i dati dall'origine dati per l'oggetto recordset. Per rendere aggiornabili del recordset, è necessario usare la funzione API ODBC `SQLSetPos`.

Per altre informazioni, vedere gli articoli [Recordset: Il recupero di massa (ODBC) di record](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).

### <a name="example"></a>Esempio

Visualizzare [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_int_bulk"></a>  RFX_Int_Bulk

I trasferimenti di dati integer tra membri dati del campo di un `CRecordset` SQL_SMALLINT tipo di oggetto e le colonne di un record nell'origine dei dati di ODBC.

### <a name="syntax"></a>Sintassi

```
void RFX_Int(
   CFieldExchange* pFX,
   const char* szName,
   int& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per altre informazioni sulle operazioni di un `CFieldExchange` l'oggetto può specificare, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo **int**, da cui proviene il membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Visualizzare [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_long_bulk"></a>  RFX_Long_Bulk

Trasferisce più righe di dati long integer da una colonna di un'origine dati ODBC in una matrice corrispondente in un `CRecordset`-oggetto derivato.

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
Un puntatore a un [CFieldExchange](cfieldexchange-class.md) oggetto. Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per altre informazioni, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*prgLongVals*<br/>
Un puntatore a una matrice di valori long integer. Questa matrice verrà archiviati i dati da trasferire dall'origine dati per il recordset.

*prgLengths*<br/>
Un puntatore a una matrice di valori long integer. Questa matrice archivierà la lunghezza in byte di ogni valore nella matrice a cui punta *prgLongVals*. Si noti che il valore di SQL_NULL_DATA verrà archiviato se l'elemento dati corrispondente contiene un valore Null. Per altre informazioni, vedere la funzione API ODBC `SQLBindCol` nella *riferimento per programmatori ODBC SDK*.

### <a name="remarks"></a>Note

La colonna di origine dati deve presentare un tipo ODBC di SQL_INTEGER. Il recordset deve definire un membro dati del campo di tipo puntatore a **lungo**.

Se si inizializza *prgLongVals* e *prgLengths* su NULL, quindi le matrici facciano riferimento verranno allocate automaticamente, con dimensioni pari alla dimensione del set di righe.

> [!NOTE]
>  Exchange di massa di campi di record trasferisce solo i dati dall'origine dati per l'oggetto recordset. Per rendere aggiornabili del recordset, è necessario usare la funzione API ODBC `SQLSetPos`.

Per altre informazioni, vedere gli articoli [Recordset: Il recupero di massa (ODBC) di record](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).

### <a name="example"></a>Esempio

Visualizzare [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_single_bulk"></a>  RFX_Single_Bulk

Trasferisce più righe di dati a virgola mobile da una colonna di un'origine dati ODBC in una matrice corrispondente in un `CRecordset`-oggetto derivato.

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
Un puntatore a un [CFieldExchange](cfieldexchange-class.md) oggetto. Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per altre informazioni, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*prgFltVals*<br/>
Un puntatore a una matrice di **float** valori. Questa matrice verrà archiviati i dati da trasferire dall'origine dati per il recordset.

*prgLengths*<br/>
Un puntatore a una matrice di valori long integer. Questa matrice archivierà la lunghezza in byte di ogni valore nella matrice a cui punta *prgFltVals*. Si noti che il valore di SQL_NULL_DATA verrà archiviato se l'elemento dati corrispondente contiene un valore Null. Per altre informazioni, vedere la funzione API ODBC `SQLBindCol` nella *riferimento per programmatori ODBC SDK*.

### <a name="remarks"></a>Note

La colonna di origine dati deve presentare un tipo ODBC di SQL_REAL. Il recordset deve definire un membro dati del campo di tipo puntatore a **float**.

Se si inizializza *prgFltVals* e *prgLengths* su NULL, quindi le matrici facciano riferimento verranno allocate automaticamente, con dimensioni pari alla dimensione del set di righe.

> [!NOTE]
>  Exchange di massa di campi di record trasferisce solo i dati dall'origine dati per l'oggetto recordset. Per rendere aggiornabili del recordset, è necessario usare la funzione API ODBC `SQLSetPos`.

Per altre informazioni, vedere gli articoli [Recordset: Il recupero di massa (ODBC) di record](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).

### <a name="example"></a>Esempio

Visualizzare [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="rfx_text_bulk"></a>  RFX_Text_Bulk

Trasferisce più righe di dati di tipo carattere da una colonna di un'origine dati ODBC in una matrice corrispondente in un `CRecordset`-oggetto derivato.

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
Un puntatore a un [CFieldExchange](cfieldexchange-class.md) oggetto. Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per altre informazioni, vedere l'articolo [Record Field Exchange: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
Nome di una colonna di dati.

*prgStrVals*<br/>
Puntatore a una matrice di valori LPSTR. Questa matrice verrà archiviati i dati da trasferire dall'origine dati per il recordset. Si noti che con la versione corrente di ODBC, questi valori non possono essere Unicode.

*prgLengths*<br/>
Un puntatore a una matrice di valori long integer. Questa matrice archivierà la lunghezza in byte di ogni valore nella matrice a cui punta *prgStrVals*. Questa lunghezza esclude il carattere di terminazione null. Si noti che il valore di SQL_NULL_DATA verrà archiviato se l'elemento dati corrispondente contiene un valore Null. Per altre informazioni, vedere la funzione API ODBC `SQLBindCol` nella *riferimento per programmatori ODBC SDK*.

*nMaxLength*<br/>
Massima lunghezza dei valori archiviati nella matrice a cui punta *prgStrVals*, incluso il carattere di terminazione null. Per garantire che i dati non verranno troncati, passare un valore sufficientemente grande da contenere l'elemento più grande di dati previsto.

### <a name="remarks"></a>Note

La colonna di origine dati può avere un tipo ODBC SQL_LONGVARCHAR, SQL_CHAR, SQL_VARCHAR, SQL_DECIMAL o SQL_NUMERIC. Il recordset deve definire un membro dati del campo di tipo LPSTR.

Se si inizializza *prgStrVals* e *prgLengths* su NULL, quindi le matrici facciano riferimento verranno allocate automaticamente, con dimensioni pari alla dimensione del set di righe.

> [!NOTE]
>  Exchange di massa di campi di record trasferisce solo i dati dall'origine dati per l'oggetto recordset. Per rendere aggiornabili del recordset, è necessario usare la funzione API ODBC `SQLSetPos`.

Per altre informazioni, vedere gli articoli [Recordset: Il recupero di massa (ODBC) di record](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).

### <a name="example"></a>Esempio

È necessario scrivere manualmente le chiamate `DoBulkFieldExchange` eseguire l'override. In questo esempio viene illustrata una chiamata a `RFX_Text_Bulk`, oltre alla chiamata a `RFX_Long_Bulk`, per il trasferimento dei dati. Queste chiamate sono precedute da una chiamata a [CFieldExchange::](CFieldExchange::SetFieldType.md). Si noti che per i parametri, è necessario chiamare le funzioni RFX anziché le funzioni RFX di massa.

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

Trasferisce matrici di byte tra i membri di dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.

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
Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo [CByteArray](cbytearray-class.md), da cui proviene il membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*nPreAllocSize*<br/>
Il framework prealloca questa quantità di memoria. Se i dati sono più grandi, il framework verrà allocate più spazio in base alle esigenze. Per prestazioni ottimali, impostare le dimensioni di un valore sufficientemente elevato da impedire riallocazioni. La dimensione predefinita è definita nel AFXDAO. File H come AFX_DAO_BINARY_DEFAULT_SIZE.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. L'impostazione predefinita, AFX_DAO_DISABLE_FIELD_CACHE, non usare il doppio buffer, e sarà necessario chiamare [SetFieldDirty](cdaorecordset-class.md#setfielddirty) e [SetFieldNull](cdaorecordset-class.md#setfieldnull) manualmente. Non è necessario effettuare operazioni aggiuntive per contrassegnare i campi e un altro possibile valore, AFX_DAO_ENABLE_FIELD_CACHE, Usa il doppio buffer dirty o Null. Per motivi di memoria e prestazioni, evitare di questo valore, a meno che i dati binari sono relativamente piccoli.

> [!NOTE]
>  È possibile controllare se i dati sono doppio buffering per tutti i campi per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

Viene eseguito il mapping dei dati tipo DAO_BYTES in DAO e viceversa [CByteArray](cbytearray-class.md) nel recordset.

### <a name="example"></a>Esempio

Visualizzare [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

## <a name="dfx_bool"></a>  DFX_Bool

Trasferisce dati Boolean tra i membri di dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.

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
Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo BOOL, viene acquisito dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. L'impostazione predefinita, AFX_DAO_ENABLE_FIELD_CACHE, Usa il doppio buffer. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
>  È possibile controllare se i dati sono double memorizzato nel buffer per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

I dati viene eseguito il mapping tra tipo DAO_BOOL in DAO e il tipo BOOL del recordset.

### <a name="example"></a>Esempio

Visualizzare [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

## <a name="dfx_byte"></a>  DFX_Byte

Trasferisce singoli byte tra i membri di dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.

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
Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo BYTE, viene acquisito dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. L'impostazione predefinita, AFX_DAO_ENABLE_FIELD_CACHE, Usa il doppio buffer. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
>  È possibile controllare se i dati sono double memorizzato nel buffer per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

I dati vengono mappati tra tipo DAO_BYTES in DAO e tipo di BYTE nell'oggetto recordset.

### <a name="example"></a>Esempio

Visualizzare [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

## <a name="dfx_currency"></a>  DFX_Currency

Trasferisce dati di valuta tra i membri di dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.

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
Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, questo valore viene preso dal membro dati specificato, typu [COleCurrency](colecurrency-class.md). Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. L'impostazione predefinita, AFX_DAO_ENABLE_FIELD_CACHE, Usa il doppio buffer. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
>  È possibile controllare se i dati sono double memorizzato nel buffer per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

Viene eseguito il mapping dei dati tipo DAO_CURRENCY in DAO e viceversa [COleCurrency](colecurrency-class.md) nel recordset.

### <a name="example"></a>Esempio

Visualizzare [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

## <a name="dfx_datetime"></a>  DFX_DateTime

Trasferisce i dati di data e ora tra i membri di dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.

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
Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. La funzione accetta un riferimento a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto. Per un trasferimento dal recordset all'origine dati, questo valore viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. L'impostazione predefinita, AFX_DAO_ENABLE_FIELD_CACHE, Usa il doppio buffer. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
>  È possibile controllare se i dati sono double memorizzato nel buffer per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

Viene eseguito il mapping dei dati tipo DAO_DATE in DAO e viceversa [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) nel recordset.

> [!NOTE]
>  `COleDateTime` sostituisce [CTime](../../atl-mfc-shared/reference/ctime-class.md) e TIMESTAMP_STRUCT per questo scopo nelle classi DAO. `CTime` e TIMESTAMP_STRUCT sono ancora usati per le classi di accesso ai dati basate su ODBC.

### <a name="example"></a>Esempio

Visualizzare [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

## <a name="dfx_double"></a>  DFX_Double

I trasferimenti **float doppie** dei dati tra i membri di dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.

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
Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo **doppie**, da cui proviene il membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. L'impostazione predefinita, AFX_DAO_ENABLE_FIELD_CACHE, Usa il doppio buffer. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
>  È possibile controllare se i dati sono double memorizzato nel buffer per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

Viene eseguito il mapping dei dati tipo DAO_R8 in DAO e viceversa **doppie float** nel recordset.

### <a name="example"></a>Esempio

Visualizzare [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

## <a name="dfx_long"></a>  DFX_Long

Trasferisce dati long integer tra i membri di dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.

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
Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo **lungo**, da cui proviene il membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. L'impostazione predefinita, AFX_DAO_ENABLE_FIELD_CACHE, Usa il doppio buffer. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
>  È possibile controllare se i dati sono double memorizzato nel buffer per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

Viene eseguito il mapping dei dati tipo DAO_I4 in DAO e viceversa **lungo** nel recordset.

### <a name="example"></a>Esempio

Visualizzare [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

## <a name="dfx_longbinary"></a>  DFX_LongBinary

**Importanti** , è consigliabile utilizzare [DFX_Binary](#dfx_binary) anziché questa funzione.

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
Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo [CLongBinary](clongbinary-class.md), da cui proviene il membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwPreAllocSize*<br/>
Il framework prealloca questa quantità di memoria. Se i dati sono più grandi, il framework verrà allocate più spazio in base alle esigenze. Per prestazioni ottimali, impostare le dimensioni di un valore sufficientemente elevato da impedire riallocazioni.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. L'impostazione predefinita, AFX_DISABLE_FIELD_CACHE, non usa il doppio buffer. L'altro valore possibile è AFX_DAO_ENABLE_FIELD_CACHE. Usa il doppio buffer e non necessario svolgere il lavoro aggiuntivo per contrassegnare i campi dirty o Null. Per motivi di memoria e prestazioni, evitare di questo valore, a meno che i dati binari sono relativamente piccoli.

> [!NOTE]
>  È possibile controllare se i dati sono double memorizzato nel buffer per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

`DFX_LongBinary` viene fornito per compatibilità con le classi ODBC MFC. Il `DFX_LongBinary` funzione trasferisce dati binari oggetti di grandi dimensioni (BLOB) con classe `CLongBinary` tra i membri di dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati. Viene eseguito il mapping dei dati tipo DAO_BYTES in DAO e viceversa [CLongBinary](clongbinary-class.md) nel recordset.

### <a name="example"></a>Esempio

Visualizzare [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

## <a name="dfx_short"></a>  DFX_Short

Trasferisce dati short integer tra i membri di dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.

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
Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo **breve**, da cui proviene il membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. L'impostazione predefinita, AFX_DAO_ENABLE_FIELD_CACHE, Usa il doppio buffer. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
>  È possibile controllare se i dati sono double memorizzato nel buffer per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

Viene eseguito il mapping dei dati tipo DAO_I2 in DAO e viceversa **breve** nel recordset.

> [!NOTE]
>  `DFX_Short` è equivalente a [RFX_Int](#rfx_int) per le classi basate su ODBC.

### <a name="example"></a>Esempio

Visualizzare [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

## <a name="dfx_single"></a>  DFX_Single

Trasferisce i dati a virgola mobile tra i membri di dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.

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
Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo **float**, da cui proviene il membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. L'impostazione predefinita, AFX_DAO_ENABLE_FIELD_CACHE, Usa il doppio buffer. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
>  È possibile controllare se i dati sono double memorizzato nel buffer per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

Viene eseguito il mapping dei dati tipo DAO_R4 in DAO e viceversa **float** nel recordset.

### <a name="example"></a>Esempio

Visualizzare [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

## <a name="dfx_text"></a>  DFX_Text

I trasferimenti `CString` dei dati tra i membri di dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetti e colonne di un record nell'origine dati.

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
Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*szName*<br/>
Nome di una colonna di dati.

*value*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo [CString](../../atl-mfc-shared/reference/cstringt-class.md), da cui proviene il membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*nPreAllocSize*<br/>
Il framework prealloca questa quantità di memoria. Se i dati sono più grandi, il framework verrà allocate più spazio in base alle esigenze. Per prestazioni ottimali, impostare le dimensioni di un valore sufficientemente elevato da impedire riallocazioni.

*dwBindOptions*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. L'impostazione predefinita, AFX_DAO_ENABLE_FIELD_CACHE, Usa il doppio buffer. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare [SetFieldDirty](cdaorecordset-class.md#setfielddirty) e [SetFieldNull](cdaorecordset-class.md#setfieldnull) manualmente.

> [!NOTE]
>  È possibile controllare se i dati sono double memorizzato nel buffer per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Note

I dati vengono mappati tra tipo DAO_CHAR in DAO (o, se è definito il simbolo Unicode, DAO_WCHAR) e digitare [CString](../../atl-mfc-shared/reference/cstringt-class.md) nel recordset.  n

### <a name="example"></a>Esempio

Questo esempio illustra diverse chiamate a `DFX_Text`. Si noti che anche le due chiamate a [CDaoFieldExchange:: SetFieldType](cdaofieldexchange-class.md#setfieldtype). È necessario scrivere la prima chiamata a `SetFieldType` e la relativa **DFX** chiamare. La seconda chiamata e l'identificatore associato **DFX** chiamate sono normalmente scritti dalla procedura guidata codice che ha generato la classe.

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

**Intestazione:** afxdao. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[CRecordset::DoFieldExchange](crecordset-class.md#dofieldexchange)<br/>
[CRecordset::DoBulkFieldExchange](crecordset-class.md#dobulkfieldexchange)<br/>
[CDaoRecordset::DoFieldExchange](cdaorecordset-class.md#dofieldexchange)
