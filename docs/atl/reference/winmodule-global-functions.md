---
description: 'Altre informazioni su: WinModule Global Functions'
title: Funzioni globali WinModule
ms.date: 11/04/2016
f1_keywords:
- atlbase/ATL::AtlWinModuleAddCreateWndData
- atlbase/ATL::AtlWinModuleExtractCreateWndData
ms.assetid: 8ce45a5b-26a7-491f-9096-c09ceca5f2c2
ms.openlocfilehash: 1ea232bd3db79f3be3d9dee32b5f9fa40df0eb79
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97138658"
---
# <a name="winmodule-global-functions"></a>Funzioni globali WinModule

Queste funzioni forniscono il supporto per `_AtlCreateWndData` le operazioni di struttura.

> [!IMPORTANT]
> Le funzioni elencate nella tabella seguente non possono essere usate nelle applicazioni eseguite nel Windows Runtime.

|Nome|Description|
|-|-|
|[AtlWinModuleAddCreateWndData](#atlwinmoduleaddcreatewnddata)|Questa funzione viene utilizzata per inizializzare e aggiungere una struttura `_AtlCreateWndData`.|
|[AtlWinModuleExtractCreateWndData](#atlwinmoduleextractcreatewnddata)|Chiamare questa funzione per estrarre una struttura esistente `_AtlCreateWndData`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="atlwinmoduleaddcreatewnddata"></a><a name="atlwinmoduleaddcreatewnddata"></a> AtlWinModuleAddCreateWndData

Questa funzione viene utilizzata per inizializzare e aggiungere una struttura `_AtlCreateWndData`.

```
ATLINLINE ATLAPI_(void) AtlWinModuleAddCreateWndData(
    _ATL_WIN_MODULE* pWinModule,
    _AtlCreateWndData* pData,
    void* pObject);
```

### <a name="parameters"></a>Parametri

*pWinModule*<br/>
Puntatore alla struttura [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md) di un modulo.

*pData*<br/>
Puntatore alla struttura [_AtlCreateWndData](../../atl/reference/atlcreatewnddata-structure.md) da inizializzare e aggiungere al modulo corrente.

*pObject*<br/>
Puntatore al puntatore di un oggetto **`this`** .

### <a name="remarks"></a>Commenti

Inizializza una `_AtlCreateWndData` struttura utilizzata per archiviare il **`this`** puntatore utilizzato per fare riferimento alle istanze della classe e aggiungerlo all'elenco a cui fa riferimento la struttura di un modulo `_ATL_WIN_MODULE70` . Chiamata eseguita da [CAtlWinModule:: AddCreateWndData](catlwinmodule-class.md#addcreatewnddata).

## <a name="atlwinmoduleextractcreatewnddata"></a><a name="atlwinmoduleextractcreatewnddata"></a> AtlWinModuleExtractCreateWndData

Chiamare questa funzione per estrarre una struttura esistente `_AtlCreateWndData`.

```
ATLINLINE ATLAPI_(void*) AtlWinModuleExtractCreateWndData(_ATL_WIN_MODULE* pWinModule);
```

### <a name="parameters"></a>Parametri

*pWinModule*<br/>
Puntatore alla struttura [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md) di un modulo.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla struttura [_AtlCreateWndData](../../atl/reference/atlcreatewnddata-structure.md) .

### <a name="remarks"></a>Commenti

Questa funzione estrae una `_AtlCreateWndData` struttura esistente dall'elenco a cui fa riferimento la struttura di un modulo `_ATL_WIN_MODULE70` .

## <a name="see-also"></a>Vedi anche

[Funzioni](../../atl/reference/atl-functions.md)
