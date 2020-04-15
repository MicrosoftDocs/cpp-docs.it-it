---
title: Classe CAtlComModule
ms.date: 11/04/2016
f1_keywords:
- CAtlComModule
- ATLBASE/ATL::CAtlComModule
- ATLBASE/ATL::CAtlComModule::CAtlComModule
- ATLBASE/ATL::CAtlComModule::RegisterServer
- ATLBASE/ATL::CAtlComModule::RegisterTypeLib
- ATLBASE/ATL::CAtlComModule::UnregisterServer
- ATLBASE/ATL::CAtlComModule::UnRegisterTypeLib
helpviewer_keywords:
- CAtlComModule class
ms.assetid: af5dd71a-a0d1-4a2e-9a24-154a03381c75
ms.openlocfilehash: 68fdb48edc9304d9d74df6f36bd208cfd35ff307
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321475"
---
# <a name="catlcommodule-class"></a>Classe CAtlComModule

Questa classe implementa un modulo server COM.

## <a name="syntax"></a>Sintassi

```
class CAtlComModule : public _ATL_COM_MODULE
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Modulo CAtlComModule::CAtlComModule](#catlcommodule)|Costruttore.|
|[CAtlComModule:: CAtlComModule](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlComModule::RegisterServer (Modulo)](#registerserver)|Chiamare questo metodo per aggiornare il Registro di sistema per ogni oggetto nella mappa oggetti.|
|[CAtlComModule::RegisterTypeLib](#registertypelib)|Chiamare questo metodo per registrare una libreria dei tipi.|
|[CAtlComModule::UnregisterServer (Modulo di registrazione)](#unregisterserver)|Chiamare questo metodo per annullare la registrazione di ogni oggetto nella mappa oggetti.|
|[CAtlComModule::UnRegisterTypeLib](#unregistertypelib)|Chiamare questo metodo per annullare la registrazione di una libreria dei tipi.|

## <a name="remarks"></a>Osservazioni

`CAtlComModule`implementa un modulo server COM, consentendo a un client di accedere ai componenti del modulo.

Questa classe sostituisce la classe [CComModule](../../atl/reference/ccommodule-class.md) obsoleta utilizzata nelle versioni precedenti di ATL. Per ulteriori informazioni, vedere [Classi di moduli ATL.](../../atl/atl-module-classes.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_COM_MODULE](atl-typedefs.md#_atl_com_module)

`CAtlComModule`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="catlcommodulecatlcommodule"></a><a name="catlcommodule"></a>Modulo CAtlComModule::CAtlComModule

Costruttore.

```
CAtlComModule() throw();
```

### <a name="remarks"></a>Osservazioni

Inizializza il modulo.

## <a name="catlcommodulecatlcommodule"></a><a name="dtor"></a>CAtlComModule:: CAtlComModule

Distruttore.

```
~CAtlComModule();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le fabbriche di classe.

## <a name="catlcommoduleregisterserver"></a><a name="registerserver"></a>CAtlComModule::RegisterServer (Modulo)

Chiamare questo metodo per aggiornare il Registro di sistema per ogni oggetto nella mappa oggetti.

```
HRESULT RegisterServer(BOOL bRegTypeLib = FALSE, const CLSID* pCLSID = NULL);
```

### <a name="parameters"></a>Parametri

*bRegTypeLib (in questo stato instato)*<br/>
TRUESe la libreria dei tipi deve essere registrata. Il valore predefinito è FALSE.

*PCLSID (intattoLOGI)*<br/>
Punta al CLSID dell'oggetto da registrare. Se NULL (valore predefinito), verranno registrati tutti gli oggetti nella mappa oggetti.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Chiama la funzione globale [AtlComModuleRegisterServer](server-registration-global-functions.md#atlcommoduleregisterserver).

## <a name="catlcommoduleregistertypelib"></a><a name="registertypelib"></a>CAtlComModule::RegisterTypeLib

Chiamare questo metodo per registrare una libreria dei tipi.

```
HRESULT RegisterTypeLib(LPCTSTR lpszIndex);
HRESULT RegisterTypeLib();
```

### <a name="parameters"></a>Parametri

*Indice di lpsz*<br/>
Stringa nel formato\\" . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Aggiunge informazioni su una libreria dei tipi al Registro di sistema. Se l'istanza del modulo contiene più librerie dei tipi, utilizzare la prima versione di questo metodo per specificare quale libreria dei tipi deve essere utilizzata.

## <a name="catlcommoduleunregisterserver"></a><a name="unregisterserver"></a>CAtlComModule::UnregisterServer (Modulo di registrazione)

Chiamare questo metodo per annullare la registrazione di ogni oggetto nella mappa oggetti.

```
HRESULT UnregisterServer(
    BOOL bRegTypeLib = FALSE,
    const CLSID* pCLSID = NULL);
```

### <a name="parameters"></a>Parametri

*bRegTypeLib (in questo stato instato)*<br/>
TRUESe la libreria dei tipi deve essere annullata la registrazione. Il valore predefinito è FALSE.

*PCLSID (intattoLOGI)*<br/>
Punta al CLSID dell'oggetto di cui annullare la registrazione. Se NULL (valore predefinito), verrà annullata la registrazione di tutti gli oggetti nella mappa oggetti.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Chiama la funzione globale [AtlComModuleUnregisterServer](server-registration-global-functions.md#atlcommoduleunregisterserver).

## <a name="catlcommoduleunregistertypelib"></a><a name="unregistertypelib"></a>CAtlComModule::UnRegisterTypeLib

Chiamare questo metodo per annullare la registrazione di una libreria dei tipi.

```
HRESULT UnRegisterTypeLib(LPCTSTR lpszIndex);
HRESULT UnRegisterTypeLib();
```

### <a name="parameters"></a>Parametri

*Indice di lpsz*<br/>
Stringa nel formato\\" . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .

### <a name="remarks"></a>Osservazioni

Rimuove le informazioni su una libreria dei tipi dal Registro di sistema. Se l'istanza del modulo contiene più librerie dei tipi, utilizzare la prima versione di questo metodo per specificare quale libreria dei tipi deve essere utilizzata.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="see-also"></a>Vedere anche

[_ATL_COM_MODULE](atl-typedefs.md#_atl_com_module)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
