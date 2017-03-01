---
title: Classe CAtlFileMappingBase | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CAtlFileMappingBase
- ATL::CAtlFileMappingBase
- CAtlFileMappingBase
dev_langs:
- C++
helpviewer_keywords:
- CAtlFileMappingBase class
ms.assetid: be555723-2790-4f57-a8fb-be4d68460775
caps.latest.revision: 20
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 439f123bc0addbbec2a26102d0197d0a1f14a8d5
ms.lasthandoff: 02/24/2017

---
# <a name="catlfilemappingbase-class"></a>Classe CAtlFileMappingBase
Questa classe rappresenta un file mappato alla memoria.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
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
|[CAtlFileMappingBase::operator =](#operator_eq)|Imposta l'oggetto di mapping del file corrente in un altro oggetto di mapping dei file.|  
  
## <a name="remarks"></a>Note  
 Mapping del file è l'associazione del contenuto di un file con una parte dello spazio degli indirizzi virtuali di un processo. Questa classe fornisce metodi per la creazione di file di mapping di oggetti che consentono di accedere facilmente a e condividere i dati.  
  
 Per ulteriori informazioni, vedere [Mapping del File](http://msdn.microsoft.com/library/windows/desktop/aa366556) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlfile.h  
  
##  <a name="a-namecatlfilemappingbasea--catlfilemappingbasecatlfilemappingbase"></a><a name="catlfilemappingbase"></a>CAtlFileMappingBase::CAtlFileMappingBase  
 Costruttore.  
  
```
CAtlFileMappingBase(CAtlFileMappingBase& orig);  
CAtlFileMappingBase() throw();
```  
  
### <a name="parameters"></a>Parametri  
 `orig`  
 L'oggetto di mapping del file originale da copiare per creare il nuovo oggetto.  
  
### <a name="remarks"></a>Note  
 Crea un nuovo oggetto di mapping dei file, utilizzando facoltativamente un oggetto esistente. È comunque necessario chiamare [CAtlFileMappingBase::MapFile](#mapfile) aprire o creare l'oggetto di mapping dei file per un determinato file.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#71;](../../atl/codesnippet/cpp/catlfilemappingbase-class_1.cpp)]  
  
##  <a name="a-namedtora--catlfilemappingbasecatlfilemappingbase"></a><a name="dtor"></a>CAtlFileMappingBase:: ~ CAtlFileMappingBase  
 Distruttore.  
  
```
~CAtlFileMappingBase() throw();
```  
  
### <a name="remarks"></a>Note  
 Libera le risorse allocate per la classe e chiama il [CAtlFileMappingBase::Unmap](#unmap) metodo.  
  
##  <a name="a-namecopyfroma--catlfilemappingbasecopyfrom"></a><a name="copyfrom"></a>CAtlFileMappingBase::CopyFrom  
 Chiamare questo metodo per copiare da un oggetto di mapping dei file.  
  
```
HRESULT CopyFrom(CAtlFileMappingBase& orig) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `orig`  
 L'oggetto originale mapping dei file da copiare da.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
##  <a name="a-namegetdataa--catlfilemappingbasegetdata"></a><a name="getdata"></a>CAtlFileMappingBase::GetData  
 Chiamare questo metodo per ottenere i dati da un oggetto di mapping dei file.  
  
```
void* GetData() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore ai dati.  
  
##  <a name="a-namegethandlea--catlfilemappingbasegethandle"></a><a name="gethandle"></a>CAtlFileMappingBase::GetHandle  
 Chiamare questo metodo per restituire un handle all'oggetto di mapping dei file.  
  
```
HANDLE GetHandle() throw ();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un handle per l'oggetto di mapping dei file.  
  
##  <a name="a-namegetmappingsizea--catlfilemappingbasegetmappingsize"></a><a name="getmappingsize"></a>CAtlFileMappingBase::GetMappingSize  
 Chiamare questo metodo per ottenere la dimensione di mapping da un oggetto di mapping dei file.  
  
```
SIZE_T GetMappingSize() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la dimensione di mapping.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CAtlFileMappingBase::CAtlFileMappingBase](#catlfilemappingbase).  
  
##  <a name="a-namemapfilea--catlfilemappingbasemapfile"></a><a name="mapfile"></a>CAtlFileMappingBase::MapFile  
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
 `hFile`  
 Handle per il file da cui creare un oggetto di mapping. `hFile`deve essere valido e non può essere impostata su INVALID_HANDLE_VALUE.  
  
 `nMappingSize`  
 La dimensione del mapping. Se è 0, la dimensione massima dell'oggetto di mapping dei file è uguale alla dimensione corrente del file identificato da *hFile.*  
  
 `nOffset`  
 L'offset del file in cui il mapping verrà avviato. Il valore di offset deve essere un multiplo di granularità di allocazione di memoria del sistema.  
  
 `dwMappingProtection`  
 La protezione desiderata per la visualizzazione del file quando viene eseguito il mapping di file. Vedere `flProtect` in [CreateFileMapping](http://msdn.microsoft.com/library/windows/desktop/aa366537) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwViewDesiredAccess`  
 Specifica il tipo di accesso per la visualizzazione del file e, di conseguenza, la protezione delle pagine per il file mappati. Vedere `dwDesiredAccess` in [MapViewOfFileEx](http://msdn.microsoft.com/library/windows/desktop/aa366763) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Dopo che è stato creato un oggetto di mapping dei file, le dimensioni del file non devono superare le dimensioni dell'oggetto di mapping dei file. In questo caso, non tutto il contenuto del file sarà disponibile per la condivisione. Per ulteriori informazioni, vedere [CreateFileMapping](http://msdn.microsoft.com/library/windows/desktop/aa366537) e [MapViewOfFileEx](http://msdn.microsoft.com/library/windows/desktop/aa366763) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CAtlFileMappingBase::CAtlFileMappingBase](#catlfilemappingbase).  
  
##  <a name="a-namemapsharedmema--catlfilemappingbasemapsharedmem"></a><a name="mapsharedmem"></a>CAtlFileMappingBase::MapSharedMem  
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
 `nMappingSize`  
 La dimensione del mapping. Se è 0, la dimensione massima dell'oggetto di mapping dei file è uguale alla dimensione corrente dell'oggetto di mapping del file identificato da`szName.`  
  
 `szName`  
 Il nome dell'oggetto di mapping.  
  
 *pbAlreadyExisted*  
 Punta a un valore booleano che è già impostata su TRUE se l'oggetto di mapping esistente.  
  
 `lpsa`  
 Puntatore a un **SECURITY_ATTRIBUTES** struttura che determina se l'handle restituito può essere ereditato dai processi figlio. Vedere *lpAttributes* in [CreateFileMapping](http://msdn.microsoft.com/library/windows/desktop/aa366537) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwMappingProtection`  
 La protezione desiderata per la visualizzazione del file, quando viene eseguito il mapping di file. Vedere `flProtect` in **CreateFileMapping** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwViewDesiredAccess`  
 Specifica il tipo di accesso per la visualizzazione del file e, di conseguenza, la protezione delle pagine per il file mappati. Vedere `dwDesiredAccess` in [MapViewOfFileEx](http://msdn.microsoft.com/library/windows/desktop/aa366763) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 **MapShareMem** consente a un oggetto di mapping del file esistente, creato da [CreateFileMapping](http://msdn.microsoft.com/library/windows/desktop/aa366537), per essere condiviso tra più processi.  
  
##  <a name="a-nameopenmappinga--catlfilemappingbaseopenmapping"></a><a name="openmapping"></a>CAtlFileMappingBase::OpenMapping  
 Chiamare questo metodo per aprire un oggetto denominato mapping dei file per il file specificato.  
  
```
HRESULT OpenMapping(
    LPCTSTR szName,
    SIZE_T nMappingSize,
    ULONGLONG nOffset = 0,
    DWORD dwViewDesiredAccess = FILE_MAP_ALL_ACCESS) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `szName`  
 Il nome dell'oggetto di mapping. Se è presente un handle aperto a un oggetto di mapping dei file con questo nome e il descrittore di sicurezza per l'oggetto di mapping non è in conflitto con il `dwViewDesiredAccess` ha esito positivo di parametro, l'operazione di apertura.  
  
 `nMappingSize`  
 La dimensione del mapping. Se è 0, la dimensione massima dell'oggetto di mapping dei file è uguale alla dimensione corrente dell'oggetto di mapping del file identificato da`szName.`  
  
 `nOffset`  
 L'offset del file in cui il mapping verrà avviato. Il valore di offset deve essere un multiplo di granularità di allocazione di memoria del sistema.  
  
 `dwViewDesiredAccess`  
 Specifica il tipo di accesso per la visualizzazione del file e, di conseguenza, la protezione delle pagine per il file mappati. Vedere `dwDesiredAccess` in [MapViewOfFileEx](http://msdn.microsoft.com/library/windows/desktop/aa366763) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug, si verificherà un errore di asserzione se i parametri di input non sono validi.  
  
##  <a name="a-nameoperatoreqa--catlfilemappingbaseoperator-"></a><a name="operator_eq"></a>CAtlFileMappingBase::operator =  
 Imposta l'oggetto di mapping del file corrente in un altro oggetto di mapping dei file.  
  
```
CAtlFileMappingBase& operator=(CAtlFileMappingBase& orig);
```  
  
### <a name="parameters"></a>Parametri  
 `orig`  
 L'oggetto di mapping del file corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento all'oggetto corrente.  
  
##  <a name="a-nameunmapa--catlfilemappingbaseunmap"></a><a name="unmap"></a>CAtlFileMappingBase::Unmap  
 Chiamare questo metodo per annullare il mapping di un oggetto di mapping dei file.  
  
```
HRESULT Unmap() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Vedere [UnmapViewOfFile](http://msdn.microsoft.com/library/windows/desktop/aa366882) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori dettagli.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CAtlFileMapping](../../atl/reference/catlfilemapping-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

