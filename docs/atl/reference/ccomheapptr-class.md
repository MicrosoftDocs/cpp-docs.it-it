---
title: CComHeapPtr (classe)
ms.date: 11/04/2016
f1_keywords:
- CComHeapPtr
- ATLBASE/ATL::CComHeapPtr
- ATLBASE/ATL::CComHeapPtr::CComHeapPtr
helpviewer_keywords:
- CComHeapPtr class
ms.assetid: bd08b53d-da2b-43ab-a79c-e7c8dbbc5994
ms.openlocfilehash: 78cadfff9a278cf080393ab919f3891b201c91aa
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327769"
---
# <a name="ccomheapptr-class"></a>CComHeapPtr (classe)

Una classe puntatore intelligente per la gestione dei puntatori dell'heap.

## <a name="syntax"></a>Sintassi

```
template<typename T>
class CComHeapPtr : public CHeapPtr<T, CComAllocator>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di oggetto da archiviare nell'heap.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComHeapPtr::CComHeapPtrCComHeapPtr::CComHeapPtr](#ccomheapptr)|Costruttore.|

## <a name="remarks"></a>Osservazioni

`CComHeapPtr`deriva da `CHeapPtr`, ma utilizza [CComAllocator](../../atl/reference/ccomallocator-class.md) per allocare memoria utilizzando routine COM. Vedere [CHeapPtr](../../atl/reference/cheapptr-class.md) e [CHeapPtrBase](../../atl/reference/cheapptrbase-class.md) per i metodi disponibili.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)

[CHeapPtr](../../atl/reference/cheapptr-class.md)

`CComHeapPtr`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="ccomheapptrccomheapptr"></a><a name="ccomheapptr"></a>CComHeapPtr::CComHeapPtrCComHeapPtr::CComHeapPtr

Costruttore.

```
CComHeapPtr() throw();
explicit CComHeapPtr(T* pData) throw();
```

### <a name="parameters"></a>Parametri

*pDati*<br/>
Oggetto `CComHeapPtr` esistente.

### <a name="remarks"></a>Osservazioni

Il puntatore dell'heap può `CComHeapPtr` essere creato facoltativamente utilizzando un oggetto esistente. In tal caso, il nuovo `CComHeapPtr` oggetto si assume la responsabilità della gestione del nuovo puntatore e delle nuove risorse.

## <a name="see-also"></a>Vedere anche

[CHeapPtr (classe)](../../atl/reference/cheapptr-class.md)<br/>
[Classe CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)<br/>
[Classe CComAllocator](../../atl/reference/ccomallocator-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
