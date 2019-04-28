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
ms.openlocfilehash: d31bc72e485fbb15ed595a7c777c3685a00865c4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62260344"
---
# <a name="catlfilemappingbase-class"></a>Classe CAtlFileMappingBase

Questa classe rappresenta un file mappato alla memoria.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CAtlFileMappingBase
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlFileMappingBase::CAtlFileMappingBase](#catlfilemappingbase)|Costruttore.|
|[CAtlFileMappingBase:: ~ CAtlFileMappingBase](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlFileMappingBase::CopyFrom](#copyfrom)|Chiamare questo metodo per copiare da un oggetto di mapping dei file.|
|[CAtlFileMappingBase::GetData](#getdata)|Chiamare questo metodo per ottenere i dati da un oggetto di mapping dei file.|
|[CAtlFileMappingBase::GetHandle](#gethandle)|Chiamare questo metodo per restituire l'handle di file.|
|[CAtlFileMappingBase::GetMappingSize](#getmappingsize)|Chiamare questo metodo per ottenere la dimensione di mapping da un oggetto di mapping dei file.|
|[CAtlFileMappingBase::MapFile](#mapfile)|Chiamare questo metodo per creare un oggetto di mapping dei file.|
|[CAtlFileMappingBase::MapSharedMem](#mapsharedmem)|Chiamare questo metodo per creare un oggetto di mapping dei file che consente l'accesso completo a tutti i processi.|
|[CAtlFileMappingBase::OpenMapping](#openmapping)|Chiamare questo metodo per restituire un handle all'oggetto di mapping dei file.|
|[CAtlFileMappingBase::Unmap](#unmap)|Chiamare questo metodo per annullare il mapping di un oggetto di mapping dei file.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlFileMappingBase::operator =](#operator_eq)|Imposta l'oggetto di mapping dei file corrente a un altro oggetto di mapping dei file.|

## <a name="remarks"></a>Note

Mapping del file è l'associazione del contenuto di un file con una parte dello spazio indirizzi virtuali di un processo. Questa classe fornisce metodi per la creazione di oggetti di mapping dei file che consentono ai programmi di accedere facilmente a e condividere i dati.

Per altre informazioni, vedere [File di Mapping](/windows/desktop/Memory/file-mapping) nel SDK di Windows.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlfile.h

##  <a name="catlfilemappingbase"></a>  CAtlFileMappingBase::CAtlFileMappingBase

Costruttore.

```
CAtlFileMappingBase(CAtlFileMappingBase& orig);
CAtlFileMappingBase() throw();
```

### <a name="parameters"></a>Parametri

*orig*<br/>
L'oggetto di mapping dei file originale da copiare per creare il nuovo oggetto.

### <a name="remarks"></a>Note

Crea un nuovo oggetto di mapping dei file, facoltativamente utilizzando un oggetto esistente. È comunque necessario chiamare [CAtlFileMappingBase::MapFile](#mapfile) aprire o creare l'oggetto di mapping dei file per un determinato file.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#71](../../atl/codesnippet/cpp/catlfilemappingbase-class_1.cpp)]

##  <a name="dtor"></a>  CAtlFileMappingBase:: ~ CAtlFileMappingBase

Distruttore.

```
~CAtlFileMappingBase() throw();
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate per la classe e chiama il [CAtlFileMappingBase::Unmap](#unmap) (metodo).

##  <a name="copyfrom"></a>  CAtlFileMappingBase::CopyFrom

Chiamare questo metodo per copiare da un oggetto di mapping dei file.

```
HRESULT CopyFrom(CAtlFileMappingBase& orig) throw();
```

### <a name="parameters"></a>Parametri

*orig*<br/>
L'oggetto di mapping dei file originale per copiare da.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

##  <a name="getdata"></a>  CAtlFileMappingBase::GetData

Chiamare questo metodo per ottenere i dati da un oggetto di mapping dei file.

```
void* GetData() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore ai dati.

##  <a name="gethandle"></a>  CAtlFileMappingBase::GetHandle

Chiamare questo metodo per restituire un handle all'oggetto di mapping dei file.

```
HANDLE GetHandle() throw ();
```

### <a name="return-value"></a>Valore restituito

Restituisce un handle all'oggetto di mapping dei file.

##  <a name="getmappingsize"></a>  CAtlFileMappingBase::GetMappingSize

Chiamare questo metodo per ottenere la dimensione di mapping da un oggetto di mapping dei file.

```
SIZE_T GetMappingSize() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce le dimensioni di mapping.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlFileMappingBase::CAtlFileMappingBase](#catlfilemappingbase).

##  <a name="mapfile"></a>  CAtlFileMappingBase::MapFile

Chiamare questo metodo per aprire o creare un oggetto di mapping dei file per il file specificato.

```
HRESULT MapFile(
    HANDLE hFile,
    SIZE_T nMappingSize = 0,
    ULONGLONG nOffset = 0,
    DWORD dwMappingProtection = PAGE_READONLY,
    DWORD dwViewDesiredAccess = FILE_MAP_READ) throw();
```

### <a name="parameters"></a>Parametri

*hFile*<br/>
Handle per il file da cui creare un oggetto di mapping. *oggetto hFile* deve essere valido e non può essere impostata su INVALID_HANDLE_VALUE.

*nMappingSize*<br/>
Le dimensioni di mapping. Se è 0, la dimensione massima dell'oggetto mapping dei file è uguale alla dimensione corrente del file identificato da *hFile.*

*nOffset*<br/>
L'offset del file in cui ha inizio il mapping. Il valore di offset deve essere un multiplo della granularità di allocazione di memoria del sistema.

*dwMappingProtection*<br/>
La protezione desiderata per la visualizzazione del file quando viene eseguito il mapping di file. Visualizzare *flProtect* nelle [CreateFileMapping](/windows/desktop/api/winbase/nf-winbase-createfilemappinga) nel SDK di Windows.

*dwViewDesiredAccess*<br/>
Specifica il tipo di accesso per la visualizzazione di file e, pertanto, la protezione delle pagine eseguito il mapping dal file. Visualizzare *dwDesiredAccess* nelle [MapViewOfFileEx](/windows/desktop/api/memoryapi/nf-memoryapi-mapviewoffileex) nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Dopo aver creato un oggetto di mapping dei file, le dimensioni del file non può superare le dimensioni dell'oggetto mapping dei file. in caso affermativo, non tutto il contenuto del file sarà disponibile per la condivisione. Per altre informazioni, vedere [CreateFileMapping](/windows/desktop/api/winbase/nf-winbase-createfilemappinga) e [MapViewOfFileEx](/windows/desktop/api/memoryapi/nf-memoryapi-mapviewoffileex) nel SDK di Windows.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlFileMappingBase::CAtlFileMappingBase](#catlfilemappingbase).

##  <a name="mapsharedmem"></a>  CAtlFileMappingBase::MapSharedMem

Chiamare questo metodo per creare un oggetto di mapping dei file che consente l'accesso completo a tutti i processi.

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

*nMappingSize*<br/>
Le dimensioni di mapping. Se è 0, la dimensione massima dell'oggetto mapping dei file è uguale alla dimensione corrente dell'oggetto mapping dei file identificato da *szName*.

*szName*<br/>
Il nome dell'oggetto mapping.

*pbAlreadyExisted*<br/>
Punta a un valore booleano che è già impostata su TRUE se l'oggetto di mapping esistente.

*lpsa*<br/>
Il puntatore a un `SECURITY_ATTRIBUTES` struttura che determina se l'handle restituito può essere ereditato dai processi figlio. Visualizzare *lpAttributes* nelle [CreateFileMapping](/windows/desktop/api/winbase/nf-winbase-createfilemappinga) nel SDK di Windows.

*dwMappingProtection*<br/>
La protezione desiderata per la visualizzazione di file, quando viene eseguito il mapping di file. Visualizzare *flProtect* in `CreateFileMapping` nel SDK di Windows.

*dwViewDesiredAccess*<br/>
Specifica il tipo di accesso per la visualizzazione di file e, pertanto, la protezione delle pagine eseguito il mapping dal file. Visualizzare *dwDesiredAccess* nelle [MapViewOfFileEx](/windows/desktop/api/memoryapi/nf-memoryapi-mapviewoffileex) nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

`MapShareMem` consente a un oggetto di mapping dei file esistente, creato [CreateFileMapping](/windows/desktop/api/winbase/nf-winbase-createfilemappinga), devono essere condivisi tra i processi.

##  <a name="openmapping"></a>  CAtlFileMappingBase::OpenMapping

Chiamare questo metodo per aprire un oggetto di mapping dei file denominato per il file specificato.

```
HRESULT OpenMapping(
    LPCTSTR szName,
    SIZE_T nMappingSize,
    ULONGLONG nOffset = 0,
    DWORD dwViewDesiredAccess = FILE_MAP_ALL_ACCESS) throw();
```

### <a name="parameters"></a>Parametri

*szName*<br/>
Il nome dell'oggetto mapping. Se è presente un handle aperto per un oggetto di mapping dei file con questo nome e il descrittore di sicurezza per l'oggetto di mapping non è in conflitto con il *dwViewDesiredAccess* ha esito positivo di parametri, l'operazione di apertura.

*nMappingSize*<br/>
Le dimensioni di mapping. Se è 0, la dimensione massima dell'oggetto mapping dei file è uguale alla dimensione corrente dell'oggetto mapping dei file identificato da *szName*.

*nOffset*<br/>
L'offset del file in cui ha inizio il mapping. Il valore di offset deve essere un multiplo della granularità di allocazione di memoria del sistema.

*dwViewDesiredAccess*<br/>
Specifica il tipo di accesso per la visualizzazione di file e, pertanto, la protezione delle pagine eseguito il mapping dal file. Visualizzare *dwDesiredAccess* nelle [MapViewOfFileEx](/windows/desktop/api/memoryapi/nf-memoryapi-mapviewoffileex) nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Nelle build di debug, si verificherà un errore di asserzione se i parametri di input non sono validi.

##  <a name="operator_eq"></a>  CAtlFileMappingBase::operator =

Imposta l'oggetto di mapping dei file corrente a un altro oggetto di mapping dei file.

```
CAtlFileMappingBase& operator=(CAtlFileMappingBase& orig);
```

### <a name="parameters"></a>Parametri

*orig*<br/>
L'oggetto di mapping dei file corrente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'oggetto corrente.

##  <a name="unmap"></a>  CAtlFileMappingBase::Unmap

Chiamare questo metodo per annullare il mapping di un oggetto di mapping dei file.

```
HRESULT Unmap() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Visualizzare [UnmapViewOfFile](/windows/desktop/api/memoryapi/nf-memoryapi-unmapviewoffile) nel SDK di Windows per altri dettagli.

## <a name="see-also"></a>Vedere anche

[Classe CAtlFileMapping](../../atl/reference/catlfilemapping-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
