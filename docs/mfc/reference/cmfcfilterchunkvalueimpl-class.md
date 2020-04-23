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
ms.openlocfilehash: c89d41f7db43d9504bfc22cbf35a59fcceb511e2
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752369"
---
# <a name="cmfcfilterchunkvalueimpl-class"></a>Classe CMFCFilterChunkValueImpl

Si tratta di una classe che semplifica la logica della coppia di valori di tipo chunk e proprietà.

## <a name="syntax"></a>Sintassi

```
class CMFCFilterChunkValueImpl : public ATL::IFilterChunkValue;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCFilterChunkValueImpl::](#_dtorcmfcfilterchunkvalueimpl)|Distrugge l'oggetto.|
|[CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl](#cmfcfilterchunkvalueimpl)|Costruisce l'oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCFilterChunkValueImpl::Clear](#clear)|Cancella il ChunkValue.|
|[CMFCFilterChunkValueImpl::CopyChunk](#copychunk)|Copia questo blocco in una struttura che descrive le caratteristiche di un blocco.|
|[CMFCFilterChunkValueImpl::CopyFrom](#copyfrom)|Inizializza questo valore di blocco dall'altro valore.|
|[CMFCFilterChunkValueImpl::GetChunkGUID](#getchunkguid)|Recupera il GUID del blocco.|
|[CMFCFilterChunkValueImpl::GetChunkPID](#getchunkpid)|Recupera il PID del blocco (ID proprietà).|
|[CMFCFilterChunkValueImpl::GetChunkType](#getchunktype)|Ottiene il tipo di blocco.|
|[CMFCFilterChunkValueImpl::GetString](#getstring)|Recupera il valore stringa.|
|[CMFCFilterChunkValueImpl::GetValue](#getvalue)|Recupera il valore come propvariant allocata.|
|[CMFCFilterChunkValueImpl::GetValueNoAlloc](#getvaluenoalloc)|Restituisce il valore non allocato (valore interno).|
|[CMFCFilterChunkValueImpl::IsValid](#isvalid)|Controlla se il valore di questa proprietà è valido o meno.|
|[CMFCFilterChunkValueImpl::SetBoolValue](#setboolvalue)|Di overload. Imposta la proprietà in base alla chiave su un valore booleano.|
|[CMFCFilterChunkValueImpl::SetDwordValue](#setdwordvalue)|Imposta la proprietà in base alla chiave su un valore DWORD.|
|[CMFCFilterChunkValueImpl::SetFileTimeValue](#setfiletimevalue)|Imposta la proprietà in base alla chiave su un filetime.|
|[CMFCFilterChunkValueImpl::SetInt64Value](#setint64value)|Imposta la proprietà in base alla chiave su un int64.|
|[CMFCFilterChunkValueImpl::SetIntValue](#setintvalue)|Imposta la proprietà in base alla chiave su un int.|
|[CMFCFilterChunkValueImpl::SetLongValue](#setlongvalue)|Imposta la proprietà in base alla chiave su un oggetto LONG.|
|[CMFCFilterChunkValueImpl::SetSystemTimeValue](#setsystemtimevalue)|Imposta la proprietà in base alla chiave su un SystemTime.|
|[CMFCFilterChunkValueImpl::SetTextValue](#settextvalue)|Imposta la proprietà in base alla chiave su una stringa Unicode.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCFilterChunkValueImpl::SetChunk](#setchunk)|Funzione di supporto che imposta le proprietà comuni del blocco.|

## <a name="remarks"></a>Osservazioni

Per utilizzare, è sufficiente creare un CMFCFilterChunkValueImpl classe del tipo corretto

Esempio:

CMFCFilterChunkValueImpl blocco;

hr - chunk. SetBoolValue(PKEY_IsAttachment, true);

o

hr - chunk. SetFileTimeValue(PKEY_ItemDate, ftLastModified);

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ATL::IFilterChunkValue`

[CMFCFilterChunkValueImpl](../../mfc/reference/cmfcfilterchunkvalueimpl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cmfcfilterchunkvalueimplclear"></a><a name="clear"></a>CMFCFilterChunkValueImpl::Clear

Cancella il ChunkValue.

```cpp
void Clear();
```

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplcmfcfilterchunkvalueimpl"></a><a name="cmfcfilterchunkvalueimpl"></a>CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl

Costruisce l'oggetto.

```
CMFCFilterChunkValueImpl();
```

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplcmfcfilterchunkvalueimpl"></a><a name="_dtorcmfcfilterchunkvalueimpl"></a>CMFCFilterChunkValueImpl::

Distrugge l'oggetto.

```
virtual ~CMFCFilterChunkValueImpl();
```

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplcopychunk"></a><a name="copychunk"></a>CMFCFilterChunkValueImpl::CopyChunk

Copia questo blocco in una struttura che descrive le caratteristiche di un blocco.

```
HRESULT CopyChunk(STAT_CHUNK* pStatChunk);
```

### <a name="parameters"></a>Parametri

*pStatChunk (intagnato)*<br/>
Puntatore al valore di destinazione che descrive le caratteristiche del blocco.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplcopyfrom"></a><a name="copyfrom"></a>CMFCFilterChunkValueImpl::CopyFrom

Inizializza questo valore di blocco dall'altro valore.

```cpp
void CopyFrom (IFilterChunkValue* pValue);
```

### <a name="parameters"></a>Parametri

*pValue*<br/>
Specifica il valore di origine da cui copiare.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplgetchunkguid"></a><a name="getchunkguid"></a>CMFCFilterChunkValueImpl::GetChunkGUID

Recupera il GUID del blocco.

```
REFGUID GetChunkGUID() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento a un GUID che identifica il blocco.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplgetchunkpid"></a><a name="getchunkpid"></a>CMFCFilterChunkValueImpl::GetChunkPID

Recupera il PID del blocco (ID proprietà).

```
DWORD GetChunkPID() const;
```

### <a name="return-value"></a>Valore restituito

Valore DWORD contenente l'ID della proprietà.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplgetchunktype"></a><a name="getchunktype"></a>CMFCFilterChunkValueImpl::GetChunkType

Recupera il tipo di blocco.

```
CHUNKSTATE GetChunkType() const;
```

### <a name="return-value"></a>Valore restituito

Valore enumerato CHUNKSTATE, che specifica se il blocco corrente è una proprietà di tipo testo o una proprietà di tipo valore.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplgetstring"></a><a name="getstring"></a>CMFCFilterChunkValueImpl::GetString

Recupera il valore stringa.

```
CString &GetString();
```

### <a name="return-value"></a>Valore restituito

Stringa contenente il valore del blocco.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplgetvalue"></a><a name="getvalue"></a>CMFCFilterChunkValueImpl::GetValue

Recupera il valore come propvariant allocata.

```
HRESULT GetValue(PROPVARIANT** ppPropVariant);
```

### <a name="parameters"></a>Parametri

*ppPropVariant*<br/>
Quando la funzione restituisce, questo parametro contiene il valore del blocco.

### <a name="return-value"></a>Valore restituito

S_OK se PROPVARIANT è stato allocato correttamente e il valore del blocco è stato copiato correttamente in *ppPropVariant*; in caso contrario, un codice di errore.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplgetvaluenoalloc"></a><a name="getvaluenoalloc"></a>CMFCFilterChunkValueImpl::GetValueNoAlloc

Restituisce il valore non allocato (valore interno).

```
PROPVARIANT GetValueNoAlloc ();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore del blocco corrente.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplisvalid"></a><a name="isvalid"></a>CMFCFilterChunkValueImpl::IsValid

Controlla se il valore di questa proprietà è valido o meno.

```
BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il valore del blocco corrente è valido. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplsetboolvalue"></a><a name="setboolvalue"></a>CMFCFilterChunkValueImpl::SetBoolValue

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
Specifica una chiave di proprietà.

*bVal*<br/>
Specifica il valore del blocco da impostare.

*chunkType (Tipo di blocco)*<br/>
I flag indicano se il blocco contiene una proprietà di tipo text o value. I valori dei flag vengono ricavati dall'enumerazione CHUNKSTATE.

*locale*<br/>
Lingua e sottolingua associati a una porzione di testo. Le impostazioni locali di Chunk vengono utilizzate dagli indicizzatori di documenti per eseguire l'interruzione corretta del testo. Se il blocco non è né text-type né value-type con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.

*CwcLenSource (informazioni in due)*<br/>
Lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica la corrispondenza carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che tale corrispondenza diretta non esiste.

*cwcStartSource (origine inizio)*<br/>
Offset da cui inizia il testo di origine per un blocco derivato nel blocco di origine.

*chunkBreakType (tipo di chunkBreakType)*<br/>
Tipo di interruzione che separa il blocco precedente dal blocco corrente. I valori provengono dall'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplsetchunk"></a><a name="setchunk"></a>CMFCFilterChunkValueImpl::SetChunk

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
Specifica una chiave di proprietà.

*chunkType (Tipo di blocco)*<br/>
I flag indicano se il blocco contiene una proprietà di tipo text o value. I valori dei flag vengono ricavati dall'enumerazione CHUNKSTATE.

*locale*<br/>
Lingua e sottolingua associati a una porzione di testo. Le impostazioni locali di Chunk vengono utilizzate dagli indicizzatori di documenti per eseguire l'interruzione corretta del testo. Se il blocco non è né text-type né value-type con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.

*CwcLenSource (informazioni in due)*<br/>
Lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica la corrispondenza carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che tale corrispondenza diretta non esiste.

*cwcStartSource (origine inizio)*<br/>
Offset da cui inizia il testo di origine per un blocco derivato nel blocco di origine.

*chunkBreakType (tipo di chunkBreakType)*<br/>
Tipo di interruzione che separa il blocco precedente dal blocco corrente. I valori provengono dall'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, il codice di errore.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplsetdwordvalue"></a><a name="setdwordvalue"></a>CMFCFilterChunkValueImpl::SetDwordValue

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
Specifica una chiave di proprietà.

*dwVal*<br/>
Specifica il valore del blocco da impostare.

*chunkType (Tipo di blocco)*<br/>
I flag indicano se il blocco contiene una proprietà di tipo text o value. I valori dei flag vengono ricavati dall'enumerazione CHUNKSTATE.

*locale*<br/>
Lingua e sottolingua associati a una porzione di testo. Le impostazioni locali di Chunk vengono utilizzate dagli indicizzatori di documenti per eseguire l'interruzione corretta del testo. Se il blocco non è né text-type né value-type con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.

*CwcLenSource (informazioni in due)*<br/>
Lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica la corrispondenza carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che tale corrispondenza diretta non esiste.

*cwcStartSource (origine inizio)*<br/>
Offset da cui inizia il testo di origine per un blocco derivato nel blocco di origine.

*chunkBreakType (tipo di chunkBreakType)*<br/>
Tipo di interruzione che separa il blocco precedente dal blocco corrente. I valori provengono dall'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplsetfiletimevalue"></a><a name="setfiletimevalue"></a>CMFCFilterChunkValueImpl::SetFileTimeValue

Impostare la proprietà in base alla chiave su un filetime.

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
Specifica una chiave di proprietà.

*dtVal*<br/>
Specifica il valore del blocco da impostare.

*chunkType (Tipo di blocco)*<br/>
I flag indicano se il blocco contiene una proprietà di tipo text o value. I valori dei flag vengono ricavati dall'enumerazione CHUNKSTATE.

*locale*<br/>
Lingua e sottolingua associati a una porzione di testo. Le impostazioni locali di Chunk vengono utilizzate dagli indicizzatori di documenti per eseguire l'interruzione corretta del testo. Se il blocco non è né text-type né value-type con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.

*CwcLenSource (informazioni in due)*<br/>
Lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica la corrispondenza carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che tale corrispondenza diretta non esiste.

*cwcStartSource (origine inizio)*<br/>
Offset da cui inizia il testo di origine per un blocco derivato nel blocco di origine.

*chunkBreakType (tipo di chunkBreakType)*<br/>
Tipo di interruzione che separa il blocco precedente dal blocco corrente. I valori provengono dall'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplsetint64value"></a><a name="setint64value"></a>CMFCFilterChunkValueImpl::SetInt64Value

Impostare la proprietà in base alla chiave su un int64.

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
Specifica una chiave di proprietà.

*nVal (invalore)*<br/>
Specifica il valore del blocco da impostare.

*chunkType (Tipo di blocco)*<br/>
I flag indicano se il blocco contiene una proprietà di tipo text o value. I valori dei flag vengono ricavati dall'enumerazione CHUNKSTATE.

*locale*<br/>
Lingua e sottolingua associati a una porzione di testo. Le impostazioni locali di Chunk vengono utilizzate dagli indicizzatori di documenti per eseguire l'interruzione corretta del testo. Se il blocco non è né text-type né value-type con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.

*CwcLenSource (informazioni in due)*<br/>
Lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica la corrispondenza carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che tale corrispondenza diretta non esiste.

*cwcStartSource (origine inizio)*<br/>
Offset da cui inizia il testo di origine per un blocco derivato nel blocco di origine.

*chunkBreakType (tipo di chunkBreakType)*<br/>
Tipo di interruzione che separa il blocco precedente dal blocco corrente. I valori provengono dall'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplsetintvalue"></a><a name="setintvalue"></a>CMFCFilterChunkValueImpl::SetIntValue

Impostare la proprietà in base alla chiave su un int.

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
Specifica una chiave di proprietà.

*nVal (invalore)*<br/>
Specifica il valore del blocco da impostare.

*chunkType (Tipo di blocco)*<br/>
I flag indicano se il blocco contiene una proprietà di tipo text o value. I valori dei flag vengono ricavati dall'enumerazione CHUNKSTATE.

*locale*<br/>
Lingua e sottolingua associati a una porzione di testo. Le impostazioni locali di Chunk vengono utilizzate dagli indicizzatori di documenti per eseguire l'interruzione corretta del testo. Se il blocco non è né text-type né value-type con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.

*CwcLenSource (informazioni in due)*<br/>
Lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica la corrispondenza carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che tale corrispondenza diretta non esiste.

*cwcStartSource (origine inizio)*<br/>
Offset da cui inizia il testo di origine per un blocco derivato nel blocco di origine.

*chunkBreakType (tipo di chunkBreakType)*<br/>
Tipo di interruzione che separa il blocco precedente dal blocco corrente. I valori provengono dall'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplsetlongvalue"></a><a name="setlongvalue"></a>CMFCFilterChunkValueImpl::SetLongValue

Impostare la proprietà in base alla chiave su un oggetto LONG.

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
Specifica una chiave di proprietà.

*LVal*<br/>
Specifica il valore del blocco da impostare.

*chunkType (Tipo di blocco)*<br/>
I flag indicano se il blocco contiene una proprietà di tipo text o value. I valori dei flag vengono ricavati dall'enumerazione CHUNKSTATE.

*locale*<br/>
Lingua e sottolingua associati a una porzione di testo. Le impostazioni locali di Chunk vengono utilizzate dagli indicizzatori di documenti per eseguire l'interruzione corretta del testo. Se il blocco non è né text-type né value-type con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.

*CwcLenSource (informazioni in due)*<br/>
Lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica la corrispondenza carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che tale corrispondenza diretta non esiste.

*cwcStartSource (origine inizio)*<br/>
Offset da cui inizia il testo di origine per un blocco derivato nel blocco di origine.

*chunkBreakType (tipo di chunkBreakType)*<br/>
Tipo di interruzione che separa il blocco precedente dal blocco corrente. I valori provengono dall'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplsetsystemtimevalue"></a><a name="setsystemtimevalue"></a>CMFCFilterChunkValueImpl::SetSystemTimeValue

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
Specifica una chiave di proprietà.

*Systemtime*<br/>
Specifica il valore del blocco da impostare.

*chunkType (Tipo di blocco)*<br/>
I flag indicano se il blocco contiene una proprietà di tipo text o value. I valori dei flag vengono ricavati dall'enumerazione CHUNKSTATE.

*locale*<br/>
Lingua e sottolingua associati a una porzione di testo. Le impostazioni locali di Chunk vengono utilizzate dagli indicizzatori di documenti per eseguire l'interruzione corretta del testo. Se il blocco non è né text-type né value-type con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.

*CwcLenSource (informazioni in due)*<br/>
Lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica la corrispondenza carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che tale corrispondenza diretta non esiste.

*cwcStartSource (origine inizio)*<br/>
Offset da cui inizia il testo di origine per un blocco derivato nel blocco di origine.

*chunkBreakType (tipo di chunkBreakType)*<br/>
Tipo di interruzione che separa il blocco precedente dal blocco corrente. I valori provengono dall'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfilterchunkvalueimplsettextvalue"></a><a name="settextvalue"></a>CMFCFilterChunkValueImpl::SetTextValue

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
Specifica una chiave di proprietà.

*pszValore*<br/>
Specifica il valore del blocco da impostare.

*chunkType (Tipo di blocco)*<br/>
I flag indicano se il blocco contiene una proprietà di tipo text o value. I valori dei flag vengono ricavati dall'enumerazione CHUNKSTATE.

*locale*<br/>
Lingua e sottolingua associati a una porzione di testo. Le impostazioni locali di Chunk vengono utilizzate dagli indicizzatori di documenti per eseguire l'interruzione corretta del testo. Se il blocco non è né text-type né value-type con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.

*CwcLenSource (informazioni in due)*<br/>
Lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica la corrispondenza carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che tale corrispondenza diretta non esiste.

*cwcStartSource (origine inizio)*<br/>
Offset da cui inizia il testo di origine per un blocco derivato nel blocco di origine.

*chunkBreakType (tipo di chunkBreakType)*<br/>
Tipo di interruzione che separa il blocco precedente dal blocco corrente. I valori provengono dall'enumerazione CHUNK_BREAKTYPE.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
