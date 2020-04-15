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
ms.openlocfilehash: 40385fd592563837546b483bb80978cde6a56555
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321270"
---
# <a name="catlwinmodule-class"></a>Classe CAtlWinModule

Questa classe fornisce il supporto per i componenti di finestra ATL.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CAtlWinModule : public _ATL_WIN_MODULE
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlWinModule::CAtlWinModule](#catlwinmodule)|Costruttore.|
|[Modulo CAtlWinModule:::CAtlWinModule](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlWinModule::AddCreateWndData](#addcreatewnddata)|Aggiunge un oggetto dati.|
|[CAtlWinModule::ExtractCreateWndData](#extractcreatewnddata)|Restituisce un puntatore all'oggetto dati del modulo finestra.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce il supporto per tutte le classi ATL che richiedono funzionalità di windowing.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module)

`CAtlWinModule`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="catlwinmoduleaddcreatewnddata"></a><a name="addcreatewnddata"></a>CAtlWinModule::AddCreateWndData

Questo metodo inizializza e `_AtlCreateWndData` aggiunge una struttura.

```
void AddCreateWndData(_AtlCreateWndData* pData, void* pObject);
```

### <a name="parameters"></a>Parametri

*pDati*<br/>
Puntatore `_AtlCreateWndData` alla struttura da inizializzare e aggiungere al modulo corrente.

*pOggetto*<br/>
Puntatore al puntatore **this** di un oggetto.

### <a name="remarks"></a>Osservazioni

Questo metodo chiama [AtlWinModuleAddCreateWndData](winmodule-global-functions.md#atlwinmoduleaddcreatewnddata) che inizializza [un _AtlCreateWndData](../../atl/reference/atlcreatewnddata-structure.md) struttura. Questa struttura memorizzerà il puntatore **this,** utilizzato per ottenere l'istanza della classe nelle routine della finestra.

## <a name="catlwinmodulecatlwinmodule"></a><a name="catlwinmodule"></a>CAtlWinModule::CAtlWinModule

Costruttore.

```
CAtlWinModule();
```

### <a name="remarks"></a>Osservazioni

Se l'inizializzazione non riesce, viene generata un'eccezione **EXCEPTION_NONCONTINUABLE.**

## <a name="catlwinmodulecatlwinmodule"></a><a name="dtor"></a>Modulo CAtlWinModule:::CAtlWinModule

Distruttore.

```
~CAtlWinModule();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate.

## <a name="catlwinmoduleextractcreatewnddata"></a><a name="extractcreatewnddata"></a>CAtlWinModule::ExtractCreateWndData

Questo metodo restituisce `_AtlCreateWndData` un puntatore a una struttura.

```
void* ExtractCreateWndData();
```

### <a name="return-value"></a>Valore restituito

Restituisce un `_AtlCreateWndData` puntatore alla struttura precedentemente aggiunta con [CAtlWinModule::AddCreateWndData](#addcreatewnddata)o NULL se non è disponibile alcun oggetto .

## <a name="see-also"></a>Vedere anche

[_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classi di modulo](../../atl/atl-module-classes.md)
