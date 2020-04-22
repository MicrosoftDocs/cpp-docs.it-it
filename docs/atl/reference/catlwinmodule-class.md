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
ms.openlocfilehash: e131ca1b4eb6e320d533ad1292c23add6ffa46e5
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81748560"
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

```cpp
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

```cpp
void* ExtractCreateWndData();
```

### <a name="return-value"></a>Valore restituito

Restituisce un `_AtlCreateWndData` puntatore alla struttura precedentemente aggiunta con [CAtlWinModule::AddCreateWndData](#addcreatewnddata)o NULL se non è disponibile alcun oggetto .

## <a name="see-also"></a>Vedere anche

[_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classi di modulo](../../atl/atl-module-classes.md)
