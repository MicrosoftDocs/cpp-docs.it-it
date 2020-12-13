---
description: 'Altre informazioni su: classe CAtlModuleT'
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
ms.openlocfilehash: 841d4a41b7df818d9e966af1050fd9e376d89447
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97147225"
---
# <a name="catlmodulet-class"></a>Classe CAtlModuleT

Questa classe implementa un modulo ATL.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
class ATL_NO_VTABLE CAtlModuleT : public CAtlModule
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `CAtlModuleT` .

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAtlModuleT:: CAtlModuleT](#catlmodulet)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAtlModuleT:: InitLibId](#initlibid)|Inizializza il membro dati contenente il GUID del modulo corrente.|
|[CAtlModuleT:: RegisterAppId](#registerappid)|Aggiunge il file EXE al registro di sistema.|
|[CAtlModuleT:: RegisterServer](#registerserver)|Aggiunge il servizio al registro di sistema.|
|[CAtlModuleT:: UnregisterAppId](#unregisterappid)|Rimuove il file EXE dal registro di sistema.|
|[CAtlModuleT:: UnregisterServer](#unregisterserver)|Rimuove il servizio dal registro di sistema.|
|[CAtlModuleT:: UpdateRegistryAppId](#updateregistryappid)|Aggiorna le informazioni EXE nel registro di sistema.|

## <a name="remarks"></a>Commenti

`CAtlModuleT`, derivato da [CAtlModule](../../atl/reference/catlmodule-class.md), implementa un modulo eseguibile (exe) o un modulo di servizio (exe) ATL. Un modulo eseguibile è un server locale, out-of-process, mentre un modulo del servizio è un'applicazione Windows che viene eseguito in background all'avvio di Windows.

`CAtlModuleT` fornisce supporto per l'inizializzazione, la registrazione e l'annullamento della registrazione del modulo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_MODULE](atl-typedefs.md#_atl_module)

[CAtlModule](../../atl/reference/catlmodule-class.md)

`CAtlModuleT`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="catlmoduletcatlmodulet"></a><a name="catlmodulet"></a> CAtlModuleT:: CAtlModuleT

Costruttore.

```cpp
CAtlModuleT() throw();
```

### <a name="remarks"></a>Commenti

Chiama [CAtlModuleT:: InitLibId](#initlibid).

## <a name="catlmoduletinitlibid"></a><a name="initlibid"></a> CAtlModuleT:: InitLibId

Inizializza il membro dati contenente il GUID del modulo corrente.

```cpp
static void InitLibId() throw();
```

### <a name="remarks"></a>Commenti

Chiamato dal costruttore [CAtlModuleT:: CAtlModuleT](#catlmodulet).

## <a name="catlmoduletregisterappid"></a><a name="registerappid"></a> CAtlModuleT:: RegisterAppId

Aggiunge il file EXE al registro di sistema.

```cpp
HRESULT RegisterAppId() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

## <a name="catlmoduletregisterserver"></a><a name="registerserver"></a> CAtlModuleT:: RegisterServer

Aggiunge il servizio al registro di sistema.

```cpp
HRESULT RegisterServer(
    BOOL bRegTypeLib = FALSE,
    const CLSID* pCLSID = NULL) throw();
```

### <a name="parameters"></a>Parametri

*bRegTypeLib*<br/>
TRUE se la libreria dei tipi deve essere registrata. Il valore predefinito è FALSE.

*pCLSID*<br/>
Punta al CLSID dell'oggetto da registrare. Se NULL (valore predefinito), tutti gli oggetti nella mappa degli oggetti verranno registrati.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

## <a name="catlmoduletunregisterappid"></a><a name="unregisterappid"></a> CAtlModuleT:: UnregisterAppId

Rimuove il file EXE dal registro di sistema.

```cpp
HRESULT UnregisterAppId() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

## <a name="catlmoduletunregisterserver"></a><a name="unregisterserver"></a> CAtlModuleT:: UnregisterServer

Rimuove il servizio dal registro di sistema.

```cpp
HRESULT UnregisterServer(
    BOOL bUnRegTypeLib,
    const CLSID* pCLSID = NULL) throw();
```

### <a name="parameters"></a>Parametri

*bUnRegTypeLib*<br/>
TRUE se è anche necessario annullare la registrazione della libreria dei tipi.

*pCLSID*<br/>
Punta al CLSID dell'oggetto di cui annullare la registrazione. Se NULL (valore predefinito), verrà annullata la registrazione di tutti gli oggetti nella mappa oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

## <a name="catlmoduletupdateregistryappid"></a><a name="updateregistryappid"></a> CAtlModuleT:: UpdateRegistryAppId

Aggiorna le informazioni EXE nel registro di sistema.

```cpp
static HRESULT WINAPI UpdateRegistryAppId(BOOL /* bRegister*/) throw();
```

### <a name="parameters"></a>Parametri

*bRegister*<br/>
Riservato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

## <a name="see-also"></a>Vedi anche

[Classe CAtlModule](../../atl/reference/catlmodule-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classi modulo](../../atl/atl-module-classes.md)
