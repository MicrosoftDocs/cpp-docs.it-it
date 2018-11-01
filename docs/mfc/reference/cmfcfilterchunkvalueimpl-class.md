---
title: Classe CMFCFilterChunkValueImpl
ms.date: 11/04/2016
f1_keywords:
- CMFCFilterChunkValueImpl
- AFXWIN/CMFCFilterChunkValueImpl
- AFXWIN/CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl
- AFXWIN/CMFCFilterChunkValueImpl::Clear
- AFXWIN/CMFCFilterChunkValueImpl::CopyChunk
- AFXWIN/CMFCFilterChunkValueImpl::CopyFrom
- AFXWIN/CMFCFilterChunkValueImpl::GetChunkGUID
- AFXWIN/CMFCFilterChunkValueImpl::GetChunkPID
- AFXWIN/CMFCFilterChunkValueImpl::GetChunkType
- AFXWIN/CMFCFilterChunkValueImpl::GetString
- AFXWIN/CMFCFilterChunkValueImpl::GetValue
- AFXWIN/CMFCFilterChunkValueImpl::GetValueNoAlloc
- AFXWIN/CMFCFilterChunkValueImpl::IsValid
- AFXWIN/CMFCFilterChunkValueImpl::SetBoolValue
- AFXWIN/CMFCFilterChunkValueImpl::SetDwordValue
- AFXWIN/CMFCFilterChunkValueImpl::SetFileTimeValue
- AFXWIN/CMFCFilterChunkValueImpl::SetInt64Value
- AFXWIN/CMFCFilterChunkValueImpl::SetIntValue
- AFXWIN/CMFCFilterChunkValueImpl::SetLongValue
- AFXWIN/CMFCFilterChunkValueImpl::SetSystemTimeValue
- AFXWIN/CMFCFilterChunkValueImpl::SetTextValue
- AFXWIN/CMFCFilterChunkValueImpl::SetChunk
helpviewer_keywords:
- CMFCFilterChunkValueImpl [MFC], CMFCFilterChunkValueImpl
- CMFCFilterChunkValueImpl [MFC], Clear
- CMFCFilterChunkValueImpl [MFC], CopyChunk
- CMFCFilterChunkValueImpl [MFC], CopyFrom
- CMFCFilterChunkValueImpl [MFC], GetChunkGUID
- CMFCFilterChunkValueImpl [MFC], GetChunkPID
- CMFCFilterChunkValueImpl [MFC], GetChunkType
- CMFCFilterChunkValueImpl [MFC], GetString
- CMFCFilterChunkValueImpl [MFC], GetValue
- CMFCFilterChunkValueImpl [MFC], GetValueNoAlloc
- CMFCFilterChunkValueImpl [MFC], IsValid
- CMFCFilterChunkValueImpl [MFC], SetBoolValue
- CMFCFilterChunkValueImpl [MFC], SetDwordValue
- CMFCFilterChunkValueImpl [MFC], SetFileTimeValue
- CMFCFilterChunkValueImpl [MFC], SetInt64Value
- CMFCFilterChunkValueImpl [MFC], SetIntValue
- CMFCFilterChunkValueImpl [MFC], SetLongValue
- CMFCFilterChunkValueImpl [MFC], SetSystemTimeValue
- CMFCFilterChunkValueImpl [MFC], SetTextValue
- CMFCFilterChunkValueImpl [MFC], SetChunk
ms.assetid: 3c833f23-5b88-4d08-9e09-ca6a8aec88bf
ms.openlocfilehash: a59cf087a52bd7b6a2eaa00d3091047e93e14d4d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50666843"
---
# <a name="cmfcfilterchunkvalueimpl-class"></a>Classe CMFCFilterChunkValueImpl

Si tratta di una classe che semplifica la logica di blocchi e proprietà coppia di valori.

## <a name="syntax"></a>Sintassi

```
class CMFCFilterChunkValueImpl : public ATL::IFilterChunkValue;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCFilterChunkValueImpl:: ~ CMFCFilterChunkValueImpl](#_dtorcmfcfilterchunkvalueimpl)|Distrugge l'oggetto.|
|[CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl](#cmfcfilterchunkvalueimpl)|Costruisce l'oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCFilterChunkValueImpl::Clear](#clear)|Cancella il ChunkValue.|
|[CMFCFilterChunkValueImpl::CopyChunk](#copychunk)|Copia questo blocco a una struttura che descrive le caratteristiche di un blocco.|
|[CMFCFilterChunkValueImpl::CopyFrom](#copyfrom)|Inizializza questo valore di blocco da di altro valore.|
|[CMFCFilterChunkValueImpl::GetChunkGUID](#getchunkguid)|Recupera il GUID di blocco.|
|[CMFCFilterChunkValueImpl::GetChunkPID](#getchunkpid)|Recupera il blocco PID (ID di proprietà).|
|[CMFCFilterChunkValueImpl::GetChunkType](#getchunktype)|Ottiene chunk tipo.|
|[CMFCFilterChunkValueImpl::GetString](#getstring)|Recupera il valore di stringa.|
|[CMFCFilterChunkValueImpl::GetValue](#getvalue)|Recupera il valore come un propvariant allocato.|
|[CMFCFilterChunkValueImpl::GetValueNoAlloc](#getvaluenoalloc)|Valore restituisce non allocato (valore interno).|
|[CMFCFilterChunkValueImpl::IsValid](#isvalid)|Controlla se il valore della proprietà è valido o meno.|
|[CMFCFilterChunkValueImpl::SetBoolValue](#setboolvalue)|Di overload. Imposta la proprietà da chiave in un valore booleano.|
|[CMFCFilterChunkValueImpl::SetDwordValue](#setdwordvalue)|Imposta la proprietà dalla chiave a un valore DWORD.|
|[CMFCFilterChunkValueImpl::SetFileTimeValue](#setfiletimevalue)|Imposta la proprietà dalla chiave di un filetime.|
|[CMFCFilterChunkValueImpl::SetInt64Value](#setint64value)|Imposta la proprietà da chiave in un int64.|
|[CMFCFilterChunkValueImpl::SetIntValue](#setintvalue)|Imposta la proprietà da chiave in un int.|
|[CMFCFilterChunkValueImpl::SetLongValue](#setlongvalue)|Imposta la proprietà dalla chiave su un valore LONG.|
|[CMFCFilterChunkValueImpl::SetSystemTimeValue](#setsystemtimevalue)|Imposta la proprietà da chiave per un SystemTime.|
|[CMFCFilterChunkValueImpl::SetTextValue](#settextvalue)|Imposta la proprietà da chiave in una stringa Unicode.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCFilterChunkValueImpl::SetChunk](#setchunk)|Una funzione helper che consente di impostare le proprietà comuni del blocco.|

## <a name="remarks"></a>Note

Per usare, è sufficiente creare una classe CMFCFilterChunkValueImpl del tipo corretto

Esempio:

Blocco CMFCFilterChunkValueImpl;

hr = blocco. SetBoolValue(PKEY_IsAttachment, true);

oppure

hr = blocco. SetFileTimeValue (PKEY_ItemDate, ftLastModified);

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ATL::IFilterChunkValue`

[CMFCFilterChunkValueImpl](../../mfc/reference/cmfcfilterchunkvalueimpl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="clear"></a>  CMFCFilterChunkValueImpl::Clear

Cancella il ChunkValue.

```
void Clear();
```

### <a name="remarks"></a>Note

##  <a name="cmfcfilterchunkvalueimpl"></a>  CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl

Costruisce l'oggetto.

```
CMFCFilterChunkValueImpl();
```

### <a name="remarks"></a>Note

##  <a name="_dtorcmfcfilterchunkvalueimpl"></a>  CMFCFilterChunkValueImpl:: ~ CMFCFilterChunkValueImpl

Distrugge l'oggetto.

```
virtual ~CMFCFilterChunkValueImpl();
```

### <a name="remarks"></a>Note

##  <a name="copychunk"></a>  CMFCFilterChunkValueImpl::CopyChunk

Copia questo blocco a una struttura che descrive le caratteristiche di un blocco.

```
HRESULT CopyChunk(STAT_CHUNK* pStatChunk);
```

### <a name="parameters"></a>Parametri

*pStatChunk*<br/>
Puntatore al valore di destinazione che descrivono le caratteristiche del blocco.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario un codice di errore.

### <a name="remarks"></a>Note

##  <a name="copyfrom"></a>  CMFCFilterChunkValueImpl::CopyFrom

Inizializza questo valore di blocco da di altro valore.

```
void CopyFrom (IFilterChunkValue* pValue);
```

### <a name="parameters"></a>Parametri

*pValue*<br/>
Specifica il valore di origine da copiare da.

### <a name="remarks"></a>Note

##  <a name="getchunkguid"></a>  CMFCFilterChunkValueImpl::GetChunkGUID

Recupera il GUID di blocco.

```
REFGUID GetChunkGUID() const;
```

### <a name="return-value"></a>Valore restituito

Un riferimento a un GUID che identifica il blocco.

### <a name="remarks"></a>Note

##  <a name="getchunkpid"></a>  CMFCFilterChunkValueImpl::GetChunkPID

Recupera il blocco PID (ID di proprietà).

```
DWORD GetChunkPID() const;
```

### <a name="return-value"></a>Valore restituito

Un valore DWORD che contiene l'ID di proprietà.

### <a name="remarks"></a>Note

##  <a name="getchunktype"></a>  CMFCFilterChunkValueImpl::GetChunkType

Recupera il tipo di blocco.

```
CHUNKSTATE GetChunkType() const;
```

### <a name="return-value"></a>Valore restituito

Valore CHUNKSTATE enumerato che specifica se il blocco corrente è una proprietà di tipo testo o una proprietà del tipo di valore.

### <a name="remarks"></a>Note

##  <a name="getstring"></a>  CMFCFilterChunkValueImpl::GetString

Recupera il valore di stringa.

```
CString &GetString();
```

### <a name="return-value"></a>Valore restituito

Stringa contenente il valore di blocco.

### <a name="remarks"></a>Note

##  <a name="getvalue"></a>  CMFCFilterChunkValueImpl::GetValue

Recupera il valore come un propvariant allocato.

```
HRESULT GetValue(PROPVARIANT** ppPropVariant);
```

### <a name="parameters"></a>Parametri

*ppPropVariant*<br/>
Quando la funzione termina, questo parametro contiene il valore di blocco.

### <a name="return-value"></a>Valore restituito

S_OK se è stato allocato correttamente PROPVARIANT e il valore di blocco è stato correttamente copiato *ppPropVariant*; in caso contrario un codice di errore.

### <a name="remarks"></a>Note

##  <a name="getvaluenoalloc"></a>  CMFCFilterChunkValueImpl::GetValueNoAlloc

Restituisce il valore non allocato (valore interno).

```
PROPVARIANT GetValueNoAlloc ();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore di blocco corrente.

### <a name="remarks"></a>Note

##  <a name="isvalid"></a>  CMFCFilterChunkValueImpl::IsValid

Controlla se il valore della proprietà è valido o meno.

```
BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il valore di blocco corrente è valido. in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="setboolvalue"></a>  CMFCFilterChunkValueImpl::SetBoolValue

Di overload. Imposta la proprietà da chiave in un valore booleano.

```
HRESULT SetBoolValue(
    REFPROPERTYKEY pkey,
    BOOL bVal,
    CHUNKSTATE chunkType = CHUNK_VALUE,
    LCID locale = 0,
    DWORD cwcLenSource = 0,
    DWORD cwcStartSource = 0,
    CHUNK_BREAKTYPE chunkBreakType = CHUNK_NO_BREAK);

HRESULT SetBoolValue(
    REFPROPERTYKEY pkey,
    VARIANT_BOOL bVal,
    CHUNKSTATE chunkType = CHUNK_VALUE,
    LCID locale = 0,
    DWORD cwcLenSource = 0,
    DWORD cwcStartSource = 0,
    CHUNK_BREAKTYPE chunkBreakType = CHUNK_NO_BREAK);
```

### <a name="parameters"></a>Parametri

*pkey*<br/>
Specifica una chiave della proprietà.

*bVal*<br/>
Specifica il valore di blocco da impostare.

*chunkType*<br/>
Flag indicano se questo blocco contiene un tipo di testo o una proprietà del tipo di valore. I valori di flag vengono forniti dall'enumerazione CHUNKSTATE.

*locale*<br/>
La lingua e una varietà di lingua associata a un blocco di testo. Impostazioni locali di blocco viene utilizzata da indicizzatori di documenti per eseguire appropriate parole del testo. Se il blocco è di tipo testo né un tipo di valore con tipo di dati VT_BSTR, VT_LPSTR o VT_LPWSTR, questo campo verrà ignorato.

*cwcLenSource*<br/>
La lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore pari a zero indica la corrispondenza di carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che è presente alcun tale corrispondenza diretta.

*cwcStartSource*<br/>
Offset da cui il testo di origine per un blocco derivato viene avviato nel blocco di origine.

*chunkBreakType*<br/>
Tipo di interruzione che separa il blocco precedente dal blocco corrente. I valori provengono dall'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario un codice di errore.

### <a name="remarks"></a>Note

##  <a name="setchunk"></a>  CMFCFilterChunkValueImpl::SetChunk

Una funzione helper che consente di impostare le proprietà comuni del blocco.

```
HRESULT SetChunk(
    REFPROPERTYKEY pkey,
    CHUNKSTATE chunkType=CHUNK_VALUE,
    LCID locale=0,
    DWORD cwcLenSource=0,
    DWORD cwcStartSource=0,
    CHUNK_BREAKTYPE chunkBreakType=CHUNK_NO_BREAK);
```

### <a name="parameters"></a>Parametri

*pkey*<br/>
Specifica una chiave della proprietà.

*chunkType*<br/>
Flag indicano se questo blocco contiene un tipo di testo o una proprietà del tipo di valore. I valori di flag vengono forniti dall'enumerazione CHUNKSTATE.

*locale*<br/>
La lingua e una varietà di lingua associata a un blocco di testo. Impostazioni locali di blocco viene utilizzata da indicizzatori di documenti per eseguire appropriate parole del testo. Se il blocco è di tipo testo né un tipo di valore con tipo di dati VT_BSTR, VT_LPSTR o VT_LPWSTR, questo campo verrà ignorato.

*cwcLenSource*<br/>
La lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore pari a zero indica la corrispondenza di carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che è presente alcun tale corrispondenza diretta.

*cwcStartSource*<br/>
Offset da cui il testo di origine per un blocco derivato viene avviato nel blocco di origine.

*chunkBreakType*<br/>
Tipo di interruzione che separa il blocco precedente dal blocco corrente. I valori provengono dall'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. codice di errore in caso contrario.

### <a name="remarks"></a>Note

##  <a name="setdwordvalue"></a>  CMFCFilterChunkValueImpl::SetDwordValue

Impostare la proprietà dalla chiave a un valore DWORD.

```
HRESULT SetDwordValue(
    REFPROPERTYKEY pkey,
    DWORD dwVal,
    CHUNKSTATE chunkType = CHUNK_VALUE,
    LCID locale = 0,
    DWORD cwcLenSource = 0,
    DWORD cwcStartSource = 0,
    CHUNK_BREAKTYPE chunkBreakType = CHUNK_NO_BREAK);
```

### <a name="parameters"></a>Parametri

*pkey*<br/>
Specifica una chiave della proprietà.

*dwVal*<br/>
Specifica il valore di blocco da impostare.

*chunkType*<br/>
Flag indicano se questo blocco contiene un tipo di testo o una proprietà del tipo di valore. I valori di flag vengono forniti dall'enumerazione CHUNKSTATE.

*locale*<br/>
La lingua e una varietà di lingua associata a un blocco di testo. Impostazioni locali di blocco viene utilizzata da indicizzatori di documenti per eseguire appropriate parole del testo. Se il blocco è di tipo testo né un tipo di valore con tipo di dati VT_BSTR, VT_LPSTR o VT_LPWSTR, questo campo verrà ignorato.

*cwcLenSource*<br/>
La lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore pari a zero indica la corrispondenza di carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che è presente alcun tale corrispondenza diretta.

*cwcStartSource*<br/>
Offset da cui il testo di origine per un blocco derivato viene avviato nel blocco di origine.

*chunkBreakType*<br/>
Tipo di interruzione che separa il blocco precedente dal blocco corrente. I valori provengono dall'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario un codice di errore.

### <a name="remarks"></a>Note

##  <a name="setfiletimevalue"></a>  CMFCFilterChunkValueImpl::SetFileTimeValue

Impostare la proprietà dalla chiave di un filetime.

```
HRESULT SetFileTimeValue(
    REFPROPERTYKEY pkey,
    FILETIME dtVal,
    CHUNKSTATE chunkType = CHUNK_VALUE,
    LCID locale = 0,
    DWORD cwcLenSource = 0,
    DWORD cwcStartSource = 0,
    CHUNK_BREAKTYPE chunkBreakType = CHUNK_NO_BREAK);
```

### <a name="parameters"></a>Parametri

*pkey*<br/>
Specifica una chiave della proprietà.

*dtVal*<br/>
Specifica il valore di blocco da impostare.

*chunkType*<br/>
Flag indicano se questo blocco contiene un tipo di testo o una proprietà del tipo di valore. I valori di flag vengono forniti dall'enumerazione CHUNKSTATE.

*locale*<br/>
La lingua e una varietà di lingua associata a un blocco di testo. Impostazioni locali di blocco viene utilizzata da indicizzatori di documenti per eseguire appropriate parole del testo. Se il blocco è di tipo testo né un tipo di valore con tipo di dati VT_BSTR, VT_LPSTR o VT_LPWSTR, questo campo verrà ignorato.

*cwcLenSource*<br/>
La lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore pari a zero indica la corrispondenza di carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che è presente alcun tale corrispondenza diretta.

*cwcStartSource*<br/>
Offset da cui il testo di origine per un blocco derivato viene avviato nel blocco di origine.

*chunkBreakType*<br/>
Tipo di interruzione che separa il blocco precedente dal blocco corrente. I valori provengono dall'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario un codice di errore.

### <a name="remarks"></a>Note

##  <a name="setint64value"></a>  CMFCFilterChunkValueImpl::SetInt64Value

Impostare la proprietà da chiave in un int64.

```
HRESULT SetInt64Value(
    REFPROPERTYKEY pkey,
    __int64 nVal,
    CHUNKSTATE chunkType = CHUNK_VALUE,
    LCID locale = 0,
    DWORD cwcLenSource = 0,
    DWORD cwcStartSource = 0,
    CHUNK_BREAKTYPE chunkBreakType = CHUNK_NO_BREAK);
```

### <a name="parameters"></a>Parametri

*pkey*<br/>
Specifica una chiave della proprietà.

*nVal*<br/>
Specifica il valore di blocco da impostare.

*chunkType*<br/>
Flag indicano se questo blocco contiene un tipo di testo o una proprietà del tipo di valore. I valori di flag vengono forniti dall'enumerazione CHUNKSTATE.

*locale*<br/>
La lingua e una varietà di lingua associata a un blocco di testo. Impostazioni locali di blocco viene utilizzata da indicizzatori di documenti per eseguire appropriate parole del testo. Se il blocco è di tipo testo né un tipo di valore con tipo di dati VT_BSTR, VT_LPSTR o VT_LPWSTR, questo campo verrà ignorato.

*cwcLenSource*<br/>
La lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore pari a zero indica la corrispondenza di carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che è presente alcun tale corrispondenza diretta.

*cwcStartSource*<br/>
Offset da cui il testo di origine per un blocco derivato viene avviato nel blocco di origine.

*chunkBreakType*<br/>
Tipo di interruzione che separa il blocco precedente dal blocco corrente. I valori provengono dall'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario un codice di errore.

### <a name="remarks"></a>Note

##  <a name="setintvalue"></a>  CMFCFilterChunkValueImpl::SetIntValue

Impostare la proprietà da chiave in un int.

```
HRESULT SetIntValue(
    REFPROPERTYKEY pkey,
    int nVal,
    CHUNKSTATE chunkType = CHUNK_VALUE,
    LCID locale = 0,
    DWORD cwcLenSource = 0,
    DWORD cwcStartSource = 0,
    CHUNK_BREAKTYPE chunkBreakType = CHUNK_NO_BREAK);
```

### <a name="parameters"></a>Parametri

*pkey*<br/>
Specifica una chiave della proprietà.

*nVal*<br/>
Specifica il valore di blocco da impostare.

*chunkType*<br/>
Flag indicano se questo blocco contiene un tipo di testo o una proprietà del tipo di valore. I valori di flag vengono forniti dall'enumerazione CHUNKSTATE.

*locale*<br/>
La lingua e una varietà di lingua associata a un blocco di testo. Impostazioni locali di blocco viene utilizzata da indicizzatori di documenti per eseguire appropriate parole del testo. Se il blocco è di tipo testo né un tipo di valore con tipo di dati VT_BSTR, VT_LPSTR o VT_LPWSTR, questo campo verrà ignorato.

*cwcLenSource*<br/>
La lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore pari a zero indica la corrispondenza di carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che è presente alcun tale corrispondenza diretta.

*cwcStartSource*<br/>
Offset da cui il testo di origine per un blocco derivato viene avviato nel blocco di origine.

*chunkBreakType*<br/>
Tipo di interruzione che separa il blocco precedente dal blocco corrente. I valori provengono dall'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario un codice di errore.

### <a name="remarks"></a>Note

##  <a name="setlongvalue"></a>  CMFCFilterChunkValueImpl::SetLongValue

Impostare la proprietà dalla chiave su un valore LONG.

```
HRESULT SetLongValue(
    REFPROPERTYKEY pkey,
    long lVal,
    CHUNKSTATE chunkType = CHUNK_VALUE,
    LCID locale = 0,
    DWORD cwcLenSource = 0,
    DWORD cwcStartSource = 0,
    CHUNK_BREAKTYPE chunkBreakType = CHUNK_NO_BREAK);
```

### <a name="parameters"></a>Parametri

*pkey*<br/>
Specifica una chiave della proprietà.

*lVal*<br/>
Specifica il valore di blocco da impostare.

*chunkType*<br/>
Flag indicano se questo blocco contiene un tipo di testo o una proprietà del tipo di valore. I valori di flag vengono forniti dall'enumerazione CHUNKSTATE.

*locale*<br/>
La lingua e una varietà di lingua associata a un blocco di testo. Impostazioni locali di blocco viene utilizzata da indicizzatori di documenti per eseguire appropriate parole del testo. Se il blocco è di tipo testo né un tipo di valore con tipo di dati VT_BSTR, VT_LPSTR o VT_LPWSTR, questo campo verrà ignorato.

*cwcLenSource*<br/>
La lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore pari a zero indica la corrispondenza di carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che è presente alcun tale corrispondenza diretta.

*cwcStartSource*<br/>
Offset da cui il testo di origine per un blocco derivato viene avviato nel blocco di origine.

*chunkBreakType*<br/>
Tipo di interruzione che separa il blocco precedente dal blocco corrente. I valori provengono dall'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario un codice di errore.

### <a name="remarks"></a>Note

##  <a name="setsystemtimevalue"></a>  CMFCFilterChunkValueImpl::SetSystemTimeValue

Imposta la proprietà da chiave per un SystemTime.

```
HRESULT SetSystemTimeValue(
    REFPROPERTYKEY pkey,
    const SYSTEMTIME& systemTime,
    CHUNKSTATE chunkType = CHUNK_VALUE,
    LCID locale=0,
    DWORD cwcLenSource=0,
    DWORD cwcStartSource=0,
    CHUNK_BREAKTYPE chunkBreakType=CHUNK_NO_BREAK);
```

### <a name="parameters"></a>Parametri

*pkey*<br/>
Specifica una chiave della proprietà.

*systemTime*<br/>
Specifica il valore di blocco da impostare.

*chunkType*<br/>
Flag indicano se questo blocco contiene un tipo di testo o una proprietà del tipo di valore. I valori di flag vengono forniti dall'enumerazione CHUNKSTATE.

*locale*<br/>
La lingua e una varietà di lingua associata a un blocco di testo. Impostazioni locali di blocco viene utilizzata da indicizzatori di documenti per eseguire appropriate parole del testo. Se il blocco è di tipo testo né un tipo di valore con tipo di dati VT_BSTR, VT_LPSTR o VT_LPWSTR, questo campo verrà ignorato.

*cwcLenSource*<br/>
La lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore pari a zero indica la corrispondenza di carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che è presente alcun tale corrispondenza diretta.

*cwcStartSource*<br/>
Offset da cui il testo di origine per un blocco derivato viene avviato nel blocco di origine.

*chunkBreakType*<br/>
Tipo di interruzione che separa il blocco precedente dal blocco corrente. I valori provengono dall'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario un codice di errore.

### <a name="remarks"></a>Note

##  <a name="settextvalue"></a>  CMFCFilterChunkValueImpl::SetTextValue

Imposta la proprietà da chiave in una stringa Unicode.

```
HRESULT SetTextValue(
    REFPROPERTYKEY pkey,
    LPCTSTR pszValue,
    CHUNKSTATE chunkType = CHUNK_VALUE,
    LCID locale = 0,
    DWORD cwcLenSource = 0,
    DWORD cwcStartSource = 0,
    CHUNK_BREAKTYPE chunkBreakType = CHUNK_NO_BREAK);
```

### <a name="parameters"></a>Parametri

*pkey*<br/>
Specifica una chiave della proprietà.

*pszValue*<br/>
Specifica il valore di blocco da impostare.

*chunkType*<br/>
Flag indicano se questo blocco contiene un tipo di testo o una proprietà del tipo di valore. I valori di flag vengono forniti dall'enumerazione CHUNKSTATE.

*locale*<br/>
La lingua e una varietà di lingua associata a un blocco di testo. Impostazioni locali di blocco viene utilizzata da indicizzatori di documenti per eseguire appropriate parole del testo. Se il blocco è di tipo testo né un tipo di valore con tipo di dati VT_BSTR, VT_LPSTR o VT_LPWSTR, questo campo verrà ignorato.

*cwcLenSource*<br/>
La lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore pari a zero indica la corrispondenza di carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che è presente alcun tale corrispondenza diretta.

*cwcStartSource*<br/>
Offset da cui il testo di origine per un blocco derivato viene avviato nel blocco di origine.

*chunkBreakType*<br/>
Tipo di interruzione che separa il blocco precedente dal blocco corrente. I valori provengono dall'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario un codice di errore.

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
