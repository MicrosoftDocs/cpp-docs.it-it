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
ms.openlocfilehash: bfd3ba64a33547b8a27e0f3bc896f39c94486464
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372982"
---
# <a name="record-field-exchange-functions"></a>Funzioni di trasferimento di campi di record

Questo argomento elenca le funzioni di trasferimento di campi di record (RFX, RFX di massa e DFX) usate per automatizzare il trasferimento dei dati tra un oggetto recordset e la relativa origine dati per eseguire altre operazioni sui dati.

Se si usano le classi basate su ODBC e si è implementato il recupero di massa di righe, è necessario eseguire manualmente l'override della funzione membro `DoBulkFieldExchange` di `CRecordset` chiamando le funzioni RFX di massa per ogni membro dati corrispondente a una colonna di origine dati.

Se non è stato implementato il recupero di massa di righe nelle classi basate su ODBC o se si `DoFieldExchange` utilizzano `CRecordset` `CDaoRecordset` le classi basate su DAO (obsoleto), ClassWizard eseguirà l'override della funzione membro di o chiamando le funzioni RFX (per le classi ODBC) o le funzioni DFX (per le classi DAO) per ogni membro dati di campo nel recordset.

Le funzioni di trasferimento di campi di record trasferiscono dati ogni volta che il framework chiama `DoFieldExchange` o `DoBulkFieldExchange`. Ogni funzione trasferisce un tipo di dati specifico.

Per altre informazioni sull'uso di queste funzioni, vedere gli articoli [Record Field Exchange: How RFX Works (ODBC)](../../data/odbc/record-field-exchange-how-rfx-works.md)(Trasferimento di campi di record: funzionamento di RFX (ODBC)). Per ulteriori informazioni sul recupero di righe di massa, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Per le colonne di dati associate in modo dinamico, è anche possibile chiamare le funzioni RFX e DFX manualmente, come descritto negli articoli [Recordset: Dynamically Binding Data Columns (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md)(Recordset: associazione dinamica di colonne di dati (ODBC)). Inoltre, è possibile scrivere routine RFX o DFX personalizzate, come spiegato nella Nota tecnica [43](../../mfc/tn043-rfx-routines.md) (per ODBC) e [53](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md) (per DAO).

Per un esempio di funzioni RFX e RFX di massa così come vengono visualizzate nelle funzioni `DoFieldExchange` e `DoBulkFieldExchange` , vedere [RFX_Text](#rfx_text) e [RFX_Text_Bulk]#rfx_text_bulk). Le funzioni DFX sono molto simili alle funzioni RFX.

### <a name="rfx-functions-odbc"></a>Funzioni RFX (ODBC)

|||
|-|-|
|[RFX_Binary](#rfx_binary)|Trasferisce matrici di byte di tipo [CByteArray](cbytearray-class.md).|
|[RFX_Bool](#rfx_bool)|Trasferisce dati Boolean.|
|[RFX_Byte](#rfx_byte)|Trasferisce un singolo byte di dati.|
|[RFX_Date](#rfx_date)|Trasferisce i dati di data e ora utilizzando [CTime](../../atl-mfc-shared/reference/ctime-class.md) o TIMESTAMP_STRUCT.|
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

## <a name="rfx_binary"></a><a name="rfx_binary"></a>RFX_Binary

Trasferisce matrici di byte tra i `CRecordset` membri dati di campo di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_BINARY, SQL_VARBINARY o SQL_LONGVARBINARY.

### <a name="syntax"></a>Sintassi

```cpp
void RFX_Binary(
   CFieldExchange* pFX,
   const char* szName,
   CByteArray& value,
   int nMaxLength = 255);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle `CFieldExchange` operazioni che un oggetto può specificare, vedere l'articolo Scambio di campi [di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX .

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo [CByteArray](cbytearray-class.md), viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*nMaxLength (lunghezza max).*<br/>
Lunghezza massima consentita della stringa o della matrice da trasferire. Il valore predefinito di *nMaxLength* è 255. I valori legali sono da 1 a INT_MAX. Il framework alloca questa quantità di spazio per i dati. Per ottenere prestazioni ottimali, passare un valore sufficientemente grande da contenere l'elemento di dati più grande previsto.

### <a name="remarks"></a>Osservazioni

I dati nell'origine dati di questi tipi `CByteArray` vengono mappati da e verso il tipo nel recordset.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="rfx_bool"></a><a name="rfx_bool"></a>RFX_Bool

Trasferisce i dati booleani `CRecordset` tra i membri dati di campo di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_BIT.

### <a name="syntax"></a>Sintassi

```cpp
void RFX_Bool(
   CFieldExchange* pFX,
   const char* szName,
   BOOL& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle `CFieldExchange` operazioni che un oggetto può specificare, vedere l'articolo Scambio di campi [di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX .

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo BOOL, viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="rfx_byte"></a><a name="rfx_byte"></a>RFX_Byte

Trasferisce singoli byte tra i `CRecordset` membri dati di campo di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_TINYINT.

### <a name="syntax"></a>Sintassi

```cpp
void RFX_Byte(
   CFieldExchange* pFX,
   const char* szName,
   BYTE& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle `CFieldExchange` operazioni che un oggetto può specificare, vedere l'articolo Scambio di campi [di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX .

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo BYTE, viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="rfx_date"></a><a name="rfx_date"></a>RFX_Date

Trasferisce `CTime` o TIMESTAMP_STRUCT dati tra `CRecordset` i membri dati di campo di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_DATE, SQL_TIME o SQL_TIMESTAMP.

### <a name="syntax"></a>Sintassi

```cpp
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
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle `CFieldExchange` operazioni che un oggetto può specificare, vedere l'articolo Scambio di campi [di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX .

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Il valore archiviato nel membro dati indicato; il valore da trasferire. Le varie versioni della funzione accettano tipi di dati diversi per value:

La prima versione della funzione accetta un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto. Per un trasferimento dal recordset all'origine dati, questo valore viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

La seconda versione della funzione accetta `TIMESTAMP_STRUCT` un riferimento a una struttura. È necessario impostare questa struttura manualmente prima della chiamata. Per questa versione non è disponibile né il supporto DDX (Dialog Data Exchange) né il supporto della creazione guidata codice. La terza versione della funzione funziona in modo simile alla prima versione, ad eccezione del fatto che accetta un riferimento a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto.

### <a name="remarks"></a>Osservazioni

La `CTime` versione della funzione impone l'overhead di alcune elaborazioni intermedie e ha un intervallo piuttosto limitato. Se uno di questi fattori è troppo limitante, utilizzare la seconda versione della funzione. Ma notare la sua mancanza di creazione guidata codice e supporto DDX e il requisito che si imposta la struttura da soli.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="rfx_double"></a><a name="rfx_double"></a>RFX_Double

Trasferisce i dati a doppio `CRecordset` flusso **tra** i membri dati di campo di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_DOUBLE.

### <a name="syntax"></a>Sintassi

```cpp
void RFX_Double(
   CFieldExchange* pFX,
   const char* szName,
   double& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle `CFieldExchange` operazioni che un oggetto può specificare, vedere l'articolo Scambio di campi [di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX .

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo **double**, viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="rfx_int"></a><a name="rfx_int"></a>RFX_Int

Trasferisce dati interi tra `CRecordset` i membri dati di campo di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_SMALLINT.

### <a name="syntax"></a>Sintassi

```cpp
void RFX_Int(
   CFieldExchange* pFX,
   const char* szName,
   int& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle `CFieldExchange` operazioni che un oggetto può specificare, vedere l'articolo Scambio di campi [di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX .

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo **int**, viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="rfx_long"></a><a name="rfx_long"></a>RFX_Long

Trasferisce dati long integer tra `CRecordset` i membri dati di campo di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_INTEGER.

### <a name="syntax"></a>Sintassi

```cpp
void RFX_Long(
   CFieldExchange* pFX,
   const char* szName,
   LONG&
value );
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle `CFieldExchange` operazioni che un oggetto può specificare, vedere l'articolo Scambio di campi [di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX .

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo **long**, viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="rfx_longbinary"></a><a name="rfx_longbinary"></a>RFX_LongBinary

Trasferisce i dati BLOB (Binary Large Object) utilizzando la `CRecordset` classe [CLongBinary](clongbinary-class.md) tra i membri dati di campo di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_LONGVARBINARY o SQL_LONGVARCHAR.

### <a name="syntax"></a>Sintassi

```cpp
void RFX_LongBinary(
   CFieldExchange* pFX,
   const char* szName,
   CLongBinary& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle `CFieldExchange` operazioni che un oggetto può specificare, vedere l'articolo Scambio di campi [di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX .

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine `CLongBinary`dati, il valore , di tipo , viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="rfx_single"></a><a name="rfx_single"></a>RFX_Single

Trasferisce i dati a virgola mobile `CRecordset` tra i membri dati di campo di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_REAL.

### <a name="syntax"></a>Sintassi

```cpp
void RFX_Single(
   CFieldExchange* pFX,
   const char* szName,
   float& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle `CFieldExchange` operazioni che un oggetto può specificare, vedere l'articolo Scambio di campi [di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX .

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo **float**, viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="rfx_text"></a><a name="rfx_text"></a>RFX_Text

Trasferisce `CString` i dati tra `CRecordset` i membri dati di campo di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_LONGVARCHAR, SQL_CHAR, SQL_VARCHAR, SQL_DECIMAL o SQL_NUMERIC.

### <a name="syntax"></a>Sintassi

```cpp
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
Puntatore a un `CFieldExchange`oggetto della classe . Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle `CFieldExchange` operazioni che un oggetto può specificare, vedere l'articolo Scambio di campi [di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX .

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine `CString`dati, il valore , di tipo , viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*nMaxLength (lunghezza max).*<br/>
Lunghezza massima consentita della stringa o della matrice da trasferire. Il valore predefinito di *nMaxLength* è 255. I valori legali sono da 1 a INT_MAX). Il framework alloca questa quantità di spazio per i dati. Per ottenere prestazioni ottimali, passare un valore sufficientemente grande da contenere l'elemento di dati più grande previsto.

*nColumnType (Tipo di colonna)*<br/>
Utilizzato principalmente per i parametri. Intero che indica il tipo di dati del parametro. Il tipo è un tipo di dati ODBC nel formato **SQL_XXX**.

*nScala (in grandi informazioni)*<br/>
Specifica la scala per i valori di tipo ODBC SQL_DECIMAL o SQL_NUMERIC. *nScale* è utile solo quando si impostano i valori dei parametri. Per ulteriori informazioni, vedere l'argomento "Precisione, scala, lunghezza e dimensioni di visualizzazione" nell'Appendice D di *ODBC SDK Programmer's Reference*.

### <a name="remarks"></a>Osservazioni

I dati nell'origine dati di tutti questi `CString` tipi vengono mappati da e verso il recordset.

### <a name="example"></a>Esempio

In questo esempio `RFX_Text`vengono illustrate diverse chiamate a . Si noti anche `CFieldExchange::SetFieldType`le due chiamate a . Per i parametri è `SetFieldType` necessario scrivere la chiamata e la relativa chiamata RFX. La chiamata alla colonna di output e le chiamate RFX associate vengono in genere scritte da una creazione guidata codice.

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

**Intestazione:** afxdb.h

## <a name="rfx_binary_bulk"></a><a name="rfx_binary_bulk"></a>RFX_Binary_Bulk

Trasferisce più righe di dati byte da una colonna di `CRecordset`un'origine dati ODBC a una matrice corrispondente in un oggetto derivato.

### <a name="syntax"></a>Sintassi

```cpp
void RFX_Binary_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   BYTE** prgByteVals,
   long** prgLengths,
   int nMaxLength);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange.](cfieldexchange-class.md) Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo Scambio di [campi di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX .

*Szname*<br/>
Nome di una colonna di dati.

*prgByteVals (valori prgByteVals)*<br/>
Puntatore a una matrice di valori BYTE. Questa matrice memorizzerà i dati da trasferire dall'origine dati al recordset.

*prgLunghezzi*<br/>
Puntatore a una matrice di interi lunghi. Questa matrice memorizzerà la lunghezza in byte di ogni valore nella matrice a cui punta *prgByteVals*. Si noti che il valore SQL_NULL_DATA verrà archiviato se l'elemento di dati corrispondente contiene un valore Null.Note that the value can be stored if the corresponding data item contains a Null value. Per ulteriori informazioni, vedere `SQLBindCol` la funzione API ODBC in *ODBC SDK Programmer's Reference*.

*nMaxLength (lunghezza max).*<br/>
Lunghezza massima consentita dei valori archiviati nella matrice a cui punta *prgByteVals*. Per garantire che i dati non vengano troncati, passare un valore sufficientemente grande da contenere l'elemento di dati più grande previsto.

### <a name="remarks"></a>Osservazioni

La colonna dell'origine dati può avere un tipo ODBC di SQL_BINARY, SQL_VARBINARY o SQL_LONGVARBINARY. Il recordset deve definire un membro dati di campo di tipo puntatore a BYTE.

Se si inizializza *prgByteVals* e *prgLengths* su NULL, le matrici a cui puntano verranno allocate automaticamente, con dimensioni uguali alla dimensione del set di righe.

> [!NOTE]
> Lo scambio di campi di record bulk trasferisce solo i dati dall'origine dati all'oggetto recordset. Per rendere il recordset aggiornabile, è necessario `SQLSetPos`utilizzare la funzione API ODBC .

Per ulteriori informazioni, vedere gli articoli [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [RFX (Record Field Exchange).](../../data/odbc/record-field-exchange-rfx.md)

### <a name="example"></a>Esempio

Vedere [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="rfx_bool_bulk"></a><a name="rfx_bool_bulk"></a>RFX_Bool_Bulk

Trasferisce più righe di dati booleani da una colonna `CRecordset`di un'origine dati ODBC a una matrice corrispondente in un oggetto derivato.

### <a name="syntax"></a>Sintassi

```cpp
void RFX_Bool_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   BOOL** prgBoolVals,
   long** prgLengths);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange.](cfieldexchange-class.md) Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo Scambio di [campi di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX .

*Szname*<br/>
Nome di una colonna di dati.

*prgBoolVals*<br/>
Puntatore a una matrice di valori BOOL. Questa matrice memorizzerà i dati da trasferire dall'origine dati al recordset.

*prgLunghezzi*<br/>
Puntatore a una matrice di interi lunghi. Questa matrice memorizzerà la lunghezza in byte di ogni valore nella matrice a cui punta *prgBoolVals*. Si noti che il valore SQL_NULL_DATA verrà archiviato se l'elemento di dati corrispondente contiene un valore Null.Note that the value can be stored if the corresponding data item contains a Null value. Per ulteriori informazioni, vedere `SQLBindCol` la funzione API ODBC in *ODBC SDK Programmer's Reference*.

### <a name="remarks"></a>Osservazioni

La colonna dell'origine dati deve avere un tipo ODBC di SQL_BIT. Il recordset deve definire un membro dati di campo di tipo puntatore a BOOL.

Se si inizializza *prgBoolVals* e *prgLengths* su NULL, le matrici a cui puntano verranno allocate automaticamente, con dimensioni uguali alla dimensione del set di righe.

> [!NOTE]
> Lo scambio di campi di record bulk trasferisce solo i dati dall'origine dati all'oggetto recordset. Per rendere aggiornabile il recordset, è `SQLSetPos`necessario utilizzare la funzione API ODBC .

Per ulteriori informazioni, vedere gli articoli [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [RFX (Record Field Exchange).](../../data/odbc/record-field-exchange-rfx.md)

### <a name="example"></a>Esempio

Vedere [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="rfx_byte_bulk"></a><a name="rfx_byte_bulk"></a>RFX_Byte_Bulk

Trasferisce più righe di byte singoli da una colonna di `CRecordset`un'origine dati ODBC a una matrice corrispondente in un oggetto derivato.

### <a name="syntax"></a>Sintassi

```cpp
void RFX_Byte_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   BYTE** prgByteVals,
   long** prgLengths);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange.](cfieldexchange-class.md) Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo Scambio di [campi di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX .

*Szname*<br/>
Nome di una colonna di dati.

*prgByteVals (valori prgByteVals)*<br/>
Puntatore a una matrice di valori BYTE. Questa matrice memorizzerà i dati da trasferire dall'origine dati al recordset.

*prgLunghezzi*<br/>
Puntatore a una matrice di interi lunghi. Questa matrice memorizzerà la lunghezza in byte di ogni valore nella matrice a cui punta *prgByteVals*. Si noti che il valore SQL_NULL_DATA verrà archiviato se l'elemento di dati corrispondente contiene un valore Null.Note that the value can be stored if the corresponding data item contains a Null value. Per ulteriori informazioni, vedere `SQLBindCol` la funzione API ODBC in *ODBC SDK Programmer's Reference*.

### <a name="remarks"></a>Osservazioni

La colonna dell'origine dati deve avere un tipo ODBC di SQL_TINYINT. Il recordset deve definire un membro dati di campo di tipo puntatore a BYTE.

Se si inizializza *prgByteVals* e *prgLengths* su NULL, le matrici a cui puntano verranno allocate automaticamente, con dimensioni uguali alla dimensione del set di righe.

> [!NOTE]
> Lo scambio di campi di record bulk trasferisce solo i dati dall'origine dati all'oggetto recordset. Per rendere aggiornabile il recordset, è `SQLSetPos`necessario utilizzare la funzione API ODBC .

Per ulteriori informazioni, vedere gli articoli [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [RFX (Record Field Exchange).](../../data/odbc/record-field-exchange-rfx.md)

### <a name="example"></a>Esempio

Vedere [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="rfx_date_bulk"></a><a name="rfx_date_bulk"></a>RFX_Date_Bulk

Trasferisce più righe di dati TIMESTAMP_STRUCT da una colonna di `CRecordset`un'origine dati ODBC a una matrice corrispondente in un oggetto derivato.

### <a name="syntax"></a>Sintassi

```cpp
void RFX_Date_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   TIMESTAMP_STRUCT** prgTSVals,
   long** prgLengths);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange.](cfieldexchange-class.md) Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo Scambio di [campi di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX .

*Szname*<br/>
Nome di una colonna di dati.

*prgTSVals (valori prgTSVals)*<br/>
Puntatore a una matrice di valori di TIMESTAMP_STRUCT. Questa matrice memorizzerà i dati da trasferire dall'origine dati al recordset. Per ulteriori informazioni sul tipo di dati TIMESTAMP_STRUCT, vedere l'argomento "Tipi di dati C" nell'Appendice D di *ODBC SDK Programmer's Reference*.

*prgLunghezzi*<br/>
Puntatore a una matrice di interi lunghi. Questa matrice memorizzerà la lunghezza in byte di ogni valore nella matrice a cui punta *prgTSVals*. Si noti che il valore SQL_NULL_DATA verrà archiviato se l'elemento di dati corrispondente contiene un valore Null.Note that the value can be stored if the corresponding data item contains a Null value. Per ulteriori informazioni, vedere `SQLBindCol` la funzione API ODBC in *ODBC SDK Programmer's Reference*.

### <a name="remarks"></a>Osservazioni

La colonna dell'origine dati può avere un tipo ODBC di SQL_DATE, SQL_TIME o SQL_TIMESTAMP. Il recordset deve definire un membro dati di campo di tipo puntatore a TIMESTAMP_STRUCT.

Se si inizializza *prgTSVals* e *prgLengths* su NULL, le matrici a cui puntano verranno allocate automaticamente, con dimensioni uguali alla dimensione del set di righe.

> [!NOTE]
> Lo scambio di campi di record bulk trasferisce solo i dati dall'origine dati all'oggetto recordset. Per rendere aggiornabile il recordset, è `SQLSetPos`necessario utilizzare la funzione API ODBC .

Per ulteriori informazioni, vedere gli articoli [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [RFX (Record Field Exchange).](../../data/odbc/record-field-exchange-rfx.md)

### <a name="example"></a>Esempio

Vedere [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="rfx_double_bulk"></a><a name="rfx_double_bulk"></a>RFX_Double_Bulk

Trasferisce più righe di dati a virgola mobile e precisione doppia da `CRecordset`una colonna di un'origine dati ODBC a una matrice corrispondente in un oggetto derivato.

### <a name="syntax"></a>Sintassi

```cpp
void RFX_Double_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   double** prgDblVals,
   long** prgLengths);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange.](cfieldexchange-class.md) Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo Scambio di [campi di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX .

*Szname*<br/>
Nome di una colonna di dati.

*PrgDblVals (informazioni in base alle chiavi)*<br/>
Puntatore a una matrice di valori **double.** Questa matrice memorizzerà i dati da trasferire dall'origine dati al recordset.

*prgLunghezzi*<br/>
Puntatore a una matrice di interi lunghi. Questa matrice memorizzerà la lunghezza in byte di ogni valore nella matrice a cui punta *prgDblVals*. Si noti che il valore SQL_NULL_DATA verrà archiviato se l'elemento di dati corrispondente contiene un valore Null.Note that the value can be stored if the corresponding data item contains a Null value. Per ulteriori informazioni, vedere `SQLBindCol` la funzione API ODBC in *ODBC SDK Programmer's Reference*.

### <a name="remarks"></a>Osservazioni

La colonna dell'origine dati deve avere un tipo ODBC di SQL_DOUBLE. Il recordset deve definire un membro dati di campo di tipo puntatore a **double.**

Se si inizializza *prgDblVals* e *prgLengths* su NULL, le matrici a cui puntano verranno allocate automaticamente, con dimensioni uguali alla dimensione del set di righe.

> [!NOTE]
> Lo scambio di campi di record bulk trasferisce solo i dati dall'origine dati all'oggetto recordset. Per rendere aggiornabile il recordset, è `SQLSetPos`necessario utilizzare la funzione API ODBC .

Per ulteriori informazioni, vedere gli articoli [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [RFX (Record Field Exchange).](../../data/odbc/record-field-exchange-rfx.md)

### <a name="example"></a>Esempio

Vedere [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="rfx_int_bulk"></a><a name="rfx_int_bulk"></a>RFX_Int_Bulk

Trasferisce dati interi tra `CRecordset` i membri dati di campo di un oggetto e le colonne di un record nell'origine dati di tipo ODBC SQL_SMALLINT.

### <a name="syntax"></a>Sintassi

```cpp
void RFX_Int(
   CFieldExchange* pFX,
   const char* szName,
   int& value);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle `CFieldExchange` operazioni che un oggetto può specificare, vedere l'articolo Scambio di campi [di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX .

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo **int**, viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

### <a name="example"></a>Esempio

Vedere [RFX_Text](#rfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="rfx_long_bulk"></a><a name="rfx_long_bulk"></a>RFX_Long_Bulk

Trasferisce più righe di dati long integer da una colonna `CRecordset`di un'origine dati ODBC a una matrice corrispondente in un oggetto derivato.

### <a name="syntax"></a>Sintassi

```cpp
void RFX_Long_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   long** prgLongVals,
   long** prgLengths);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange.](cfieldexchange-class.md) Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo Scambio di [campi di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX .

*Szname*<br/>
Nome di una colonna di dati.

*prgLongVals*<br/>
Puntatore a una matrice di interi lunghi. Questa matrice memorizzerà i dati da trasferire dall'origine dati al recordset.

*prgLunghezzi*<br/>
Puntatore a una matrice di interi lunghi. Questa matrice memorizzerà la lunghezza in byte di ogni valore nella matrice a cui punta *prgLongVals*. Si noti che il valore SQL_NULL_DATA verrà archiviato se l'elemento di dati corrispondente contiene un valore Null.Note that the value can be stored if the corresponding data item contains a Null value. Per ulteriori informazioni, vedere `SQLBindCol` la funzione API ODBC in *ODBC SDK Programmer's Reference*.

### <a name="remarks"></a>Osservazioni

La colonna dell'origine dati deve avere un tipo ODBC di SQL_INTEGER. Il recordset deve definire un membro dati di campo di tipo puntatore a **long**.

Se si inizializza *prgLongVals* e *prgLengths* su NULL, le matrici a cui puntano verranno allocate automaticamente, con dimensioni uguali alla dimensione del set di righe.

> [!NOTE]
> Lo scambio di campi di record bulk trasferisce solo i dati dall'origine dati all'oggetto recordset. Per rendere aggiornabile il recordset, è `SQLSetPos`necessario utilizzare la funzione API ODBC .

Per ulteriori informazioni, vedere gli articoli [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [RFX (Record Field Exchange).](../../data/odbc/record-field-exchange-rfx.md)

### <a name="example"></a>Esempio

Vedere [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="rfx_single_bulk"></a><a name="rfx_single_bulk"></a>RFX_Single_Bulk

Trasferisce più righe di dati a virgola mobile da una colonna `CRecordset`di un'origine dati ODBC a una matrice corrispondente in un oggetto derivato.

### <a name="syntax"></a>Sintassi

```cpp
void RFX_Single_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   float** prgFltVals,
   long** prgLengths);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange.](cfieldexchange-class.md) Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo Scambio di [campi di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX .

*Szname*<br/>
Nome di una colonna di dati.

*prgFltVals*<br/>
Puntatore a una matrice di valori **float.** Questa matrice memorizzerà i dati da trasferire dall'origine dati al recordset.

*prgLunghezzi*<br/>
Puntatore a una matrice di interi lunghi. Questa matrice memorizzerà la lunghezza in byte di ogni valore nella matrice a cui punta *prgFltVals*. Si noti che il valore SQL_NULL_DATA verrà archiviato se l'elemento di dati corrispondente contiene un valore Null.Note that the value can be stored if the corresponding data item contains a Null value. Per ulteriori informazioni, vedere `SQLBindCol` la funzione API ODBC in *ODBC SDK Programmer's Reference*.

### <a name="remarks"></a>Osservazioni

La colonna dell'origine dati deve avere un tipo ODBC di SQL_REAL. Il recordset deve definire un membro dati di campo di tipo puntatore a **float**.

Se si inizializza *prgFltVals* e *prgLengths* su NULL, le matrici a cui puntano verranno allocate automaticamente, con dimensioni uguali alla dimensione del set di righe.

> [!NOTE]
> Lo scambio di campi di record bulk trasferisce solo i dati dall'origine dati all'oggetto recordset. Per rendere aggiornabile il recordset, è `SQLSetPos`necessario utilizzare la funzione API ODBC .

Per ulteriori informazioni, vedere gli articoli [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [RFX (Record Field Exchange).](../../data/odbc/record-field-exchange-rfx.md)

### <a name="example"></a>Esempio

Vedere [RFX_Text_Bulk](#rfx_text_bulk).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="rfx_text_bulk"></a><a name="rfx_text_bulk"></a>RFX_Text_Bulk

Trasferisce più righe di dati di tipo carattere da `CRecordset`una colonna di un'origine dati ODBC a una matrice corrispondente in un oggetto derivato.

### <a name="syntax"></a>Sintassi

```cpp
void RFX_Text_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   LPSTR* prgStrVals,
   long** prgLengths,
   int nMaxLength);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto [CFieldExchange.](cfieldexchange-class.md) Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo Scambio di [campi di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX .

*Szname*<br/>
Nome di una colonna di dati.

*prgStrVals*<br/>
Puntatore a una matrice di valori LPSTR. Questa matrice memorizzerà i dati da trasferire dall'origine dati al recordset. Si noti che con la versione corrente di ODBC, questi valori non possono essere Unicode.

*prgLunghezzi*<br/>
Puntatore a una matrice di interi lunghi. Questa matrice memorizzerà la lunghezza in byte di ogni valore nella matrice a cui punta *prgStrVals*. Questa lunghezza esclude il carattere di terminazione null. Si noti che il valore SQL_NULL_DATA verrà archiviato se l'elemento di dati corrispondente contiene un valore Null.Note that the value can be stored if the corresponding data item contains a Null value. Per ulteriori informazioni, vedere `SQLBindCol` la funzione API ODBC in *ODBC SDK Programmer's Reference*.

*nMaxLength (lunghezza max).*<br/>
Lunghezza massima consentita dei valori archiviati nella matrice a cui punta *prgStrVals*, incluso il carattere di terminazione null. Per garantire che i dati non vengano troncati, passare un valore sufficientemente grande da contenere l'elemento di dati più grande previsto.

### <a name="remarks"></a>Osservazioni

La colonna dell'origine dati può avere un tipo ODBC di SQL_LONGVARCHAR, SQL_CHAR, SQL_VARCHAR, SQL_DECIMAL o SQL_NUMERIC. Il recordset deve definire un membro dati di campo di tipo LPSTR.

Se si inizializza *prgStrVals* e *prgLengths* su NULL, le matrici a cui puntano verranno allocate automaticamente, con dimensioni uguali alla dimensione del set di righe.

> [!NOTE]
> Lo scambio di campi di record bulk trasferisce solo i dati dall'origine dati all'oggetto recordset. Per rendere aggiornabile il recordset, è `SQLSetPos`necessario utilizzare la funzione API ODBC .

Per ulteriori informazioni, vedere gli articoli [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [RFX (Record Field Exchange).](../../data/odbc/record-field-exchange-rfx.md)

### <a name="example"></a>Esempio

È necessario scrivere manualmente `DoBulkFieldExchange` le chiamate nell'override. In questo esempio `RFX_Text_Bulk`viene illustrata una `RFX_Long_Bulk`chiamata a , nonché una chiamata a , per il trasferimento dei dati. Queste chiamate sono precedute da una chiamata a [CFieldExchange::SetFieldType](cfieldexchange-class.md#setfieldtype). Si noti che per i parametri, è necessario chiamare le funzioni RFX anziché le funzioni RFX di massa.

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

**Intestazione:** afxdb.h

## <a name="dfx_binary"></a><a name="dfx_binary"></a>DFX_Binary

Trasferisce matrici di byte tra i membri dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```cpp
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

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo [CByteArray](cbytearray-class.md), viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*nPreAllocSize (informazioni in questo campo)*<br/>
Il framework prealloca questa quantità di memoria. Se i dati sono più grandi, il framework allocherà più spazio in base alle esigenze. Per migliorare le prestazioni, impostare questa dimensione su un valore sufficientemente grande da impedire riallocazioni. La dimensione predefinita è definita in AFXDAO. H come AFX_DAO_BINARY_DEFAULT_SIZE.

*dwBindOptions (Opzioni dwBind)*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_DISABLE_FIELD_CACHE, non utilizza il doppio buffer ed è necessario chiamare [SetFieldDirty](cdaorecordset-class.md#setfielddirty) e [SetFieldNull](cdaorecordset-class.md#setfieldnull) manualmente. L'altro valore possibile, AFX_DAO_ENABLE_FIELD_CACHE, utilizza il doppio buffer e non è necessario eseguire operazioni aggiuntive per contrassegnare i campi dirty o Null. Per motivi di prestazioni e memoria, evitare questo valore a meno che i dati binari non siano relativamente piccoli.

> [!NOTE]
> È possibile controllare se i dati vengono memorizzati nel doppio buffer per tutti i campi impostando [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Osservazioni

I dati vengono mappati tra il tipo DAO_BYTES in DAO e il tipo [CByteArray](cbytearray-class.md) nel recordset.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="dfx_bool"></a><a name="dfx_bool"></a>DFX_Bool

Trasferisce i dati booleani tra i membri dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI DFX_Bool(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   BOOL& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo BOOL, viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions (Opzioni dwBind)*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_ENABLE_FIELD_CACHE, utilizza il doppio buffer. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
> È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Osservazioni

I dati vengono mappati tra il tipo DAO_BOOL in DAO e il tipo BOOL nel recordset.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="dfx_byte"></a><a name="dfx_byte"></a>DFX_Byte

Trasferisce singoli byte tra i membri dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI DFX_Byte(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   BYTE& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo BYTE, viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions (Opzioni dwBind)*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_ENABLE_FIELD_CACHE, utilizza il doppio buffer. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
> È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Osservazioni

I dati vengono mappati tra il tipo DAO_BYTES in DAO e il tipo BYTE nel recordset.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="dfx_currency"></a><a name="dfx_currency"></a>DFX_Currency

Trasferisce i dati di valuta tra i membri dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI DFX_Currency(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   COleCurrency& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, questo valore viene ricavato dal membro dati specificato, di tipo [COleCurrency](colecurrency-class.md). Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions (Opzioni dwBind)*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_ENABLE_FIELD_CACHE, utilizza il doppio buffer. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
> È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Osservazioni

I dati vengono mappati tra il tipo DAO_CURRENCY in DAO e il tipo [COleCurrency](colecurrency-class.md) nel recordset.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="dfx_datetime"></a><a name="dfx_datetime"></a>DFX_DateTime

Trasferisce i dati di data e ora tra i membri dati di campo di un oggetto [CDaoRecordset](cdaorecordset-class.md) e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI DFX_DateTime(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   COleDateTime& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. La funzione accetta un riferimento a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto. Per un trasferimento dal recordset all'origine dati, questo valore viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions (Opzioni dwBind)*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_ENABLE_FIELD_CACHE, utilizza il doppio buffer. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
> È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Osservazioni

I dati vengono mappati tra il tipo DAO_DATE in DAO e il tipo [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) nel recordset.

> [!NOTE]
> `COleDateTime`sostituisce [CTime](../../atl-mfc-shared/reference/ctime-class.md) e TIMESTAMP_STRUCT per questo scopo nelle classi DAO. `CTime`e TIMESTAMP_STRUCT vengono ancora utilizzati per le classi di accesso ai dati basate su ODBC.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="dfx_double"></a><a name="dfx_double"></a>DFX_Double

Trasferisce i dati **a doppio flusso float** tra i membri dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI DFX_Double(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   double& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo **double**, viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions (Opzioni dwBind)*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_ENABLE_FIELD_CACHE, utilizza il doppio buffer. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
> È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Osservazioni

I dati vengono mappati tra il tipo DAO_R8 in DAO e il tipo **double float** nel recordset.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="dfx_long"></a><a name="dfx_long"></a>DFX_Long

Trasferisce dati long integer tra i membri dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI DFX_Long(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   long& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo **long**, viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions (Opzioni dwBind)*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_ENABLE_FIELD_CACHE, utilizza il doppio buffer. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
> È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Osservazioni

I dati vengono mappati tra il tipo DAO_I4 in DAO e il tipo **long** nel recordset.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="dfx_longbinary"></a><a name="dfx_longbinary"></a>DFX_LongBinary

**Importante** Si consiglia di utilizzare [DFX_Binary](#dfx_binary) anziché questa funzione.

### <a name="syntax"></a>Sintassi

```cpp
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

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo [CLongBinary](clongbinary-class.md), viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwPreAllocSize (informazioni in due)*<br/>
Il framework prealloca questa quantità di memoria. Se i dati sono più grandi, il framework allocherà più spazio in base alle esigenze. Per migliorare le prestazioni, impostare questa dimensione su un valore sufficientemente grande da impedire riallocazioni.

*dwBindOptions (Opzioni dwBind)*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DISABLE_FIELD_CACHE, non utilizza il doppio buffer. L'altro valore possibile è AFX_DAO_ENABLE_FIELD_CACHE. Utilizza il doppio buffer e non è necessario eseguire operazioni aggiuntive per contrassegnare i campi dirty o Null. Per motivi di prestazioni e memoria, evitare questo valore a meno che i dati binari non siano relativamente piccoli.

> [!NOTE]
> È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Osservazioni

`DFX_LongBinary`viene fornito per la compatibilità con le classi ODBC MFC. La `DFX_LongBinary` funzione trasferisce i dati BLOB `CLongBinary` (Binary Large Object) utilizzando la classe tra i membri dati di campo di un oggetto [CDaoRecordset](cdaorecordset-class.md) e le colonne di un record nell'origine dati. I dati vengono mappati tra il tipo DAO_BYTES in DAO e il tipo [CLongBinary](clongbinary-class.md) nel recordset.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="dfx_short"></a><a name="dfx_short"></a>DFX_Short

Trasferisce dati short integer tra i membri dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI DFX_Short(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   short& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo **short**, viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions (Opzioni dwBind)*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_ENABLE_FIELD_CACHE, utilizza il doppio buffer. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
> È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Osservazioni

I dati vengono mappati tra il tipo DAO_I2 in DAO e il tipo **short** nel recordset.

> [!NOTE]
> `DFX_Short`è equivalente a [RFX_Int](#rfx_int) per le classi basate su ODBC.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="dfx_single"></a><a name="dfx_single"></a>DFX_Single

Trasferisce i dati a virgola mobile tra i membri dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI DFX_Single(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   float& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### <a name="parameters"></a>Parametri

*pFX*<br/>
Puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore, di tipo **float**, viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*dwBindOptions (Opzioni dwBind)*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_ENABLE_FIELD_CACHE, utilizza il doppio buffer. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.

> [!NOTE]
> È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Osservazioni

I dati vengono mappati tra il tipo DAO_R4 in DAO e il tipo **float** nel recordset.

### <a name="example"></a>Esempio

Vedere [DFX_Text](#dfx_text).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="dfx_text"></a><a name="dfx_text"></a>DFX_Text

Trasferisce `CString` i dati tra i membri dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.

### <a name="syntax"></a>Sintassi

```cpp
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

*Szname*<br/>
Nome di una colonna di dati.

*Valore*<br/>
Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore , di tipo [CString](../../atl-mfc-shared/reference/cstringt-class.md), viene ricavato dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.

*nPreAllocSize (informazioni in questo campo)*<br/>
Il framework prealloca questa quantità di memoria. Se i dati sono più grandi, il framework allocherà più spazio in base alle esigenze. Per migliorare le prestazioni, impostare questa dimensione su un valore sufficientemente grande da impedire riallocazioni.

*dwBindOptions (Opzioni dwBind)*<br/>
Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, AFX_DAO_ENABLE_FIELD_CACHE, utilizza il doppio buffer. L'altro valore possibile è AFX_DAO_DISABLE_FIELD_CACHE. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare [SetFieldDirty](cdaorecordset-class.md#setfielddirty) e [SetFieldNull](cdaorecordset-class.md#setfieldnull) manualmente.

> [!NOTE]
> È possibile controllare se i dati vengono memorizzati nel doppio buffer per impostazione predefinita impostando [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### <a name="remarks"></a>Osservazioni

Viene eseguito il mapping dei dati tra il tipo DAO_CHAR in DAO (o, se il simbolo _UNICODE è definito, DAO_WCHAR) e il tipo [CString](../../atl-mfc-shared/reference/cstringt-class.md) nel recordset.  n

### <a name="example"></a>Esempio

In questo esempio `DFX_Text`vengono illustrate diverse chiamate a . Si noti inoltre le due chiamate a [CDaoFieldExchange::SetFieldType](cdaofieldexchange-class.md#setfieldtype). È necessario scrivere la `SetFieldType` prima chiamata e la relativa chiamata **DFX.** La seconda chiamata e le chiamate **DFX** associate vengono in genere scritte dalla creazione guidata codice che ha generato la classe.

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

**Intestazione:** afxdao.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[CRecordset::DoFieldExchange](crecordset-class.md#dofieldexchange)<br/>
[CRecordset::DoBulkFieldExchange](crecordset-class.md#dobulkfieldexchange)<br/>
[CDaoRecordset::DoFieldExchange](cdaorecordset-class.md#dofieldexchange)
