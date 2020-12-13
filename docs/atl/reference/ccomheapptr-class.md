---
description: 'Altre informazioni su: classe CComHeapPtr'
title: Classe CComHeapPtr
ms.date: 11/04/2016
f1_keywords:
- CComHeapPtr
- ATLBASE/ATL::CComHeapPtr
- ATLBASE/ATL::CComHeapPtr::CComHeapPtr
helpviewer_keywords:
- CComHeapPtr class
ms.assetid: bd08b53d-da2b-43ab-a79c-e7c8dbbc5994
ms.openlocfilehash: 18865923e86a2392260ab1e6dedde2f37b9b4ea3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97146627"
---
# <a name="ccomheapptr-class"></a>Classe CComHeapPtr

Classe di puntatore intelligente per la gestione dei puntatori dell'heap.

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

|Nome|Description|
|----------|-----------------|
|[CComHeapPtr:: CComHeapPtr](#ccomheapptr)|Costruttore.|

## <a name="remarks"></a>Commenti

`CComHeapPtr` deriva da `CHeapPtr` , ma usa [CComAllocator](../../atl/reference/ccomallocator-class.md) per allocare memoria usando routine com. Per i metodi disponibili, vedere [CHeapPtr](../../atl/reference/cheapptr-class.md) e [CHeapPtrBase](../../atl/reference/cheapptrbase-class.md) .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)

[CHeapPtr](../../atl/reference/cheapptr-class.md)

`CComHeapPtr`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="ccomheapptrccomheapptr"></a><a name="ccomheapptr"></a> CComHeapPtr:: CComHeapPtr

Costruttore.

```
CComHeapPtr() throw();
explicit CComHeapPtr(T* pData) throw();
```

### <a name="parameters"></a>Parametri

*pData*<br/>
Oggetto `CComHeapPtr` esistente.

### <a name="remarks"></a>Commenti

È possibile creare facoltativamente il puntatore dell'heap utilizzando un `CComHeapPtr` oggetto esistente. In tal caso, il nuovo `CComHeapPtr` oggetto assume la responsabilità della gestione del nuovo puntatore e delle risorse.

## <a name="see-also"></a>Vedi anche

[Classe CHeapPtr](../../atl/reference/cheapptr-class.md)<br/>
[Classe CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)<br/>
[Classe CComAllocator](../../atl/reference/ccomallocator-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
