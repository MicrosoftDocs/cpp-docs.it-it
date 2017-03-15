---
title: Registrare funzioni RFX | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros
dev_langs:
- C++
helpviewer_keywords:
- DAO (Data Access Objects), record field exchange (DFX)
- ODBC, bulk RFX data exchange functions
- RFX (record field exchange), ODBC classes
- DFX (DAO record field exchange), data exchange functions
- DFX functions
- bulk RFX functions
- DFX (DAO record field exchange)
- RFX (record field exchange), DAO classes
- ODBC, RFX
- RFX (record field exchange), data exchange functions
- RFX (record field exchange)
ms.assetid: 6e4c5c1c-acb7-4c18-bf51-bf7959a696cd
caps.latest.revision: 13
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 87b658cab22ad1aa5db17a00d1d3817e55ff4fc7
ms.lasthandoff: 02/24/2017

---
# <a name="record-field-exchange-functions"></a>Funzioni di trasferimento di campi di record
Questo argomento vengono elencati i campi di record (RFX, RFX di massa e DFX) funzioni utilizzate per automatizzare il trasferimento dei dati tra un oggetto recordset e la relativa origine dati ed eseguire altre operazioni sui dati.  
  
 Se si usano le classi basate su ODBC e si è implementato il recupero di massa di righe, è necessario eseguire manualmente l'override della funzione membro `DoBulkFieldExchange` di `CRecordset` chiamando le funzioni RFX di massa per ogni membro dati corrispondente a una colonna di origine dati.  
  
 Se non è stato implementato il recupero di massa di righe nelle classi basate su ODBC, o se si usano le classi basate su DAO, ClassWizard eseguirà l'override della funzione membro `DoFieldExchange` di `CRecordset` o `CDaoRecordset` chiamando le funzioni RFX (per le classi ODBC) o le funzioni DFX (per le classi DAO) per ogni membro dati di campo nel recordset.  
  
 Le funzioni di trasferimento di campi di record trasferiscono dati ogni volta che il framework chiama `DoFieldExchange` o `DoBulkFieldExchange`. Ogni funzione trasferisce un tipo di dati specifico.  
  
 Per ulteriori informazioni sull'utilizzo di queste funzioni, vedere gli articoli [campi di record: come RFX Works (ODBC)](../../data/odbc/record-field-exchange-how-rfx-works.md). Per ulteriori informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Per le colonne di dati associati in modo dinamico, è inoltre possibile chiamare le funzioni RFX e DFX manualmente, come descritto negli articoli [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md). Inoltre, è possibile scrivere i proprio routine RFX o DFX personalizzate, come spiegato nella nota tecnica [43](../../mfc/tn043-rfx-routines.md) (per ODBC) e Nota tecnica [53](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md) (per DAO).  
  
 Per un esempio di RFX e RFX di massa le funzioni, rispettando il `DoFieldExchange` e `DoBulkFieldExchange` funzioni, vedere [RFX_Text](#rfx_text) e rfx_text_bulk # [RFX_Text_Bulk]). Le funzioni DFX sono molto simili alle funzioni RFX.  
  
### <a name="rfx-functions-odbc"></a>Funzioni RFX (ODBC)  
  
|||  
|-|-|  
|[RFX_Binary](#rfx_binary)|Trasferisce le matrici di byte di tipo [CByteArray](cbytearray-class.md).|  
|[RFX_Bool](#rfx_bool)|Trasferisce dati Boolean.|  
|[RFX_Byte](#rfx_byte)|Trasferisce un singolo byte di dati.|  
|[RFX_Date](#rfx_date)|Ora e data utilizzando dati trasferiti [CTime](../../atl-mfc-shared/reference/ctime-class.md) o **TIMESTAMP_STRUCT**.|  
|[RFX_Double](#rfx_double)|Trasferisce dati a virgola mobile e precisione doppia.|  
|[RFX_Int](#rfx_int)|Trasferisce dati di tipo Integer.|  
|[RFX_Long](#rfx_long)|Trasferisce dati long integer.|  
|[RFX_LongBinary](#rfx_longbinary)|Trasferisce i dati oggetto binario di grandi dimensioni (BLOB) con un oggetto con il [CLongBinary](clongbinary-class.md) (classe).|  
|[RFX_Single](#rfx_single)|Trasferisce dati float.|  
|[RFX_Text](#rfx_text)|Trasferisce dati di tipo stringa.|  
  
### <a name="bulk-rfx-functions-odbc"></a>Funzioni RFX di massa (ODBC)  
  
|||  
|-|-|  
|[RFX_Binary_Bulk](#rfx_binary_bulk)|Trasferisce matrici di dati byte.|  
|[RFX_Bool_Bulk](#rfx_bool_bulk)|Trasferisce matrici di dati Boolean.|  
|[RFX_Byte_Bulk](#rfx_byte_bulk)|Trasferisce matrici di byte singoli.|  
|[RFX_Date_Bulk](#rfx_date_bulk)|Trasferisce matrici di dati di tipo **TIMESTAMP_STRUCT**.|  
|[RFX_Double_Bulk](#rfx_double_bulk)|Trasferisce matrici di dati a virgola mobile e precisione doppia.|  
|[RFX_Int_Bulk](#rfx_int_bulk)|Trasferisce matrici di dati Integer.|  
|[RFX_Long_Bulk](#rfx_long_bulk)|Trasferisce matrici di dati long integer.|  
|[RFX_Single_Bulk](#rfx_single_bulk)|Trasferisce matrici di dati a virgola mobile.|  
|[RFX_Text_Bulk](#rfx_text_bulk)|Trasferisce matrici di dati di tipo **LPSTR**.|  
  
### <a name="dfx-functions-dao"></a>Funzioni DFX (DAO)  
  
|||
|-|-|  
|[DFX_Binary](#dfx_binary)|Trasferisce le matrici di byte di tipo [CByteArray](cbytearray-class.md).|  
|[DFX_Bool](#dfx_bool)|Trasferisce dati Boolean.|  
|[DFX_Byte](#dfx_byte)|Trasferisce un singolo byte di dati.|  
|[DFX_Currency](#dfx_currency)|Trasferisce i dati di valuta, di tipo [COleCurrency](colecurrency-class.md).|  
|[DFX_DateTime](#dfx_datetime)|Trasferisce i dati di data e ora, di tipo [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md).|  
|[DFX_Double](#dfx_double)|Trasferisce dati a virgola mobile e precisione doppia.|  
|[DFX_Long](#dfx_long)|Trasferisce dati long integer.|  
|[DFX_LongBinary](#dfx_longbinary)|Trasferisce dati di oggetti binari di grandi dimensioni (BLOB) con un oggetto della classe `CLongBinary` . Per DAO, è consigliabile utilizzare [DFX_Binary](#dfx_binary) invece.|  
|[DFX_Short](#dfx_short)|Trasferisce dati short integer.|  
|[DFX_Single](#dfx_single)|Trasferisce dati float.|  
|[DFX_Text](#dfx_text)|Trasferisce dati di tipo stringa.|  

 =============================================

## <a name="a-namerfxbinarya--rfxbinary"></a><a name="rfx_binary"></a>RFX_Binary
I trasferimenti di matrici di byte tra i membri dati di campo di un `CRecordset` oggetto e le colonne di un record nell'origine dati di tipo ODBC **SQL_BINARY**, **SQL_VARBINARY**, o **SQL_LONGVARBINARY**.  
  
### <a name="syntax"></a>Sintassi  
  
```
void RFX_Binary(  
   CFieldExchange* pFX,  
   const char* szName,  
   CByteArray& value,  
   int nMaxLength = 255);  
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni un `CFieldExchange` possibile specificare l'oggetto, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo [CByteArray](cbytearray-class.md), viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
 `nMaxLength`  
 Lunghezza della stringa o matrice trasferiti massima consentita. Il valore predefinito di `nMaxLength` è 255. I valori validi sono da 1 a `INT_MAX`. Il framework alloca la quantità di spazio per i dati. Per prestazioni ottimali, passare un valore grande abbastanza da contenere l'elemento di dati più grande desiderati.  
  
### <a name="remarks"></a>Note  
 Mapping dei dati nell'origine dati di questi tipi al e dal tipo `CByteArray` nel recordset.  
  
### <a name="example"></a>Esempio  
 Vedere [RFX_Text](#rfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  

## <a name="a-namerfxboola--rfxbool"></a><a name="rfx_bool"></a>RFX_Bool
Trasferisce i dati booleani tra i membri dati di campo di un `CRecordset` oggetto e le colonne di un record nell'origine dati di tipo ODBC **SQL_BIT**.  
  
### <a name="syntax"></a>Sintassi  
  
```
void RFX_Bool(  
   CFieldExchange* pFX,  
   const char* szName,  
   BOOL& value);  
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni un `CFieldExchange` possibile specificare l'oggetto, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **BOOL**, viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
### <a name="example"></a>Esempio  
 Vedere [RFX_Text](#rfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  

## <a name="a-namerfxbytea--rfxbyte"></a><a name="rfx_byte"></a>RFX_Byte
Trasferisce singoli byte tra i membri dati di campo di un `CRecordset` oggetto e le colonne di un record nell'origine dati di tipo ODBC **SQL_TINYINT**.  
  
### <a name="syntax"></a>Sintassi  
  
```
void RFX_Byte(  
   CFieldExchange* pFX,  
   const char* szName,  
   BYTE& value);  
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni un `CFieldExchange` possibile specificare l'oggetto, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **BYTE**, viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
### <a name="example"></a>Esempio  
 Vedere [RFX_Text](#rfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  

## <a name="a-namerfxdatea--rfxdate"></a><a name="rfx_date"></a>RFX_Date
I trasferimenti `CTime` o **TIMESTAMP_STRUCT** dati tra i membri dati di campo di un `CRecordset` oggetto e le colonne di un record nell'origine dati di tipo ODBC **SQL_DATE**, **SQL_TIME**, o **SQL_TIMESTAMP**.  
  
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
 `pFX`  
 Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni un `CFieldExchange` possibile specificare l'oggetto, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Il valore memorizzato nel membro dati indicato; il valore da trasferire. Le diverse versioni della funzione di eseguire diversi tipi di dati per valore:  
  
 La prima versione della funzione accetta un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto. Per un trasferimento dal recordset all'origine dati, questo valore viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
 La seconda versione della funzione accetta un riferimento a un **TIMESTAMP_STRUCT** struttura. È necessario impostare questa struttura manualmente prima della chiamata. Nessuno (DDX) dialog data exchange supporta né supporto di codice della procedura guidata è disponibile per questa versione. La terza versione della funzione funziona in modo analogo alla prima versione la differenza che accetta un riferimento a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Il `CTime` versione della funzione impone l'overhead di alcune operazioni di elaborazione intermedia e offre una gamma limitata. Se si verifica uno di questi fattori troppo restrittivo, utilizzare la seconda versione della funzione. Ma si noti l'assenza della procedura guidata di codice e supporto DDX e il requisito che si imposta la struttura.  
  
### <a name="example"></a>Esempio  
 Vedere [RFX_Text](#rfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  

## <a name="a-namerfxdoublea--rfxdouble"></a><a name="rfx_double"></a>RFX_Double
I trasferimenti **float double** dati tra i membri dati di campo di un `CRecordset` oggetto e le colonne di un record nell'origine dati di tipo ODBC **SQL_DOUBLE**.  
  
### <a name="syntax"></a>Sintassi  
  
```
void RFX_Double(  
   CFieldExchange* pFX,  
   const char* szName,  
   double& value);  
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni un `CFieldExchange` possibile specificare l'oggetto, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **double**, viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
### <a name="example"></a>Esempio  
 Vedere [RFX_Text](#rfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  

## <a name="a-namerfxinta--rfxint"></a><a name="RFX_Int"></a>RFX_Int
I trasferimenti di dati integer tra i membri dei dati di campo un `CRecordset` oggetto e le colonne di un record nell'origine dati di tipo ODBC **SQL_SMALLINT**.  
  
### <a name="syntax"></a>Sintassi  
  
```
void RFX_Int(  
   CFieldExchange* pFX,  
   const char* szName,  
   int& value);  
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni un `CFieldExchange` possibile specificare l'oggetto, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo `int`, viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
### <a name="example"></a>Esempio  
 Vedere [RFX_Text](#rfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  

## <a name="a-namerfxlonga--rfxlong"></a><a name="RFX_Long"></a>RFX_Long
I trasferimenti di dati long integer tra i membri dei dati di campo un `CRecordset` oggetto e le colonne di un record nell'origine dati di tipo ODBC **SQL_INTEGER**.  
  
### <a name="syntax"></a>Sintassi  
  
```
void RFX_Long(  
   CFieldExchange* pFX,  
   const char* szName,  
   LONG&   
value );  
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni un `CFieldExchange` possibile specificare l'oggetto, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **lungo**, viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
### <a name="example"></a>Esempio  
 Vedere [RFX_Text](#rfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  
  
## <a name="a-namerfxlongbinarya--rfxlongbinary"></a><a name="RFX_LongBinary"></a>RFX_LongBinary
Trasferisce i dati oggetto binario di grandi dimensioni (BLOB) usando classe [CLongBinary](clongbinary-class.md) tra i membri dati di campo di un `CRecordset` oggetto e le colonne di un record nell'origine dati di tipo ODBC **SQL_LONGVARBINARY** o **SQL_LONGVARCHAR**.  
  
### <a name="syntax"></a>Sintassi  
  
```
void RFX_LongBinary(  
   CFieldExchange* pFX,  
   const char* szName,  
   CLongBinary& value);  
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni un `CFieldExchange` possibile specificare l'oggetto, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo `CLongBinary`, viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
### <a name="example"></a>Esempio  
 Vedere [RFX_Text](#rfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  

## <a name="a-namerfxsinglea--rfxsingle"></a><a name="rfx_single"></a>RFX_Single
Trasferisce i dati a virgola mobile tra i membri dati di campo di un `CRecordset` oggetto e le colonne di un record nell'origine dati di tipo ODBC **SQL_REAL**.  
  
### <a name="syntax"></a>Sintassi  
  
```
void RFX_Single(  
   CFieldExchange* pFX,  
   const char* szName,  
   float& value);  
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni un `CFieldExchange` possibile specificare l'oggetto, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **float**, viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
### <a name="example"></a>Esempio  
 Vedere [RFX_Text](#rfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  
  

## <a name="a-namerfxtexta--rfxtext"></a><a name="rfx_text"></a>RFX_Text
I trasferimenti `CString` dati tra i membri dati di campo di un `CRecordset` oggetto e le colonne di un record nell'origine dati di tipo ODBC **SQL_LONGVARCHAR**, **SQL_CHAR**, **SQL_VARCHAR**, **SQL_DECIMAL**, o **SQL_NUMERIC**.  
  
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
 `pFX`  
 Un puntatore a un oggetto della classe `CFieldExchange`. Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni un `CFieldExchange` possibile specificare l'oggetto, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo `CString`, viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
 `nMaxLength`  
 Lunghezza della stringa o matrice trasferiti massima consentita. Il valore predefinito di `nMaxLength` è 255. I valori validi sono da 1 a `INT_MAX`). Il framework alloca la quantità di spazio per i dati. Per prestazioni ottimali, passare un valore grande abbastanza da contenere l'elemento di dati più grande desiderati.  
  
 *nColumnType*  
 Utilizzata principalmente per i parametri. Numero intero che indica il tipo di dati del parametro. Il tipo è un tipo di dati ODBC nel formato **SQL_XXX**.  
  
 `nScale`  
 Specifica la scala dei valori di tipo ODBC **SQL_DECIMAL** o **SQL_NUMERIC**. `nScale`è utile solo quando si impostano i valori dei parametri. Per ulteriori informazioni, vedere l'argomento "Precisione, scala, lunghezza e dimensioni di visualizzazione" nell'appendice D il *riferimento per programmatori di ODBC SDK*.  
  
### <a name="remarks"></a>Note  
 Viene eseguito il mapping dell'origine dati di tutti i tipi di dati da e verso `CString` nel recordset.  
  
### <a name="example"></a>Esempio  
 Questo esempio illustra diverse chiamate a `RFX_Text`. Si noti inoltre le due chiamate a `CFieldExchange::SetFieldType`. Per i parametri è necessario scrivere la chiamata a `SetFieldType` e la chiamata di RFX. La chiamata di colonna di output e le chiamate a RFX associate sono normalmente scritti da una procedura guidata di codice.  
  
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


## <a name="a-namerfxbinarybulka--rfxbinarybulk"></a><a name="rfx_binary_Bulk"></a>RFX_Binary_Bulk
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
 `pFX`  
 Un puntatore a un [CFieldExchange](cfieldexchange-class.md) oggetto. Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 `szName`  
 Nome di una colonna di dati.  
  
 `prgByteVals`  
 Un puntatore a una matrice di **BYTE** valori. Questa matrice verrà archiviati i dati di essere trasferiti dall'origine dati al recordset.  
  
 `prgLengths`  
 Un puntatore a una matrice di valori long integer. La matrice archivierà la lunghezza in byte di ogni valore nella matrice a cui puntata `prgByteVals`. Si noti che il valore **SQL_NULL_DATA** verranno archiviati se l'elemento dati corrispondente contiene un valore Null. Per ulteriori informazioni, vedere la funzione API ODBC **SQLBindCol** nel *riferimento per programmatori di ODBC SDK*.  
  
 `nMaxLength`  
 La lunghezza dei valori archiviati nella matrice a cui puntata massima consentita `prgByteVals`. Per garantire che i dati non verranno troncati, passare un valore sufficientemente grande da contenere l'elemento di dati più grande desiderati.  
  
### <a name="remarks"></a>Note  
 La colonna di origine dati può avere un tipo ODBC **SQL_BINARY**, **SQL_VARBINARY**, o **SQL_LONGVARBINARY**. Il recordset deve definire un membro dati del campo di tipo puntatore a **BYTE**.  
  
 Se si inizializza `prgByteVals` e `prgLengths` a **NULL**, quindi verranno allocate automaticamente, le matrici facciano riferimento con dimensioni pari alla dimensione del set di righe.  
  
> [!NOTE]
>  Massa di campi di record exchange trasferisce solo i dati dall'origine dati per l'oggetto recordset. Per rendere il recordset è aggiornabile, è necessario utilizzare la funzione API ODBC **SQLSetPos**.  
  
 Per ulteriori informazioni, vedere gli articoli [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [trasferimento di campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).  
  
### <a name="example"></a>Esempio  
 Vedere [RFX_Text_Bulk](#rfx_text_bulk).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  

## <a name="a-namerfxboolbulka--rfxboolbulk"></a><a name="rfx_bool_Bulk"></a>RFX_Bool_Bulk
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
 `pFX`  
 Un puntatore a un [CFieldExchange](cfieldexchange-class.md) oggetto. Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 `szName`  
 Nome di una colonna di dati.  
  
 `prgBoolVals`  
 Un puntatore a una matrice di **BOOL** valori. Questa matrice verrà archiviati i dati di essere trasferiti dall'origine dati al recordset.  
  
 `prgLengths`  
 Un puntatore a una matrice di valori long integer. La matrice archivierà la lunghezza in byte di ogni valore nella matrice a cui puntata `prgBoolVals`. Si noti che il valore **SQL_NULL_DATA** verranno archiviati se l'elemento dati corrispondente contiene un valore Null. Per ulteriori informazioni, vedere la funzione API ODBC **SQLBindCol** nel *riferimento per programmatori di ODBC SDK*.  
  
### <a name="remarks"></a>Note  
 La colonna di origine dati deve avere un tipo ODBC di **SQL_BIT**. Il recordset deve definire un membro dati del campo di tipo puntatore a **BOOL**.  
  
 Se si inizializza `prgBoolVals` e `prgLengths` a **NULL**, quindi verranno allocate automaticamente, le matrici facciano riferimento con dimensioni pari alla dimensione del set di righe.  
  
> [!NOTE]
>  Massa di campi di record exchange trasferisce solo i dati dall'origine dati per l'oggetto recordset. Per rendere il recordset è aggiornabile, è necessario utilizzare la funzione API ODBC **SQLSetPos**.  
  
 Per ulteriori informazioni, vedere gli articoli [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [trasferimento di campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).  
  
### <a name="example"></a>Esempio  
 Vedere [RFX_Text_Bulk](#rfx_text_bulk).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  

## <a name="a-namerfxbytebulka--rfxbytebulk"></a><a name="rfx_byte_Bulk"></a>RFX_Byte_Bulk
Trasferisce più righe di singoli byte da una colonna di un'origine dati ODBC in una matrice corrispondente in un `CRecordset`-oggetto derivato.  
  
### <a name="syntax"></a>Sintassi  
  
```
void RFX_Byte_Bulk(  
   CFieldExchange* pFX,  
   LPCTSTR szName,  
   BYTE** prgByteVals,  
   long** prgLengths);  
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un [CFieldExchange](cfieldexchange-class.md) oggetto. Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 `szName`  
 Nome di una colonna di dati.  
  
 `prgByteVals`  
 Un puntatore a una matrice di **BYTE** valori. Questa matrice verrà archiviati i dati di essere trasferiti dall'origine dati al recordset.  
  
 `prgLengths`  
 Un puntatore a una matrice di valori long integer. La matrice archivierà la lunghezza in byte di ogni valore nella matrice a cui puntata `prgByteVals`. Si noti che il valore **SQL_NULL_DATA** verranno archiviati se l'elemento dati corrispondente contiene un valore Null. Per ulteriori informazioni, vedere la funzione API ODBC **SQLBindCol** nel *riferimento per programmatori di ODBC SDK*.  
  
### <a name="remarks"></a>Note  
 La colonna di origine dati deve avere un tipo ODBC di **SQL_TINYINT**. Il recordset deve definire un membro dati del campo di tipo puntatore a **BYTE**.  
  
 Se si inizializza `prgByteVals` e `prgLengths` a **NULL**, quindi verranno allocate automaticamente, le matrici facciano riferimento con dimensioni pari alla dimensione del set di righe.  
  
> [!NOTE]
>  Massa di campi di record exchange trasferisce solo i dati dall'origine dati per l'oggetto recordset. Per rendere il recordset è aggiornabile, è necessario utilizzare la funzione API ODBC **SQLSetPos**.  
  
 Per ulteriori informazioni, vedere gli articoli [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [trasferimento di campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).  
  
### <a name="example"></a>Esempio  
 Vedere [RFX_Text_Bulk](#rfx_text_bulk).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  
  
## <a name="a-namerfxdatebulka--rfxdatebulk"></a><a name="rfx_date_Bulk"></a>RFX_Date_Bulk
Trasferisce più righe di **TIMESTAMP_STRUCT** dati da una colonna di un'origine dati ODBC in una matrice corrispondente in un `CRecordset`-oggetto derivato.  
  
### <a name="syntax"></a>Sintassi  
  
```
void RFX_Date_Bulk(  
   CFieldExchange* pFX,  
   LPCTSTR szName,  
   TIMESTAMP_STRUCT** prgTSVals,  
   long** prgLengths);  
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un [CFieldExchange](cfieldexchange-class.md) oggetto. Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 `szName`  
 Nome di una colonna di dati.  
  
 `prgTSVals`  
 Un puntatore a una matrice di **TIMESTAMP_STRUCT** valori. Questa matrice verrà archiviati i dati di essere trasferiti dall'origine dati al recordset. Per ulteriori informazioni sui **TIMESTAMP_STRUCT** del tipo di dati, vedere l'argomento "Tipi di dati C" nell'appendice D il *riferimento per programmatori di ODBC SDK*.  
  
 `prgLengths`  
 Un puntatore a una matrice di valori long integer. La matrice archivierà la lunghezza in byte di ogni valore nella matrice a cui puntata `prgTSVals`. Si noti che il valore **SQL_NULL_DATA** verranno archiviati se l'elemento dati corrispondente contiene un valore Null. Per ulteriori informazioni, vedere la funzione API ODBC **SQLBindCol** nel *riferimento per programmatori di ODBC SDK*.  
  
### <a name="remarks"></a>Note  
 La colonna di origine dati può avere un tipo ODBC **SQL_DATE**, **SQL_TIME**, o **SQL_TIMESTAMP**. Il recordset deve definire un membro dati del campo di tipo puntatore a **TIMESTAMP_STRUCT**.  
  
 Se si inizializza `prgTSVals` e `prgLengths` a **NULL**, quindi verranno allocate automaticamente, le matrici facciano riferimento con dimensioni pari alla dimensione del set di righe.  
  
> [!NOTE]
>  Massa di campi di record exchange trasferisce solo i dati dall'origine dati per l'oggetto recordset. Per rendere il recordset è aggiornabile, è necessario utilizzare la funzione API ODBC **SQLSetPos**.  
  
 Per ulteriori informazioni, vedere gli articoli [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [trasferimento di campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).  
  
### <a name="example"></a>Esempio  
 Vedere [RFX_Text_Bulk](#rfx_text_bulk).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  

## <a name="a-namerfxdoublebulka--rfxdoublebulk"></a><a name="rfx_double_Bulk"></a>RFX_Double_Bulk
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
 `pFX`  
 Un puntatore a un [CFieldExchange](cfieldexchange-class.md) oggetto. Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 `szName`  
 Nome di una colonna di dati.  
  
 `prgDblVals`  
 Un puntatore a una matrice di **double** valori. Questa matrice verrà archiviati i dati di essere trasferiti dall'origine dati al recordset.  
  
 `prgLengths`  
 Un puntatore a una matrice di valori long integer. La matrice archivierà la lunghezza in byte di ogni valore nella matrice a cui puntata `prgDblVals`. Si noti che il valore **SQL_NULL_DATA** verranno archiviati se l'elemento dati corrispondente contiene un valore Null. Per ulteriori informazioni, vedere la funzione API ODBC **SQLBindCol** nel *riferimento per programmatori di ODBC SDK*.  
  
### <a name="remarks"></a>Note  
 La colonna di origine dati deve avere un tipo ODBC di **SQL_DOUBLE**. Il recordset deve definire un membro dati del campo di tipo puntatore a **double**.  
  
 Se si inizializza `prgDblVals` e `prgLengths` a **NULL**, quindi verranno allocate automaticamente, le matrici facciano riferimento con dimensioni pari alla dimensione del set di righe.  
  
> [!NOTE]
>  Massa di campi di record exchange trasferisce solo i dati dall'origine dati per l'oggetto recordset. Per rendere il recordset è aggiornabile, è necessario utilizzare la funzione API ODBC **SQLSetPos**.  
  
 Per ulteriori informazioni, vedere gli articoli [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [trasferimento di campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).  
  
### <a name="example"></a>Esempio  
 Vedere [RFX_Text_Bulk](#rfx_text_bulk).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  

## <a name="a-namerfxintbulka--rfxintbulk"></a><a name="RFX_Int_Bulk"></a>RFX_Int_Bulk
I trasferimenti di dati integer tra i membri dei dati di campo un `CRecordset` oggetto e le colonne di un record nell'origine dati di tipo ODBC **SQL_SMALLINT**.  
  
### <a name="syntax"></a>Sintassi  
  
```
void RFX_Int(  
   CFieldExchange* pFX,  
   const char* szName,  
   int& value);  
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un oggetto della classe [CFieldExchange](cfieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni sulle operazioni un `CFieldExchange` possibile specificare l'oggetto, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo `int`, viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
### <a name="example"></a>Esempio  
 Vedere [RFX_Text](#rfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  

## <a name="a-namerfxlongbulka--rfxlongbulk"></a><a name="RFX_Long_Bulk"></a>RFX_Long_Bulk
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
 `pFX`  
 Un puntatore a un [CFieldExchange](cfieldexchange-class.md) oggetto. Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 `szName`  
 Nome di una colonna di dati.  
  
 `prgLongVals`  
 Un puntatore a una matrice di valori long integer. Questa matrice verrà archiviati i dati di essere trasferiti dall'origine dati al recordset.  
  
 `prgLengths`  
 Un puntatore a una matrice di valori long integer. La matrice archivierà la lunghezza in byte di ogni valore nella matrice a cui puntata `prgLongVals`. Si noti che il valore **SQL_NULL_DATA** verranno archiviati se l'elemento dati corrispondente contiene un valore Null. Per ulteriori informazioni, vedere la funzione API ODBC **SQLBindCol** nel *riferimento per programmatori di ODBC SDK*.  
  
### <a name="remarks"></a>Note  
 La colonna di origine dati deve avere un tipo ODBC di **SQL_INTEGER**. Il recordset deve definire un membro dati del campo di tipo puntatore a **lungo**.  
  
 Se si inizializza `prgLongVals` e `prgLengths` a **NULL**, quindi verranno allocate automaticamente, le matrici facciano riferimento con dimensioni pari alla dimensione del set di righe.  
  
> [!NOTE]
>  Massa di campi di record exchange trasferisce solo i dati dall'origine dati per l'oggetto recordset. Per rendere il recordset è aggiornabile, è necessario utilizzare la funzione API ODBC **SQLSetPos**.  
  
 Per ulteriori informazioni, vedere gli articoli [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [trasferimento di campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).  
  
### <a name="example"></a>Esempio  
 Vedere [RFX_Text_Bulk](#rfx_text_bulk).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  

## <a name="a-namerfxsinglebulka--rfxsinglebulk"></a><a name="rfx_single_Bulk"></a>RFX_Single_Bulk
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
 `pFX`  
 Un puntatore a un [CFieldExchange](cfieldexchange-class.md) oggetto. Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 `szName`  
 Nome di una colonna di dati.  
  
 `prgFltVals`  
 Un puntatore a una matrice di **float** valori. Questa matrice verrà archiviati i dati di essere trasferiti dall'origine dati al recordset.  
  
 `prgLengths`  
 Un puntatore a una matrice di valori long integer. La matrice archivierà la lunghezza in byte di ogni valore nella matrice a cui puntata `prgFltVals`. Si noti che il valore **SQL_NULL_DATA** verranno archiviati se l'elemento dati corrispondente contiene un valore Null. Per ulteriori informazioni, vedere la funzione API ODBC **SQLBindCol** nel *riferimento per programmatori di ODBC SDK*.  
  
### <a name="remarks"></a>Note  
 La colonna di origine dati deve avere un tipo ODBC di **SQL_REAL**. Il recordset deve definire un membro dati del campo di tipo puntatore a **float**.  
  
 Se si inizializza `prgFltVals` e `prgLengths` a **NULL**, quindi verranno allocate automaticamente, le matrici facciano riferimento con dimensioni pari alla dimensione del set di righe.  
  
> [!NOTE]
>  Massa di campi di record exchange trasferisce solo i dati dall'origine dati per l'oggetto recordset. Per rendere il recordset è aggiornabile, è necessario utilizzare la funzione API ODBC **SQLSetPos**.  
  
 Per ulteriori informazioni, vedere gli articoli [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [trasferimento di campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).  
  
### <a name="example"></a>Esempio  
 Vedere [RFX_Text_Bulk](#rfx_text_bulk).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  
  

## <a name="a-namerfxtextbulka--rfxtextbulk"></a><a name="rfx_text_Bulk"></a>RFX_Text_Bulk
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
 `pFX`  
 Un puntatore a un [CFieldExchange](cfieldexchange-class.md) oggetto. Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione. Per ulteriori informazioni, vedere l'articolo [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  
  
 `szName`  
 Nome di una colonna di dati.  
  
 `prgStrVals`  
 Un puntatore a una matrice di **LPSTR** valori. Questa matrice verrà archiviati i dati di essere trasferiti dall'origine dati al recordset. Si noti che con la versione corrente di ODBC, questi valori non possono essere Unicode.  
  
 `prgLengths`  
 Un puntatore a una matrice di valori long integer. La matrice archivierà la lunghezza in byte di ogni valore nella matrice a cui puntata `prgStrVals`. Questa lunghezza esclude il carattere di terminazione null. Si noti che il valore **SQL_NULL_DATA** verranno archiviati se l'elemento dati corrispondente contiene un valore Null. Per ulteriori informazioni, vedere la funzione API ODBC **SQLBindCol** nel *riferimento per programmatori di ODBC SDK*.  
  
 `nMaxLength`  
 La lunghezza dei valori archiviati nella matrice a cui puntata massima consentita `prgStrVals`, incluso il carattere di terminazione null. Per garantire che i dati non verranno troncati, passare un valore sufficientemente grande da contenere l'elemento di dati più grande desiderati.  
  
### <a name="remarks"></a>Note  
 La colonna di origine dati può avere un tipo ODBC **SQL_LONGVARCHAR**, **SQL_CHAR**, **SQL_VARCHAR**, **SQL_DECIMAL**, o **SQL_NUMERIC**. Il recordset deve definire un membro dati del campo di tipo **LPSTR**.  
  
 Se si inizializza `prgStrVals` e `prgLengths` a **NULL**, quindi verranno allocate automaticamente, le matrici facciano riferimento con dimensioni pari alla dimensione del set di righe.  
  
> [!NOTE]
>  Massa di campi di record exchange trasferisce solo i dati dall'origine dati per l'oggetto recordset. Per rendere il recordset è aggiornabile, è necessario utilizzare la funzione API ODBC **SQLSetPos**.  
  
 Per ulteriori informazioni, vedere gli articoli [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) e [trasferimento di campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).  
  
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

## <a name="a-namedfxbinarya--dfxbinary"></a><a name="dfx_binary"></a>DFX_Binary
I trasferimenti di matrici di byte tra i membri dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.  
  
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
 `pFX`  
 Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo [CByteArray](cbytearray-class.md), viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
 `nPreAllocSize`  
 Il framework vengono preallocati i questa quantità di memoria. Se i dati sono grandi, il framework verrà allocato spazio in base alle esigenze. Per prestazioni ottimali, impostare le dimensioni di un valore sufficientemente elevato da impedire riallocazioni. La dimensione predefinita è definita nel AFXDAO. File H come **AFX_DAO_BINARY_DEFAULT_SIZE**.  
  
 `dwBindOptions`  
 Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, `AFX_DAO_DISABLE_FIELD_CACHE`, non utilizzare il doppio buffer ed è necessario chiamare [SetFieldDirty](cdaorecordset-class.md#setfielddirty) e [SetFieldNull](cdaorecordset-class.md#setfieldnull) manualmente. L'altro valore possibile `AFX_DAO_ENABLE_FIELD_CACHE`, utilizza il doppio buffer e non è necessario eseguire lavoro aggiuntivo per contrassegnare i campi modificati o Null. Per motivi di memoria e prestazioni, evitare di questo valore, a meno che i dati binari sono relativamente piccoli.  
  
> [!NOTE]
>  È possibile controllare se viene doppio buffer ai dati per tutti i campi per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).  
  
### <a name="remarks"></a>Note  
 Mapping dei dati tra il tipo **DAO_BYTES** in DAO e il tipo [CByteArray](cbytearray-class.md) nel recordset.  
  
### <a name="example"></a>Esempio  
 Vedere [DFX_Text](#dfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  

## <a name="a-namedfxboola--dfxbool"></a><a name="dfx_bool"></a>DFX_Bool
Trasferisce i dati booleani tra i membri dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.  
  
### <a name="syntax"></a>Sintassi  
  
```
void AFXAPI DFX_Bool(  
   CDaoFieldExchange* pFX,  
   LPCTSTR szName,  
   BOOL& value,  
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);  
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **BOOL**, viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
 `dwBindOptions`  
 Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Per impostazione predefinita, `AFX_DAO_ENABLE_FIELD_CACHE`, viene utilizzato il doppio buffer. L'altro valore possibile è `AFX_DAO_DISABLE_FIELD_CACHE`. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.  
  
> [!NOTE]
>  È possibile controllare se dati viene applicato il doppio buffering per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).  
  
### <a name="remarks"></a>Note  
 Mapping dei dati tra il tipo **DAO_BOOL** in DAO e il tipo **BOOL** nel recordset.  
  
### <a name="example"></a>Esempio  
 Vedere [DFX_Text](#dfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  

## <a name="a-namedfxbytea--dfxbyte"></a><a name="dfx_byte"></a>DFX_Byte
Trasferisce singoli byte tra i membri dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.  
  
### <a name="syntax"></a>Sintassi  
  
```
void AFXAPI DFX_Byte(  
   CDaoFieldExchange* pFX,  
   LPCTSTR szName,  
   BYTE& value,  
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);  
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **BYTE**, viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
 `dwBindOptions`  
 Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Per impostazione predefinita, `AFX_DAO_ENABLE_FIELD_CACHE`, viene utilizzato il doppio buffer. L'altro valore possibile è `AFX_DAO_DISABLE_FIELD_CACHE`. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.  
  
> [!NOTE]
>  È possibile controllare se dati viene applicato il doppio buffering per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).  
  
### <a name="remarks"></a>Note  
 Mapping dei dati tra il tipo **DAO_BYTES** in DAO e il tipo **BYTE** nel recordset.  
  
### <a name="example"></a>Esempio  
 Vedere [DFX_Text](#dfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  

## <a name="a-namedfxcurrencya--dfxcurrency"></a><a name="dfx_currency"></a>DFX_Currency
Trasferisce i dati di valuta tra i membri dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.  
  
### <a name="syntax"></a>Sintassi  
  
```
void AFXAPI DFX_Currency(  
   CDaoFieldExchange* pFX,  
   LPCTSTR szName,  
   COleCurrency& value,  
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);  
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, questo valore viene preso dal membro dati specificato, di tipo [COleCurrency](colecurrency-class.md). Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
 `dwBindOptions`  
 Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Per impostazione predefinita, `AFX_DAO_ENABLE_FIELD_CACHE`, viene utilizzato il doppio buffer. L'altro valore possibile è `AFX_DAO_DISABLE_FIELD_CACHE`. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.  
  
> [!NOTE]
>  È possibile controllare se dati viene applicato il doppio buffering per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).  
  
### <a name="remarks"></a>Note  
 Mapping dei dati tra il tipo **DAO_CURRENCY** in DAO e il tipo [COleCurrency](colecurrency-class.md) nel recordset.  
  
### <a name="example"></a>Esempio  
 Vedere [DFX_Text](#dfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  

## <a name="a-namedfxdatetimea--dfxdatetime"></a><a name="dfx_datetime"></a>DFX_DateTime
Trasferisce i dati di data e ora tra i membri dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.  
  
### <a name="syntax"></a>Sintassi  
  
```
void AFXAPI DFX_DateTime(  
   CDaoFieldExchange* pFX,  
   LPCTSTR szName,  
   COleDateTime& value,  
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);  
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. La funzione accetta un riferimento a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto. Per un trasferimento dal recordset all'origine dati, questo valore viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
 `dwBindOptions`  
 Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Per impostazione predefinita, `AFX_DAO_ENABLE_FIELD_CACHE`, viene utilizzato il doppio buffer. L'altro valore possibile è `AFX_DAO_DISABLE_FIELD_CACHE`. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.  
  
> [!NOTE]
>  È possibile controllare se dati viene applicato il doppio buffering per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).  
  
### <a name="remarks"></a>Note  
 Mapping dei dati tra il tipo **DAO_DATE** in DAO e il tipo [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) nel recordset.  
  
> [!NOTE]
>  `COleDateTime`sostituisce [CTime](../../atl-mfc-shared/reference/ctime-class.md) e **TIMESTAMP_STRUCT** a questo scopo nelle classi DAO. `CTime`e **TIMESTAMP_STRUCT** vengono ancora utilizzati per le classi di accesso ai dati basate su ODBC.  
  
### <a name="example"></a>Esempio  
 Vedere [DFX_Text](#dfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  

## <a name="a-namedfxdoublea--dfxdouble"></a><a name="dfx_double"></a>DFX_Double
I trasferimenti **float double** dati tra i membri dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.  
  
### <a name="syntax"></a>Sintassi  
  
```
void AFXAPI DFX_Double(  
   CDaoFieldExchange* pFX,  
   LPCTSTR szName,  
   double& value,  
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);  
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **double**, viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
 `dwBindOptions`  
 Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Per impostazione predefinita, `AFX_DAO_ENABLE_FIELD_CACHE`, viene utilizzato il doppio buffer. L'altro valore possibile è `AFX_DAO_DISABLE_FIELD_CACHE`. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.  
  
> [!NOTE]
>  È possibile controllare se dati viene applicato il doppio buffering per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).  
  
### <a name="remarks"></a>Note  
 Mapping dei dati tra il tipo **DAO_R8** in DAO e il tipo **float double** nel recordset.  
  
### <a name="example"></a>Esempio  
 Vedere [DFX_Text](#dfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  

## <a name="a-namedfxlonga--dfxlong"></a><a name="dfx_long"></a>DFX_Long
I trasferimenti di dati long integer tra i membri dei dati di campo un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.  
  
### <a name="syntax"></a>Sintassi  
  
```
void AFXAPI DFX_Long(  
   CDaoFieldExchange* pFX,  
   LPCTSTR szName,  
   long& value,  
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);  
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **lungo**, viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
 `dwBindOptions`  
 Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Per impostazione predefinita, `AFX_DAO_ENABLE_FIELD_CACHE`, viene utilizzato il doppio buffer. L'altro valore possibile è `AFX_DAO_DISABLE_FIELD_CACHE`. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.  
  
> [!NOTE]
>  È possibile controllare se dati viene applicato il doppio buffering per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).  
  
### <a name="remarks"></a>Note  
 Mapping dei dati tra il tipo **DAO_I4** in DAO e il tipo **lungo** nel recordset.  
  
### <a name="example"></a>Esempio  
 Vedere [DFX_Text](#dfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  

## <a name="a-namedfxlongbinarya--dfxlongbinary"></a><a name="dfx_longbinary"></a>DFX_LongBinary
**Importante** si consiglia di utilizzare [DFX_Binary](#dfx_binary) anziché questa funzione.  
  
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
 `pFX`  
 Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo [CLongBinary](clongbinary-class.md), viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
 *dwPreAllocSize*  
 Il framework vengono preallocati i questa quantità di memoria. Se i dati sono grandi, il framework verrà allocato spazio in base alle esigenze. Per prestazioni ottimali, impostare le dimensioni di un valore sufficientemente elevato da impedire riallocazioni.  
  
 `dwBindOptions`  
 Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Il valore predefinito, **AFX_DISABLE_FIELD_CACHE**, non utilizza il doppio buffer. L'altro valore possibile è `AFX_DAO_ENABLE_FIELD_CACHE`. Utilizza il doppio buffer e non è necessario eseguire lavoro aggiuntivo per contrassegnare i campi modificati o Null. Per motivi di memoria e prestazioni, evitare di questo valore, a meno che i dati binari sono relativamente piccoli.  
  
> [!NOTE]
>  È possibile controllare se dati viene applicato il doppio buffering per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).  
  
### <a name="remarks"></a>Note  
 `DFX_LongBinary`viene fornito per compatibilità con le classi ODBC MFC. Il `DFX_LongBinary` funzione trasferisce i dati binari-oggetto di grandi dimensioni (BLOB) usando classe `CLongBinary` tra i membri dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati. Mapping dei dati tra il tipo **DAO_BYTES** in DAO e il tipo [CLongBinary](clongbinary-class.md) nel recordset.  
  
### <a name="example"></a>Esempio  
 Vedere [DFX_Text](#dfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  

## <a name="a-namedfxshorta--dfxshort"></a><a name="dfx_short"></a>DFX_Short
I trasferimenti breve dati integer tra i membri dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.  
  
### <a name="syntax"></a>Sintassi  
  
```
void AFXAPI DFX_Short(  
   CDaoFieldExchange* pFX,  
   LPCTSTR szName,  
   short& value,  
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);  
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **breve**, viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
 `dwBindOptions`  
 Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Per impostazione predefinita, `AFX_DAO_ENABLE_FIELD_CACHE`, viene utilizzato il doppio buffer. L'altro valore possibile è `AFX_DAO_DISABLE_FIELD_CACHE`. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.  
  
> [!NOTE]
>  È possibile controllare se dati viene applicato il doppio buffering per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).  
  
### <a name="remarks"></a>Note  
 Mapping dei dati tra il tipo **DAO_I2** in DAO e il tipo **breve** nel recordset.  
  
> [!NOTE]
>  `DFX_Short`equivale a [RFX_Int](#rfx_int) per le classi basate su ODBC.  
  
### <a name="example"></a>Esempio  
 Vedere [DFX_Text](#dfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  

## <a name="a-namedfxsinglea--dfxsingle"></a><a name="dfx_single"></a>DFX_Single
Trasferisce i dati a virgola mobile tra i membri dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.  
  
### <a name="syntax"></a>Sintassi  
  
```
void AFXAPI DFX_Single(  
   CDaoFieldExchange* pFX,  
   LPCTSTR szName,  
   float& value,  
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);  
```  
  
### <a name="parameters"></a>Parametri  
 `pFX`  
 Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo **float**, viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
 `dwBindOptions`  
 Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Per impostazione predefinita, `AFX_DAO_ENABLE_FIELD_CACHE`, viene utilizzato il doppio buffer. L'altro valore possibile è `AFX_DAO_DISABLE_FIELD_CACHE`. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare `SetFieldDirty` e `SetFieldNull` manualmente.  
  
> [!NOTE]
>  È possibile controllare se dati viene applicato il doppio buffering per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).  
  
### <a name="remarks"></a>Note  
 Mapping dei dati tra il tipo **DAO_R4** in DAO e il tipo **float** nel recordset.  
  
### <a name="example"></a>Esempio  
 Vedere [DFX_Text](#dfx_text).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  

## <a name="a-namedfxtexta--dfxtext"></a><a name="dfx_text"></a>DFX_Text
I trasferimenti `CString` dati tra i membri dati di campo di un [CDaoRecordset](cdaorecordset-class.md) oggetto e le colonne di un record nell'origine dati.  
  
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
 `pFX`  
 Un puntatore a un oggetto della classe [CDaoFieldExchange](cdaofieldexchange-class.md). Questo oggetto contiene le informazioni per definire il contesto per ogni chiamata della funzione.  
  
 `szName`  
 Nome di una colonna di dati.  
  
 *value*  
 Valore memorizzato nel membro dati indicato, il valore da trasferire. Per un trasferimento dal recordset all'origine dati, il valore di tipo [CString](../../atl-mfc-shared/reference/cstringt-class.md), viene preso dal membro dati specificato. Per un trasferimento dall'origine dati al recordset, il valore viene memorizzato nel membro dati specificato.  
  
 `nPreAllocSize`  
 Il framework vengono preallocati i questa quantità di memoria. Se i dati sono grandi, il framework verrà allocato spazio in base alle esigenze. Per prestazioni ottimali, impostare le dimensioni di un valore sufficientemente elevato da impedire riallocazioni.  
  
 `dwBindOptions`  
 Opzione che consente di sfruttare il meccanismo del doppio buffer di MFC per rilevare i campi del recordset che sono stati modificati. Per impostazione predefinita, `AFX_DAO_ENABLE_FIELD_CACHE`, viene utilizzato il doppio buffer. L'altro valore possibile è `AFX_DAO_DISABLE_FIELD_CACHE`. Se si specifica questo valore, non viene eseguito il controllo su questo campo da parte di MFC. È necessario chiamare [SetFieldDirty](cdaorecordset-class.md#setfielddirty) e [SetFieldNull](cdaorecordset-class.md#setfieldnull) manualmente.  
  
> [!NOTE]
>  È possibile controllare se dati viene applicato il doppio buffering per impostazione predefinita impostando [CDaoRecordset:: M_bcheckcachefordirtyfields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).  
  
### <a name="remarks"></a>Note  
 Mapping dei dati tra il tipo **DAO_CHAR** in DAO (oppure, se il simbolo di **Unicode** è definito, **DAO_WCHAR**) e il tipo [CString](../../atl-mfc-shared/reference/cstringt-class.md) nel recordset.  n
  
### <a name="example"></a>Esempio  
 Questo esempio illustra diverse chiamate a `DFX_Text`. Si noti inoltre le due chiamate a [CDaoFieldExchange:: SetFieldType](cdaofieldexchange-class.md#setfieldtype). È necessario scrivere la prima chiamata a `SetFieldType` e il relativo **DFX** chiamare. La seconda chiamata e l'identificatore associato **DFX** chiamate sono in genere scritti dalla procedura guidata codice che ha generato la classe.  
  
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
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
 [CRecordset::DoFieldExchange](crecordset-class.md#dofieldexchange)   
 [CRecordset::DoBulkFieldExchange](crecordset-class.md#dobulkfieldexchange)   
 [CDaoRecordset::DoFieldExchange](cdaorecordset-class.md#dofieldexchange)


