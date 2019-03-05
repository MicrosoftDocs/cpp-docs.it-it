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
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57269461"
---
# <a name="catlwinmodule-class"></a>Classe CAtlWinModule

Questa classe fornisce il supporto per i componenti di finestra ATL.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CAtlWinModule : public _ATL_WIN_MODULE
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlWinModule::CAtlWinModule](#catlwinmodule)|Costruttore.|
|[CAtlWinModule:: ~ CAtlWinModule](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlWinModule::AddCreateWndData](#addcreatewnddata)|Aggiunge un oggetto dati.|
|[CAtlWinModule::ExtractCreateWndData](#extractcreatewnddata)|Restituisce un puntatore all'oggetto finestra modulo dati.|

## <a name="remarks"></a>Note

Questa classe offre supporto per tutte le classi ATL che richiedono funzionalità di windowing.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module)

`CAtlWinModule`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="addcreatewnddata"></a>  CAtlWinModule::AddCreateWndData

Questo metodo inizializza e aggiunge un `_AtlCreateWndData` struttura.

```
void AddCreateWndData(_AtlCreateWndData* pData, void* pObject);
```

### <a name="parameters"></a>Parametri

*pData*<br/>
Puntatore al `_AtlCreateWndData` struttura deve essere inizializzato e aggiunto al modulo corrente.

*pObject*<br/>
Puntatore a un oggetto **ciò** puntatore.

### <a name="remarks"></a>Note

Questo metodo chiama [AtlWinModuleAddCreateWndData](winmodule-global-functions.md#atlwinmoduleaddcreatewnddata) che consente di inizializzare un' [atlcreatewnddata](../../atl/reference/atlcreatewnddata-structure.md) struttura. Questa struttura archivierà i **ciò** puntatore, usato per ottenere l'istanza della classe nella routine della finestra.

##  <a name="catlwinmodule"></a>  CAtlWinModule::CAtlWinModule

Costruttore.

```
CAtlWinModule();
```

### <a name="remarks"></a>Note

Se si verifica un errore di inizializzazione, un' **EXCEPTION_NONCONTINUABLE** eccezione viene generata.

##  <a name="dtor"></a>  CAtlWinModule:: ~ CAtlWinModule

Distruttore.

```
~CAtlWinModule();
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate.

##  <a name="extractcreatewnddata"></a>  CAtlWinModule::ExtractCreateWndData

Questo metodo restituisce un puntatore a un `_AtlCreateWndData` struttura.

```
void* ExtractCreateWndData();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore per il `_AtlCreateWndData` struttura aggiunto in precedenza con [CAtlWinModule::AddCreateWndData](#addcreatewnddata), oppure NULL se non è disponibile alcun oggetto.

## <a name="see-also"></a>Vedere anche

[_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classi di modulo](../../atl/atl-module-classes.md)
