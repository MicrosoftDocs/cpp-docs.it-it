---
title: CComModule (classi) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComModule
dev_langs:
- C++
helpviewer_keywords:
- CComModule class
- DLL modules [C++], ATL
ms.assetid: f5face2c-8fd8-40e6-9ec3-54ab74701769
caps.latest.revision: 23
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
ms.openlocfilehash: d2bd7566a25cd135cb541c4d90f2700b5f0d47b2
ms.lasthandoff: 02/24/2017

---
# <a name="ccommodule-class"></a>CComModule (classi)
In ATL 7.0, `CComModule` è deprecato: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComModule : public _ATL_MODULE
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComModule::GetClassObject](#getclassobject)|Crea un oggetto di un CLSID specificato. Per le DLL.|  
|[CComModule::GetModuleInstance](#getmoduleinstance)|Restituisce `m_hInst`.|  
|[CComModule::GetResourceInstance](#getresourceinstance)|Restituisce `m_hInstResource`.|  
|[CComModule::GetTypeLibInstance](#gettypelibinstance)|Restituisce `m_hInstTypeLib`.|  
|[CComModule](#init)|Inizializza i membri di dati.|  
|[CComModule::RegisterClassHelper](#registerclasshelper)|Immette registrazione della classe standard di un oggetto nel Registro di sistema.|  
|[CComModule::RegisterClassObjects](#registerclassobjects)|Registra l'oggetto della classe. Per solo file eseguibili.|  
|[CComModule::RegisterServer](#registerserver)|Aggiorna il Registro di sistema per ogni oggetto nella mappa oggetto.|  
|[CComModule::RegisterTypeLib](#registertypelib)|Registra una libreria dei tipi.|  
|[CComModule::RevokeClassObjects](#revokeclassobjects)|Revoca l'oggetto della classe. Per solo file eseguibili.|  
|[CComModule:: term](#term)|Rilascia i membri di dati.|  
|[CComModule::UnregisterClassHelper](#unregisterclasshelper)|Rimuove la registrazione di un oggetto classe standard dal Registro di sistema.|  
|[CComModule::UnregisterServer](#unregisterserver)|Annulla la registrazione di ogni oggetto nella mappa oggetto.|  
|[CComModule::UpdateRegistryClass](#updateregistryclass)|Registra o Annulla la registrazione di registrazione della classe standard di un oggetto.|  
|[CComModule::UpdateRegistryFromResourceD](#updateregistryfromresourced)|Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto.|  
|[CComModule::UpdateRegistryFromResourceS](#updateregistryfromresources)|Collegamenti in modo statico al componente del Registro di sistema ATL. Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComModule::m_csObjMap](#m_csobjmap)|Garantisce l'accesso sincronizzato per le informazioni sulla mappa oggetto.|  
|[CComModule::m_csTypeInfoHolder](#m_cstypeinfoholder)|Garantisce l'accesso sincronizzato per le informazioni sulla libreria di tipo.|  
|[CComModule::m_csWindowCreate](#m_cswindowcreate)|Garantisce l'accesso sincronizzato per informazioni sulle classi di finestra e i dati statici utilizzati durante la creazione della finestra.|  
|[CComModule::m_hInst](#m_hinst)|Contiene l'handle all'istanza del modulo.|  
|[CComModule::m_hInstResource](#m_hinstresource)|Per impostazione predefinita, contiene l'handle all'istanza del modulo.|  
|[CComModule::m_hInstTypeLib](#m_hinsttypelib)|Per impostazione predefinita, contiene l'handle all'istanza del modulo.|  
|[CComModule::m_pObjMap](#m_pobjmap)|Punti per la mappa di oggetti gestiti dall'istanza del modulo.|  
  
## <a name="remarks"></a>Note  
  
> [!NOTE]
>  Questa classe è deprecata e procedure guidate di generazione di codice ATL ora utilizzano il [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md) e [CAtlModule](../../atl/reference/catlmodule-class.md) classi derivate. Vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori informazioni. Le informazioni riportate di seguito vengono utilizzato con applicazioni create con versioni precedenti di ATL. `CComModule`fa ancora parte di ATL per le versioni precedenti funzionalità.  
  
 `CComModule`implementa un modulo di server COM, consentendo un client di accedere ai componenti del modulo. `CComModule`supporta i moduli (locali) EXE e DLL (in-process).  
  
 Oggetto `CComModule` istanza utilizza una mappa di oggetto per mantenere un set di definizioni di oggetti di classe. Questa mappa di oggetto viene implementata come una matrice di `_ATL_OBJMAP_ENTRY` strutture e contiene informazioni per:  
  
-   Inserimento e rimozione di descrizioni degli oggetti nel Registro di sistema.  
  
-   Creazione di oggetti tramite una class factory.  
  
-   Stabilire la comunicazione tra un client e l'oggetto radice nel componente.  
  
-   Esecuzione di gestione della durata degli oggetti classe.  
  
 Quando si esegue la creazione guidata applicazioni COM ATL, la procedura guidata genera automaticamente `_Module`, un'istanza globale di `CComModule` o una classe derivata da esso. Per ulteriori informazioni sulla creazione guidata progetto ATL, vedere l'articolo [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).  
  
 Oltre a `CComModule`, ATL fornisce [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md), che implementa un modulo modello di apartment per file eseguibili e i servizi Windows. Derivare il modulo da `CComAutoThreadModule` quando si desidera creare oggetti in più apartment.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [_ATL_MODULE](atl-typedefs.md#_atl_module)  
  
 [CAtlModule](../../atl/reference/catlmodule-class.md)  
  
 [CAtlModuleT](../../atl/reference/catlmodulet-class.md)  
  
 `CComModule`  
  
## <a name="requirements"></a>Requisiti  
 `Header:`atlbase. h  
  
##  <a name="a-namegetclassobjecta--ccommodulegetclassobject"></a><a name="getclassobject"></a>CComModule::GetClassObject  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
HRESULT GetClassObject(  
    REFCLSID rclsid,
    REFIID riid,
    LPVOID* ppv) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `rclsid`  
 [in] Il CLSID dell'oggetto da creare.  
  
 `riid`  
 [in] L'IID dell'interfaccia richiesta.  
  
 `ppv`  
 [out] Un puntatore al puntatore a interfaccia identificato da `riid`. Se l'oggetto non supporta questa interfaccia, `ppv` è impostato su **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Crea un oggetto del CLSID specificato e recupera un puntatore a interfaccia a questo oggetto.  
  
 `GetClassObject`è disponibile solo per le DLL.  
  
##  <a name="a-namegetmoduleinstancea--ccommodulegetmoduleinstance"></a><a name="getmoduleinstance"></a>CComModule::GetModuleInstance  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
HINSTANCE GetModuleInstance() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il `HINSTANCE` che identifica questo modulo.  
  
### <a name="remarks"></a>Note  
 Restituisce il [m_hInst](#m_hinst) (membro dati).  
  
##  <a name="a-namegetresourceinstancea--ccommodulegetresourceinstance"></a><a name="getresourceinstance"></a>CComModule::GetResourceInstance  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
HINSTANCE GetResourceInstance() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `HINSTANCE`.  
  
### <a name="remarks"></a>Note  
 Restituisce il [m_hInstResource](#m_hinstresource) (membro dati).  
  
##  <a name="a-namegettypelibinstancea--ccommodulegettypelibinstance"></a><a name="gettypelibinstance"></a>CComModule::GetTypeLibInstance  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
HINSTANCE GetTypeLibInstance() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `HINSTANCE`.  
  
### <a name="remarks"></a>Note  
 Restituisce il [m_hInstTypeLib](#m_hinsttypelib) (membro dati).  
  
##  <a name="a-nameinita--ccommoduleinit"></a><a name="init"></a>CComModule  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
HRESULT Init(
    _ATL_OBJMAP_ENTRY* p,
    HINSTANCE h,
    const GUID* plibid = NULL) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 [in] Un puntatore a una matrice di voci della mappa oggetto.  
  
 `h`  
 [in] Il `HINSTANCE` passato a **DLLMain** o `WinMain`.  
  
 `plibid`  
 [in] Un puntatore a LIBID della libreria dei tipi associato al progetto.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Inizializza tutti i membri dati.  
  
##  <a name="a-namemcsobjmapa--ccommodulemcsobjmap"></a><a name="m_csobjmap"></a>CComModule::m_csObjMap  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
CRITICAL_SECTION m_csObjMap;
```  
  
### <a name="remarks"></a>Note  
 Garantisce l'accesso sincronizzato alla mappa oggetto.  
  
##  <a name="a-namemcstypeinfoholdera--ccommodulemcstypeinfoholder"></a><a name="m_cstypeinfoholder"></a>CComModule::m_csTypeInfoHolder  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
CRITICAL_SECTION m_csTypeInfoHolder;
```  
  
### <a name="remarks"></a>Note  
 Garantisce l'accesso sincronizzato alla libreria dei tipi.  
  
##  <a name="a-namemcswindowcreatea--ccommodulemcswindowcreate"></a><a name="m_cswindowcreate"></a>CComModule::m_csWindowCreate  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
CRITICAL_SECTION m_csWindowCreate;
```  
  
### <a name="remarks"></a>Note  
 Garantisce l'accesso sincronizzato per informazioni sulle classi di finestra e ai dati statici utilizzati durante la creazione della finestra.  
  
##  <a name="a-namemhinsta--ccommodulemhinst"></a><a name="m_hinst"></a>CComModule::m_hInst  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
HINSTANCE m_hInst;
```  
  
### <a name="remarks"></a>Note  
 Contiene l'handle all'istanza del modulo.  
  
 Il [Init](#init) metodo imposta `m_hInst` per l'handle passato a **DLLMain** o `WinMain`.  
  
##  <a name="a-namemhinstresourcea--ccommodulemhinstresource"></a><a name="m_hinstresource"></a>CComModule::m_hInstResource  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
HINSTANCE m_hInstResource;
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, contiene l'handle all'istanza del modulo.  
  
 Il [Init](#init) metodo imposta `m_hInstResource` per l'handle passato a **DLLMain** o `WinMain`. È possibile impostare esplicitamente `m_hInstResource` sull'handle per una risorsa.  
  
 Il [GetResourceInstance](#getresourceinstance) metodo restituisce l'handle archiviato in `m_hInstResource`.  
  
##  <a name="a-namemhinsttypeliba--ccommodulemhinsttypelib"></a><a name="m_hinsttypelib"></a>CComModule::m_hInstTypeLib  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
HINSTANCE m_hInstTypeLib;
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, contiene l'handle all'istanza del modulo.  
  
 Il [Init](#init) metodo imposta `m_hInstTypeLib` per l'handle passato a **DLLMain** o `WinMain`. È possibile impostare esplicitamente `m_hInstTypeLib` sull'handle per una libreria dei tipi.  
  
 Il [GetTypeLibInstance](#gettypelibinstance) metodo restituisce l'handle archiviato in `m_hInstTypeLib`.  
  
##  <a name="a-namempobjmapa--ccommodulempobjmap"></a><a name="m_pobjmap"></a>CComModule::m_pObjMap  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
_ATL_OBJMAP_ENTRY* m_pObjMap;
```  
  
### <a name="remarks"></a>Note  
 Punti per la mappa di oggetti gestiti dall'istanza del modulo.  
  
##  <a name="a-nameregisterclasshelpera--ccommoduleregisterclasshelper"></a><a name="registerclasshelper"></a>CComModule::RegisterClassHelper  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
ATL_DEPRECATED HRESULT RegisterClassHelper(  
    const CLSID& clsid,
    LPCTSTR lpszProgID,
    LPCTSTR lpszVerIndProgID,
    UINT nDescID,
    DWORD dwFlags);
```  
  
### <a name="parameters"></a>Parametri  
 `clsid`  
 [in] Il CLSID dell'oggetto da registrare.  
  
 `lpszProgID`  
 [in] Il valore ProgID associato all'oggetto.  
  
 `lpszVerIndProgID`  
 [in] ProgID indipendenti dalla versione associato all'oggetto.  
  
 `nDescID`  
 [in] L'identificatore di una risorsa di stringa per la descrizione dell'oggetto.  
  
 `dwFlags`  
 [in] Specifica il modello di threading per immettere nel Registro di sistema. I valori possibili sono **THREADFLAGS_APARTMENT**, **THREADFLAGS_BOTH**, o **AUTPRXFLAG**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Immette registrazione della classe standard di un oggetto nel Registro di sistema.  
  
 Il [UpdateRegistryClass](#updateregistryclass) chiamate al metodo `RegisterClassHelper`.  
  
##  <a name="a-nameregisterclassobjectsa--ccommoduleregisterclassobjects"></a><a name="registerclassobjects"></a>CComModule::RegisterClassObjects  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
HRESULT RegisterClassObjects(DWORD dwClsContext, DWORD dwFlags) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `dwClsContext`  
 [in] Specifica il contesto in cui viene eseguita l'oggetto della classe. I valori possibili sono **CLSCTX_INPROC_SERVER**, **CLSCTX_INPROC_HANDLER**, o **CLSCTX_LOCAL_SERVER**. Per una descrizione di questi valori, vedere [CLSCTX](http://msdn.microsoft.com/library/windows/desktop/ms693716) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwFlags`  
 [in] Determina i tipi di connessione per l'oggetto della classe. I valori possibili sono **REGCLS_SINGLEUSE**, **REGCLS_MULTIPLEUSE**, o **REGCLS_MULTI_SEPARATE**. Per una descrizione di questi valori, vedere [REGCLS](http://msdn.microsoft.com/library/windows/desktop/ms679697) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Registra un oggetto di classe EXE con OLE in modo da altre applicazioni possono connettersi ad essa. Questo metodo è disponibile solo ai file exe.  
  
##  <a name="a-nameregisterservera--ccommoduleregisterserver"></a><a name="registerserver"></a>CComModule::RegisterServer  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
HRESULT RegisterServer(
    BOOL bRegTypeLib = FALSE,  
    const CLSID* pCLSID = NULL) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `bRegTypeLib`  
 [in] Indica se verrà registrata la libreria dei tipi. Il valore predefinito è **FALSE**.  
  
 `pCLSID`  
 [in] Punta al CLSID dell'oggetto da registrare. Se **NULL** (valore predefinito), verranno registrati tutti gli oggetti nella mappa oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 A seconda di `pCLSID` parametro, aggiorna il Registro di sistema per un oggetto della classe singolo o per tutti gli oggetti nella mappa oggetto.  
  
 Se `bRegTypeLib` è **TRUE**, verranno aggiornate anche le informazioni sulla libreria di tipo.  
  
 Vedere [OBJECT_ENTRY_AUTO](http://msdn.microsoft.com/library/5a0f4fa5-0905-43d2-b337-e22f979c9e4c) per informazioni su come aggiungere una voce alla mappa oggetto.  
  
 `RegisterServer`verrà chiamato automaticamente da **DLLRegisterServer** per una DLL o da `WinMain` per un file EXE eseguito con il **/RegServer** opzione della riga di comando.  
  
##  <a name="a-nameregistertypeliba--ccommoduleregistertypelib"></a><a name="registertypelib"></a>CComModule::RegisterTypeLib  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
HRESULT RegisterTypeLib() throw();
HRESULT RegisterTypeLib(LPCTSTR lpszIndex) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lpszIndex`  
 [in] Stringa nel formato `"\\N"`, dove `N` è l'indice integer della risorsa della libreria dei tipi.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Aggiunge informazioni su una libreria dei tipi nel Registro di sistema.  
  
 Se l'istanza del modulo contiene più librerie dei tipi, utilizzare la seconda versione di questo metodo per specificare quale libreria dei tipi deve essere utilizzata.  
  
##  <a name="a-namerevokeclassobjectsa--ccommodulerevokeclassobjects"></a><a name="revokeclassobjects"></a>CComModule::RevokeClassObjects  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
HRESULT RevokeClassObjects() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Rimuove l'oggetto di classe. Questo metodo è disponibile solo ai file exe.  
  
##  <a name="a-nameterma--ccommoduleterm"></a><a name="term"></a>CComModule:: term  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
void Term() throw();
```  
  
### <a name="remarks"></a>Note  
 Rilascia tutti i membri dati.  
  
##  <a name="a-nameunregisterclasshelpera--ccommoduleunregisterclasshelper"></a><a name="unregisterclasshelper"></a>CComModule::UnregisterClassHelper  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
ATL_DEPRECATED HRESULT UnregisterClassHelper(  
    const CLSID& clsid,
    LPCTSTR lpszProgID,
    LPCTSTR lpszVerIndProgID);
```  
  
### <a name="parameters"></a>Parametri  
 `clsid`  
 [in] Il CLSID dell'oggetto per annullare la registrazione.  
  
 `lpszProgID`  
 [in] Il valore ProgID associato all'oggetto.  
  
 `lpszVerIndProgID`  
 [in] ProgID indipendenti dalla versione associato all'oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Rimuove la registrazione di un oggetto classe standard dal Registro di sistema.  
  
 Il [UpdateRegistryClass](#updateregistryclass) chiamate al metodo `UnregisterClassHelper`.  
  
##  <a name="a-nameunregisterservera--ccommoduleunregisterserver"></a><a name="unregisterserver"></a>CComModule::UnregisterServer  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
```
HRESULT UnregisterServer(const CLSID* pCLSID = NULL) throw ();
inline HRESULT UnregisterServer(BOOL bUnRegTypeLib, const CLSID* pCLSID = NULL) throw ();
```  
  
### <a name="parameters"></a>Parametri  
 `bUnRegTypeLib`  
 Se **TRUE**, della libreria dei tipi è stata annullata la registrazione.  
  
 `pCLSID`  
 Punta al CLSID dell'oggetto per annullare la registrazione. Se **NULL** (valore predefinito), tutti gli oggetti nella mappa oggetto saranno possibile annullare la registrazione.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 A seconda di `pCLSID` parametro, Annulla la registrazione di un oggetto classe singola o tutti gli oggetti nella mappa oggetto.  
  
 `UnregisterServer`verrà chiamato automaticamente da **DLLUnregisterServer** per una DLL o da `WinMain` per un file EXE eseguito con il **/UnregServer** opzione della riga di comando.  
  
 Vedere [OBJECT_ENTRY_AUTO](http://msdn.microsoft.com/library/5a0f4fa5-0905-43d2-b337-e22f979c9e4c) per informazioni su come aggiungere una voce alla mappa oggetto.  
  
##  <a name="a-nameupdateregistryclassa--ccommoduleupdateregistryclass"></a><a name="updateregistryclass"></a>CComModule::UpdateRegistryClass  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
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
 `clsid`  
 Il CLSID dell'oggetto da registrare o annullare la registrazione.  
  
 `lpszProgID`  
 Il valore ProgID associato all'oggetto.  
  
 `lpszVerIndProgID`  
 ProgID indipendenti dalla versione associato all'oggetto.  
  
 `nDescID`  
 Identificatore della risorsa di tipo stringa per la descrizione dell'oggetto.  
  
 `szDesc`  
 Stringa contenente la descrizione dell'oggetto.  
  
 `dwFlags`  
 Specifica il modello di threading per immettere nel Registro di sistema. I valori possibili sono **THREADFLAGS_APARTMENT**, **THREADFLAGS_BOTH**, o **AUTPRXFLAG**.  
  
 `bRegister`  
 Indica se l'oggetto deve essere registrato.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Se `bRegister` è **TRUE**, questo metodo passa una registrazione delle classi standard dell'oggetto nel Registro di sistema.  
  
 Se `bRegister` è **FALSE**, rimuove la registrazione dell'oggetto.  
  
 A seconda del valore di `bRegister`, `UpdateRegistryClass` chiama [RegisterClassHelper](#registerclasshelper) o [UnregisterClassHelper](#unregisterclasshelper).  
  
 Specificando il [DECLARE_REGISTRY](http://msdn.microsoft.com/library/89b8949b-5c27-4a9c-8a51-ad276bba3a54) (macro), `UpdateRegistryClass` verrà richiamato automaticamente quando viene elaborata la mappa oggetto.  
  
##  <a name="a-nameupdateregistryfromresourceda--ccommoduleupdateregistryfromresourced"></a><a name="updateregistryfromresourced"></a>CComModule::UpdateRegistryFromResourceD  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
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
 `lpszRes`  
 [in] Un nome di risorsa.  
  
 `nResID`  
 [in] Un ID risorsa.  
  
 `bRegister`  
 [in] Indica se l'oggetto deve essere registrato.  
  
 `pMapEntries`  
 [in] Puntatore alla mappa di sostituzione l'archiviazione dei valori associati a parametri sostituibili dello script. Utilizza automaticamente ATL `%MODULE%`. Per utilizzare altri parametri sostituibili, vedere la sezione Osservazioni per informazioni dettagliate. In caso contrario, utilizzare il **NULL** il valore predefinito.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Esegue lo script contenuto nella risorsa specificata da `lpszRes` o `nResID`.  
  
 Se `bRegister` è **TRUE**, questo metodo registra l'oggetto nel Registro di sistema; in caso contrario, Annulla la registrazione dell'oggetto.  
  
 Specificando il [macro DECLARE_REGISTRY_RESOURCE](http://msdn.microsoft.com/library/7ac11498-8ee2-4156-8df2-7076f7ddda8b) o [DECLARE_REGISTRY_RESOURCEID](http://msdn.microsoft.com/library/65bf3576-5396-416e-ba48-e14b3236c49b) (macro), `UpdateRegistryFromResourceD` verrà richiamato automaticamente quando viene elaborata la mappa oggetto.  
  
> [!NOTE]
>  Per sostituire i valori di sostituzione in fase di esecuzione, non si specifica il `DECLARE_REGISTRY_RESOURCE` o `DECLARE_REGISTRY_RESOURCEID` (macro). In alternativa, creare una matrice di **_ATL_REGMAP_ENTRIES** strutture, in cui ogni voce contiene un segnaposto di variabili abbinato con un valore di sostituire il segnaposto in fase di esecuzione. Quindi chiamare `UpdateRegistryFromResourceD`, passando la matrice la `pMapEntries` parametro. Aggiunge tutti i valori di sostituzione di **_ATL_REGMAP_ENTRIES** strutture alla mappa di sostituzione del Registrar.  
  
> [!NOTE]
>  Per collegare in modo statico per il componente del Registro di sistema ATL (Registrar), vedere [UpdateRegistryFromResourceS](#updateregistryfromresources).  
  
 Per ulteriori informazioni sui parametri sostituibili e script, vedere l'articolo [il componente del Registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md).  
  
##  <a name="a-nameupdateregistryfromresourcesa--ccommoduleupdateregistryfromresources"></a><a name="updateregistryfromresources"></a>CComModule::UpdateRegistryFromResourceS  
 In ATL 7.0, `CComModule` è obsoleto: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.  
  
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
 `lpszRes`  
 [in] Un nome di risorsa.  
  
 `nResID`  
 [in] Un ID risorsa.  
  
 `bRegister`  
 [in] Indica se lo script di risorsa deve essere registrato.  
  
 `pMapEntries`  
 [in] Puntatore alla mappa di sostituzione l'archiviazione dei valori associati a parametri sostituibili dello script. Utilizza automaticamente ATL `%MODULE%`. Per utilizzare altri parametri sostituibili, vedere la sezione Osservazioni per informazioni dettagliate. In caso contrario, utilizzare il **NULL** il valore predefinito.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Simile a [UpdateRegistryFromResourceD](#updateregistryfromresourced) tranne `UpdateRegistryFromResourceS` crea un collegamento statico per il componente del Registro di sistema ATL (Registrar).  
  
 `UpdateRegistryFromResourceS`verrà richiamato automaticamente quando viene elaborata la mappa di oggetto, purché si aggiungono `#define _ATL_STATIC_REGISTRY` per il file stdafx. h.  
  
> [!NOTE]
>  Per sostituire i valori di sostituzione in fase di esecuzione, non si specifica il [macro DECLARE_REGISTRY_RESOURCE](http://msdn.microsoft.com/library/7ac11498-8ee2-4156-8df2-7076f7ddda8b) o [DECLARE_REGISTRY_RESOURCEID](http://msdn.microsoft.com/library/65bf3576-5396-416e-ba48-e14b3236c49b) (macro). In alternativa, creare una matrice di **_ATL_REGMAP_ENTRIES** strutture, in cui ogni voce contiene un segnaposto di variabili abbinato con un valore di sostituire il segnaposto in fase di esecuzione. Quindi chiamare `UpdateRegistryFromResourceS`, passando la matrice la `pMapEntries` parametro. Aggiunge tutti i valori di sostituzione di **_ATL_REGMAP_ENTRIES** strutture alla mappa di sostituzione del Registrar.  
  
 Per ulteriori informazioni sui parametri sostituibili e script, vedere l'articolo [il componente del Registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

