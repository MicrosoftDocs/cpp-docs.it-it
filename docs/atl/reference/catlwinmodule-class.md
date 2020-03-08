---
title: Classe CAtlWinModule
ms.date: 11/04/2016
f1_keywords:
- CAtlWinModule
- ATLBASE/ATL::CAtlWinModule
- ATLBASE/ATL::CAtlWinModule::CAtlWinModule
- ATLBASE/ATL::CAtlWinModule::AddCreateWndData
- ATLBASE/ATL::CAtlWinModule::ExtractCreateWndData
helpviewer_keywords:
- CAtlWinModule class
ms.assetid: 7ec844af-0f68-4a34-b0c8-9de50a025df0
ms.openlocfilehash: d0bc98fa48f84e67ab38106dea3fe22d5ad1757d
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78857351"
---
# <a name="catlwinmodule-class"></a>Classe CAtlWinModule

Questa classe fornisce supporto per i componenti di Windows ATL.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CAtlWinModule : public _ATL_WIN_MODULE
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlWinModule:: CAtlWinModule](#catlwinmodule)|Costruttore.|
|[CAtlWinModule:: ~ CAtlWinModule](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlWinModule:: AddCreateWndData](#addcreatewnddata)|Aggiunge un oggetto dati.|
|[CAtlWinModule:: ExtractCreateWndData](#extractcreatewnddata)|Restituisce un puntatore all'oggetto dati del modulo della finestra.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce supporto per tutte le classi ATL che richiedono funzionalità di windowing.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module)

`CAtlWinModule`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="addcreatewnddata"></a>CAtlWinModule:: AddCreateWndData

Questo metodo inizializza e aggiunge una struttura `_AtlCreateWndData`.

```
void AddCreateWndData(_AtlCreateWndData* pData, void* pObject);
```

### <a name="parameters"></a>Parametri

*pData*<br/>
Puntatore alla struttura `_AtlCreateWndData` da inizializzare e aggiungere al modulo corrente.

*pObject*<br/>
Puntatore al puntatore **this** di un oggetto.

### <a name="remarks"></a>Osservazioni

Questo metodo chiama [AtlWinModuleAddCreateWndData](winmodule-global-functions.md#atlwinmoduleaddcreatewnddata) che Inizializza una struttura [_AtlCreateWndData](../../atl/reference/atlcreatewnddata-structure.md) . Questa struttura archivia il puntatore **this** , usato per ottenere l'istanza della classe nelle routine della finestra.

##  <a name="catlwinmodule"></a>CAtlWinModule:: CAtlWinModule

Costruttore.

```
CAtlWinModule();
```

### <a name="remarks"></a>Osservazioni

Se l'inizializzazione non riesce, viene generata un'eccezione **EXCEPTION_NONCONTINUABLE** .

##  <a name="dtor"></a>CAtlWinModule:: ~ CAtlWinModule

Distruttore.

```
~CAtlWinModule();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate.

##  <a name="extractcreatewnddata"></a>CAtlWinModule:: ExtractCreateWndData

Questo metodo restituisce un puntatore a una struttura `_AtlCreateWndData`.

```
void* ExtractCreateWndData();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla struttura `_AtlCreateWndData` aggiunta in precedenza con [CAtlWinModule:: AddCreateWndData](#addcreatewnddata)o null se non è disponibile alcun oggetto.

## <a name="see-also"></a>Vedere anche

[_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classi modulo](../../atl/atl-module-classes.md)
