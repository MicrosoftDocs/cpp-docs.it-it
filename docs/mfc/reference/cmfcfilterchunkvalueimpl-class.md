---
title: Classe CMFCFilterChunkValueImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CMFCFilterChunkValueImpl class
ms.assetid: 3c833f23-5b88-4d08-9e09-ca6a8aec88bf
caps.latest.revision: 25
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 8de3cba19a60b8022df96a9edafd13677fa3fecb
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcfilterchunkvalueimpl-class"></a>Classe CMFCFilterChunkValueImpl
Si tratta di una classe che semplifica la logica di coppia valore blocchi e proprietà.  
  
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
|[CMFCFilterChunkValueImpl::CopyChunk](#copychunk)|Copia il blocco a una struttura che descrivono le caratteristiche di un blocco.|  
|[CMFCFilterChunkValueImpl::CopyFrom](#copyfrom)|Inizializza questo valore di blocco da altro valore.|  
|[CMFCFilterChunkValueImpl::GetChunkGUID](#getchunkguid)|Recupera il GUID di blocco.|  
|[CMFCFilterChunkValueImpl::GetChunkPID](#getchunkpid)|Recupera il blocco PID (ID di proprietà).|  
|[CMFCFilterChunkValueImpl::GetChunkType](#getchunktype)|Ottiene blocco tipo.|  
|[CMFCFilterChunkValueImpl::GetString](#getstring)|Recupera il valore stringa.|  
|[CMFCFilterChunkValueImpl::GetValue](#getvalue)|Recupera il valore come un propvariant allocato.|  
|[CMFCFilterChunkValueImpl::GetValueNoAlloc](#getvaluenoalloc)|Valore restituisce non allocato (valore interno).|  
|[CMFCFilterChunkValueImpl::IsValid](#isvalid)|Controlla se il valore della proprietà è valido o meno.|  
|[CMFCFilterChunkValueImpl::SetBoolValue](#setboolvalue)|Di overload. Imposta la proprietà chiave in un valore booleano.|  
|[CMFCFilterChunkValueImpl::SetDwordValue](#setdwordvalue)|Imposta la proprietà chiave a un valore DWORD.|  
|[CMFCFilterChunkValueImpl::SetFileTimeValue](#setfiletimevalue)|Imposta la proprietà chiave in un filetime.|  
|[CMFCFilterChunkValueImpl::SetInt64Value](#setint64value)|Imposta la proprietà chiave in un int64.|  
|[CMFCFilterChunkValueImpl::SetIntValue](#setintvalue)|Imposta la proprietà chiave per un tipo int.|  
|[CMFCFilterChunkValueImpl::SetLongValue](#setlongvalue)|Imposta la proprietà chiave su un valore LONG.|  
|[CMFCFilterChunkValueImpl::SetSystemTimeValue](#setsystemtimevalue)|Imposta la proprietà chiave per un oggetto SystemTime.|  
|[CMFCFilterChunkValueImpl::SetTextValue](#settextvalue)|Imposta la proprietà chiave in una stringa Unicode.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCFilterChunkValueImpl::SetChunk](#setchunk)|Una funzione di supporto che imposta le proprietà comuni del blocco.|  
  
## <a name="remarks"></a>Note  
 Per utilizzare, sufficiente creare una classe CMFCFilterChunkValueImpl del tipo appropriato  
  
 Esempio:  
  
 Blocco CMFCFilterChunkValueImpl;  
  
 hr = blocco. SetBoolValue(PKEY_IsAttachment, true);  
  
 o  
  
 hr = blocco. SetFileTimeValue (PKEY_ItemDate, ftLastModified);  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ATL::IFilterChunkValue`  
  
 [CMFCFilterChunkValueImpl](../../mfc/reference/cmfcfilterchunkvalueimpl-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="clear"></a>CMFCFilterChunkValueImpl::Clear  
 Cancella il ChunkValue.  
  
```  
void Clear();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="cmfcfilterchunkvalueimpl"></a>CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl  
 Costruisce l'oggetto.  
  
```  
CMFCFilterChunkValueImpl();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="_dtorcmfcfilterchunkvalueimpl"></a>CMFCFilterChunkValueImpl:: ~ CMFCFilterChunkValueImpl  
 Distrugge l'oggetto.  
  
```  
virtual ~CMFCFilterChunkValueImpl();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="copychunk"></a>CMFCFilterChunkValueImpl::CopyChunk  
 Copia il blocco a una struttura che descrivono le caratteristiche di un blocco.  
  
```  
HRESULT CopyChunk(STAT_CHUNK* pStatChunk);
```  
  
### <a name="parameters"></a>Parametri  
 `pStatChunk`  
 Puntatore al valore di destinazione che descrivono le caratteristiche del blocco.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario un codice di errore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="copyfrom"></a>CMFCFilterChunkValueImpl::CopyFrom  
 Inizializza questo valore di blocco da altro valore.  
  
```  
void CopyFrom (IFilterChunkValue* pValue);
```  
  
### <a name="parameters"></a>Parametri  
 `pValue`  
 Specifica il valore di origine da copiare.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getchunkguid"></a>CMFCFilterChunkValueImpl::GetChunkGUID  
 Recupera il GUID di blocco.  
  
```  
REFGUID GetChunkGUID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a un GUID che identifica il blocco.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getchunkpid"></a>CMFCFilterChunkValueImpl::GetChunkPID  
 Recupera il blocco PID (ID di proprietà).  
  
```  
DWORD GetChunkPID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore DWORD contenente l'ID di proprietà.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getchunktype"></a>CMFCFilterChunkValueImpl::GetChunkType  
 Recupera il tipo di blocco.  
  
```  
CHUNKSTATE GetChunkType() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore CHUNKSTATE enumerato che specifica se il blocco corrente è una proprietà di tipo testo o una proprietà del tipo di valore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getstring"></a>CMFCFilterChunkValueImpl::GetString  
 Recupera il valore di stringa.  
  
```  
CString &GetString();
```  
  
### <a name="return-value"></a>Valore restituito  
 Stringa contenente il valore di blocco.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getvalue"></a>CMFCFilterChunkValueImpl::GetValue  
 Recupera il valore come un propvariant allocato.  
  
```  
HRESULT GetValue(PROPVARIANT** ppPropVariant);
```  
  
### <a name="parameters"></a>Parametri  
 `ppPropVariant`  
 Quando la funzione termina, questo parametro contiene il valore di blocco.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se PROPVARIANT allocata correttamente e il valore di blocco è stato copiato correttamente `ppPropVariant`; in caso contrario un codice di errore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getvaluenoalloc"></a>CMFCFilterChunkValueImpl::GetValueNoAlloc  
 Restituisce il valore non allocato (valore interno).  
  
```  
PROPVARIANT GetValueNoAlloc ();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di blocco corrente.  
  
### <a name="remarks"></a>Note  
  
##  <a name="isvalid"></a>CMFCFilterChunkValueImpl::IsValid  
 Controlla se il valore della proprietà è valido o meno.  
  
```  
BOOL IsValid() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il valore di blocco corrente è valido. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setboolvalue"></a>CMFCFilterChunkValueImpl::SetBoolValue  
 Di overload. Imposta la proprietà chiave in un valore booleano.  
  
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
 `pkey`  
 Specifica una chiave di proprietà.  
  
 `bVal`  
 Specifica il valore di blocco da impostare.  
  
 `chunkType`  
 Flag indicano se questo blocco contiene un tipo di testo o una proprietà del tipo di valore. Valori di flag provengono dall'enumerazione CHUNKSTATE.  
  
 `locale`  
 La lingua e la varietà di lingua associata a un blocco di testo. Impostazioni locali di blocco viene utilizzata per gli indicizzatori di documento per eseguire corretto word breaking di testo. Se il blocco è di tipo testo né un tipo di valore con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.  
  
 `cwcLenSource`  
 La lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica la corrispondenza di carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che sia presente alcun tale corrispondenza diretta.  
  
 `cwcStartSource`  
 Offset da cui inizia il testo di origine per un blocco derivato nel blocco di origine.  
  
 `chunkBreakType`  
 Il tipo di interruzione che separa il blocco precedente il blocco corrente. I valori sono compresi nell'enumerazione CHUNK_BREAKTYPE.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario un codice di errore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setchunk"></a>CMFCFilterChunkValueImpl::SetChunk  
 Una funzione di supporto che imposta le proprietà comuni del blocco.  
  
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
 `pkey`  
 Specifica una chiave di proprietà.  
  
 `chunkType`  
 Flag indicano se questo blocco contiene un tipo di testo o una proprietà del tipo di valore. Valori di flag provengono dall'enumerazione CHUNKSTATE.  
  
 `locale`  
 La lingua e la varietà di lingua associata a un blocco di testo. Impostazioni locali di blocco viene utilizzata per gli indicizzatori di documento per eseguire corretto word breaking di testo. Se il blocco è di tipo testo né un tipo di valore con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.  
  
 `cwcLenSource`  
 La lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica la corrispondenza di carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che sia presente alcun tale corrispondenza diretta.  
  
 `cwcStartSource`  
 Offset da cui inizia il testo di origine per un blocco derivato nel blocco di origine.  
  
 `chunkBreakType`  
 Il tipo di interruzione che separa il blocco precedente il blocco corrente. I valori sono compresi nell'enumerazione CHUNK_BREAKTYPE.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. codice di errore in caso contrario.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setdwordvalue"></a>CMFCFilterChunkValueImpl::SetDwordValue  
 Impostare la proprietà chiave a un valore DWORD.  
  
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
 `pkey`  
 Specifica una chiave di proprietà.  
  
 `dwVal`  
 Specifica il valore di blocco da impostare.  
  
 `chunkType`  
 Flag indicano se questo blocco contiene un tipo di testo o una proprietà del tipo di valore. Valori di flag provengono dall'enumerazione CHUNKSTATE.  
  
 `locale`  
 La lingua e la varietà di lingua associata a un blocco di testo. Impostazioni locali di blocco viene utilizzata per gli indicizzatori di documento per eseguire corretto word breaking di testo. Se il blocco è di tipo testo né un tipo di valore con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.  
  
 `cwcLenSource`  
 La lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica la corrispondenza di carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che sia presente alcun tale corrispondenza diretta.  
  
 `cwcStartSource`  
 Offset da cui inizia il testo di origine per un blocco derivato nel blocco di origine.  
  
 `chunkBreakType`  
 Il tipo di interruzione che separa il blocco precedente il blocco corrente. I valori sono compresi nell'enumerazione CHUNK_BREAKTYPE.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario un codice di errore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setfiletimevalue"></a>CMFCFilterChunkValueImpl::SetFileTimeValue  
 Impostare la proprietà chiave in un filetime.  
  
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
 `pkey`  
 Specifica una chiave di proprietà.  
  
 `dtVal`  
 Specifica il valore di blocco da impostare.  
  
 `chunkType`  
 Flag indicano se questo blocco contiene un tipo di testo o una proprietà del tipo di valore. Valori di flag provengono dall'enumerazione CHUNKSTATE.  
  
 `locale`  
 La lingua e la varietà di lingua associata a un blocco di testo. Impostazioni locali di blocco viene utilizzata per gli indicizzatori di documento per eseguire corretto word breaking di testo. Se il blocco è di tipo testo né un tipo di valore con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.  
  
 `cwcLenSource`  
 La lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica la corrispondenza di carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che sia presente alcun tale corrispondenza diretta.  
  
 `cwcStartSource`  
 Offset da cui inizia il testo di origine per un blocco derivato nel blocco di origine.  
  
 `chunkBreakType`  
 Il tipo di interruzione che separa il blocco precedente il blocco corrente. I valori sono compresi nell'enumerazione CHUNK_BREAKTYPE.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario un codice di errore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setint64value"></a>CMFCFilterChunkValueImpl::SetInt64Value  
 Impostare la proprietà chiave in un int64.  
  
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
 `pkey`  
 Specifica una chiave di proprietà.  
  
 `nVal`  
 Specifica il valore di blocco da impostare.  
  
 `chunkType`  
 Flag indicano se questo blocco contiene un tipo di testo o una proprietà del tipo di valore. Valori di flag provengono dall'enumerazione CHUNKSTATE.  
  
 `locale`  
 La lingua e la varietà di lingua associata a un blocco di testo. Impostazioni locali di blocco viene utilizzata per gli indicizzatori di documento per eseguire corretto word breaking di testo. Se il blocco è di tipo testo né un tipo di valore con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.  
  
 `cwcLenSource`  
 La lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica la corrispondenza di carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che sia presente alcun tale corrispondenza diretta.  
  
 `cwcStartSource`  
 Offset da cui inizia il testo di origine per un blocco derivato nel blocco di origine.  
  
 `chunkBreakType`  
 Il tipo di interruzione che separa il blocco precedente il blocco corrente. I valori sono compresi nell'enumerazione CHUNK_BREAKTYPE.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario un codice di errore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setintvalue"></a>CMFCFilterChunkValueImpl::SetIntValue  
 Impostare la proprietà chiave per un tipo int.  
  
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
 `pkey`  
 Specifica una chiave di proprietà.  
  
 `nVal`  
 Specifica il valore di blocco da impostare.  
  
 `chunkType`  
 Flag indicano se questo blocco contiene un tipo di testo o una proprietà del tipo di valore. Valori di flag provengono dall'enumerazione CHUNKSTATE.  
  
 `locale`  
 La lingua e la varietà di lingua associata a un blocco di testo. Impostazioni locali di blocco viene utilizzata per gli indicizzatori di documento per eseguire corretto word breaking di testo. Se il blocco è di tipo testo né un tipo di valore con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.  
  
 `cwcLenSource`  
 La lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica la corrispondenza di carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che sia presente alcun tale corrispondenza diretta.  
  
 `cwcStartSource`  
 Offset da cui inizia il testo di origine per un blocco derivato nel blocco di origine.  
  
 `chunkBreakType`  
 Il tipo di interruzione che separa il blocco precedente il blocco corrente. I valori sono compresi nell'enumerazione CHUNK_BREAKTYPE.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario un codice di errore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setlongvalue"></a>CMFCFilterChunkValueImpl::SetLongValue  
 Impostare la proprietà chiave su un valore LONG.  
  
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
 `pkey`  
 Specifica una chiave di proprietà.  
  
 `lVal`  
 Specifica il valore di blocco da impostare.  
  
 `chunkType`  
 Flag indicano se questo blocco contiene un tipo di testo o una proprietà del tipo di valore. Valori di flag provengono dall'enumerazione CHUNKSTATE.  
  
 `locale`  
 La lingua e la varietà di lingua associata a un blocco di testo. Impostazioni locali di blocco viene utilizzata per gli indicizzatori di documento per eseguire corretto word breaking di testo. Se il blocco è di tipo testo né un tipo di valore con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.  
  
 `cwcLenSource`  
 La lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica la corrispondenza di carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che sia presente alcun tale corrispondenza diretta.  
  
 `cwcStartSource`  
 Offset da cui inizia il testo di origine per un blocco derivato nel blocco di origine.  
  
 `chunkBreakType`  
 Il tipo di interruzione che separa il blocco precedente il blocco corrente. I valori sono compresi nell'enumerazione CHUNK_BREAKTYPE.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario un codice di errore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setsystemtimevalue"></a>CMFCFilterChunkValueImpl::SetSystemTimeValue  
 Imposta la proprietà chiave per un oggetto SystemTime.  
  
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
 `pkey`  
 Specifica una chiave di proprietà.  
  
 `systemTime`  
 Specifica il valore di blocco da impostare.  
  
 `chunkType`  
 Flag indicano se questo blocco contiene un tipo di testo o una proprietà del tipo di valore. Valori di flag provengono dall'enumerazione CHUNKSTATE.  
  
 `locale`  
 La lingua e la varietà di lingua associata a un blocco di testo. Impostazioni locali di blocco viene utilizzata per gli indicizzatori di documento per eseguire corretto word breaking di testo. Se il blocco è di tipo testo né un tipo di valore con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.  
  
 `cwcLenSource`  
 La lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica la corrispondenza di carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che sia presente alcun tale corrispondenza diretta.  
  
 `cwcStartSource`  
 Offset da cui inizia il testo di origine per un blocco derivato nel blocco di origine.  
  
 `chunkBreakType`  
 Il tipo di interruzione che separa il blocco precedente il blocco corrente. I valori sono compresi nell'enumerazione CHUNK_BREAKTYPE.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario un codice di errore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="settextvalue"></a>CMFCFilterChunkValueImpl::SetTextValue  
 Imposta la proprietà chiave in una stringa Unicode.  
  
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
 `pkey`  
 Specifica una chiave di proprietà.  
  
 `pszValue`  
 Specifica il valore di blocco da impostare.  
  
 `chunkType`  
 Flag indicano se questo blocco contiene un tipo di testo o una proprietà del tipo di valore. Valori di flag provengono dall'enumerazione CHUNKSTATE.  
  
 `locale`  
 La lingua e la varietà di lingua associata a un blocco di testo. Impostazioni locali di blocco viene utilizzata per gli indicizzatori di documento per eseguire corretto word breaking di testo. Se il blocco è di tipo testo né un tipo di valore con tipo di dati VT_LPWSTR, VT_LPSTR o VT_BSTR, questo campo viene ignorato.  
  
 `cwcLenSource`  
 La lunghezza in caratteri del testo di origine da cui è stato derivato il blocco corrente. Un valore zero indica la corrispondenza di carattere per carattere tra il testo di origine e il testo derivato. Un valore diverso da zero indica che sia presente alcun tale corrispondenza diretta.  
  
 `cwcStartSource`  
 Offset da cui inizia il testo di origine per un blocco derivato nel blocco di origine.  
  
 `chunkBreakType`  
 Il tipo di interruzione che separa il blocco precedente il blocco corrente. I valori sono compresi nell'enumerazione CHUNK_BREAKTYPE.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario un codice di errore.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

