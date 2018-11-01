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
ms.openlocfilehash: 0d7673d634bad2d20dae63e4293f12e5530c4acd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50534901"
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
La classe derivata da `CAtlModuleT`.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlModuleT::CAtlModuleT](#catlmodulet)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlModuleT::InitLibId](#initlibid)|Inizializza il membro dati che contiene il GUID del modulo corrente.|
|[CAtlModuleT::RegisterAppId](#registerappid)|Aggiunge il file EXE nel Registro di sistema.|
|[CAtlModuleT::RegisterServer](#registerserver)|Aggiunge il servizio nel Registro di sistema.|
|[CAtlModuleT::UnregisterAppId](#unregisterappid)|Rimuove il file EXE nel Registro di sistema.|
|[CAtlModuleT::UnregisterServer](#unregisterserver)|Rimuove il servizio dal Registro di sistema.|
|[CAtlModuleT::UpdateRegistryAppId](#updateregistryappid)|Aggiorna le informazioni di file EXE nel Registro di sistema.|

## <a name="remarks"></a>Note

`CAtlModuleT`, derivato da [CAtlModule](../../atl/reference/catlmodule-class.md), implementa un file eseguibile (EXE) o un modulo ATL servizio (con estensione EXE). Un modulo eseguibile è un server locale, out-of-process, mentre un modulo del servizio è un'applicazione Windows che viene eseguita in background all'avvio di Windows.

`CAtlModuleT` fornisce supporto per l'inizializzazione, la registrazione e l'annullamento della registrazione del modulo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_MODULE](atl-typedefs.md#_atl_module)

[CAtlModule](../../atl/reference/catlmodule-class.md)

`CAtlModuleT`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="catlmodulet"></a>  CAtlModuleT::CAtlModuleT

Costruttore.

```
CAtlModuleT() throw();
```

### <a name="remarks"></a>Note

Le chiamate [CAtlModuleT::InitLibId](#initlibid).

##  <a name="initlibid"></a>  CAtlModuleT::InitLibId

Inizializza il membro dati che contiene il GUID del modulo corrente.

```
static void InitLibId() throw();
```

### <a name="remarks"></a>Note

Chiamato dal costruttore [CAtlModuleT::CAtlModuleT](#catlmodulet).

##  <a name="registerappid"></a>  CAtlModuleT::RegisterAppId

Aggiunge il file EXE nel Registro di sistema.

```
HRESULT RegisterAppId() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

##  <a name="registerserver"></a>  CAtlModuleT::RegisterServer

Aggiunge il servizio nel Registro di sistema.

```
HRESULT RegisterServer(
    BOOL bRegTypeLib = FALSE,
    const CLSID* pCLSID = NULL) throw();
```

### <a name="parameters"></a>Parametri

*bRegTypeLib*<br/>
TRUE se la libreria dei tipi deve essere registrato. Il valore predefinito è FALSE.

*pCLSID*<br/>
Punta al CLSID dell'oggetto da registrare. Se NULL (valore predefinito), tutti gli oggetti nella mappa oggetto verrà registrato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

##  <a name="unregisterappid"></a>  CAtlModuleT::UnregisterAppId

Rimuove il file EXE nel Registro di sistema.

```
HRESULT UnregisterAppId() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

##  <a name="unregisterserver"></a>  CAtlModuleT::UnregisterServer

Rimuove il servizio dal Registro di sistema.

```
HRESULT UnregisterServer(
    BOOL bUnRegTypeLib,
    const CLSID* pCLSID = NULL) throw();
```

### <a name="parameters"></a>Parametri

*bUnRegTypeLib*<br/>
TRUE se la libreria dei tipi è anche possibile annullare la registrazione.

*pCLSID*<br/>
Punta al CLSID dell'oggetto da cui annullare la registrazione. Se NULL (valore predefinito), tutti gli oggetti nella mappa oggetto verrà annullata la registrazione.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

##  <a name="updateregistryappid"></a>  CAtlModuleT::UpdateRegistryAppId

Aggiorna le informazioni di file EXE nel Registro di sistema.

```
static HRESULT WINAPI UpdateRegistryAppId(BOOL /* bRegister*/) throw();
```

### <a name="parameters"></a>Parametri

*bRegistrazione immediata*<br/>
Riservato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

## <a name="see-also"></a>Vedere anche

[Classe CAtlModule](../../atl/reference/catlmodule-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classi di modulo](../../atl/atl-module-classes.md)
