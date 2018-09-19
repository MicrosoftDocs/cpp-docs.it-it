---
title: Classe CComHeapPtr | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComHeapPtr
- ATLBASE/ATL::CComHeapPtr
- ATLBASE/ATL::CComHeapPtr::CComHeapPtr
dev_langs:
- C++
helpviewer_keywords:
- CComHeapPtr class
ms.assetid: bd08b53d-da2b-43ab-a79c-e7c8dbbc5994
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3455e88c5a9852c902702544a0f915e8d20dc64e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46043235"
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
