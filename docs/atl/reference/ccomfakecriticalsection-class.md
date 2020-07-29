---
title: Classe CComFakeCriticalSection
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
ms.openlocfilehash: 5ada0fbed705af34391709653dbd3638fed32bf7
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87226581"
---
# <a name="ccomfakecriticalsection-class"></a>Classe CComFakeCriticalSection

Questa classe fornisce gli stessi metodi di [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) , ma non fornisce una sezione critica.

## <a name="syntax"></a>Sintassi

```
class CComFakeCriticalSection
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComFakeCriticalSection:: init](#init)|Non esegue alcuna operazione perché non è presente alcuna sezione critica.|
|[CComFakeCriticalSection:: Lock](#lock)|Non esegue alcuna operazione perché non è presente alcuna sezione critica.|
|[CComFakeCriticalSection:: term](#term)|Non esegue alcuna operazione perché non è presente alcuna sezione critica.|
|[CComFakeCriticalSection:: Unlock](#unlock)|Non esegue alcuna operazione perché non è presente alcuna sezione critica.|

## <a name="remarks"></a>Osservazioni

`CComFakeCriticalSection`rispecchia i metodi presenti in [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md). Tuttavia, non `CComFakeCriticalSection` fornisce una sezione critica; pertanto, i metodi non eseguono alcuna operazione.

In genere, è possibile utilizzare `CComFakeCriticalSection` tramite un **`typedef`** nome, `AutoCriticalSection` ovvero o `CriticalSection` . Quando si usa [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) o [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md), entrambi questi **`typedef`** nomi fanno riferimento `CComFakeCriticalSection` . Quando si usa [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md), fanno riferimento rispettivamente a [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md) e `CComCriticalSection` .

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore. h

## <a name="ccomfakecriticalsectioninit"></a><a name="init"></a>CComFakeCriticalSection:: init

Non esegue alcuna operazione perché non è presente alcuna sezione critica.

```
HRESULT Init() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="ccomfakecriticalsectionlock"></a><a name="lock"></a>CComFakeCriticalSection:: Lock

Non esegue alcuna operazione perché non è presente alcuna sezione critica.

```
HRESULT Lock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="ccomfakecriticalsectionterm"></a><a name="term"></a>CComFakeCriticalSection:: term

Non esegue alcuna operazione perché non è presente alcuna sezione critica.

```
HRESULT Term() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="ccomfakecriticalsectionunlock"></a><a name="unlock"></a>CComFakeCriticalSection:: Unlock

Non esegue alcuna operazione perché non è presente alcuna sezione critica.

```
HRESULT Unlock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
