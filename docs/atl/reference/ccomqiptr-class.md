---
title: CComQIPtr (classe)
ms.date: 11/04/2016
f1_keywords:
- CComQIPtr
- ATLCOMCLI/ATL::CComQIPtr
- ATLCOMCLI/ATL::CComQIPtr::CComQIPtr
helpviewer_keywords:
- CComQIPtr class
ms.assetid: 969cacb5-05b6-4af4-b683-24911d70242d
ms.openlocfilehash: 2b1d8b92fbc5e95a5061956bafc4922d249a6f18
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327423"
---
# <a name="ccomqiptr-class"></a>CComQIPtr (classe)

Una classe di puntatori intelligenti per la gestione dei puntatori a interfaccia COM.

## <a name="syntax"></a>Sintassi

```
template<class T, const IID* piid= &__uuidof(T)>
class CComQIPtr: public CComPtr<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Un'interfaccia COM che specifica il tipo di puntatore da archiviare.

*piid*<br/>
Puntatore all'IID di *T*.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComQIPtr::CComQIPtr](#ccomqiptr)|Costruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComQIPtr::operatore](#operator_eq)|Assegna un puntatore al puntatore del membro.|

## <a name="remarks"></a>Osservazioni

ATL `CComQIPtr` utilizza e [CComPtr](../../atl/reference/ccomptr-class.md) per gestire i puntatori a interfaccia COM, entrambi derivano da [CComPtrBase](../../atl/reference/ccomptrbase-class.md). Entrambe le classi eseguono `AddRef` `Release`il conteggio automatico dei riferimenti tramite chiamate a e . Gli operatori di overload gestiscono le operazioni del puntatore.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CComPtrBase](../../atl/reference/ccomptrbase-class.md)

[Ccomptr](../../atl/reference/ccomptr-class.md)

`CComQIPtr`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcomcli.h

## <a name="ccomqiptrccomqiptr"></a><a name="ccomqiptr"></a>CComQIPtr::CComQIPtr

Costruttore.

```
CComQIPtr() throw();
CComQIPtr(T* lp) throw();
CComQIPtr(IUnknown* lp) throw();
CComQIPtr(const CComQIPtr<T, piid>& lp) throw();
```

### <a name="parameters"></a>Parametri

*Lp*<br/>
Utilizzato per inizializzare il puntatore a interfaccia.

*T*<br/>
Un'interfaccia COM.

*piid*<br/>
Puntatore all'IID di *T*.

## <a name="ccomqiptroperator-"></a><a name="operator_eq"></a>CComQIPtr::operatore

Operatore di assegnazione.

```
T* operator= (T* lp) throw();
T* operator= (const CComQIPtr<T, piid>& lp) throw();
T* operator= (IUnknown* lp) throw();
```

### <a name="parameters"></a>Parametri

*Lp*<br/>
Utilizzato per inizializzare il puntatore a interfaccia.

*T*<br/>
Un'interfaccia COM.

*piid*<br/>
Puntatore all'IID di *T*.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'oggetto aggiornato. `CComQIPtr`

## <a name="see-also"></a>Vedere anche

[CComPtr::CComPtr](../../atl/reference/ccomptr-class.md#ccomptr)<br/>
[CComQIPtr::CComQIPtr](#ccomqiptr)<br/>
[CComPtrBase (classe)](../../atl/reference/ccomptrbase-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classe CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)
