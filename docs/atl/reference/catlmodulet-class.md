---
title: Classe CAtlModuleT
ms.date: 11/04/2016
f1_keywords:
- CAtlModuleT
- ATLBASE/ATL::CAtlModuleT
- ATLBASE/ATL::CAtlModuleT::CAtlModuleT
- ATLBASE/ATL::CAtlModuleT::InitLibId
- ATLBASE/ATL::CAtlModuleT::RegisterAppId
- ATLBASE/ATL::CAtlModuleT::RegisterServer
- ATLBASE/ATL::CAtlModuleT::UnregisterAppId
- ATLBASE/ATL::CAtlModuleT::UnregisterServer
- ATLBASE/ATL::CAtlModuleT::UpdateRegistryAppId
helpviewer_keywords:
- CAtlModuleT class
ms.assetid: 9b74d02f-9117-47b1-a05e-c5945f83dd2b
ms.openlocfilehash: bf64c073249b7426fafb430a708573d9d06d11fd
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321416"
---
# <a name="catlmodulet-class"></a>Classe CAtlModuleT

Questa classe implementa un modulo ATL.

## <a name="syntax"></a>Sintassi

```
template <class T>
class ATL_NO_VTABLE CAtlModuleT : public CAtlModule
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe `CAtlModuleT`derivata da .

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlModuleT::CAtlModuleT](#catlmodulet)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlModuleT::InitLibId](#initlibid)|Inizializza il membro dati contenente il GUID del modulo corrente.|
|[CAtlModuleT::RegisterAppId](#registerappid)|Aggiunge il file EXE al Registro di sistema.|
|[CAtlModuleT::RegisterServer](#registerserver)|Aggiunge il servizio al Registro di sistema.|
|[CAtlModuleT::UnregisterAppId](#unregisterappid)|Rimuove il file EXE dal Registro di sistema.|
|[CAtlModuleT::UnregisterServer](#unregisterserver)|Rimuove il servizio dal Registro di sistema.|
|[CAtlModuleT::UpdateRegistryAppId](#updateregistryappid)|Aggiorna le informazioni EXE nel Registro di sistema.|

## <a name="remarks"></a>Osservazioni

`CAtlModuleT`, derivato da [CAtlModule](../../atl/reference/catlmodule-class.md), implementa un modulo ATL Eseguibile (EXE) o Servizio (EXE). Un modulo eseguibile è un server locale out-of-process, mentre un modulo di servizio è un'applicazione Windows che viene eseguita in background all'avvio di Windows.An Executable module is a local, out-of-process server, whereas a Service module is a Windows application that runs in the background when Windows starts.

`CAtlModuleT`fornisce supporto per l'inizializzazione, la registrazione e l'annullamento della registrazione del modulo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_MODULE](atl-typedefs.md#_atl_module)

[CAtlModule (modulo CAtlModule)](../../atl/reference/catlmodule-class.md)

`CAtlModuleT`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="catlmoduletcatlmodulet"></a><a name="catlmodulet"></a>CAtlModuleT::CAtlModuleT

Costruttore.

```
CAtlModuleT() throw();
```

### <a name="remarks"></a>Osservazioni

Chiama [CAtlModuleT::InitLibId](#initlibid).

## <a name="catlmoduletinitlibid"></a><a name="initlibid"></a>CAtlModuleT::InitLibId

Inizializza il membro dati contenente il GUID del modulo corrente.

```
static void InitLibId() throw();
```

### <a name="remarks"></a>Osservazioni

Chiamato dal costruttore [CAtlModuleT::CAtlModuleT](#catlmodulet).

## <a name="catlmoduletregisterappid"></a><a name="registerappid"></a>CAtlModuleT::RegisterAppId

Aggiunge il file EXE al Registro di sistema.

```
HRESULT RegisterAppId() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="catlmoduletregisterserver"></a><a name="registerserver"></a>CAtlModuleT::RegisterServer

Aggiunge il servizio al Registro di sistema.

```
HRESULT RegisterServer(
    BOOL bRegTypeLib = FALSE,
    const CLSID* pCLSID = NULL) throw();
```

### <a name="parameters"></a>Parametri

*bRegTypeLib (in questo stato instato)*<br/>
TRUESe la libreria dei tipi deve essere registrata. Il valore predefinito è FALSE.

*PCLSID (intattoLOGI)*<br/>
Punta al CLSID dell'oggetto da registrare. Se NULL (valore predefinito), verranno registrati tutti gli oggetti nella mappa oggetti.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="catlmoduletunregisterappid"></a><a name="unregisterappid"></a>CAtlModuleT::UnregisterAppId

Rimuove il file EXE dal Registro di sistema.

```
HRESULT UnregisterAppId() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="catlmoduletunregisterserver"></a><a name="unregisterserver"></a>CAtlModuleT::UnregisterServer

Rimuove il servizio dal Registro di sistema.

```
HRESULT UnregisterServer(
    BOOL bUnRegTypeLib,
    const CLSID* pCLSID = NULL) throw();
```

### <a name="parameters"></a>Parametri

*bUnRegTypeLib (in formazione instato)*<br/>
TRUESe anche la libreria dei tipi deve essere annullata la registrazione.

*PCLSID (intattoLOGI)*<br/>
Punta al CLSID dell'oggetto di cui annullare la registrazione. Se NULL (valore predefinito), verrà annullata la registrazione di tutti gli oggetti nella mappa oggetti.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="catlmoduletupdateregistryappid"></a><a name="updateregistryappid"></a>CAtlModuleT::UpdateRegistryAppId

Aggiorna le informazioni EXE nel Registro di sistema.

```
static HRESULT WINAPI UpdateRegistryAppId(BOOL /* bRegister*/) throw();
```

### <a name="parameters"></a>Parametri

*bRegistrare*<br/>
Riservato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="see-also"></a>Vedere anche

[Classe CAtlModule](../../atl/reference/catlmodule-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classi di modulo](../../atl/atl-module-classes.md)
