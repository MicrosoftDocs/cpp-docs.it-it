---
title: CComModule (classe)
ms.date: 08/19/2019
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
helpviewer_keywords:
- CComModule class
- DLL modules [C++], ATL
ms.assetid: f5face2c-8fd8-40e6-9ec3-54ab74701769
ms.openlocfilehash: 652c5f078ddbaf8d3e333f7003d6515a94dd8f83
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327753"
---
# <a name="ccommodule-class"></a>CComModule (classe)

A partire da ATL `CComModule` 7.0, è deprecato: vedere [classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CComModule : public _ATL_MODULE
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComModule::GetClassObject](#getclassobject)|Crea un oggetto di un CLSID specificato. Solo per LE DLL.|
|[CComModule::GetModuleInstance](#getmoduleinstance)|Restituisce `m_hInst`.|
|[Modulo CCom::GetResourceInstance](#getresourceinstance)|Restituisce `m_hInstResource`.|
|[Modulo CCom::GetTypeLibInstance](#gettypelibinstance)|Restituisce `m_hInstTypeLib`.|
|[Modulo CCom::Init](#init)|Inizializza i membri dati.|
|[Modulo CComModule::RegisterClassHelperCComModule::RegisterClassHelper](#registerclasshelper)|Immette la registrazione di classe standard di un oggetto nel Registro di sistema.|
|[CComModule::RegisterClassObjects](#registerclassobjects)|Registra l'oggetto classe. Solo per i file EXE.|
|[Modulo CComModule::RegisterServer](#registerserver)|Aggiorna il Registro di sistema per ogni oggetto nella mappa oggetti.|
|[Modulo CComModule::RegisterTypeLib](#registertypelib)|Registra una libreria dei tipi.|
|[CComModule::RevokeClassObjects](#revokeclassobjects)|Revoca l'oggetto classe. Solo per i file EXE.|
|[CComModule::Termine](#term)|Rilascia i membri dati.|
|[CComModule::UnregisterClassHelper](#unregisterclasshelper)|Rimuove la registrazione di classe standard di un oggetto dal Registro di sistema.|
|[CComModule::UnregisterServer (Modulo) CComModule (Informazioni in base al ruolo Del modulo)](#unregisterserver)|Annulla la registrazione di ogni oggetto nella mappa oggetti.|
|[CComModule::UpdateRegistryClass](#updateregistryclass)|Registra o annulla la registrazione della registrazione di classe standard di un oggetto.|
|[Modulo CComModule::UpdateRegistryFromResourceD](#updateregistryfromresourced)|Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto.|
|[Modulo CComModule::UpdateRegistryFromResourceS](#updateregistryfromresources)|Collegamenti statici al componente ATL Del Registro di sistema. Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Modulo CCom::m_csObjMap](#m_csobjmap)|Garantisce l'accesso sincronizzato alle informazioni della mappa oggetti.|
|[Modulo CComModule::m_csTypeInfoHolder](#m_cstypeinfoholder)|Garantisce l'accesso sincronizzato alle informazioni della libreria dei tipi.|
|[Modulo CComModule::m_csWindowCreate](#m_cswindowcreate)|Garantisce l'accesso sincronizzato alle informazioni sulla classe della finestra e ai dati statici utilizzati durante la creazione della finestra.|
|[Modulo CCom::m_hInst](#m_hinst)|Contiene l'handle per l'istanza del modulo.|
|[Modulo CCom::m_hInstResource](#m_hinstresource)|Per impostazione predefinita, contiene l'handle per l'istanza del modulo.|
|[Modulo CCom::m_hInstTypeLib](#m_hinsttypelib)|Per impostazione predefinita, contiene l'handle per l'istanza del modulo.|
|[CComModule::m_pObjMap](#m_pobjmap)|Punta alla mappa di oggetti gestita dall'istanza del modulo.|

## <a name="remarks"></a>Osservazioni

> [!NOTE]
> Questa classe è deprecata e le procedure guidate di generazione del codice ATL ora utilizzano le classi derivate [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md) e [CAtlModule.](../../atl/reference/catlmodule-class.md) Per ulteriori informazioni, vedere [Classi di moduli ATL.](../../atl/atl-module-classes.md) Le informazioni che seguono sono per l'utilizzo con le applicazioni create con versioni precedenti di ATL. `CComModule`fa ancora parte di ATL per la capacità all'indietro.

`CComModule`implementa un modulo server COM, consentendo a un client di accedere ai componenti del modulo. `CComModule`supporta entrambi i moduli DLL (in-process) ed EXE (locale).

Un'istanza `CComModule` utilizza una mappa degli oggetti per gestire un set di definizioni di oggetti di classe. Questa mappa degli oggetti viene `_ATL_OBJMAP_ENTRY` implementata come una matrice di strutture e contiene informazioni per:This object map is implemented as an array of structures, and contains information for:

- Immissione e rimozione delle descrizioni degli oggetti nel Registro di sistema.

- Creazione di un'istanza di oggetti tramite una class factory.

- Stabilire la comunicazione tra un client e l'oggetto radice nel componente.

- Esecuzione della gestione della durata degli oggetti di classe.

Quando si esegue la Creazione guidata applicazione `_Module`COM ATL, `CComModule` la procedura guidata genera automaticamente un'istanza globale di o una classe derivata da essa. Per ulteriori informazioni sulla Creazione guidata progetto ATL, vedere l'articolo [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).

Oltre a `CComModule`, ATL fornisce [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md), che implementa un modulo di modello di apartment per file EDA e i servizi Windows. Derivare il `CComAutoThreadModule` modulo da quando si desidera creare oggetti in più apartment.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_MODULE](atl-typedefs.md#_atl_module)

[CAtlModule (modulo CAtlModule)](../../atl/reference/catlmodule-class.md)

[CAtlModuleT (modulo CAtlModuleT)](../../atl/reference/catlmodulet-class.md)

`CComModule`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="ccommodulegetclassobject"></a><a name="getclassobject"></a>CComModule::GetClassObject

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
HRESULT GetClassObject(
    REFCLSID rclsid,
    REFIID riid,
    LPVOID* ppv) throw();
```

### <a name="parameters"></a>Parametri

*rclsid*<br/>
[in] CLSID dell'oggetto da creare.

*Riid*<br/>
[in] IID dell'interfaccia richiesta.

*Ppv*<br/>
[fuori] Puntatore al puntatore a interfaccia identificato da *riid*. Se l'oggetto non supporta questa interfaccia, *ppv* è impostato su NULL.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Crea un oggetto del CLSID specificato e recupera un puntatore a interfaccia a questo oggetto.

`GetClassObject`è disponibile solo per le DLL.

## <a name="ccommodulegetmoduleinstance"></a><a name="getmoduleinstance"></a>CComModule::GetModuleInstance

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
HINSTANCE GetModuleInstance() throw();
```

### <a name="return-value"></a>Valore restituito

L'HINSTANCE che identifica questo modulo.

### <a name="remarks"></a>Osservazioni

Restituisce il membro dati [m_hInst.](#m_hinst)

## <a name="ccommodulegetresourceinstance"></a><a name="getresourceinstance"></a>Modulo CCom::GetResourceInstance

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
HINSTANCE GetResourceInstance() throw();
```

### <a name="return-value"></a>Valore restituito

Un HINSTANCE.

### <a name="remarks"></a>Osservazioni

Restituisce il membro dati [m_hInstResource.](#m_hinstresource)

## <a name="ccommodulegettypelibinstance"></a><a name="gettypelibinstance"></a>Modulo CCom::GetTypeLibInstance

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
HINSTANCE GetTypeLibInstance() const throw();
```

### <a name="return-value"></a>Valore restituito

Un HINSTANCE.

### <a name="remarks"></a>Osservazioni

Restituisce il membro dati [m_hInstTypeLib.](#m_hinsttypelib)

## <a name="ccommoduleinit"></a><a name="init"></a>Modulo CCom::Init

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
HRESULT Init(
    _ATL_OBJMAP_ENTRY* p,
    HINSTANCE h,
    const GUID* plibid = NULL) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
[in] Puntatore a una matrice di voci della mappa di oggetti.

*H*<br/>
[in] L'HINSTANCE `DLLMain` passato `WinMain`a o .

*plibid*<br/>
[in] Puntatore al LIBID della libreria dei tipi associata al progetto.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Inizializza tutti i membri dati.

## <a name="ccommodulem_csobjmap"></a><a name="m_csobjmap"></a>Modulo CCom::m_csObjMap

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
CRITICAL_SECTION m_csObjMap;
```

### <a name="remarks"></a>Osservazioni

Garantisce l'accesso sincronizzato alla mappa oggetti.

## <a name="ccommodulem_cstypeinfoholder"></a><a name="m_cstypeinfoholder"></a>Modulo CComModule::m_csTypeInfoHolder

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
CRITICAL_SECTION m_csTypeInfoHolder;
```

### <a name="remarks"></a>Osservazioni

Garantisce l'accesso sincronizzato alla libreria dei tipi.

## <a name="ccommodulem_cswindowcreate"></a><a name="m_cswindowcreate"></a>Modulo CComModule::m_csWindowCreate

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
CRITICAL_SECTION m_csWindowCreate;
```

### <a name="remarks"></a>Osservazioni

Garantisce l'accesso sincronizzato alle informazioni sulle classi della finestra e ai dati statici utilizzati durante la creazione della finestra.

## <a name="ccommodulem_hinst"></a><a name="m_hinst"></a>Modulo CCom::m_hInst

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
HINSTANCE m_hInst;
```

### <a name="remarks"></a>Osservazioni

Contiene l'handle per l'istanza del modulo.

Il metodo [Init](#init) imposta `m_hInst` l'handle passato a `DLLMain` o `WinMain`.

## <a name="ccommodulem_hinstresource"></a><a name="m_hinstresource"></a>Modulo CCom::m_hInstResource

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
HINSTANCE m_hInstResource;
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, contiene l'handle per l'istanza del modulo.

Il metodo [Init](#init) imposta `m_hInstResource` l'handle passato a `DLLMain` o `WinMain`. È possibile `m_hInstResource` impostare in modo esplicito l'handle su una risorsa.

Il metodo [GetResourceInstance](#getresourceinstance) restituisce `m_hInstResource`l'handle archiviato in .

## <a name="ccommodulem_hinsttypelib"></a><a name="m_hinsttypelib"></a>Modulo CCom::m_hInstTypeLib

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
HINSTANCE m_hInstTypeLib;
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, contiene l'handle per l'istanza del modulo.

Il metodo [Init](#init) imposta `m_hInstTypeLib` l'handle passato a `DLLMain` o `WinMain`. È possibile `m_hInstTypeLib` impostare in modo esplicito l'handle su una libreria dei tipi.

Il metodo [GetTypeLibInstance](#gettypelibinstance) restituisce `m_hInstTypeLib`l'handle archiviato in .

## <a name="ccommodulem_pobjmap"></a><a name="m_pobjmap"></a>CComModule::m_pObjMap

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
_ATL_OBJMAP_ENTRY* m_pObjMap;
```

### <a name="remarks"></a>Osservazioni

Punta alla mappa di oggetti gestita dall'istanza del modulo.

## <a name="ccommoduleregisterclasshelper"></a><a name="registerclasshelper"></a>Modulo CComModule::RegisterClassHelperCComModule::RegisterClassHelper

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

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
[in] CLSID dell'oggetto da registrare.

*lpszProgID (ID Prog)*<br/>
[in] ProgID associato all'oggetto.

*lpszVerIndProgID*<br/>
[in] ProgID indipendente dalla versione associato all'oggetto.

*nDescID (identità)*<br/>
[in] Identificatore di una risorsa stringa per la descrizione dell'oggetto.

*dwFlags*<br/>
[in] Specifica il modello di threading da immettere nel Registro di sistema. I valori possibili sono THREADFLAGS_APARTMENT, THREADFLAGS_BOTH o AUTPRXFLAG.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Immette la registrazione di classe standard di un oggetto nel Registro di sistema.

Il metodo [UpdateRegistryClass](#updateregistryclass) chiama `RegisterClassHelper`.

## <a name="ccommoduleregisterclassobjects"></a><a name="registerclassobjects"></a>CComModule::RegisterClassObjects

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
HRESULT RegisterClassObjects(DWORD dwClsContext, DWORD dwFlags) throw();
```

### <a name="parameters"></a>Parametri

*dwClsContext*<br/>
[in] Specifica il contesto in cui deve essere eseguito l'oggetto classe. I valori possibili sono CLSCTX_INPROC_SERVER, CLSCTX_INPROC_HANDLER o CLSCTX_LOCAL_SERVER. Per una descrizione di questi valori, vedere [CLSCTX](/windows/win32/api/wtypesbase/ne-wtypesbase-clsctx) in Windows SDK.

*dwFlags*<br/>
[in] Determina i tipi di connessione all'oggetto classe. I valori possibili sono REGCLS_SINGLEUSE, REGCLS_MULTIPLEUSE o REGCLS_MULTI_SEPARATE. Per una descrizione di questi valori, vedere [REGCLS](/windows/win32/api/combaseapi/ne-combaseapi-regcls) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Registra un oggetto classe EXE con OLE in modo che altre applicazioni possano connettersi a esso. Questo metodo è disponibile solo per i file EXE.

## <a name="ccommoduleregisterserver"></a><a name="registerserver"></a>Modulo CComModule::RegisterServer

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
HRESULT RegisterServer(
    BOOL bRegTypeLib = FALSE,
    const CLSID* pCLSID = NULL) throw();
```

### <a name="parameters"></a>Parametri

*bRegTypeLib (in questo stato instato)*<br/>
[in] Indica se la libreria dei tipi verrà registrata. Il valore predefinito è FALSE.

*PCLSID (intattoLOGI)*<br/>
[in] Punta al CLSID dell'oggetto da registrare. Se NULL (valore predefinito), verranno registrati tutti gli oggetti nella mappa oggetti.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

A seconda del parametro *pCLSID,* aggiorna il Registro di sistema per un singolo oggetto classe o per tutti gli oggetti nella mappa oggetti.

Se *bRegTypeLib* è TRUE, verranno aggiornate anche le informazioni sulla libreria dei tipi.

Per informazioni su come aggiungere una voce alla mappa oggetti, vedere [OBJECT_ENTRY_AUTO.](object-map-macros.md#object_entry_auto)

`RegisterServer`verrà chiamato automaticamente `DLLRegisterServer` da per `WinMain` una DLL o `/RegServer` da per un file EXE eseguito con l'opzione della riga di comando.

## <a name="ccommoduleregistertypelib"></a><a name="registertypelib"></a>Modulo CComModule::RegisterTypeLib

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
HRESULT RegisterTypeLib() throw();
HRESULT RegisterTypeLib(LPCTSTR lpszIndex) throw();
```

### <a name="parameters"></a>Parametri

*Indice di lpsz*<br/>
[in] Stringa nel `"\\N"`formato `N` , dove è l'indice integer della risorsa TYPELIB.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Aggiunge informazioni su una libreria dei tipi al Registro di sistema.

Se l'istanza del modulo contiene più librerie dei tipi, utilizzare la seconda versione di questo metodo per specificare quale libreria dei tipi deve essere utilizzata.

## <a name="ccommodulerevokeclassobjects"></a><a name="revokeclassobjects"></a>CComModule::RevokeClassObjects

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
HRESULT RevokeClassObjects() throw();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Rimuove l'oggetto classe. Questo metodo è disponibile solo per i file EXE.

## <a name="ccommoduleterm"></a><a name="term"></a>CComModule::Termine

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
void Term() throw();
```

### <a name="remarks"></a>Osservazioni

Rilascia tutti i membri dati.

## <a name="ccommoduleunregisterclasshelper"></a><a name="unregisterclasshelper"></a>CComModule::UnregisterClassHelper

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
ATL_DEPRECATED HRESULT UnregisterClassHelper(
    const CLSID& clsid,
    LPCTSTR lpszProgID,
    LPCTSTR lpszVerIndProgID);
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
[in] CLSID dell'oggetto di cui annullare la registrazione.

*lpszProgID (ID Prog)*<br/>
[in] ProgID associato all'oggetto.

*lpszVerIndProgID*<br/>
[in] ProgID indipendente dalla versione associato all'oggetto.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Rimuove la registrazione di classe standard di un oggetto dal Registro di sistema.

Il metodo [UpdateRegistryClass](#updateregistryclass) chiama `UnregisterClassHelper`.

## <a name="ccommoduleunregisterserver"></a><a name="unregisterserver"></a>CComModule::UnregisterServer (Modulo) CComModule (Informazioni in base al ruolo Del modulo)

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
HRESULT UnregisterServer(const CLSID* pCLSID = NULL) throw ();
inline HRESULT UnregisterServer(BOOL bUnRegTypeLib, const CLSID* pCLSID = NULL) throw ();
```

### <a name="parameters"></a>Parametri

*bUnRegTypeLib (in formazione instato)*<br/>
Se TRUE, viene annullata la registrazione anche della libreria dei tipi.

*PCLSID (intattoLOGI)*<br/>
Punta al CLSID dell'oggetto di cui annullare la registrazione. Se NULL (valore predefinito), verrà annullata la registrazione di tutti gli oggetti nella mappa oggetti.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

A seconda del parametro *pCLSID,* annulla la registrazione di un singolo oggetto classe o di tutti gli oggetti nella mappa oggetti.

`UnregisterServer`verrà chiamato automaticamente `DLLUnregisterServer` da per `WinMain` una DLL o `/UnregServer` da per un file EXE eseguito con l'opzione della riga di comando.

Per informazioni su come aggiungere una voce alla mappa oggetti, vedere [OBJECT_ENTRY_AUTO.](object-map-macros.md#object_entry_auto)

## <a name="ccommoduleupdateregistryclass"></a><a name="updateregistryclass"></a>CComModule::UpdateRegistryClass

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

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
CLSID dell'oggetto da registrare o andire.

*lpszProgID (ID Prog)*<br/>
ProgID associato all'oggetto.

*lpszVerIndProgID*<br/>
ProgID indipendente dalla versione associato all'oggetto.

*nDescID (identità)*<br/>
Identificatore della risorsa stringa per la descrizione dell'oggetto.

*szDesc*<br/>
Stringa contenente la descrizione dell'oggetto.

*dwFlags*<br/>
Specifica il modello di threading da immettere nel Registro di sistema. I valori possibili sono THREADFLAGS_APARTMENT, THREADFLAGS_BOTH o AUTPRXFLAG.

*bRegistrare*<br/>
Indica se l'oggetto deve essere registrato.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Se *bRegister* è TRUE, questo metodo immette la registrazione della classe standard dell'oggetto nel Registro di sistema.

Se *bRegister* è FALSE, rimuove la registrazione dell'oggetto.

A seconda del valore `UpdateRegistryClass` di *bRegister*, chiama [RegisterClassHelper](#registerclasshelper) o [UnregisterClassHelper](#unregisterclasshelper).

Specificando la macro [DECLARE_REGISTRY,](registry-macros.md#declare_registry) `UpdateRegistryClass` verrà richiamato automaticamente durante l'elaborazione della mappa oggetti.

## <a name="ccommoduleupdateregistryfromresourced"></a><a name="updateregistryfromresourced"></a>Modulo CComModule::UpdateRegistryFromResourceD

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

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

*nResID (informazioni in stato inquestoe utente*<br/>
[in] Un ID risorsa.

*bRegistrare*<br/>
[in] Indica se l'oggetto deve essere registrato.

*pMapEvoci*<br/>
[in] Puntatore alla mappa di sostituzione che memorizza i valori associati ai parametri sostituibili dello script. ATL utilizza `%MODULE%`automaticamente . Per utilizzare parametri sostituibili aggiuntivi, vedere le osservazioni per i dettagli. In caso contrario, utilizzare il valore predefinito NULL.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Esegue lo script contenuto nella risorsa specificata da *lpszRes* o *nResID*.

Se *bRegister* è TRUE, questo metodo registra l'oggetto nel Registro di sistema; in caso contrario, annulla la registrazione dell'oggetto.

Specificando la [DECLARE_REGISTRY_RESOURCE](registry-macros.md#declare_registry_resource) [DECLARE_REGISTRY_RESOURCEID](registry-macros.md#declare_registry_resourceid) o DECLARE_REGISTRY_RESOURCEID `UpdateRegistryFromResourceD` macro, verrà richiamato automaticamente durante l'elaborazione della mappa oggetti.

> [!NOTE]
> Per sostituire i valori di sostituzione in fase di esecuzione, non specificare la DECLARE_REGISTRY_RESOURCE o DECLARE_REGISTRY_RESOURCEID macro. Creare invece una `_ATL_REGMAP_ENTRIES` matrice di strutture, in cui ogni voce contiene un segnaposto di variabile associato a un valore per sostituire il segnaposto in fase di esecuzione. Chiamare `UpdateRegistryFromResourceD`quindi , passando la matrice per il parametro *pMapEntries* . In questo modo tutti `_ATL_REGMAP_ENTRIES` i valori di sostituzione nelle strutture vengono aggiunti alla mappa di sostituzione della funzione di registrazione.

> [!NOTE]
> Per eseguire il collegamento statico al componente registro ATL (Registrar), vedere [UpdateRegistryFromResourceS](#updateregistryfromresources).

Per ulteriori informazioni sui parametri sostituibili e gli script, vedere l'articolo Componente del Registro di [sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md).

## <a name="ccommoduleupdateregistryfromresources"></a><a name="updateregistryfromresources"></a>Modulo CComModule::UpdateRegistryFromResourceS

A partire da ATL `CComModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

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

*nResID (informazioni in stato inquestoe utente*<br/>
[in] Un ID risorsa.

*bRegistrare*<br/>
[in] Indica se lo script di risorsa deve essere registrato.

*pMapEvoci*<br/>
[in] Puntatore alla mappa di sostituzione che memorizza i valori associati ai parametri sostituibili dello script. ATL utilizza `%MODULE%`automaticamente . Per utilizzare parametri sostituibili aggiuntivi, vedere le osservazioni per i dettagli. In caso contrario, utilizzare il valore predefinito NULL.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Analogamente a [UpdateRegistryFromResourceD](#updateregistryfromresourced) ad eccezione del fatto `UpdateRegistryFromResourceS` che crea un collegamento statico al componente del Registro di sistema ATL (Registrar).

`UpdateRegistryFromResourceS`verrà richiamato automaticamente durante l'elaborazione della `#define _ATL_STATIC_REGISTRY` mappa oggetti, a condizione che si aggiunge al *file pch.h* (*stdafx.h* in Visual Studio 2017 e versioni precedenti).

> [!NOTE]
> Per sostituire i valori di sostituzione in fase di esecuzione, non specificare la [DECLARE_REGISTRY_RESOURCE](registry-macros.md#declare_registry_resource) o [DECLARE_REGISTRY_RESOURCEID](registry-macros.md#declare_registry_resourceid) macro. Creare invece una `_ATL_REGMAP_ENTRIES` matrice di strutture, in cui ogni voce contiene un segnaposto di variabile associato a un valore per sostituire il segnaposto in fase di esecuzione. Chiamare `UpdateRegistryFromResourceS`quindi , passando la matrice per il parametro *pMapEntries* . In questo modo tutti `_ATL_REGMAP_ENTRIES` i valori di sostituzione nelle strutture vengono aggiunti alla mappa di sostituzione della funzione di registrazione.

Per ulteriori informazioni sui parametri sostituibili e gli script, vedere l'articolo Componente del Registro di [sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md).

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
