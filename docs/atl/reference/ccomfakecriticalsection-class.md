---
title: CComFakeCriticalSection (classe)
ms.date: 11/04/2016
f1_keywords:
- CComFakeCriticalSection
- ATLCORE/ATL::CComFakeCriticalSection
- ATLCORE/ATL::CComFakeCriticalSection::Init
- ATLCORE/ATL::CComFakeCriticalSection::Lock
- ATLCORE/ATL::CComFakeCriticalSection::Term
- ATLCORE/ATL::CComFakeCriticalSection::Unlock
helpviewer_keywords:
- CComFakeCriticalSection class
ms.assetid: a4811b97-96bb-493b-ab9f-62822aeddb10
ms.openlocfilehash: 4a5b9ba3551397a9c3d59a343e9c6b55b1c1207e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327846"
---
# <a name="ccomfakecriticalsection-class"></a>CComFakeCriticalSection (classe)

Questa classe fornisce gli stessi metodi di [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) ma non fornisce una sezione critica.

## <a name="syntax"></a>Sintassi

```
class CComFakeCriticalSection
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComFakeCriticalSection::Init](#init)|Non fa nulla dal momento che non c'è nessuna sezione critica.|
|[CComFakeCriticalSection::Lock](#lock)|Non fa nulla dal momento che non c'è nessuna sezione critica.|
|[CComFakeCriticalSection::Term](#term)|Non fa nulla dal momento che non c'è nessuna sezione critica.|
|[CComFakeCriticalSection::Sblocca](#unlock)|Non fa nulla dal momento che non c'è nessuna sezione critica.|

## <a name="remarks"></a>Osservazioni

`CComFakeCriticalSection`rispecchia i metodi disponibili in [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md). Tuttavia, `CComFakeCriticalSection` non fornisce una sezione critica; pertanto, i relativi metodi non eseguono alcuna operazione.

In genere, `CComFakeCriticalSection` si `typedef` utilizza `AutoCriticalSection` tramite un nome, o `CriticalSection`. Quando si utilizza [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) o [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md), entrambi questi `typedef` nomi fanno riferimento `CComFakeCriticalSection`a . Quando si utilizza [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md), fanno `CComCriticalSection`riferimento rispettivamente a [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md) e , .

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore.h

## <a name="ccomfakecriticalsectioninit"></a><a name="init"></a>CComFakeCriticalSection::Init

Non fa nulla dal momento che non c'è nessuna sezione critica.

```
HRESULT Init() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="ccomfakecriticalsectionlock"></a><a name="lock"></a>CComFakeCriticalSection::Lock

Non fa nulla dal momento che non c'è nessuna sezione critica.

```
HRESULT Lock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="ccomfakecriticalsectionterm"></a><a name="term"></a>CComFakeCriticalSection::Term

Non fa nulla dal momento che non c'è nessuna sezione critica.

```
HRESULT Term() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="ccomfakecriticalsectionunlock"></a><a name="unlock"></a>CComFakeCriticalSection::Sblocca

Non fa nulla dal momento che non c'è nessuna sezione critica.

```
HRESULT Unlock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
