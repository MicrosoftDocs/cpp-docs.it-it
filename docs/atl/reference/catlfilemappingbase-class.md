---
title: Classe CAtlFileMappingBase
ms.date: 11/04/2016
f1_keywords:
- CAtlFileMappingBase
- ATLFILE/ATL::CAtlFileMappingBase
- ATLFILE/ATL::CAtlFileMappingBase::CAtlFileMappingBase
- ATLFILE/ATL::CAtlFileMappingBase::CopyFrom
- ATLFILE/ATL::CAtlFileMappingBase::GetData
- ATLFILE/ATL::CAtlFileMappingBase::GetHandle
- ATLFILE/ATL::CAtlFileMappingBase::GetMappingSize
- ATLFILE/ATL::CAtlFileMappingBase::MapFile
- ATLFILE/ATL::CAtlFileMappingBase::MapSharedMem
- ATLFILE/ATL::CAtlFileMappingBase::OpenMapping
- ATLFILE/ATL::CAtlFileMappingBase::Unmap
helpviewer_keywords:
- CAtlFileMappingBase class
ms.assetid: be555723-2790-4f57-a8fb-be4d68460775
ms.openlocfilehash: 75177c195e83a4ab3ad2a6bd4d608d07f8c2234f
ms.sourcegitcommit: 2bc15c5b36372ab01fa21e9bcf718fa22705814f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/27/2020
ms.locfileid: "82168085"
---
# <a name="catlfilemappingbase-class"></a>Classe CAtlFileMappingBase

Questa classe rappresenta un file mappato alla memoria.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
class CAtlFileMappingBase
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlFileMappingBase:: CAtlFileMappingBase](#catlfilemappingbase)|Costruttore.|
|[CAtlFileMappingBase:: ~ CAtlFileMappingBase](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlFileMappingBase:: CopyFrom](#copyfrom)|Chiamare questo metodo per copiare da un oggetto mapping di file.|
|[CAtlFileMappingBase:: GetData](#getdata)|Chiamare questo metodo per ottenere i dati da un oggetto di mapping di file.|
|[CAtlFileMappingBase:: GetHandle](#gethandle)|Chiamare questo metodo per restituire l'handle di file.|
|[CAtlFileMappingBase:: GetMappingSize](#getmappingsize)|Chiamare questo metodo per ottenere la dimensione del mapping da un oggetto mapping di file.|
|[CAtlFileMappingBase:: file map](#mapfile)|Chiamare questo metodo per creare un oggetto mapping di file.|
|[CAtlFileMappingBase:: MapSharedMem](#mapsharedmem)|Chiamare questo metodo per creare un oggetto di mapping dei file che consenta l'accesso completo a tutti i processi.|
|[CAtlFileMappingBase:: OpenMapping](#openmapping)|Chiamare questo metodo per restituire un handle all'oggetto mapping di file.|
|[CAtlFileMappingBase:: annullare](#unmap)|Chiamare questo metodo per annullare un oggetto mapping di file.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlFileMappingBase:: operator =](#operator_eq)|Imposta l'oggetto mapping di file corrente su un altro oggetto mapping di file.|

## <a name="remarks"></a>Osservazioni

Il mapping dei file è l'associazione del contenuto di un file a una parte dello spazio degli indirizzi virtuali di un processo. Questa classe fornisce metodi per la creazione di oggetti di mapping di file che consentono ai programmi di accedere e condividere facilmente i dati.

Per ulteriori informazioni, vedere [mapping dei file](/windows/win32/Memory/file-mapping) nel Windows SDK.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlfile. h

## <a name="catlfilemappingbasecatlfilemappingbase"></a><a name="catlfilemappingbase"></a>CAtlFileMappingBase:: CAtlFileMappingBase

Costruttore.

```cpp
CAtlFileMappingBase(CAtlFileMappingBase& orig);
CAtlFileMappingBase() throw();
```

### <a name="parameters"></a>Parametri

*orig*<br/>
Oggetto di mapping di file originale da copiare per creare il nuovo oggetto.

### <a name="remarks"></a>Osservazioni

Crea un nuovo oggetto mapping di file, usando facoltativamente un oggetto esistente. È comunque necessario chiamare [CAtlFileMappingBase:: file map](#mapfile) per aprire o creare l'oggetto di mapping dei file per un file specifico.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#71](../../atl/codesnippet/cpp/catlfilemappingbase-class_1.cpp)]

## <a name="catlfilemappingbasecatlfilemappingbase"></a><a name="dtor"></a>CAtlFileMappingBase:: ~ CAtlFileMappingBase

Distruttore.

```cpp
~CAtlFileMappingBase() throw();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate dalla classe e chiama il metodo [CAtlFileMappingBase:: annullare](#unmap) .

## <a name="catlfilemappingbasecopyfrom"></a><a name="copyfrom"></a>CAtlFileMappingBase:: CopyFrom

Chiamare questo metodo per copiare da un oggetto mapping di file.

```cpp
HRESULT CopyFrom(CAtlFileMappingBase& orig) throw();
```

### <a name="parameters"></a>Parametri

*orig*<br/>
Oggetto di mapping di file originale da cui copiare.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

## <a name="catlfilemappingbasegetdata"></a><a name="getdata"></a>CAtlFileMappingBase:: GetData

Chiamare questo metodo per ottenere i dati da un oggetto di mapping di file.

```cpp
void* GetData() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore ai dati.

## <a name="catlfilemappingbasegethandle"></a><a name="gethandle"></a>CAtlFileMappingBase:: GetHandle

Chiamare questo metodo per restituire un handle all'oggetto mapping di file.

```cpp
HANDLE GetHandle() throw ();
```

### <a name="return-value"></a>Valore restituito

Restituisce un handle all'oggetto mapping di file.

## <a name="catlfilemappingbasegetmappingsize"></a><a name="getmappingsize"></a>CAtlFileMappingBase:: GetMappingSize

Chiamare questo metodo per ottenere la dimensione del mapping da un oggetto mapping di file.

```cpp
SIZE_T GetMappingSize() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la dimensione del mapping.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlFileMappingBase:: CAtlFileMappingBase](#catlfilemappingbase).

## <a name="catlfilemappingbasemapfile"></a><a name="mapfile"></a>CAtlFileMappingBase:: file map

Chiamare questo metodo per aprire o creare un oggetto mapping di file per il file specificato.

```cpp
HRESULT MapFile(
    HANDLE hFile,
    SIZE_T nMappingSize = 0,
    ULONGLONG nOffset = 0,
    DWORD dwMappingProtection = PAGE_READONLY,
    DWORD dwViewDesiredAccess = FILE_MAP_READ) throw();
```

### <a name="parameters"></a>Parametri

*hFile*<br/>
Handle per il file da cui creare un oggetto di mapping. *hFile* deve essere valido e non può essere impostato su INVALID_HANDLE_VALUE.

*nMappingSize*<br/>
Dimensioni del mapping. Se è 0, la dimensione massima dell'oggetto mapping di file è uguale alla dimensione corrente del file identificato da *hFile.*

*nOffset*<br/>
Offset del file da cui iniziare il mapping. Il valore di offset deve essere un multiplo della granularità di allocazione di memoria del sistema.

*dwMappingProtection*<br/>
Protezione desiderata per la visualizzazione file quando viene eseguito il mapping del file. Vedere *flProtect* in [CreateFileMapping](/windows/win32/api/winbase/nf-winbase-createfilemappinga) nella Windows SDK.

*dwViewDesiredAccess*<br/>
Specifica il tipo di accesso alla visualizzazione file e, di conseguenza, la protezione delle pagine mappate dal file. Vedere *dwDesiredAccess* in [MapViewOfFileEx](/windows/win32/api/memoryapi/nf-memoryapi-mapviewoffileex) nella Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Dopo la creazione di un oggetto di mapping dei file, le dimensioni del file non devono superare le dimensioni dell'oggetto mapping dei file; in caso contrario, non tutto il contenuto del file sarà disponibile per la condivisione. Per ulteriori informazioni, vedere [CreateFileMapping](/windows/win32/api/winbase/nf-winbase-createfilemappinga) e [MapViewOfFileEx](/windows/win32/api/memoryapi/nf-memoryapi-mapviewoffileex) nel Windows SDK.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlFileMappingBase:: CAtlFileMappingBase](#catlfilemappingbase).

## <a name="catlfilemappingbasemapsharedmem"></a><a name="mapsharedmem"></a>CAtlFileMappingBase:: MapSharedMem

Chiamare questo metodo per creare un oggetto di mapping dei file che consenta l'accesso completo a tutti i processi.

```cpp
HRESULT MapSharedMem(
    SIZE_T nMappingSize,
    LPCTSTR szName,
    BOOL* pbAlreadyExisted = NULL,
    LPSECURITY_ATTRIBUTES lpsa = NULL,
    DWORD dwMappingProtection = PAGE_READWRITE,
    DWORD dwViewDesiredAccess = FILE_MAP_ALL_ACCESS) throw();
```

### <a name="parameters"></a>Parametri

*nMappingSize*<br/>
Dimensioni del mapping. Se è 0, la dimensione massima dell'oggetto mapping di file è uguale alla dimensione corrente dell'oggetto mapping di file identificato da *szName*.

*szName*<br/>
Nome dell'oggetto di mapping.

*pbAlreadyExisted*<br/>
Punta a un valore BOOL che è impostato su TRUE se l'oggetto di mapping esiste già.

*lpsa*<br/>
Puntatore a una `SECURITY_ATTRIBUTES` struttura che determina se l'handle restituito può essere ereditato dai processi figlio. Vedere *lpAttributes* in [CreateFileMapping](/windows/win32/api/winbase/nf-winbase-createfilemappinga) nella Windows SDK.

*dwMappingProtection*<br/>
Protezione desiderata per la visualizzazione file quando viene eseguito il mapping del file. Vedere *flProtect* in `CreateFileMapping` in Windows SDK.

*dwViewDesiredAccess*<br/>
Specifica il tipo di accesso alla visualizzazione file e, di conseguenza, la protezione delle pagine mappate dal file. Vedere *dwDesiredAccess* in [MapViewOfFileEx](/windows/win32/api/memoryapi/nf-memoryapi-mapviewoffileex) nella Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

`MapShareMem`consente a un oggetto di mapping di file esistente, creato da [CreateFileMapping](/windows/win32/api/winbase/nf-winbase-createfilemappinga), di essere condiviso tra i processi.

## <a name="catlfilemappingbaseopenmapping"></a><a name="openmapping"></a>CAtlFileMappingBase:: OpenMapping

Chiamare questo metodo per aprire un oggetto mapping di file denominato per il file specificato.

```cpp
HRESULT OpenMapping(
    LPCTSTR szName,
    SIZE_T nMappingSize,
    ULONGLONG nOffset = 0,
    DWORD dwViewDesiredAccess = FILE_MAP_ALL_ACCESS) throw();
```

### <a name="parameters"></a>Parametri

*szName*<br/>
Nome dell'oggetto di mapping. Se è presente un handle aperto per un oggetto mapping di file con questo nome e il descrittore di sicurezza nell'oggetto mapping non è in conflitto con il parametro *dwViewDesiredAccess* , l'operazione di apertura ha esito positivo.

*nMappingSize*<br/>
Dimensioni del mapping. Se è 0, la dimensione massima dell'oggetto mapping di file è uguale alla dimensione corrente dell'oggetto mapping di file identificato da *szName*.

*nOffset*<br/>
Offset del file da cui iniziare il mapping. Il valore di offset deve essere un multiplo della granularità di allocazione di memoria del sistema.

*dwViewDesiredAccess*<br/>
Specifica il tipo di accesso alla visualizzazione file e, di conseguenza, la protezione delle pagine mappate dal file. Vedere *dwDesiredAccess* in [MapViewOfFileEx](/windows/win32/api/memoryapi/nf-memoryapi-mapviewoffileex) nella Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Nelle build di debug, si verificherà un errore di asserzione se i parametri di input non sono validi.

## <a name="catlfilemappingbaseoperator-"></a><a name="operator_eq"></a>CAtlFileMappingBase:: operator =

Imposta l'oggetto mapping di file corrente su un altro oggetto mapping di file.

```cpp
CAtlFileMappingBase& operator=(CAtlFileMappingBase& orig);
```

### <a name="parameters"></a>Parametri

*orig*<br/>
Oggetto mapping di file corrente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'oggetto corrente.

## <a name="catlfilemappingbaseunmap"></a><a name="unmap"></a>CAtlFileMappingBase:: annullare

Chiamare questo metodo per annullare un oggetto mapping di file.

```cpp
HRESULT Unmap() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [UnmapViewOfFile](/windows/win32/api/memoryapi/nf-memoryapi-unmapviewoffile) nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe CAtlFileMapping](../../atl/reference/catlfilemapping-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
