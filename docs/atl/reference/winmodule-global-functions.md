---
title: Funzioni globali WinModule
ms.date: 11/04/2016
f1_keywords:
- atlbase/ATL::AtlWinModuleAddCreateWndData
- atlbase/ATL::AtlWinModuleExtractCreateWndData
ms.assetid: 8ce45a5b-26a7-491f-9096-c09ceca5f2c2
ms.openlocfilehash: 3d7d001a2835514cc5385a7069c0bcda58cdd88e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329352"
---
# <a name="winmodule-global-functions"></a>Funzioni globali WinModule

Queste funzioni forniscono il supporto per `_AtlCreateWndData` le operazioni di struttura.

> [!IMPORTANT]
> Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite in Windows Runtime.

|||
|-|-|
|[AtlWinModuleAddCreateWndData](#atlwinmoduleaddcreatewnddata)|Questa funzione viene utilizzata per inizializzare e aggiungere una struttura `_AtlCreateWndData`.|
|[AtlWinModuleExtractCreateWndData](#atlwinmoduleextractcreatewnddata)|Chiamare questa funzione per estrarre una struttura esistente `_AtlCreateWndData`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="atlwinmoduleaddcreatewnddata"></a><a name="atlwinmoduleaddcreatewnddata"></a>AtlWinModuleAddCreateWndData (Informazioni in base ai moduli atWinModuleCreateWndData)

Questa funzione viene utilizzata per inizializzare e aggiungere una struttura `_AtlCreateWndData`.

```
ATLINLINE ATLAPI_(void) AtlWinModuleAddCreateWndData(
    _ATL_WIN_MODULE* pWinModule,
    _AtlCreateWndData* pData,
    void* pObject);
```

### <a name="parameters"></a>Parametri

*pWinModule (informazioni in stato instato)*<br/>
Puntatore alla struttura [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md) di un modulo.

*pDati*<br/>
Puntatore alla struttura [_AtlCreateWndData](../../atl/reference/atlcreatewnddata-structure.md) da inizializzare e aggiungere al modulo corrente.

*pOggetto*<br/>
Puntatore al puntatore **this** di un oggetto.

### <a name="remarks"></a>Osservazioni

Inizializza `_AtlCreateWndData` una struttura, utilizzata per archiviare il puntatore **this** utilizzato per fare riferimento alle istanze `_ATL_WIN_MODULE70` della classe e la aggiunge all'elenco a cui fa riferimento la struttura di un modulo. Chiamato da [CAtlWinModule::AddCreateWndData](catlwinmodule-class.md#addcreatewnddata).

## <a name="atlwinmoduleextractcreatewnddata"></a><a name="atlwinmoduleextractcreatewnddata"></a>AtlWinModuleExtractCreateWndData

Chiamare questa funzione per estrarre una struttura esistente `_AtlCreateWndData`.

```
ATLINLINE ATLAPI_(void*) AtlWinModuleExtractCreateWndData(_ATL_WIN_MODULE* pWinModule);
```

### <a name="parameters"></a>Parametri

*pWinModule (informazioni in stato instato)*<br/>
Puntatore alla struttura [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md) di un modulo.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla struttura [_AtlCreateWndData.](../../atl/reference/atlcreatewnddata-structure.md)

### <a name="remarks"></a>Osservazioni

Questa funzione estrarrà una struttura esistente `_AtlCreateWndData` dall'elenco a cui fa riferimento la struttura di `_ATL_WIN_MODULE70` un modulo.

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)
