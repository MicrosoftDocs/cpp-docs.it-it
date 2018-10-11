---
title: CComModule (classi) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComModule
- ATLBASE/ATL::CComModule
- ATLBASE/ATL::CComModule::GetClassObject
- ATLBASE/ATL::CComModule::GetModuleInstance
- ATLBASE/ATL::CComModule::GetResourceInstance
- ATLBASE/ATL::CComModule::GetTypeLibInstance
- ATLBASE/ATL::CComModule::Init
- ATLBASE/ATL::CComModule::RegisterClassHelper
- ATLBASE/ATL::CComModule::RegisterClassObjects
- ATLBASE/ATL::CComModule::RegisterServer
- ATLBASE/ATL::CComModule::RegisterTypeLib
- ATLBASE/ATL::CComModule::RevokeClassObjects
- ATLBASE/ATL::CComModule::Term
- ATLBASE/ATL::CComModule::UnregisterClassHelper
- ATLBASE/ATL::CComModule::UnregisterServer
- ATLBASE/ATL::CComModule::UpdateRegistryClass
- ATLBASE/ATL::CComModule::UpdateRegistryFromResourceD
- ATLBASE/ATL::CComModule::UpdateRegistryFromResourceS
- ATLBASE/ATL::CComModule::m_csObjMap
- ATLBASE/ATL::CComModule::m_csTypeInfoHolder
- ATLBASE/ATL::CComModule::m_csWindowCreate
- ATLBASE/ATL::CComModule::m_hInst
- ATLBASE/ATL::CComModule::m_hInstResource
- ATLBASE/ATL::CComModule::m_hInstTypeLib
- ATLBASE/ATL::CComModule::m_pObjMap
dev_langs:
- C++
helpviewer_keywords:
- CComModule class
- DLL modules [C++], ATL
ms.assetid: f5face2c-8fd8-40e6-9ec3-54ab74701769
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 519837379369f08108d3d5b5b300fe0bcb9ac5e7
ms.sourcegitcommit: 3a141cf07b5411d5f1fdf6cf67c4ce928cf389c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/11/2018
ms.locfileid: "49083814"
---
# <a name="ccommodule-class"></a>CComModule (classi)

A partire da ATL 7.0 `CComModule` è deprecato: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CComModule : public _ATL_MODULE
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComModule::GetClassObject](#getclassobject)|Crea un oggetto di un CLSID specificato. Per le DLL solo.|
|[CComModule::GetModuleInstance](#getmoduleinstance)|Restituisce `m_hInst`.|
|[CComModule::GetResourceInstance](#getresourceinstance)|Restituisce `m_hInstResource`.|
|[CComModule::GetTypeLibInstance](#gettypelibinstance)|Restituisce `m_hInstTypeLib`.|
|[CComModule](#init)|Inizializza i membri dati.|
|[CComModule::RegisterClassHelper](#registerclasshelper)|Entra in registrazione di un oggetto classe standard nel Registro di sistema.|
|[CComModule::RegisterClassObjects](#registerclassobjects)|Registra l'oggetto di classe. Per solo file eseguibili.|
|[CComModule::RegisterServer](#registerserver)|Aggiorna registro di sistema per ogni oggetto nella mappa oggetto.|
|[CComModule::RegisterTypeLib](#registertypelib)|Registra una libreria dei tipi.|
|[CComModule::RevokeClassObjects](#revokeclassobjects)|Revoca l'oggetto della classe. Per solo file eseguibili.|
|[CComModule:: term](#term)|Rilascia i membri dati.|
|[CComModule::UnregisterClassHelper](#unregisterclasshelper)|Rimuove la registrazione di un oggetto classe standard dal Registro di sistema.|
|[CComModule::UnregisterServer](#unregisterserver)|Annulla la registrazione di ogni oggetto nella mappa oggetto.|
|[CComModule::UpdateRegistryClass](#updateregistryclass)|Registra o Annulla la registrazione di registrazione di un oggetto classe standard.|
|[CComModule::UpdateRegistryFromResourceD](#updateregistryfromresourced)|Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto.|
|[CComModule::UpdateRegistryFromResourceS](#updateregistryfromresources)|Collegamenti in modo statico al componente del Registro di sistema ATL. Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComModule::m_csObjMap](#m_csobjmap)|Garantisce l'accesso sincronizzato alle informazioni della mappa oggetto.|
|[CComModule::m_csTypeInfoHolder](#m_cstypeinfoholder)|Garantisce l'accesso sincronizzato alle informazioni sul tipo di libreria.|
|[CComModule::m_csWindowCreate](#m_cswindowcreate)|Garantisce l'accesso sincronizzato a informazioni sulle classi di finestra e i dati statici utilizzati durante la creazione della finestra.|
|[CComModule::m_hInst](#m_hinst)|Contiene l'handle per l'istanza del modulo.|
|[CComModule::m_hInstResource](#m_hinstresource)|Per impostazione predefinita, contiene l'handle per l'istanza del modulo.|
|[CComModule::m_hInstTypeLib](#m_hinsttypelib)|Per impostazione predefinita, contiene l'handle per l'istanza del modulo.|
|[CComModule::m_pObjMap](#m_pobjmap)|Punta alla mappa dell'oggetto gestito dall'istanza del modulo.|

## <a name="remarks"></a>Note

> [!NOTE]
>  Questa classe è deprecata e le procedure guidate la generazione di codice ATL a questo punto usano il [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md) e [CAtlModule](../../atl/reference/catlmodule-class.md) classi derivate. Visualizzare [classi di modulo ATL](../../atl/atl-module-classes.md) per altre informazioni. Le informazioni seguenti si applica alle applicazioni create con versioni precedenti di ATL. `CComModule` è ancora parte di ATL per le versioni precedenti la funzionalità.

`CComModule` implementa un modulo di server COM, in modo che un client accedere ai componenti del modulo. `CComModule` supporta entrambi i moduli (locali) di EXE e i DLL (in-process).

Oggetto `CComModule` istanza utilizza una mappa di oggetto per mantenere un set di definizioni degli oggetti di classe. Questa mappa di oggetti viene implementata come una matrice di `_ATL_OBJMAP_ENTRY` strutture e contiene informazioni per:

- Inserimento e rimozione di descrizioni degli oggetti nel Registro di sistema.

- Creazione di oggetti tramite una class factory.

- Stabilire una comunicazione tra un client e l'oggetto radice nel componente.

- Eseguire la gestione della durata degli oggetti classe.

Quando si esegue la creazione guidata applicazioni COM ATL, la procedura guidata genera automaticamente `_Module`, un'istanza globale di `CComModule` o una classe derivata da esso. Per altre informazioni sulla creazione guidata progetto ATL, vedere l'articolo [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).

Oltre a `CComModule`, ATL fornisce [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md), che implementa un modulo di modello di apartment per i servizi di file exe e Windows. Derivare il modulo dal `CComAutoThreadModule` quando si desidera creare oggetti in più apartment.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_MODULE](atl-typedefs.md#_atl_module)

[CAtlModule](../../atl/reference/catlmodule-class.md)

[CAtlModuleT](../../atl/reference/catlmodulet-class.md)

`CComModule`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="getclassobject"></a>  CComModule::GetClassObject

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
HRESULT GetClassObject(  
    REFCLSID rclsid,
    REFIID riid,
    LPVOID* ppv) throw();
```

### <a name="parameters"></a>Parametri

*rclsid*<br/>
[in] Il CLSID dell'oggetto da creare.

*riid*<br/>
[in] IID dell'interfaccia richiesta.

*ppv*<br/>
[out] Un puntatore al puntatore a interfaccia identificato dal *riid*. Se l'oggetto non supporta questa interfaccia, *ppv* è impostato su NULL.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Crea un oggetto di CLSID specificato e recupera un puntatore a interfaccia a questo oggetto.

`GetClassObject` è disponibile solo per le DLL.

##  <a name="getmoduleinstance"></a>  CComModule::GetModuleInstance

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
HINSTANCE GetModuleInstance() throw();
```

### <a name="return-value"></a>Valore restituito

HINSTANCE che identifica questo modulo.

### <a name="remarks"></a>Note

Restituisce il [m_hInst](#m_hinst) (membro dati).

##  <a name="getresourceinstance"></a>  CComModule::GetResourceInstance

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
HINSTANCE GetResourceInstance() throw();
```

### <a name="return-value"></a>Valore restituito

Un oggetto HINSTANCE.

### <a name="remarks"></a>Note

Restituisce il [m_hInstResource](#m_hinstresource) (membro dati).

##  <a name="gettypelibinstance"></a>  CComModule::GetTypeLibInstance

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
HINSTANCE GetTypeLibInstance() const throw();
```

### <a name="return-value"></a>Valore restituito

Un oggetto HINSTANCE.

### <a name="remarks"></a>Note

Restituisce il [m_hInstTypeLib](#m_hinsttypelib) (membro dati).

##  <a name="init"></a>  CComModule

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
HRESULT Init(
    _ATL_OBJMAP_ENTRY* p,
    HINSTANCE h,
    const GUID* plibid = NULL) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
[in] Un puntatore a una matrice di voci della mappa oggetto.

*h*<br/>
[in] HINSTANCE passato a `DLLMain` o `WinMain`.

*plibid*<br/>
[in] Puntatore a LIBID della libreria dei tipi associato al progetto.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Inizializza tutti i membri dati.

##  <a name="m_csobjmap"></a>  CComModule::m_csObjMap

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
CRITICAL_SECTION m_csObjMap;
```

### <a name="remarks"></a>Note

Garantisce l'accesso sincronizzato alla mappa dell'oggetto.

##  <a name="m_cstypeinfoholder"></a>  CComModule::m_csTypeInfoHolder

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
CRITICAL_SECTION m_csTypeInfoHolder;
```

### <a name="remarks"></a>Note

Garantisce l'accesso sincronizzato a libreria dei tipi.

##  <a name="m_cswindowcreate"></a>  CComModule::m_csWindowCreate

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
CRITICAL_SECTION m_csWindowCreate;
```

### <a name="remarks"></a>Note

Garantisce l'accesso sincronizzato a informazioni sulle classi di finestra e ai dati statici utilizzati durante la creazione della finestra.

##  <a name="m_hinst"></a>  CComModule::m_hInst

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
HINSTANCE m_hInst;
```

### <a name="remarks"></a>Note

Contiene l'handle per l'istanza del modulo.

Il [Init](#init) metodo imposta `m_hInst` per l'handle passato a `DLLMain` o `WinMain`.

##  <a name="m_hinstresource"></a>  CComModule::m_hInstResource

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
HINSTANCE m_hInstResource;
```

### <a name="remarks"></a>Note

Per impostazione predefinita, contiene l'handle per l'istanza del modulo.

Il [Init](#init) metodo imposta `m_hInstResource` per l'handle passato a `DLLMain` o `WinMain`. È possibile impostare esplicitamente `m_hInstResource` all'handle a una risorsa.

Il [GetResourceInstance](#getresourceinstance) metodo restituisce l'handle archiviato in `m_hInstResource`.

##  <a name="m_hinsttypelib"></a>  CComModule::m_hInstTypeLib

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
HINSTANCE m_hInstTypeLib;
```

### <a name="remarks"></a>Note

Per impostazione predefinita, contiene l'handle per l'istanza del modulo.

Il [Init](#init) metodo imposta `m_hInstTypeLib` per l'handle passato a `DLLMain` o `WinMain`. È possibile impostare esplicitamente `m_hInstTypeLib` sull'handle per una libreria dei tipi.

Il [GetTypeLibInstance](#gettypelibinstance) metodo restituisce l'handle archiviato in `m_hInstTypeLib`.

##  <a name="m_pobjmap"></a>  CComModule::m_pObjMap

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
_ATL_OBJMAP_ENTRY* m_pObjMap;
```

### <a name="remarks"></a>Note

Punta alla mappa dell'oggetto gestito dall'istanza del modulo.

##  <a name="registerclasshelper"></a>  CComModule::RegisterClassHelper

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
ATL_DEPRECATED HRESULT RegisterClassHelper(  
    const CLSID& clsid,
    LPCTSTR lpszProgID,
    LPCTSTR lpszVerIndProgID,
    UINT nDescID,
    DWORD dwFlags);
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
[in] Il CLSID dell'oggetto da registrare.

*lpszProgID*<br/>
[in] Il ProgID associato all'oggetto.

*lpszVerIndProgID*<br/>
[in] Il ProgID indipendenti dalla versione associato all'oggetto.

*nDescID*<br/>
[in] L'identificatore della risorsa stringa per la descrizione dell'oggetto.

*dwFlags*<br/>
[in] Specifica il modello di threading di immettere nel Registro di sistema. I valori possibili sono THREADFLAGS_APARTMENT, THREADFLAGS_BOTH o AUTPRXFLAG.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Entra in registrazione di un oggetto classe standard nel Registro di sistema.

Il [UpdateRegistryClass](#updateregistryclass) chiamate al metodo `RegisterClassHelper`.

##  <a name="registerclassobjects"></a>  CComModule::RegisterClassObjects

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
HRESULT RegisterClassObjects(DWORD dwClsContext, DWORD dwFlags) throw();
```

### <a name="parameters"></a>Parametri

*dwClsContext*<br/>
[in] Specifica il contesto in cui l'oggetto della classe deve essere eseguito. I valori possibili sono CLSCTX_INPROC_SERVER, CLSCTX_INPROC_HANDLER o CLSCTX_LOCAL_SERVER. Per una descrizione di questi valori, vedere [CLSCTX](/windows/desktop/api/wtypesbase/ne-wtypesbase-tagclsctx) nel SDK di Windows.

*dwFlags*<br/>
[in] Determina i tipi di connessione per l'oggetto della classe. I valori possibili sono REGCLS_SINGLEUSE, REGCLS_MULTIPLEUSE o REGCLS_MULTI_SEPARATE. Per una descrizione di questi valori, vedere [REGCLS](/windows/desktop/api/combaseapi/ne-combaseapi-tagregcls) nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Registra un oggetto di classe EXE con OLE in modo che altre applicazioni possono connettersi a esso. Questo metodo è disponibile solo ai file exe.

##  <a name="registerserver"></a>  CComModule::RegisterServer

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
HRESULT RegisterServer(
    BOOL bRegTypeLib = FALSE,  
    const CLSID* pCLSID = NULL) throw();
```

### <a name="parameters"></a>Parametri

*bRegTypeLib*<br/>
[in] Indica se verrà registrata la libreria dei tipi. Il valore predefinito è FALSE.

*pCLSID*<br/>
[in] Punta al CLSID dell'oggetto da registrare. Se NULL (valore predefinito), tutti gli oggetti nella mappa oggetto verrà registrato.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

A seconda le *pCLSID* parametro, aggiorna il Registro di sistema per un oggetto della classe singola o per tutti gli oggetti nella mappa oggetto.

Se *bRegTypeLib* è TRUE, verranno aggiornate anche le informazioni sul tipo di libreria.

Visualizzare [OBJECT_ENTRY_AUTO](object-map-macros.md#object_entry_auto) per informazioni su come aggiungere una voce alla mappa dell'oggetto.

`RegisterServer` verrà chiamato automaticamente da `DLLRegisterServer` per una DLL o da `WinMain` un file eseguibile eseguito con il `/RegServer` opzione della riga di comando.

##  <a name="registertypelib"></a>  CComModule::RegisterTypeLib

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
HRESULT RegisterTypeLib() throw();
HRESULT RegisterTypeLib(LPCTSTR lpszIndex) throw();
```

### <a name="parameters"></a>Parametri

*lpszIndex*<br/>
[in] Stringa nel formato `"\\N"`, dove `N` è l'indice integer della risorsa della libreria dei tipi.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Aggiunge informazioni su una libreria dei tipi nel Registro di sistema.

Se l'istanza del modulo contiene più librerie dei tipi, usare la seconda versione di questo metodo per specificare quale libreria dei tipi da utilizzare.

##  <a name="revokeclassobjects"></a>  CComModule::RevokeClassObjects

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
HRESULT RevokeClassObjects() throw();
```

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Rimuove l'oggetto di classe. Questo metodo è disponibile solo ai file exe.

##  <a name="term"></a>  CComModule:: term

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
void Term() throw();
```

### <a name="remarks"></a>Note

Rilascia tutti i membri dati.

##  <a name="unregisterclasshelper"></a>  CComModule::UnregisterClassHelper

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
ATL_DEPRECATED HRESULT UnregisterClassHelper(  
    const CLSID& clsid,
    LPCTSTR lpszProgID,
    LPCTSTR lpszVerIndProgID);
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
[in] Il CLSID dell'oggetto di cui annullare la registrazione.

*lpszProgID*<br/>
[in] Il ProgID associato all'oggetto.

*lpszVerIndProgID*<br/>
[in] Il ProgID indipendenti dalla versione associato all'oggetto.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Rimuove la registrazione di un oggetto classe standard dal Registro di sistema.

Il [UpdateRegistryClass](#updateregistryclass) chiamate al metodo `UnregisterClassHelper`.

##  <a name="unregisterserver"></a>  CComModule::UnregisterServer

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
HRESULT UnregisterServer(const CLSID* pCLSID = NULL) throw ();
inline HRESULT UnregisterServer(BOOL bUnRegTypeLib, const CLSID* pCLSID = NULL) throw ();
```

### <a name="parameters"></a>Parametri

*bUnRegTypeLib*<br/>
Se TRUE, la libreria dei tipi viene anche annullata la registrazione.

*pCLSID*<br/>
Punta al CLSID dell'oggetto da cui annullare la registrazione. Se NULL (valore predefinito), tutti gli oggetti nella mappa oggetto verrà annullata la registrazione.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

A seconda le *pCLSID* parametro, Annulla la registrazione di un oggetto classe singola o tutti gli oggetti nella mappa oggetto.

`UnregisterServer` verrà chiamato automaticamente da `DLLUnregisterServer` per una DLL o da `WinMain` un file eseguibile eseguito con il `/UnregServer` opzione della riga di comando.

Visualizzare [OBJECT_ENTRY_AUTO](object-map-macros.md#object_entry_auto) per informazioni su come aggiungere una voce alla mappa dell'oggetto.

##  <a name="updateregistryclass"></a>  CComModule::UpdateRegistryClass

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
ATL_DEPRECATED HRESULT UpdateRegistryClass(  
    const CLSID& clsid,
    LPCTSTR lpszProgID,
    LPCTSTR lpszVerIndProgID,
    UINT nDescID,
    DWORD dwFlags,
    BOOL bRegister);

ATL_DEPRECATED HRESULT UpdateRegistryClass(  
    const CLSID& clsid,
    LPCTSTR lpszProgID,
    LPCTSTR lpszVerIndProgID,
    LPCTSTR szDesc,
    DWORD dwFlags,
    BOOL bRegister);
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
Il CLSID dell'oggetto da registrare o annullare la registrazione.

*lpszProgID*<br/>
Il ProgID associato all'oggetto.

*lpszVerIndProgID*<br/>
Il ProgID indipendenti dalla versione associato all'oggetto.

*nDescID*<br/>
L'identificatore della risorsa stringa per la descrizione dell'oggetto.

*szDesc*<br/>
Stringa contenente la descrizione dell'oggetto.

*dwFlags*<br/>
Specifica il modello di threading di immettere nel Registro di sistema. I valori possibili sono THREADFLAGS_APARTMENT, THREADFLAGS_BOTH o AUTPRXFLAG.

*bRegistrazione immediata*<br/>
Indica se l'oggetto deve essere registrato.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Se *bRegistrazione immediata* è TRUE, questo metodo passa una registrazione delle classi standard dell'oggetto nel Registro di sistema.

Se *bRegistrazione immediata* è FALSE, viene rimossa la registrazione dell'oggetto.

A seconda del valore di *bRegistrazione immediata*, `UpdateRegistryClass` vengono richiamati i metodi [RegisterClassHelper](#registerclasshelper) oppure [UnregisterClassHelper](#unregisterclasshelper).

Specificando il [DECLARE_REGISTRY](registry-macros.md#declare_registry) macro, `UpdateRegistryClass` verrà richiamato automaticamente quando viene elaborata la mappa oggetto.

##  <a name="updateregistryfromresourced"></a>  CComModule::UpdateRegistryFromResourceD

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
virtual HRESULT UpdateRegistryFromResourceD(  
    LPCTSTR lpszRes,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw();

virtual HRESULT UpdateRegistryFromResourceD(  
    UINT nResID,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw ();
```

### <a name="parameters"></a>Parametri

*lpszRes*<br/>
[in] Un nome di risorsa.

*nResID*<br/>
[in] Un ID risorsa.

*bRegistrazione immediata*<br/>
[in] Indica se l'oggetto deve essere registrato.

*pMapEntries*<br/>
[in] Puntatore alla mappa di sostituzione l'archiviazione dei valori associati a parametri sostituibili dello script. ATL usa automaticamente `%MODULE%`. Per usare parametri sostituibili aggiuntivi, vedere la sezione Osservazioni per informazioni dettagliate. In caso contrario, usare il valore predefinito NULL.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Viene eseguito lo script contenuto nella risorsa specificata da *lpszRes* oppure *nResID*.

Se *bRegistrazione immediata* è TRUE, questo metodo registra l'oggetto nel Registro di sistema; in caso contrario, Annulla la registrazione dell'oggetto.

Specificando il [macro DECLARE_REGISTRY_RESOURCE](registry-macros.md#declare_registry_resource) oppure [DECLARE_REGISTRY_RESOURCEID](registry-macros.md#declare_registry_resourceid) macro, `UpdateRegistryFromResourceD` verrà richiamato automaticamente quando viene elaborata la mappa oggetto.

> [!NOTE]
>  Per sostituire i valori di sostituzione in fase di esecuzione, non specificare la macro macro DECLARE_REGISTRY_RESOURCE o DECLARE_REGISTRY_RESOURCEID. In alternativa, creare una matrice di `_ATL_REGMAP_ENTRIES` strutture, in cui ogni voce contiene un variabile segnaposto abbinato a un valore da sostituire il segnaposto in fase di esecuzione. Quindi chiamare `UpdateRegistryFromResourceD`, passando la matrice il *pMapEntries* parametro. Ciò consente di aggiungere tutti i valori di sostituzione nella `_ATL_REGMAP_ENTRIES` strutture alla mappa di sostituzione del Registrar.

> [!NOTE]
>  Per collegare in modo statico al componente del Registro di sistema ATL (Registrar), vedere [UpdateRegistryFromResourceS](#updateregistryfromresources).

Per altre informazioni sui parametri sostituibili e la creazione di script, vedere l'articolo [il componente del Registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md).

##  <a name="updateregistryfromresources"></a>  CComModule::UpdateRegistryFromResourceS

A partire da ATL 7.0 `CComModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
virtual HRESULT UpdateRegistryFromResourceS(  
    LPCTSTR lpszRes,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw();

virtual HRESULT UpdateRegistryFromResourceS(  
    UINT nResID,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw();
```

### <a name="parameters"></a>Parametri

*lpszRes*<br/>
[in] Un nome di risorsa.

*nResID*<br/>
[in] Un ID risorsa.

*bRegistrazione immediata*<br/>
[in] Indica se lo script di risorsa deve essere registrato.

*pMapEntries*<br/>
[in] Puntatore alla mappa di sostituzione l'archiviazione dei valori associati a parametri sostituibili dello script. ATL usa automaticamente `%MODULE%`. Per usare parametri sostituibili aggiuntivi, vedere la sezione Osservazioni per informazioni dettagliate. In caso contrario, usare il valore predefinito NULL.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Simile a [UpdateRegistryFromResourceD](#updateregistryfromresourced) tranne `UpdateRegistryFromResourceS` crea un collegamento statico al componente del Registro di sistema ATL (Registrar).

`UpdateRegistryFromResourceS` verrà richiamato automaticamente quando si mappa l'oggetto viene elaborata, purché si aggiungono `#define _ATL_STATIC_REGISTRY` per il file stdafx. h.

> [!NOTE]
>  Per sostituire i valori di sostituzione in fase di esecuzione, non si specifica la [macro DECLARE_REGISTRY_RESOURCE](registry-macros.md#declare_registry_resource) oppure [DECLARE_REGISTRY_RESOURCEID](registry-macros.md#declare_registry_resourceid) macro. In alternativa, creare una matrice di `_ATL_REGMAP_ENTRIES` strutture, in cui ogni voce contiene un variabile segnaposto abbinato a un valore da sostituire il segnaposto in fase di esecuzione. Quindi chiamare `UpdateRegistryFromResourceS`, passando la matrice il *pMapEntries* parametro. Ciò consente di aggiungere tutti i valori di sostituzione nella `_ATL_REGMAP_ENTRIES` strutture alla mappa di sostituzione del Registrar.

Per altre informazioni sui parametri sostituibili e la creazione di script, vedere l'articolo [il componente del Registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md).

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
