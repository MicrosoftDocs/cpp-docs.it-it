---
description: 'Altre informazioni su: classe CComModule'
title: Classe CComModule
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
ms.openlocfilehash: dd0ec6c6aa7d68374a90830b10815a9cbdd54aeb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97152022"
---
# <a name="ccommodule-class"></a>Classe CComModule

A partire da ATL 7,0, `CComModule` è deprecato: per ulteriori informazioni, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CComModule : public _ATL_MODULE
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComModule:: GetClassObject](#getclassobject)|Crea un oggetto di un CLSID specificato. Solo per le dll.|
|[CComModule:: GetModuleInstance](#getmoduleinstance)|Restituisce `m_hInst`.|
|[CComModule:: GetResourceInstance](#getresourceinstance)|Restituisce `m_hInstResource`.|
|[CComModule:: GetTypeLibInstance](#gettypelibinstance)|Restituisce `m_hInstTypeLib`.|
|[CComModule:: init](#init)|Inizializza i membri dati.|
|[CComModule:: RegisterClassHelper](#registerclasshelper)|Immette la registrazione della classe standard di un oggetto nel registro di sistema.|
|[CComModule:: RegisterClassObjects](#registerclassobjects)|Registra l'oggetto classe. Solo per i exe.|
|[CComModule:: RegisterServer](#registerserver)|Aggiorna il registro di sistema per ogni oggetto nella mappa degli oggetti.|
|[CComModule:: RegisterTypeLib](#registertypelib)|Registra una libreria dei tipi.|
|[CComModule:: RevokeClassObjects](#revokeclassobjects)|Revoca l'oggetto classe. Solo per i exe.|
|[CComModule:: term](#term)|Rilascia i membri dati.|
|[CComModule:: UnregisterClassHelper](#unregisterclasshelper)|Rimuove la registrazione della classe standard di un oggetto dal registro di sistema.|
|[CComModule:: UnregisterServer](#unregisterserver)|Annulla la registrazione di ogni oggetto nella mappa degli oggetti.|
|[CComModule:: UpdateRegistryClass](#updateregistryclass)|Registra o Annulla la registrazione della classe standard di un oggetto.|
|[CComModule:: UpdateRegistryFromResourceD](#updateregistryfromresourced)|Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto.|
|[CComModule:: UpdateRegistryFromResourceS](#updateregistryfromresources)|Collega in modo statico il componente del registro di sistema ATL. Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CComModule:: m_csObjMap](#m_csobjmap)|Assicura l'accesso sincronizzato alle informazioni sulla mappa degli oggetti.|
|[CComModule:: m_csTypeInfoHolder](#m_cstypeinfoholder)|Assicura l'accesso sincronizzato alle informazioni sulla libreria dei tipi.|
|[CComModule:: m_csWindowCreate](#m_cswindowcreate)|Assicura l'accesso sincronizzato alle informazioni sulla classe di finestra e ai dati statici utilizzati durante la creazione della finestra.|
|[CComModule:: m_hInst](#m_hinst)|Contiene l'handle per l'istanza del modulo.|
|[CComModule:: m_hInstResource](#m_hinstresource)|Per impostazione predefinita, contiene l'handle per l'istanza del modulo.|
|[CComModule:: m_hInstTypeLib](#m_hinsttypelib)|Per impostazione predefinita, contiene l'handle per l'istanza del modulo.|
|[CComModule:: m_pObjMap](#m_pobjmap)|Punta alla mappa dell'oggetto gestita dall'istanza del modulo.|

## <a name="remarks"></a>Commenti

> [!NOTE]
> Questa classe è deprecata e le procedure guidate di generazione del codice ATL ora utilizzano le classi derivate [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md) e [CAtlModule](../../atl/reference/catlmodule-class.md) . Per ulteriori informazioni, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) . Le informazioni seguenti sono destinate all'utilizzo con le applicazioni create con versioni precedenti di ATL. `CComModule` è ancora parte di ATL per la funzionalità delle versioni precedenti.

`CComModule` implementa un modulo server COM, consentendo a un client di accedere ai componenti del modulo. `CComModule` supporta i moduli DLL (in-process) e EXE (locale).

`CComModule`In un'istanza di viene utilizzata una mappa oggetto per mantenere un set di definizioni di oggetti classe. Questa mappa oggetto viene implementata come una matrice di `_ATL_OBJMAP_ENTRY` strutture e contiene informazioni per:

- Immissione e rimozione delle descrizioni degli oggetti nel registro di sistema.

- Creazione di istanze di oggetti tramite un class factory.

- Stabilire la comunicazione tra un client e l'oggetto radice nel componente.

- Esecuzione della gestione della durata degli oggetti classe.

Quando si esegue il creazione guidata applicazioni COM ATL, la procedura guidata genera automaticamente `_Module` , un'istanza globale di `CComModule` o una classe derivata da essa. Per ulteriori informazioni sulla creazione guidata progetto ATL, vedere l'articolo [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).

In aggiunta a `CComModule` , ATL fornisce [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md), che implementa un modulo modello di Apartment per i exe e i servizi Windows. Derivare il modulo da `CComAutoThreadModule` quando si desidera creare oggetti in più Apartment.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_MODULE](atl-typedefs.md#_atl_module)

[CAtlModule](../../atl/reference/catlmodule-class.md)

[CAtlModuleT](../../atl/reference/catlmodulet-class.md)

`CComModule`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="ccommodulegetclassobject"></a><a name="getclassobject"></a> CComModule:: GetClassObject

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
HRESULT GetClassObject(
    REFCLSID rclsid,
    REFIID riid,
    LPVOID* ppv) throw();
```

### <a name="parameters"></a>Parametri

*rclsid*<br/>
in CLSID dell'oggetto da creare.

*riid*<br/>
in IID dell'interfaccia richiesta.

*PPV*<br/>
out Puntatore al puntatore a interfaccia identificato da *riid*. Se l'oggetto non supporta questa interfaccia, *PPV* viene impostato su null.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Crea un oggetto del CLSID specificato e recupera un puntatore a interfaccia a questo oggetto.

`GetClassObject` è disponibile solo per le dll.

## <a name="ccommodulegetmoduleinstance"></a><a name="getmoduleinstance"></a> CComModule:: GetModuleInstance

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
HINSTANCE GetModuleInstance() throw();
```

### <a name="return-value"></a>Valore restituito

HINSTANCE che identifica il modulo.

### <a name="remarks"></a>Commenti

Restituisce il membro dati [m_hInst](#m_hinst) .

## <a name="ccommodulegetresourceinstance"></a><a name="getresourceinstance"></a> CComModule:: GetResourceInstance

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
HINSTANCE GetResourceInstance() throw();
```

### <a name="return-value"></a>Valore restituito

HINSTANCE.

### <a name="remarks"></a>Commenti

Restituisce il membro dati [m_hInstResource](#m_hinstresource) .

## <a name="ccommodulegettypelibinstance"></a><a name="gettypelibinstance"></a> CComModule:: GetTypeLibInstance

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
HINSTANCE GetTypeLibInstance() const throw();
```

### <a name="return-value"></a>Valore restituito

HINSTANCE.

### <a name="remarks"></a>Commenti

Restituisce il membro dati [m_hInstTypeLib](#m_hinsttypelib) .

## <a name="ccommoduleinit"></a><a name="init"></a> CComModule:: init

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
HRESULT Init(
    _ATL_OBJMAP_ENTRY* p,
    HINSTANCE h,
    const GUID* plibid = NULL) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
in Puntatore a una matrice di voci della mappa degli oggetti.

*h*<br/>
in HINSTANCE passato a `DLLMain` o `WinMain` .

*plibid*<br/>
in Puntatore a LIBID della libreria dei tipi associata al progetto.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Inizializza tutti i membri dati.

## <a name="ccommodulem_csobjmap"></a><a name="m_csobjmap"></a> CComModule:: m_csObjMap

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
CRITICAL_SECTION m_csObjMap;
```

### <a name="remarks"></a>Commenti

Assicura l'accesso sincronizzato alla mappa degli oggetti.

## <a name="ccommodulem_cstypeinfoholder"></a><a name="m_cstypeinfoholder"></a> CComModule:: m_csTypeInfoHolder

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
CRITICAL_SECTION m_csTypeInfoHolder;
```

### <a name="remarks"></a>Commenti

Assicura l'accesso sincronizzato alla libreria dei tipi.

## <a name="ccommodulem_cswindowcreate"></a><a name="m_cswindowcreate"></a> CComModule:: m_csWindowCreate

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
CRITICAL_SECTION m_csWindowCreate;
```

### <a name="remarks"></a>Commenti

Assicura l'accesso sincronizzato alle informazioni sulla classe di finestra e ai dati statici utilizzati durante la creazione della finestra.

## <a name="ccommodulem_hinst"></a><a name="m_hinst"></a> CComModule:: m_hInst

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
HINSTANCE m_hInst;
```

### <a name="remarks"></a>Commenti

Contiene l'handle per l'istanza del modulo.

Il metodo [init](#init) imposta `m_hInst` sull'handle passato a `DLLMain` o `WinMain` .

## <a name="ccommodulem_hinstresource"></a><a name="m_hinstresource"></a> CComModule:: m_hInstResource

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
HINSTANCE m_hInstResource;
```

### <a name="remarks"></a>Commenti

Per impostazione predefinita, contiene l'handle per l'istanza del modulo.

Il metodo [init](#init) imposta `m_hInstResource` sull'handle passato a `DLLMain` o `WinMain` . È possibile impostare in modo esplicito `m_hInstResource` l'handle per una risorsa.

Il metodo [GetResourceInstance](#getresourceinstance) restituisce l'handle archiviato in `m_hInstResource` .

## <a name="ccommodulem_hinsttypelib"></a><a name="m_hinsttypelib"></a> CComModule:: m_hInstTypeLib

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
HINSTANCE m_hInstTypeLib;
```

### <a name="remarks"></a>Commenti

Per impostazione predefinita, contiene l'handle per l'istanza del modulo.

Il metodo [init](#init) imposta `m_hInstTypeLib` sull'handle passato a `DLLMain` o `WinMain` . È possibile impostare in modo esplicito `m_hInstTypeLib` l'handle per una libreria dei tipi.

Il metodo [GetTypeLibInstance](#gettypelibinstance) restituisce l'handle archiviato in `m_hInstTypeLib` .

## <a name="ccommodulem_pobjmap"></a><a name="m_pobjmap"></a> CComModule:: m_pObjMap

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
_ATL_OBJMAP_ENTRY* m_pObjMap;
```

### <a name="remarks"></a>Commenti

Punta alla mappa dell'oggetto gestita dall'istanza del modulo.

## <a name="ccommoduleregisterclasshelper"></a><a name="registerclasshelper"></a> CComModule:: RegisterClassHelper

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
ATL_DEPRECATED HRESULT RegisterClassHelper(
    const CLSID& clsid,
    LPCTSTR lpszProgID,
    LPCTSTR lpszVerIndProgID,
    UINT nDescID,
    DWORD dwFlags);
```

### <a name="parameters"></a>Parametri

*CLSID*<br/>
in CLSID dell'oggetto da registrare.

*lpszProgID*<br/>
in ProgID associato all'oggetto.

*lpszVerIndProgID*<br/>
in ProgID indipendente dalla versione associato all'oggetto.

*nDescID*<br/>
in Identificatore di una risorsa di stringa per la descrizione dell'oggetto.

*dwFlags*<br/>
in Specifica il modello di threading da immettere nel registro di sistema. I valori possibili sono THREADFLAGS_APARTMENT, THREADFLAGS_BOTH o AUTPRXFLAG.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Immette la registrazione della classe standard di un oggetto nel registro di sistema.

Il metodo [UpdateRegistryClass](#updateregistryclass) chiama `RegisterClassHelper` .

## <a name="ccommoduleregisterclassobjects"></a><a name="registerclassobjects"></a> CComModule:: RegisterClassObjects

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
HRESULT RegisterClassObjects(DWORD dwClsContext, DWORD dwFlags) throw();
```

### <a name="parameters"></a>Parametri

*dwClsContext*<br/>
in Specifica il contesto in cui deve essere eseguito l'oggetto classe. I valori possibili sono CLSCTX_INPROC_SERVER, CLSCTX_INPROC_HANDLER o CLSCTX_LOCAL_SERVER. Per una descrizione di questi valori, vedere [CLSCTX](/windows/win32/api/wtypesbase/ne-wtypesbase-clsctx) nel Windows SDK.

*dwFlags*<br/>
in Determina i tipi di connessione all'oggetto classe. I valori possibili sono REGCLS_SINGLEUSE, REGCLS_MULTIPLEUSE o REGCLS_MULTI_SEPARATE. Per una descrizione di questi valori, vedere [REGCLS](/windows/win32/api/combaseapi/ne-combaseapi-regcls) nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Registra un oggetto classe EXE con OLE, in modo che le altre applicazioni possano connettersi a tale oggetto. Questo metodo è disponibile solo per i exe.

## <a name="ccommoduleregisterserver"></a><a name="registerserver"></a> CComModule:: RegisterServer

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
HRESULT RegisterServer(
    BOOL bRegTypeLib = FALSE,
    const CLSID* pCLSID = NULL) throw();
```

### <a name="parameters"></a>Parametri

*bRegTypeLib*<br/>
in Indica se la libreria dei tipi verrà registrata. Il valore predefinito è FALSE.

*pCLSID*<br/>
in Punta al CLSID dell'oggetto da registrare. Se NULL (valore predefinito), tutti gli oggetti nella mappa degli oggetti verranno registrati.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

A seconda del parametro *pCLSID* , aggiorna il registro di sistema per un singolo oggetto classe o per tutti gli oggetti nella mappa degli oggetti.

Se *bRegTypeLib* è true, verranno aggiornate anche le informazioni sulla libreria dei tipi.

Per informazioni su come aggiungere una voce alla mappa degli oggetti, vedere [OBJECT_ENTRY_AUTO](object-map-macros.md#object_entry_auto) .

`RegisterServer` verrà chiamato automaticamente da `DLLRegisterServer` per una dll o da `WinMain` per un file exe eseguito con l' `/RegServer` opzione della riga di comando.

## <a name="ccommoduleregistertypelib"></a><a name="registertypelib"></a> CComModule:: RegisterTypeLib

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
HRESULT RegisterTypeLib() throw();
HRESULT RegisterTypeLib(LPCTSTR lpszIndex) throw();
```

### <a name="parameters"></a>Parametri

*lpszIndex*<br/>
in Stringa nel formato `"\\N"` , dove `N` è l'indice Integer della risorsa TypeLib.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Aggiunge informazioni su una libreria dei tipi al registro di sistema.

Se l'istanza del modulo contiene più librerie dei tipi, utilizzare la seconda versione di questo metodo per specificare la libreria dei tipi da utilizzare.

## <a name="ccommodulerevokeclassobjects"></a><a name="revokeclassobjects"></a> CComModule:: RevokeClassObjects

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
HRESULT RevokeClassObjects() throw();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Rimuove l'oggetto classe. Questo metodo è disponibile solo per i exe.

## <a name="ccommoduleterm"></a><a name="term"></a> CComModule:: term

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```cpp
void Term() throw();
```

### <a name="remarks"></a>Commenti

Rilascia tutti i membri dati.

## <a name="ccommoduleunregisterclasshelper"></a><a name="unregisterclasshelper"></a> CComModule:: UnregisterClassHelper

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
ATL_DEPRECATED HRESULT UnregisterClassHelper(
    const CLSID& clsid,
    LPCTSTR lpszProgID,
    LPCTSTR lpszVerIndProgID);
```

### <a name="parameters"></a>Parametri

*CLSID*<br/>
in CLSID dell'oggetto di cui annullare la registrazione.

*lpszProgID*<br/>
in ProgID associato all'oggetto.

*lpszVerIndProgID*<br/>
in ProgID indipendente dalla versione associato all'oggetto.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Rimuove la registrazione della classe standard di un oggetto dal registro di sistema.

Il metodo [UpdateRegistryClass](#updateregistryclass) chiama `UnregisterClassHelper` .

## <a name="ccommoduleunregisterserver"></a><a name="unregisterserver"></a> CComModule:: UnregisterServer

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
HRESULT UnregisterServer(const CLSID* pCLSID = NULL) throw ();
inline HRESULT UnregisterServer(BOOL bUnRegTypeLib, const CLSID* pCLSID = NULL) throw ();
```

### <a name="parameters"></a>Parametri

*bUnRegTypeLib*<br/>
Se TRUE, viene anche annullata la registrazione della libreria dei tipi.

*pCLSID*<br/>
Punta al CLSID dell'oggetto di cui annullare la registrazione. Se NULL (valore predefinito), verrà annullata la registrazione di tutti gli oggetti nella mappa oggetto.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

A seconda del parametro *pCLSID* , Annulla la registrazione di un singolo oggetto di classe o di tutti gli oggetti nella mappa degli oggetti.

`UnregisterServer` verrà chiamato automaticamente da `DLLUnregisterServer` per una dll o da `WinMain` per un file exe eseguito con l' `/UnregServer` opzione della riga di comando.

Per informazioni su come aggiungere una voce alla mappa degli oggetti, vedere [OBJECT_ENTRY_AUTO](object-map-macros.md#object_entry_auto) .

## <a name="ccommoduleupdateregistryclass"></a><a name="updateregistryclass"></a> CComModule:: UpdateRegistryClass

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

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

*CLSID*<br/>
CLSID dell'oggetto da registrare o annullare la registrazione.

*lpszProgID*<br/>
ProgID associato all'oggetto.

*lpszVerIndProgID*<br/>
ProgID indipendente dalla versione associato all'oggetto.

*nDescID*<br/>
Identificatore della risorsa di stringa per la descrizione dell'oggetto.

*szDesc*<br/>
Stringa che contiene la descrizione dell'oggetto.

*dwFlags*<br/>
Specifica il modello di threading da immettere nel registro di sistema. I valori possibili sono THREADFLAGS_APARTMENT, THREADFLAGS_BOTH o AUTPRXFLAG.

*bRegister*<br/>
Indica se l'oggetto deve essere registrato.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Se *bRegister* è true, questo metodo immette la registrazione della classe standard dell'oggetto nel registro di sistema.

Se *bRegister* è false, viene rimossa la registrazione dell'oggetto.

A seconda del valore di *bRegister*, `UpdateRegistryClass` chiama [RegisterClassHelper](#registerclasshelper) o [UnregisterClassHelper](#unregisterclasshelper).

Specificando la macro [DECLARE_REGISTRY](registry-macros.md#declare_registry) , `UpdateRegistryClass` verrà richiamato automaticamente quando viene elaborata la mappa degli oggetti.

## <a name="ccommoduleupdateregistryfromresourced"></a><a name="updateregistryfromresourced"></a> CComModule:: UpdateRegistryFromResourceD

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

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
in Nome della risorsa.

*nResID*<br/>
in ID di risorsa.

*bRegister*<br/>
in Indica se l'oggetto deve essere registrato.

*pMapEntries*<br/>
in Puntatore alla mappa sostitutiva che archivia i valori associati ai parametri sostituibili dello script. ATL utilizza automaticamente `%MODULE%` . Per usare parametri sostituibili aggiuntivi, vedere la sezione Osservazioni per i dettagli. In caso contrario, usare il valore predefinito NULL.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Esegue lo script contenuto nella risorsa specificata da *lpszRes* o *nResID*.

Se *bRegister* è true, questo metodo registra l'oggetto nel registro di sistema. in caso contrario, Annulla la registrazione dell'oggetto.

Specificando la [DECLARE_REGISTRY_RESOURCE](registry-macros.md#declare_registry_resource) o la macro [DECLARE_REGISTRY_RESOURCEID](registry-macros.md#declare_registry_resourceid) , `UpdateRegistryFromResourceD` verrà richiamato automaticamente quando viene elaborata la mappa degli oggetti.

> [!NOTE]
> Per sostituire i valori di sostituzione in fase di esecuzione, non specificare il DECLARE_REGISTRY_RESOURCE o la macro DECLARE_REGISTRY_RESOURCEID. In alternativa, creare una matrice di `_ATL_REGMAP_ENTRIES` strutture, in cui ogni voce contiene un segnaposto della variabile associato a un valore per sostituire il segnaposto in fase di esecuzione. Chiamare quindi `UpdateRegistryFromResourceD` , passando la matrice per il parametro *pMapEntries* . In questo modo, tutti i valori sostitutivi nelle strutture vengono aggiunti `_ATL_REGMAP_ENTRIES` alla mappa di sostituzione del registrar.

> [!NOTE]
> Per eseguire il collegamento statico al componente del registro di sistema ATL (Registrar), vedere [UpdateRegistryFromResourceS](#updateregistryfromresources).

Per ulteriori informazioni sui parametri sostituibili e sullo scripting, vedere l'articolo relativo [al componente del registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md).

## <a name="ccommoduleupdateregistryfromresources"></a><a name="updateregistryfromresources"></a> CComModule:: UpdateRegistryFromResourceS

A partire da ATL 7,0, `CComModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

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
in Nome della risorsa.

*nResID*<br/>
in ID di risorsa.

*bRegister*<br/>
in Indica se lo script di risorsa deve essere registrato.

*pMapEntries*<br/>
in Puntatore alla mappa sostitutiva che archivia i valori associati ai parametri sostituibili dello script. ATL utilizza automaticamente `%MODULE%` . Per usare parametri sostituibili aggiuntivi, vedere la sezione Osservazioni per i dettagli. In caso contrario, usare il valore predefinito NULL.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Analogamente a [UpdateRegistryFromResourceD](#updateregistryfromresourced) , ad eccezione di `UpdateRegistryFromResourceS` Crea un collegamento statico al componente del registro di sistema ATL (Registrar).

`UpdateRegistryFromResourceS` verrà richiamato automaticamente quando viene elaborata la mappa degli oggetti, purché venga aggiunto `#define _ATL_STATIC_REGISTRY` al *PCH. h* (*stdafx. h* in Visual Studio 2017 e versioni precedenti).

> [!NOTE]
> Per sostituire i valori di sostituzione in fase di esecuzione, non specificare il [DECLARE_REGISTRY_RESOURCE](registry-macros.md#declare_registry_resource) o la macro [DECLARE_REGISTRY_RESOURCEID](registry-macros.md#declare_registry_resourceid) . In alternativa, creare una matrice di `_ATL_REGMAP_ENTRIES` strutture, in cui ogni voce contiene un segnaposto della variabile associato a un valore per sostituire il segnaposto in fase di esecuzione. Chiamare quindi `UpdateRegistryFromResourceS` , passando la matrice per il parametro *pMapEntries* . In questo modo, tutti i valori sostitutivi nelle strutture vengono aggiunti `_ATL_REGMAP_ENTRIES` alla mappa di sostituzione del registrar.

Per ulteriori informazioni sui parametri sostituibili e sullo scripting, vedere l'articolo relativo [al componente del registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md).

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
