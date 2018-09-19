---
title: Funzioni globali WinModule | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlbase/ATL::AtlWinModuleAddCreateWndData
- atlbase/ATL::AtlWinModuleExtractCreateWndData
dev_langs:
- C++
ms.assetid: 8ce45a5b-26a7-491f-9096-c09ceca5f2c2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 70b99ac7790477df88a0e685afd5652a35c06233
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46047525"
---
# <a name="winmodule-global-functions"></a>Funzioni globali WinModule

Queste funzioni forniscono il supporto per `_AtlCreateWndData` strutturare le operazioni.

> [!IMPORTANT]
> Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite nel Runtime di Windows.

|||
|-|-|
|[AtlWinModuleAddCreateWndData](#atlwinmoduleaddcreatewnddata)|Questa funzione viene utilizzata per inizializzare e aggiungere una struttura `_AtlCreateWndData`.|
|[AtlWinModuleExtractCreateWndData](#atlwinmoduleextractcreatewnddata)|Chiamare questa funzione per estrarre una struttura esistente `_AtlCreateWndData`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="atlwinmoduleaddcreatewnddata"></a>  AtlWinModuleAddCreateWndData

Questa funzione viene utilizzata per inizializzare e aggiungere una struttura `_AtlCreateWndData`.

```
ATLINLINE ATLAPI_(void) AtlWinModuleAddCreateWndData(
    _ATL_WIN_MODULE* pWinModule,
    _AtlCreateWndData* pData,
    void* pObject);
```

### <a name="parameters"></a>Parametri

*pWinModule*<br/>
Puntatore a un modulo [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md) struttura.

*pData*<br/>
Puntatore per il [atlcreatewnddata](../../atl/reference/atlcreatewnddata-structure.md) struttura deve essere inizializzato e aggiunto al modulo corrente.

*pObject*<br/>
Puntatore a un oggetto **ciò** puntatore.

### <a name="remarks"></a>Note

Inizializza un `_AtlCreateWndData` struttura, che viene usato per archiviare le **ciò** puntatore utilizzato per fare riferimento alle istanze di classe e lo aggiunge all'elenco di cui viene fatto riferimento da un modulo `_ATL_WIN_MODULE70` struttura. Chiamata eseguita dal [CAtlWinModule::AddCreateWndData](catlwinmodule-class.md#addcreatewnddata).

##  <a name="atlwinmoduleextractcreatewnddata"></a>  AtlWinModuleExtractCreateWndData

Chiamare questa funzione per estrarre una struttura esistente `_AtlCreateWndData`.

```
ATLINLINE ATLAPI_(void*) AtlWinModuleExtractCreateWndData(_ATL_WIN_MODULE* pWinModule);
```

### <a name="parameters"></a>Parametri

*pWinModule*<br/>
Puntatore a un modulo [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md) struttura.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore per il [atlcreatewnddata](../../atl/reference/atlcreatewnddata-structure.md) struttura.

### <a name="remarks"></a>Note

Questa funzione estrae un oggetto esistente `_AtlCreateWndData` struttura dall'elenco a cui viene fatto riferimento da un modulo `_ATL_WIN_MODULE70` struttura.

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)
