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
ms.openlocfilehash: 7a5f8e7e489c8e0d573569ac7c4a8fb63f652732
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319006"
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
La classe `CAtlDllModuleT`derivata da .

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlDllModuleT::CAtlDllModuleT](#catldllmodulet)|Costruttore.|
|[CAtlDllModuleT::CAtlDllModuleT](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlDllModuleT::DllCanUnloadNow](#dllcanunloadnow)|Verifica se la DLL può essere scaricata.|
|[CAtlDllModuleT::DllGetClassObject](#dllgetclassobject)|Restituisce una class factory.|
|[CAtlDllModuleT::DllMain](#dllmain)|Punto di ingresso facoltativo in una libreria a collegamento dinamico (DLL).|
|[CAtlDllModuleT::DllRegisterServer](#dllregisterserver)|Aggiunge voci al Registro di sistema per gli oggetti nella DLL.|
|[CAtlDllModuleT::DllUnregisterServer](#dllunregisterserver)|Rimuove le voci nel Registro di sistema per gli oggetti nella DLL.|
|[CAtlDllModuleT::GetClassObject](#getclassobject)|Restituisce una class factory. Richiamato da [DllGetClassObject](#dllgetclassobject).|

## <a name="remarks"></a>Osservazioni

`CAtlDllModuleT`rappresenta il modulo per una libreria a collegamento dinamico (DLL) e fornisce le funzioni utilizzate da tutti i progetti DLL. Questa specializzazione della classe [CAtlModuleT](../../atl/reference/catlmodulet-class.md) include il supporto per la registrazione.

Per ulteriori informazioni sui moduli in ATL, vedere [Classi di moduli ATL](../../atl/atl-module-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_MODULE](atl-typedefs.md#_atl_module)

[CAtlModule (modulo CAtlModule)](../../atl/reference/catlmodule-class.md)

[CAtlModuleT (modulo CAtlModuleT)](../../atl/reference/catlmodulet-class.md)

`CAtlDllModuleT`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="catldllmoduletcatldllmodulet"></a><a name="catldllmodulet"></a>CAtlDllModuleT::CAtlDllModuleT

Costruttore.

```
CAtlDllModuleT() throw();
```

## <a name="catldllmoduletcatldllmodulet"></a><a name="dtor"></a>CAtlDllModuleT::CAtlDllModuleT

Distruttore.

```
~CAtlDllModuleT() throw();
```

## <a name="catldllmoduletdllcanunloadnow"></a><a name="dllcanunloadnow"></a>CAtlDllModuleT::DllCanUnloadNow

Verifica se la DLL può essere scaricata.

```
HRESULT DllCanUnloadNow() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se la DLL può essere scaricata o S_FALSE in caso contrario.

## <a name="catldllmoduletdllgetclassobject"></a><a name="dllgetclassobject"></a>CAtlDllModuleT::DllGetClassObject

Restituisce la class factory.

```
HRESULT DllGetClassObject(
    REFCLSID rclsid,
    REFIID riid,
    LPVOID* ppv) throw();
```

### <a name="parameters"></a>Parametri

*rclsid*<br/>
CLSID dell'oggetto da creare.

*Riid*<br/>
IID dell'interfaccia richiesta.

*Ppv*<br/>
Puntatore al puntatore a interfaccia identificato da *riid*. Se l'oggetto non supporta questa interfaccia, *ppv* è impostato su NULL.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="catldllmoduletdllmain"></a><a name="dllmain"></a>CAtlDllModuleT::DllMain

Punto di ingresso facoltativo in una libreria a collegamento dinamico (DLL).

```
BOOL WINAPI DllMain(DWORD dwReason, LPVOID /* lpReserved*/) throw();
```

### <a name="parameters"></a>Parametri

*dwReason*<br/>
Se impostato su DLL_PROCESS_ATTACH, le chiamate di notifica DLL_THREAD_ATTACH e DLL_THREAD_DETACH vengono disabilitate.

*lpRiservato*<br/>
Riservato.

### <a name="return-value"></a>Valore restituito

Restituisce sempre TRUE.

### <a name="remarks"></a>Osservazioni

La disabilitazione delle chiamate di notifica DLL_THREAD_ATTACH e DLL_THREAD_DETACH può essere un'utile ottimizzazione per le applicazioni multithreading che dispongono di molte DLL, che spesso creano ed eliminano thread e le cui DLL non richiedono queste notifiche a livello di thread di associazione/distacco.

## <a name="catldllmoduletdllregisterserver"></a><a name="dllregisterserver"></a>CAtlDllModuleT::DllRegisterServer

Aggiunge voci al Registro di sistema per gli oggetti nella DLL.

```
HRESULT DllRegisterServer(BOOL bRegTypeLib = TRUE) throw();
```

### <a name="parameters"></a>Parametri

*bRegTypeLib (in questo stato instato)*<br/>
TRUESe la libreria dei tipi deve essere registrata. Il valore predefinito è TRUE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="catldllmoduletdllunregisterserver"></a><a name="dllunregisterserver"></a>CAtlDllModuleT::DllUnregisterServer

Rimuove le voci nel Registro di sistema per gli oggetti nella DLL.

```
HRESULT DllUnregisterServer(BOOL bUnRegTypeLib = TRUE) throw();
```

### <a name="parameters"></a>Parametri

*bUnRegTypeLib (in formazione instato)*<br/>
TRUESe la libreria dei tipi deve essere rimossa dal Registro di sistema. Il valore predefinito è TRUE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="catldllmoduletgetclassobject"></a><a name="getclassobject"></a>CAtlDllModuleT::GetClassObject

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

*Riid*<br/>
IID dell'interfaccia richiesta.

*Ppv*<br/>
Puntatore al puntatore a interfaccia identificato da *riid*. Se l'oggetto non supporta questa interfaccia, *ppv* è impostato su NULL.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato da [CAtlDllModuleT::DllGetClassObject](#dllgetclassobject) ed è incluso per compatibilità con le versioni precedenti.

## <a name="see-also"></a>Vedere anche

[Classe CAtlModuleT](../../atl/reference/catlmodulet-class.md)<br/>
[Classe CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classi di modulo](../../atl/atl-module-classes.md)
