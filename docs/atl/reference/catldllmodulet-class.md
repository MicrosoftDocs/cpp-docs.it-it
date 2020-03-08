---
title: Classe CAtlDllModuleT
ms.date: 11/04/2016
f1_keywords:
- CAtlDllModuleT
- ATLBASE/ATL::CAtlDllModuleT
- ATLBASE/ATL::CAtlDllModuleT::CAtlDllModuleT
- ATLBASE/ATL::CAtlDllModuleT::DllCanUnloadNow
- ATLBASE/ATL::CAtlDllModuleT::DllGetClassObject
- ATLBASE/ATL::CAtlDllModuleT::DllMain
- ATLBASE/ATL::CAtlDllModuleT::DllRegisterServer
- ATLBASE/ATL::CAtlDllModuleT::DllUnregisterServer
- ATLBASE/ATL::CAtlDllModuleT::GetClassObject
helpviewer_keywords:
- CAtlDllModuleT class
ms.assetid: 351d5767-8257-4878-94be-45a85e31a72d
ms.openlocfilehash: be42915c6c2e941bc5fc1de78c5c7ac26ccca6e2
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78863190"
---
# <a name="catldllmodulet-class"></a>Classe CAtlDllModuleT

Questa classe rappresenta il modulo per una DLL.

## <a name="syntax"></a>Sintassi

```
template <class T>
class ATL_NO_VTABLE CAtlDllModuleT : public CAtlModuleT<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `CAtlDllModuleT`.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlDllModuleT:: CAtlDllModuleT](#catldllmodulet)|Costruttore.|
|[CAtlDllModuleT:: ~ CAtlDllModuleT](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlDllModuleT::D llCanUnloadNow](#dllcanunloadnow)|Verifica se la DLL può essere scaricata.|
|[CAtlDllModuleT::D llGetClassObject](#dllgetclassobject)|Restituisce un class factory.|
|[CAtlDllModuleT::D llMain](#dllmain)|Il punto di ingresso facoltativo in una libreria a collegamento dinamico (DLL).|
|[CAtlDllModuleT::D llRegisterServer](#dllregisterserver)|Aggiunge voci al registro di sistema per gli oggetti della DLL.|
|[CAtlDllModuleT::D llUnregisterServer](#dllunregisterserver)|Rimuove le voci nel registro di sistema per gli oggetti della DLL.|
|[CAtlDllModuleT:: GetClassObject](#getclassobject)|Restituisce un class factory. Richiamato da [DllGetClassObject](#dllgetclassobject).|

## <a name="remarks"></a>Osservazioni

`CAtlDllModuleT` rappresenta il modulo per una libreria di collegamento dinamico (DLL) e fornisce funzioni utilizzate da tutti i progetti DLL. Questa specializzazione della classe [CAtlModuleT](../../atl/reference/catlmodulet-class.md) include il supporto per la registrazione.

Per ulteriori informazioni sui moduli in ATL, vedere [ATL Module Classes](../../atl/atl-module-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_MODULE](atl-typedefs.md#_atl_module)

[CAtlModule](../../atl/reference/catlmodule-class.md)

[CAtlModuleT](../../atl/reference/catlmodulet-class.md)

`CAtlDllModuleT`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="catldllmodulet"></a>CAtlDllModuleT:: CAtlDllModuleT

Costruttore.

```
CAtlDllModuleT() throw();
```

##  <a name="dtor"></a>CAtlDllModuleT:: ~ CAtlDllModuleT

Distruttore.

```
~CAtlDllModuleT() throw();
```

##  <a name="dllcanunloadnow"></a>CAtlDllModuleT::D llCanUnloadNow

Verifica se la DLL può essere scaricata.

```
HRESULT DllCanUnloadNow() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se la DLL può essere scaricata o S_FALSE in caso contrario.

##  <a name="dllgetclassobject"></a>CAtlDllModuleT::D llGetClassObject

Restituisce il class factory.

```
HRESULT DllGetClassObject(
    REFCLSID rclsid,
    REFIID riid,
    LPVOID* ppv) throw();
```

### <a name="parameters"></a>Parametri

*rclsid*<br/>
CLSID dell'oggetto da creare.

*riid*<br/>
IID dell'interfaccia richiesta.

*PPV*<br/>
Puntatore al puntatore a interfaccia identificato da *riid*. Se l'oggetto non supporta questa interfaccia, *PPV* viene impostato su null.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

##  <a name="dllmain"></a>CAtlDllModuleT::D llMain

Il punto di ingresso facoltativo in una libreria a collegamento dinamico (DLL).

```
BOOL WINAPI DllMain(DWORD dwReason, LPVOID /* lpReserved*/) throw();
```

### <a name="parameters"></a>Parametri

*dwReason*<br/>
Se impostato su DLL_PROCESS_ATTACH, le chiamate di notifica DLL_THREAD_ATTACH e DLL_THREAD_DETACH sono disabilitate.

*lpReserved*<br/>
Riservato.

### <a name="return-value"></a>Valore restituito

Restituisce sempre TRUE.

### <a name="remarks"></a>Osservazioni

La disabilitazione della DLL_THREAD_ATTACH e della DLL_THREAD_DETACH delle chiamate di notifica può essere un'ottimizzazione utile per le applicazioni multithreading con numerose dll, che spesso creano ed eliminano thread e le cui dll non necessitano di queste notifiche a livello di thread di allegati/scollegamenti.

##  <a name="dllregisterserver"></a>CAtlDllModuleT::D llRegisterServer

Aggiunge voci al registro di sistema per gli oggetti della DLL.

```
HRESULT DllRegisterServer(BOOL bRegTypeLib = TRUE) throw();
```

### <a name="parameters"></a>Parametri

*bRegTypeLib*<br/>
TRUE se la libreria dei tipi deve essere registrata. Il valore predefinito è TRUE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

##  <a name="dllunregisterserver"></a>CAtlDllModuleT::D llUnregisterServer

Rimuove le voci nel registro di sistema per gli oggetti della DLL.

```
HRESULT DllUnregisterServer(BOOL bUnRegTypeLib = TRUE) throw();
```

### <a name="parameters"></a>Parametri

*bUnRegTypeLib*<br/>
TRUE se la libreria dei tipi deve essere rimossa dal registro di sistema. Il valore predefinito è TRUE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

##  <a name="getclassobject"></a>CAtlDllModuleT:: GetClassObject

Crea un oggetto del CLSID specificato.

```
HRESULT GetClassObject(
    REFCLSID rclsid,
    REFIID riid,
    LPVOID* ppv) throw();
```

### <a name="parameters"></a>Parametri

*rclsid*<br/>
CLSID dell'oggetto da creare.

*riid*<br/>
IID dell'interfaccia richiesta.

*PPV*<br/>
Puntatore al puntatore a interfaccia identificato da *riid*. Se l'oggetto non supporta questa interfaccia, *PPV* viene impostato su null.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato da [CAtlDllModuleT::D llgetclassobject](#dllgetclassobject) ed è incluso per la compatibilità con le versioni precedenti.

## <a name="see-also"></a>Vedere anche

[Classe CAtlModuleT](../../atl/reference/catlmodulet-class.md)<br/>
[Classe CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classi modulo](../../atl/atl-module-classes.md)
