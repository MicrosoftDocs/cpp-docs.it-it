---
title: Classe CComHeapPtr
ms.date: 11/04/2016
f1_keywords:
- CComHeapPtr
- ATLBASE/ATL::CComHeapPtr
- ATLBASE/ATL::CComHeapPtr::CComHeapPtr
helpviewer_keywords:
- CComHeapPtr class
ms.assetid: bd08b53d-da2b-43ab-a79c-e7c8dbbc5994
ms.openlocfilehash: ace8dbb174bd6585e61bd941a60dad28296af72a
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57273251"
---
# <a name="ccomheapptr-class"></a>Classe CComHeapPtr

Una classe del puntatore intelligente per la gestione dei puntatori di heap.

## <a name="syntax"></a>Sintassi

```
template<typename T>
class CComHeapPtr : public CHeapPtr<T, CComAllocator>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di oggetto da archiviare nell'heap.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComHeapPtr::CComHeapPtr](#ccomheapptr)|Costruttore.|

## <a name="remarks"></a>Note

`CComHeapPtr` deriva da `CHeapPtr`, ma vengono utilizzati [CComAllocator](../../atl/reference/ccomallocator-class.md) allocare la memoria usando le routine di COM. Visualizzare [CHeapPtr](../../atl/reference/cheapptr-class.md) e [CHeapPtrBase](../../atl/reference/cheapptrbase-class.md) per i metodi disponibili.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)

[CHeapPtr](../../atl/reference/cheapptr-class.md)

`CComHeapPtr`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="ccomheapptr"></a>  CComHeapPtr::CComHeapPtr

Costruttore.

```
CComHeapPtr() throw();
explicit CComHeapPtr(T* pData) throw();
```

### <a name="parameters"></a>Parametri

*pData*<br/>
Oggetto `CComHeapPtr` esistente.

### <a name="remarks"></a>Note

Il puntatore di heap può facoltativamente essere creato usando un oggetto esistente `CComHeapPtr` oggetto. In questo caso, il nuovo `CComHeapPtr` oggetto assume la responsabilità per gestire le risorse e il nuovo puntatore.

## <a name="see-also"></a>Vedere anche

[Classe CHeapPtr](../../atl/reference/cheapptr-class.md)<br/>
[Classe CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)<br/>
[Classe CComAllocator](../../atl/reference/ccomallocator-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
