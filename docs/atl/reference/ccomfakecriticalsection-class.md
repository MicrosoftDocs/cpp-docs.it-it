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
ms.openlocfilehash: cf2408afb70dd6e2be27e22605f46b51b75ad602
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50519389"
---
# <a name="ccomfakecriticalsection-class"></a>Classe CComFakeCriticalSection

Questa classe fornisce gli stessi metodi come [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) ma non fornisce una sezione critica.

## <a name="syntax"></a>Sintassi

```
class CComFakeCriticalSection
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComFakeCriticalSection::Init](#init)|Non esegue alcuna operazione perché è presente alcuna sezione critica.|
|[CComFakeCriticalSection::Lock](#lock)|Non esegue alcuna operazione perché è presente alcuna sezione critica.|
|[CComFakeCriticalSection::Term](#term)|Non esegue alcuna operazione perché è presente alcuna sezione critica.|
|[CComFakeCriticalSection::Unlock](#unlock)|Non esegue alcuna operazione perché è presente alcuna sezione critica.|

## <a name="remarks"></a>Note

`CComFakeCriticalSection` rispecchia i metodi disponibili in [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md). Tuttavia, `CComFakeCriticalSection` non fornisce una sezione critica; pertanto, i relativi metodi non eseguono alcuna operazione.

In genere, si usa `CComFakeCriticalSection` tramite un `typedef` assegnare un nome, ovvero `AutoCriticalSection` o `CriticalSection`. Quando si usa [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) oppure [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md), entrambi questi `typedef` nomi fanno riferimento `CComFakeCriticalSection`. Quando si usa [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md), fare riferimento a essi [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md) e `CComCriticalSection`, rispettivamente.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore

##  <a name="init"></a>  CComFakeCriticalSection::Init

Non esegue alcuna operazione perché è presente alcuna sezione critica.

```
HRESULT Init() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

##  <a name="lock"></a>  CComFakeCriticalSection::Lock

Non esegue alcuna operazione perché è presente alcuna sezione critica.

```
HRESULT Lock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

##  <a name="term"></a>  CComFakeCriticalSection::Term

Non esegue alcuna operazione perché è presente alcuna sezione critica.

```
HRESULT Term() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

##  <a name="unlock"></a>  CComFakeCriticalSection::Unlock

Non esegue alcuna operazione perché è presente alcuna sezione critica.

```
HRESULT Unlock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
