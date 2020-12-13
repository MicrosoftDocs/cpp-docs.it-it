---
description: 'Altre informazioni su: classe CComQIPtr'
title: Classe CComQIPtr
ms.date: 11/04/2016
f1_keywords:
- CComQIPtr
- ATLCOMCLI/ATL::CComQIPtr
- ATLCOMCLI/ATL::CComQIPtr::CComQIPtr
helpviewer_keywords:
- CComQIPtr class
ms.assetid: 969cacb5-05b6-4af4-b683-24911d70242d
ms.openlocfilehash: e5af938cd7b2bbae3b091eac5323d3455ce1cf02
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142324"
---
# <a name="ccomqiptr-class"></a>Classe CComQIPtr

Classe di puntatore intelligente per la gestione dei puntatori di interfaccia COM.

## <a name="syntax"></a>Sintassi

```
template<class T, const IID* piid= &__uuidof(T)>
class CComQIPtr: public CComPtr<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Interfaccia COM che specifica il tipo di puntatore da archiviare.

*pIID*<br/>
Puntatore all'IID di *T*.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CComQIPtr:: CComQIPtr](#ccomqiptr)|Costruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CComQIPtr:: operator =](#operator_eq)|Assegna un puntatore al puntatore del membro.|

## <a name="remarks"></a>Commenti

ATL utilizza `CComQIPtr` e [CComPtr](../../atl/reference/ccomptr-class.md) per gestire i puntatori di interfaccia com, entrambi derivati [da CComPtrBase](../../atl/reference/ccomptrbase-class.md). Entrambe le classi eseguono il conteggio automatico dei riferimenti tramite chiamate a `AddRef` e `Release` . Gli operatori di overload gestiscono le operazioni del puntatore.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CComPtrBase](../../atl/reference/ccomptrbase-class.md)

[CComPtr](../../atl/reference/ccomptr-class.md)

`CComQIPtr`

## <a name="requirements"></a>Requisiti

**Intestazione:** Atlcomcli. h

## <a name="ccomqiptrccomqiptr"></a><a name="ccomqiptr"></a> CComQIPtr:: CComQIPtr

Costruttore.

```
CComQIPtr() throw();
CComQIPtr(T* lp) throw();
CComQIPtr(IUnknown* lp) throw();
CComQIPtr(const CComQIPtr<T, piid>& lp) throw();
```

### <a name="parameters"></a>Parametri

*LP*<br/>
Utilizzato per inizializzare il puntatore di interfaccia.

*T*<br/>
Interfaccia COM.

*pIID*<br/>
Puntatore all'IID di *T*.

## <a name="ccomqiptroperator-"></a><a name="operator_eq"></a> CComQIPtr:: operator =

Operatore di assegnazione.

```
T* operator= (T* lp) throw();
T* operator= (const CComQIPtr<T, piid>& lp) throw();
T* operator= (IUnknown* lp) throw();
```

### <a name="parameters"></a>Parametri

*LP*<br/>
Utilizzato per inizializzare il puntatore di interfaccia.

*T*<br/>
Interfaccia COM.

*pIID*<br/>
Puntatore all'IID di *T*.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'oggetto aggiornato `CComQIPtr` .

## <a name="see-also"></a>Vedi anche

[CComPtr:: CComPtr](../../atl/reference/ccomptr-class.md#ccomptr)<br/>
[CComQIPtr:: CComQIPtr](#ccomqiptr)<br/>
[Classe CComPtrBase](../../atl/reference/ccomptrbase-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classe CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)
