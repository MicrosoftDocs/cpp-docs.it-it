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
ms.openlocfilehash: 16eebfff4330a47888d1b60eaa993ee87d120f72
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81748291"
---
# <a name="catlfilemappingbase-class"></a>Classe CAtlFileMappingBase

Questa classe rappresenta un file mappato alla memoria.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CAtlFileMappingBase
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlFileMappingBase::CAtlFileMappingBase](#catlfilemappingbase)|Costruttore.|
|[CAtlFileMappingBase::CAtlFileMappingBase](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlFileMappingBase::CopiaFrom](#copyfrom)|Chiamare questo metodo per copiare da un oggetto di mapping di file.|
|[CAtlFileMappingBase::Dati](#getdata)|Chiamare questo metodo per ottenere i dati da un oggetto di mapping di file.|
|[CAtlFileMappingBase::GetHandle](#gethandle)|Chiamare questo metodo per restituire l'handle di file.|
|[CAtlFileMappingBase::GetMappingSize](#getmappingsize)|Chiamare questo metodo per ottenere la dimensione del mapping da un oggetto di mapping di file.|
|[CAtlFileMappingBase::MapFile](#mapfile)|Chiamare questo metodo per creare un oggetto di mapping di file.|
|[CAtlFileMappingBase::MapSharedMem](#mapsharedmem)|Chiamare questo metodo per creare un oggetto di mapping di file che consente l'accesso completo a tutti i processi.|
|[CAtlFileMappingBase::OpenMapping](#openmapping)|Chiamare questo metodo per restituire un handle all'oggetto di mapping di file.|
|[CAtlFileMappingBase::Annulla mapping](#unmap)|Chiamare questo metodo per annullare il mapping di un oggetto di mapping di file.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlFileMappingBase::operatore](#operator_eq)|Imposta l'oggetto di mapping dei file corrente su un altro oggetto di mapping di file.|

## <a name="remarks"></a>Osservazioni

Il mapping dei file è l'associazione del contenuto di un file con una parte dello spazio degli indirizzi virtuali di un processo. Questa classe fornisce metodi per la creazione di oggetti di mapping di file che consentono ai programmi di accedere e condividere facilmente i dati.

Per altre informazioni, vedere [Mapping dei file](/windows/win32/Memory/file-mapping) in Windows SDK.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlfile.h

## <a name="catlfilemappingbasecatlfilemappingbase"></a><a name="catlfilemappingbase"></a>CAtlFileMappingBase::CAtlFileMappingBase

Costruttore.

```
CAtlFileMappingBase(CAtlFileMappingBase& orig);
CAtlFileMappingBase() throw();
```

### <a name="parameters"></a>Parametri

*orig*<br/>
Oggetto di mapping file originale da copiare per creare il nuovo oggetto.

### <a name="remarks"></a>Osservazioni

Crea un nuovo oggetto di mapping di file, utilizzando facoltativamente un oggetto esistente. È comunque necessario chiamare [CAtlFileMappingBase::MapFile](#mapfile) per aprire o creare l'oggetto di mapping di file per un file specifico.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#71](../../atl/codesnippet/cpp/catlfilemappingbase-class_1.cpp)]

## <a name="catlfilemappingbasecatlfilemappingbase"></a><a name="dtor"></a>CAtlFileMappingBase::CAtlFileMappingBase

Distruttore.

```
~CAtlFileMappingBase() throw();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate dalla classe e chiama il [CAtlFileMappingBase::Unmap](#unmap) metodo.

## <a name="catlfilemappingbasecopyfrom"></a><a name="copyfrom"></a>CAtlFileMappingBase::CopiaFrom

Chiamare questo metodo per copiare da un oggetto di mapping di file.

```
HRESULT CopyFrom(CAtlFileMappingBase& orig) throw();
```

### <a name="parameters"></a>Parametri

*orig*<br/>
Oggetto di mapping file originale da cui copiare.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="catlfilemappingbasegetdata"></a><a name="getdata"></a>CAtlFileMappingBase::Dati

Chiamare questo metodo per ottenere i dati da un oggetto di mapping di file.

```cpp
void* GetData() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore ai dati.

## <a name="catlfilemappingbasegethandle"></a><a name="gethandle"></a>CAtlFileMappingBase::GetHandle

Chiamare questo metodo per restituire un handle all'oggetto di mapping di file.

```
HANDLE GetHandle() throw ();
```

### <a name="return-value"></a>Valore restituito

Restituisce un handle per l'oggetto di mapping di file.

## <a name="catlfilemappingbasegetmappingsize"></a><a name="getmappingsize"></a>CAtlFileMappingBase::GetMappingSize

Chiamare questo metodo per ottenere la dimensione del mapping da un oggetto di mapping di file.

```
SIZE_T GetMappingSize() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la dimensione del mapping.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlFileMappingBase::CAtlFileMappingBase](#catlfilemappingbase).

## <a name="catlfilemappingbasemapfile"></a><a name="mapfile"></a>CAtlFileMappingBase::MapFile

Chiamare questo metodo per aprire o creare un oggetto di mapping di file per il file specificato.

```
HRESULT MapFile(
    HANDLE hFile,
    SIZE_T nMappingSize = 0,
    ULONGLONG nOffset = 0,
    DWORD dwMappingProtection = PAGE_READONLY,
    DWORD dwViewDesiredAccess = FILE_MAP_READ) throw();
```

### <a name="parameters"></a>Parametri

*hFile (File)*<br/>
Gestire il file da cui creare un oggetto di mapping. *hFile* deve essere valido e non può essere impostato su INVALID_HANDLE_VALUE.

*nMappingSize (informazioni in questo gruppo)*<br/>
Dimensione del mapping. Se 0, la dimensione massima dell'oggetto di mapping dei file è uguale alla dimensione corrente del file identificato da *hFile.*

*nOffset*<br/>
Offset del file in cui deve iniziare il mapping. Il valore di offset deve essere un multiplo della granularità di allocazione della memoria del sistema.

*dwMappingProtection (protezione dwMappingProtection)*<br/>
La protezione desiderata per la visualizzazione file quando il file viene mappato. Vedere *flProtect* in [CreateFileMapping](/windows/win32/api/winbase/nf-winbase-createfilemappinga) in Windows SDK.

*dwViewDesiredAccess*<br/>
Specifica il tipo di accesso alla visualizzazione file e, pertanto, la protezione delle pagine mappate dal file. Vedere *dwDesiredAccess* in [MapViewOfFileEx](/windows/win32/api/memoryapi/nf-memoryapi-mapviewoffileex) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Dopo aver creato un oggetto di mapping di file, la dimensione del file non deve superare la dimensione dell'oggetto di mapping dei file; in caso affermativo, non tutti i contenuti del file saranno disponibili per la condivisione. Per ulteriori informazioni, vedere [CreateFileMapping](/windows/win32/api/winbase/nf-winbase-createfilemappinga) e [MapViewOfFileEx](/windows/win32/api/memoryapi/nf-memoryapi-mapviewoffileex) in Windows SDK.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlFileMappingBase::CAtlFileMappingBase](#catlfilemappingbase).

## <a name="catlfilemappingbasemapsharedmem"></a><a name="mapsharedmem"></a>CAtlFileMappingBase::MapSharedMem

Chiamare questo metodo per creare un oggetto di mapping di file che consente l'accesso completo a tutti i processi.

```
HRESULT MapSharedMem(
    SIZE_T nMappingSize,
    LPCTSTR szName,
    BOOL* pbAlreadyExisted = NULL,
    LPSECURITY_ATTRIBUTES lpsa = NULL,
    DWORD dwMappingProtection = PAGE_READWRITE,
    DWORD dwViewDesiredAccess = FILE_MAP_ALL_ACCESS) throw();
```

### <a name="parameters"></a>Parametri

*nMappingSize (informazioni in questo gruppo)*<br/>
Dimensione del mapping. Se 0, la dimensione massima dell'oggetto di mapping file è uguale alla dimensione corrente dell'oggetto di mapping file identificato da *szName*.

*Szname*<br/>
Nome dell'oggetto mapping.

*pbAlreadyExisted (pbAlreadyExisted)*<br/>
Punta a un valore BOOL impostato su TRUE se l'oggetto mapping esiste già.

*lpsa*<br/>
Puntatore a `SECURITY_ATTRIBUTES` una struttura che determina se l'handle restituito può essere ereditato dai processi figlio. Vedere *lpAttributes* in [CreateFileMapping](/windows/win32/api/winbase/nf-winbase-createfilemappinga) in Windows SDK.

*dwMappingProtection (protezione dwMappingProtection)*<br/>
La protezione desiderata per la visualizzazione del file, quando il file viene mappato. Vedere *flProtect* in `CreateFileMapping` in Windows SDK.

*dwViewDesiredAccess*<br/>
Specifica il tipo di accesso alla visualizzazione file e, pertanto, la protezione delle pagine mappate dal file. Vedere *dwDesiredAccess* in [MapViewOfFileEx](/windows/win32/api/memoryapi/nf-memoryapi-mapviewoffileex) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

`MapShareMem`consente la condivisione di un oggetto di mapping file esistente, creato da [CreateFileMapping](/windows/win32/api/winbase/nf-winbase-createfilemappinga), tra i processi.

## <a name="catlfilemappingbaseopenmapping"></a><a name="openmapping"></a>CAtlFileMappingBase::OpenMapping

Chiamare questo metodo per aprire un oggetto di mapping di file denominato per il file specificato.

```
HRESULT OpenMapping(
    LPCTSTR szName,
    SIZE_T nMappingSize,
    ULONGLONG nOffset = 0,
    DWORD dwViewDesiredAccess = FILE_MAP_ALL_ACCESS) throw();
```

### <a name="parameters"></a>Parametri

*Szname*<br/>
Nome dell'oggetto mapping. Se è presente un handle aperto a un oggetto di mapping di file con questo nome e il descrittore di sicurezza sull'oggetto di mapping non è in conflitto con il parametro *dwViewDesiredAccess,* l'operazione di apertura ha esito positivo.

*nMappingSize (informazioni in questo gruppo)*<br/>
Dimensione del mapping. Se 0, la dimensione massima dell'oggetto di mapping file è uguale alla dimensione corrente dell'oggetto di mapping file identificato da *szName*.

*nOffset*<br/>
Offset del file in cui deve iniziare il mapping. Il valore di offset deve essere un multiplo della granularità di allocazione della memoria del sistema.

*dwViewDesiredAccess*<br/>
Specifica il tipo di accesso alla visualizzazione file e, pertanto, la protezione delle pagine mappate dal file. Vedere *dwDesiredAccess* in [MapViewOfFileEx](/windows/win32/api/memoryapi/nf-memoryapi-mapviewoffileex) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Nelle build di debug, si verificherà un errore di asserzione se i parametri di input non sono validi.

## <a name="catlfilemappingbaseoperator-"></a><a name="operator_eq"></a>CAtlFileMappingBase::operatore

Imposta l'oggetto di mapping dei file corrente su un altro oggetto di mapping di file.

```
CAtlFileMappingBase& operator=(CAtlFileMappingBase& orig);
```

### <a name="parameters"></a>Parametri

*orig*<br/>
Oggetto di mapping dei file corrente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'oggetto corrente.

## <a name="catlfilemappingbaseunmap"></a><a name="unmap"></a>CAtlFileMappingBase::Annulla mapping

Chiamare questo metodo per annullare il mapping di un oggetto di mapping di file.

```
HRESULT Unmap() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [UnmapViewOfFile](/windows/win32/api/memoryapi/nf-memoryapi-unmapviewoffile) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe CAtlFileMapping](../../atl/reference/catlfilemapping-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
