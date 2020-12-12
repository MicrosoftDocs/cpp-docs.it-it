---
description: 'Altre informazioni su: classe CAtlComModule'
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
ms.openlocfilehash: dbea2de34d684b1fa52af8576ed37de228c4ec08
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97147550"
---
# <a name="catlcommodule-class"></a>Classe CAtlComModule

Questa classe implementa un modulo server COM.

## <a name="syntax"></a>Sintassi

```cpp
class CAtlComModule : public _ATL_COM_MODULE
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAtlComModule:: CAtlComModule](#catlcommodule)|Costruttore.|
|[CAtlComModule:: ~ CAtlComModule](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAtlComModule:: RegisterServer](#registerserver)|Chiamare questo metodo per aggiornare il registro di sistema per ogni oggetto nella mappa degli oggetti.|
|[CAtlComModule:: RegisterTypeLib](#registertypelib)|Chiamare questo metodo per registrare una libreria di tipi.|
|[CAtlComModule:: UnregisterServer](#unregisterserver)|Chiamare questo metodo per annullare la registrazione di ogni oggetto nella mappa degli oggetti.|
|[CAtlComModule:: UnRegisterTypeLib](#unregistertypelib)|Chiamare questo metodo per annullare la registrazione di una libreria di tipi.|

## <a name="remarks"></a>Commenti

`CAtlComModule` implementa un modulo server COM, consentendo a un client di accedere ai componenti del modulo.

Questa classe sostituisce la classe [CComModule](../../atl/reference/ccommodule-class.md) obsoleta usata nelle versioni precedenti di ATL. Per ulteriori informazioni, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_COM_MODULE](atl-typedefs.md#_atl_com_module)

`CAtlComModule`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="catlcommodulecatlcommodule"></a><a name="catlcommodule"></a> CAtlComModule:: CAtlComModule

Costruttore.

```cpp
CAtlComModule() throw();
```

### <a name="remarks"></a>Commenti

Inizializza il modulo.

## <a name="catlcommodulecatlcommodule"></a><a name="dtor"></a> CAtlComModule:: ~ CAtlComModule

Distruttore.

```cpp
~CAtlComModule();
```

### <a name="remarks"></a>Commenti

Libera tutte le class factory.

## <a name="catlcommoduleregisterserver"></a><a name="registerserver"></a> CAtlComModule:: RegisterServer

Chiamare questo metodo per aggiornare il registro di sistema per ogni oggetto nella mappa degli oggetti.

```cpp
HRESULT RegisterServer(BOOL bRegTypeLib = FALSE, const CLSID* pCLSID = NULL);
```

### <a name="parameters"></a>Parametri

*bRegTypeLib*<br/>
TRUE se la libreria dei tipi deve essere registrata. Il valore predefinito è FALSE.

*pCLSID*<br/>
Punta al CLSID dell'oggetto da registrare. Se NULL (valore predefinito), tutti gli oggetti nella mappa degli oggetti verranno registrati.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Chiama la funzione globale [AtlComModuleRegisterServer](server-registration-global-functions.md#atlcommoduleregisterserver).

## <a name="catlcommoduleregistertypelib"></a><a name="registertypelib"></a> CAtlComModule:: RegisterTypeLib

Chiamare questo metodo per registrare una libreria di tipi.

```cpp
HRESULT RegisterTypeLib(LPCTSTR lpszIndex);
HRESULT RegisterTypeLib();
```

### <a name="parameters"></a>Parametri

*lpszIndex*<br/>
Stringa nel formato " \\ \n", dove N è l'indice Integer della risorsa TypeLib.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Aggiunge informazioni su una libreria dei tipi al registro di sistema. Se l'istanza del modulo contiene più librerie dei tipi, usare la prima versione di questo metodo per specificare la libreria dei tipi da usare.

## <a name="catlcommoduleunregisterserver"></a><a name="unregisterserver"></a> CAtlComModule:: UnregisterServer

Chiamare questo metodo per annullare la registrazione di ogni oggetto nella mappa degli oggetti.

```cpp
HRESULT UnregisterServer(
    BOOL bRegTypeLib = FALSE,
    const CLSID* pCLSID = NULL);
```

### <a name="parameters"></a>Parametri

*bRegTypeLib*<br/>
TRUE se è necessario annullare la registrazione della libreria dei tipi. Il valore predefinito è FALSE.

*pCLSID*<br/>
Punta al CLSID dell'oggetto di cui annullare la registrazione. Se NULL (valore predefinito), verrà annullata la registrazione di tutti gli oggetti nella mappa oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Chiama la funzione globale [AtlComModuleUnregisterServer](server-registration-global-functions.md#atlcommoduleunregisterserver).

## <a name="catlcommoduleunregistertypelib"></a><a name="unregistertypelib"></a> CAtlComModule:: UnRegisterTypeLib

Chiamare questo metodo per annullare la registrazione di una libreria di tipi.

```cpp
HRESULT UnRegisterTypeLib(LPCTSTR lpszIndex);
HRESULT UnRegisterTypeLib();
```

### <a name="parameters"></a>Parametri

*lpszIndex*<br/>
Stringa nel formato " \\ \n", dove N è l'indice Integer della risorsa TypeLib.

### <a name="remarks"></a>Commenti

Rimuove le informazioni relative a una libreria dei tipi dal registro di sistema. Se l'istanza del modulo contiene più librerie dei tipi, usare la prima versione di questo metodo per specificare la libreria dei tipi da usare.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

## <a name="see-also"></a>Vedi anche

[_ATL_COM_MODULE](atl-typedefs.md#_atl_com_module)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
