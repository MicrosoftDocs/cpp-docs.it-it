---
title: Classe CComAutoDeleteCriticalSection | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComAutoDeleteCriticalSection
- atlcore/ATL::CComAutoDeleteCriticalSection
dev_langs:
- C++
helpviewer_keywords:
- CComAutoDeleteCriticalSection class
ms.assetid: 2396dbea-1c60-4841-b50e-c4e18af311a3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 327c5fdcdc2a73cc8ee662ed71736f848ccd2e9d
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50066344"
---
# <a name="ccomautodeletecriticalsection-class"></a>Classe CComAutoDeleteCriticalSection

Questa classe fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.

## <a name="syntax"></a>Sintassi

```
class CComAutoDeleteCriticalSection : public CComSafeDeleteCriticalSection
```

## <a name="remarks"></a>Note

`CComAutoDeleteCriticalSection` deriva dalla classe [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md). Tuttavia, `CComAutoDeleteCriticalSection` esegue l'override di [termine](ccomsafedeletecriticalsection-class.md#term) metodo da **privata** accesso, che impone la Pulitura memoria interna che si verificano solo quando le istanze di questa classe escono dall'ambito o vengono eliminate in modo esplicito dal memoria.

Questa classe viene introdotto alcun metodi aggiuntivi tramite la relativa classe base. Visualizzare [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md) e [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) per altre informazioni sulle classi di helper sezione critica.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)

[CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md)

`CComAutoDeleteCriticalSection`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore

## <a name="see-also"></a>Vedere anche

[Classe CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md)<br/>
[Classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
