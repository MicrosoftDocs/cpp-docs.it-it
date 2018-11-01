---
title: Classe CComQIPtr
ms.date: 11/04/2016
f1_keywords:
- CComQIPtr
- ATLCOMCLI/ATL::CComQIPtr
- ATLCOMCLI/ATL::CComQIPtr::CComQIPtr
helpviewer_keywords:
- CComQIPtr class
ms.assetid: 969cacb5-05b6-4af4-b683-24911d70242d
ms.openlocfilehash: c231d4d83a3030ea63e781e6f3d185270a483ccc
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50624926"
---
# <a name="ccomqiptr-class"></a>Classe CComQIPtr

Una classe del puntatore intelligente per la gestione dei puntatori a interfaccia COM.

## <a name="syntax"></a>Sintassi

```
template<class T, const IID* piid= &__uuidof(T)>
class CComQIPtr: public CComPtr<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Un'interfaccia COM che specifica il tipo di puntatore da archiviare.

*piid*<br/>
Un puntatore all'IID del *T*.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComQIPtr::CComQIPtr](#ccomqiptr)|Costruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComQIPtr::operator =](#operator_eq)|Assegna un puntatore al puntatore a membro.|

## <a name="remarks"></a>Note

Usa ATL `CComQIPtr` e [CComPtr](../../atl/reference/ccomptr-class.md) per gestire i puntatori a interfaccia COM, che derivano dalla [CComPtrBase](../../atl/reference/ccomptrbase-class.md). Entrambe le classi di eseguono il conteggio dei tramite chiamate a riferimenti automatici `AddRef` e `Release`. Gli operatori di overload gestiscono operazioni dei puntatori.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CComPtrBase](../../atl/reference/ccomptrbase-class.md)

[CComPtr](../../atl/reference/ccomptr-class.md)

`CComQIPtr`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcomcli

##  <a name="ccomqiptr"></a>  CComQIPtr::CComQIPtr

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
Un'interfaccia COM.

*piid*<br/>
Un puntatore all'IID del *T*.

##  <a name="operator_eq"></a>  CComQIPtr::operator =

L'operatore di assegnazione.

```
T* operator= (T* lp) throw();
T* operator= (const CComQIPtr<T, piid>& lp) throw();
T* operator= (IUnknown* lp) throw();
```

### <a name="parameters"></a>Parametri

*LP*<br/>
Utilizzato per inizializzare il puntatore di interfaccia.

*T*<br/>
Un'interfaccia COM.

*piid*<br/>
Un puntatore all'IID del *T*.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore a aggiornato `CComQIPtr` oggetto.

## <a name="see-also"></a>Vedere anche

[CComPtr::CComPtr](../../atl/reference/ccomptr-class.md#ccomptr)<br/>
[CComQIPtr::CComQIPtr](#ccomqiptr)<br/>
[Classe CComPtrBase](../../atl/reference/ccomptrbase-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classe CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)
