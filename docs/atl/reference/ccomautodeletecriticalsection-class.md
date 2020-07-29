---
title: Classe CComAutoDeleteCriticalSection
ms.date: 11/04/2016
f1_keywords:
- CComAutoDeleteCriticalSection
- atlcore/ATL::CComAutoDeleteCriticalSection
helpviewer_keywords:
- CComAutoDeleteCriticalSection class
ms.assetid: 2396dbea-1c60-4841-b50e-c4e18af311a3
ms.openlocfilehash: f44dbff7d353cb09142ac742b526d3541e9b2265
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224331"
---
# <a name="ccomautodeletecriticalsection-class"></a>Classe CComAutoDeleteCriticalSection

Questa classe fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.

## <a name="syntax"></a>Sintassi

```
class CComAutoDeleteCriticalSection : public CComSafeDeleteCriticalSection
```

## <a name="remarks"></a>Osservazioni

`CComAutoDeleteCriticalSection`deriva dalla classe [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md). Tuttavia, `CComAutoDeleteCriticalSection` esegue l'override del [termine](ccomsafedeletecriticalsection-class.md#term) metodo per **`private`** accedere a, che forza la pulizia interna della memoria in modo che venga eseguita solo quando le istanze di questa classe non rientrano nell'ambito o vengono eliminate in modo esplicito dalla memoria.

Questa classe non introduce metodi aggiuntivi sulla relativa classe di base. Per ulteriori informazioni sulle classi helper della sezione critica, vedere [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md) e [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)

[CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md)

`CComAutoDeleteCriticalSection`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore. h

## <a name="see-also"></a>Vedere anche

[Classe CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md)<br/>
[Classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
