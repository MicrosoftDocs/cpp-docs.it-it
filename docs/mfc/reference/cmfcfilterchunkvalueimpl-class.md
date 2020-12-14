---
description: 'Altre informazioni su: classe CMFCFilterChunkValueImpl'
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
ms.openlocfilehash: f2db7fdf6d6d24cb906b3190d34310e1f6724194
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97265467"
---
# <a name="cmfcfilterchunkvalueimpl-class"></a>Classe CMFCFilterChunkValueImpl

Si tratta di una classe che semplifica la logica del blocco e della coppia di valori di proprietà.

## <a name="syntax"></a>Sintassi

```
class CMFCFilterChunkValueImpl : public ATL::IFilterChunkValue;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCFilterChunkValueImpl:: ~ CMFCFilterChunkValueImpl](#_dtorcmfcfilterchunkvalueimpl)|Distrugge l'oggetto.|
|[CMFCFilterChunkValueImpl:: CMFCFilterChunkValueImpl](#cmfcfilterchunkvalueimpl)|Costruisce l'oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCFilterChunkValueImpl:: Clear](#clear)|Cancella ChunkValue.|
|[CMFCFilterChunkValueImpl:: Copychunk esegue](#copychunk)|Copia questo blocco in una struttura che descrive le caratteristiche di un blocco.|
|[CMFCFilterChunkValueImpl:: CopyFrom](#copyfrom)|Inizializza questo valore del blocco dall'altro valore.|
|[CMFCFilterChunkValueImpl:: GetChunkGUID](#getchunkguid)|Recupera il GUID del blocco.|
|[CMFCFilterChunkValueImpl:: GetChunkPID](#getchunkpid)|Recupera il PID del blocco (ID della proprietà).|
|[CMFCFilterChunkValueImpl:: GetChunkType](#getchunktype)|Ottiene il tipo di blocco.|
|[CMFCFilterChunkValueImpl:: GetString](#getstring)|Recupera il valore stringa.|
|[CMFCFilterChunkValueImpl:: GetValue](#getvalue)|Recupera il valore come PROPVARIANT allocato.|
|[CMFCFilterChunkValueImpl:: GetValueNoAlloc](#getvaluenoalloc)|Restituisce un valore non allocato (valore interno).|
|[CMFCFilterChunkValueImpl:: IsValid](#isvalid)|Verifica se il valore di questa proprietà è valido o meno.|
|[CMFCFilterChunkValueImpl:: SetBoolValue](#setboolvalue)|Di overload. Imposta la proprietà in base alla chiave su un valore booleano.|
|[CMFCFilterChunkValueImpl:: SetDwordValue](#setdwordvalue)|Imposta la proprietà in base alla chiave su un valore DWORD.|
|[CMFCFilterChunkValueImpl:: SetFileTimeValue](#setfiletimevalue)|Imposta la proprietà in base alla chiave su un oggetto FILETIME.|
|[CMFCFilterChunkValueImpl:: SetInt64Value](#setint64value)|Imposta la proprietà in base alla chiave su un Int64.|
|[CMFCFilterChunkValueImpl:: SetIntValue](#setintvalue)|Imposta la proprietà in base alla chiave su un valore int.|
|[CMFCFilterChunkValueImpl:: SetLongValue](#setlongvalue)|Imposta la proprietà in base alla chiave su LONG.|
|[CMFCFilterChunkValueImpl:: SetSystemTimeValue](#setsystemtimevalue)|Imposta la proprietà in base alla chiave su un SystemTime.|
|[CMFCFilterChunkValueImpl:: SetTextValue](#settextvalue)|Imposta la proprietà in base alla chiave su una stringa Unicode.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CMFCFilterChunkValueImpl:: sechunk](#setchunk)|Funzione di supporto che imposta le proprietà comuni del blocco.|

## <a name="remarks"></a>Commenti

Per usare, è sufficiente creare una classe CMFCFilterChunkValueImpl di tipo corretto

Esempio:

Blocco CMFCFilterChunkValueImpl;

HR = blocco. SetBoolValue (PKEY_IsAttachment, true);

oppure

HR = blocco. SetFileTimeValue (PKEY_ItemDate, ftLastModified);

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ATL::IFilterChunkValue`

[CMFCFilterChunkValueImpl](../../mfc/reference/cmfcfilterchunkvalueimpl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cmfcfilterchunkvalueimplclear"></a><a name="clear"></a> CMFCFilterChunkValueImpl:: Clear

Cancella ChunkValue.

```cpp
void Clear();
```

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplcmfcfilterchunkvalueimpl"></a><a name="cmfcfilterchunkvalueimpl"></a> CMFCFilterChunkValueImpl:: CMFCFilterChunkValueImpl

Costruisce l'oggetto.

```
CMFCFilterChunkValueImpl();
```

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplcmfcfilterchunkvalueimpl"></a><a name="_dtorcmfcfilterchunkvalueimpl"></a> CMFCFilterChunkValueImpl:: ~ CMFCFilterChunkValueImpl

Distrugge l'oggetto.

```
virtual ~CMFCFilterChunkValueImpl();
```

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplcopychunk"></a><a name="copychunk"></a> CMFCFilterChunkValueImpl:: Copychunk esegue

Copia questo blocco in una struttura che descrive le caratteristiche di un blocco.

```
HRESULT CopyChunk(STAT_CHUNK* pStatChunk);
```

### <a name="parameters"></a>Parametri

*pStatChunk*<br/>
Puntatore al valore di destinazione che descrive le caratteristiche del blocco.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplcopyfrom"></a><a name="copyfrom"></a> CMFCFilterChunkValueImpl:: CopyFrom

Inizializza questo valore del blocco dall'altro valore.

```cpp
void CopyFrom (IFilterChunkValue* pValue);
```

### <a name="parameters"></a>Parametri

*pValue*<br/>
Specifica il valore di origine da cui eseguire la copia.

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplgetchunkguid"></a><a name="getchunkguid"></a> CMFCFilterChunkValueImpl:: GetChunkGUID

Recupera il GUID del blocco.

```
REFGUID GetChunkGUID() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento a un GUID che identifica il blocco.

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplgetchunkpid"></a><a name="getchunkpid"></a> CMFCFilterChunkValueImpl:: GetChunkPID

Recupera il PID del blocco (ID della proprietà).

```
DWORD GetChunkPID() const;
```

### <a name="return-value"></a>Valore restituito

Valore DWORD contenente l'ID della proprietà.

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplgetchunktype"></a><a name="getchunktype"></a> CMFCFilterChunkValueImpl:: GetChunkType

Recupera il tipo di blocco.

```
CHUNKSTATE GetChunkType() const;
```

### <a name="return-value"></a>Valore restituito

Valore enumerato di CHUNKSTATE, che specifica se il blocco corrente è una proprietà di tipo testo o una proprietà di tipo valore.

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplgetstring"></a><a name="getstring"></a> CMFCFilterChunkValueImpl:: GetString

Recupera il valore stringa.

```
CString &GetString();
```

### <a name="return-value"></a>Valore restituito

Stringa che contiene il valore del blocco.

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplgetvalue"></a><a name="getvalue"></a> CMFCFilterChunkValueImpl:: GetValue

Recupera il valore come PROPVARIANT allocato.

```
HRESULT GetValue(PROPVARIANT** ppPropVariant);
```

### <a name="parameters"></a>Parametri

*ppPropVariant*<br/>
Quando la funzione restituisce, questo parametro contiene il valore del blocco.

### <a name="return-value"></a>Valore restituito

S_OK se PROPVARIANT è stato allocato correttamente e il valore del blocco è stato copiato correttamente in *ppPropVariant*; in caso contrario, un codice di errore.

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplgetvaluenoalloc"></a><a name="getvaluenoalloc"></a> CMFCFilterChunkValueImpl:: GetValueNoAlloc

Restituisce il valore non allocato (valore interno).

```
PROPVARIANT GetValueNoAlloc ();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore del blocco corrente.

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplisvalid"></a><a name="isvalid"></a> CMFCFilterChunkValueImpl:: IsValid

Verifica se il valore di questa proprietà è valido o meno.

```
BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il valore del blocco corrente è valido. in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplsetboolvalue"></a><a name="setboolvalue"></a> CMFCFilterChunkValueImpl:: SetBoolValue

Di overload. Imposta la proprietà in base alla chiave su un valore booleano.

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
Specifica il valore del blocco da impostare.

*chunkType*<br/>
Flag che indicano se il blocco contiene una proprietà di tipo testo o valore. I valori dei flag vengono ricavati dall'enumerazione CHUNKSTATE.

*locale*<br/>
Lingua e sottolingua associate a un blocco di testo. Le impostazioni locali del blocco vengono usate dagli indicizzatori dei documenti per eseguire un'errata corrispondenza della parola del testo. Se il blocco non è di tipo testo né un tipo di valore con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.

*cwcLenSource*<br/>
Lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica una corrispondenza carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che non esiste alcuna corrispondenza diretta.

*cwcStartSource*<br/>
Offset da cui viene avviato il testo di origine di un blocco derivato nel blocco di origine.

*chunkBreakType*<br/>
Tipo di interruzioni che separa il blocco precedente dal blocco corrente. I valori sono compresi nell'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplsetchunk"></a><a name="setchunk"></a> CMFCFilterChunkValueImpl:: sechunk

Funzione di supporto che imposta le proprietà comuni del blocco.

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
Flag che indicano se il blocco contiene una proprietà di tipo testo o valore. I valori dei flag vengono ricavati dall'enumerazione CHUNKSTATE.

*locale*<br/>
Lingua e sottolingua associate a un blocco di testo. Le impostazioni locali del blocco vengono usate dagli indicizzatori dei documenti per eseguire un'errata corrispondenza della parola del testo. Se il blocco non è di tipo testo né un tipo di valore con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.

*cwcLenSource*<br/>
Lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica una corrispondenza carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che non esiste alcuna corrispondenza diretta.

*cwcStartSource*<br/>
Offset da cui viene avviato il testo di origine di un blocco derivato nel blocco di origine.

*chunkBreakType*<br/>
Tipo di interruzioni che separa il blocco precedente dal blocco corrente. I valori sono compresi nell'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, codice di errore.

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplsetdwordvalue"></a><a name="setdwordvalue"></a> CMFCFilterChunkValueImpl:: SetDwordValue

Impostare la proprietà in base alla chiave su un valore DWORD.

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
Specifica il valore del blocco da impostare.

*chunkType*<br/>
Flag che indicano se il blocco contiene una proprietà di tipo testo o valore. I valori dei flag vengono ricavati dall'enumerazione CHUNKSTATE.

*locale*<br/>
Lingua e sottolingua associate a un blocco di testo. Le impostazioni locali del blocco vengono usate dagli indicizzatori dei documenti per eseguire un'errata corrispondenza della parola del testo. Se il blocco non è di tipo testo né un tipo di valore con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.

*cwcLenSource*<br/>
Lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica una corrispondenza carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che non esiste alcuna corrispondenza diretta.

*cwcStartSource*<br/>
Offset da cui viene avviato il testo di origine di un blocco derivato nel blocco di origine.

*chunkBreakType*<br/>
Tipo di interruzioni che separa il blocco precedente dal blocco corrente. I valori sono compresi nell'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplsetfiletimevalue"></a><a name="setfiletimevalue"></a> CMFCFilterChunkValueImpl:: SetFileTimeValue

Impostare la proprietà in base alla chiave su un oggetto FILETIME.

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
Specifica il valore del blocco da impostare.

*chunkType*<br/>
Flag che indicano se il blocco contiene una proprietà di tipo testo o valore. I valori dei flag vengono ricavati dall'enumerazione CHUNKSTATE.

*locale*<br/>
Lingua e sottolingua associate a un blocco di testo. Le impostazioni locali del blocco vengono usate dagli indicizzatori dei documenti per eseguire un'errata corrispondenza della parola del testo. Se il blocco non è di tipo testo né un tipo di valore con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.

*cwcLenSource*<br/>
Lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica una corrispondenza carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che non esiste alcuna corrispondenza diretta.

*cwcStartSource*<br/>
Offset da cui viene avviato il testo di origine di un blocco derivato nel blocco di origine.

*chunkBreakType*<br/>
Tipo di interruzioni che separa il blocco precedente dal blocco corrente. I valori sono compresi nell'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplsetint64value"></a><a name="setint64value"></a> CMFCFilterChunkValueImpl:: SetInt64Value

Impostare la proprietà in base alla chiave su un Int64.

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
Specifica il valore del blocco da impostare.

*chunkType*<br/>
Flag che indicano se il blocco contiene una proprietà di tipo testo o valore. I valori dei flag vengono ricavati dall'enumerazione CHUNKSTATE.

*locale*<br/>
Lingua e sottolingua associate a un blocco di testo. Le impostazioni locali del blocco vengono usate dagli indicizzatori dei documenti per eseguire un'errata corrispondenza della parola del testo. Se il blocco non è di tipo testo né un tipo di valore con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.

*cwcLenSource*<br/>
Lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica una corrispondenza carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che non esiste alcuna corrispondenza diretta.

*cwcStartSource*<br/>
Offset da cui viene avviato il testo di origine di un blocco derivato nel blocco di origine.

*chunkBreakType*<br/>
Tipo di interruzioni che separa il blocco precedente dal blocco corrente. I valori sono compresi nell'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplsetintvalue"></a><a name="setintvalue"></a> CMFCFilterChunkValueImpl:: SetIntValue

Impostare la proprietà in base alla chiave su un valore int.

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
Specifica il valore del blocco da impostare.

*chunkType*<br/>
Flag che indicano se il blocco contiene una proprietà di tipo testo o valore. I valori dei flag vengono ricavati dall'enumerazione CHUNKSTATE.

*locale*<br/>
Lingua e sottolingua associate a un blocco di testo. Le impostazioni locali del blocco vengono usate dagli indicizzatori dei documenti per eseguire un'errata corrispondenza della parola del testo. Se il blocco non è di tipo testo né un tipo di valore con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.

*cwcLenSource*<br/>
Lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica una corrispondenza carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che non esiste alcuna corrispondenza diretta.

*cwcStartSource*<br/>
Offset da cui viene avviato il testo di origine di un blocco derivato nel blocco di origine.

*chunkBreakType*<br/>
Tipo di interruzioni che separa il blocco precedente dal blocco corrente. I valori sono compresi nell'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplsetlongvalue"></a><a name="setlongvalue"></a> CMFCFilterChunkValueImpl:: SetLongValue

Impostare la proprietà in base alla chiave su LONG.

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
Specifica il valore del blocco da impostare.

*chunkType*<br/>
Flag che indicano se il blocco contiene una proprietà di tipo testo o valore. I valori dei flag vengono ricavati dall'enumerazione CHUNKSTATE.

*locale*<br/>
Lingua e sottolingua associate a un blocco di testo. Le impostazioni locali del blocco vengono usate dagli indicizzatori dei documenti per eseguire un'errata corrispondenza della parola del testo. Se il blocco non è di tipo testo né un tipo di valore con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.

*cwcLenSource*<br/>
Lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica una corrispondenza carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che non esiste alcuna corrispondenza diretta.

*cwcStartSource*<br/>
Offset da cui viene avviato il testo di origine di un blocco derivato nel blocco di origine.

*chunkBreakType*<br/>
Tipo di interruzioni che separa il blocco precedente dal blocco corrente. I valori sono compresi nell'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplsetsystemtimevalue"></a><a name="setsystemtimevalue"></a> CMFCFilterChunkValueImpl:: SetSystemTimeValue

Imposta la proprietà in base alla chiave su un SystemTime.

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
Specifica il valore del blocco da impostare.

*chunkType*<br/>
Flag che indicano se il blocco contiene una proprietà di tipo testo o valore. I valori dei flag vengono ricavati dall'enumerazione CHUNKSTATE.

*locale*<br/>
Lingua e sottolingua associate a un blocco di testo. Le impostazioni locali del blocco vengono usate dagli indicizzatori dei documenti per eseguire un'errata corrispondenza della parola del testo. Se il blocco non è di tipo testo né un tipo di valore con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.

*cwcLenSource*<br/>
Lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica una corrispondenza carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che non esiste alcuna corrispondenza diretta.

*cwcStartSource*<br/>
Offset da cui viene avviato il testo di origine di un blocco derivato nel blocco di origine.

*chunkBreakType*<br/>
Tipo di interruzioni che separa il blocco precedente dal blocco corrente. I valori sono compresi nell'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Commenti

## <a name="cmfcfilterchunkvalueimplsettextvalue"></a><a name="settextvalue"></a> CMFCFilterChunkValueImpl:: SetTextValue

Imposta la proprietà in base alla chiave su una stringa Unicode.

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
Specifica il valore del blocco da impostare.

*chunkType*<br/>
Flag che indicano se il blocco contiene una proprietà di tipo testo o valore. I valori dei flag vengono ricavati dall'enumerazione CHUNKSTATE.

*locale*<br/>
Lingua e sottolingua associate a un blocco di testo. Le impostazioni locali del blocco vengono usate dagli indicizzatori dei documenti per eseguire un'errata corrispondenza della parola del testo. Se il blocco non è di tipo testo né un tipo di valore con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.

*cwcLenSource*<br/>
Lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica una corrispondenza carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che non esiste alcuna corrispondenza diretta.

*cwcStartSource*<br/>
Offset da cui viene avviato il testo di origine di un blocco derivato nel blocco di origine.

*chunkBreakType*<br/>
Tipo di interruzioni che separa il blocco precedente dal blocco corrente. I valori sono compresi nell'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
