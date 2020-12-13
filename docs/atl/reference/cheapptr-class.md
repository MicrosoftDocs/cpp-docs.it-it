---
description: 'Altre informazioni su: classe CHeapPtr'
title: Classe CHeapPtr
ms.date: 11/04/2016
f1_keywords:
- CHeapPtr
- ATLCORE/ATL::CHeapPtr
- ATLCORE/ATL::CHeapPtr::CHeapPtr
- ATLCORE/ATL::CHeapPtr::Allocate
- ATLCORE/ATL::CHeapPtr::Reallocate
helpviewer_keywords:
- CHeapPtr class
ms.assetid: e5c5bfd4-9bf1-4164-8a83-8155fe253454
ms.openlocfilehash: dc795c199562fa423a160b053c96983651d0812d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141648"
---
# <a name="cheapptr-class"></a>Classe CHeapPtr

Classe di puntatore intelligente per la gestione dei puntatori dell'heap.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<typename T, class Allocator=CCRTAllocator>
class CHeapPtr : public CHeapPtrBase<T, Allocator>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di oggetto da archiviare nell'heap.

*Allocatore*<br/>
Classe di allocazione della memoria da utilizzare.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CHeapPtr:: CHeapPtr](#cheapptr)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CHeapPtr:: allocate](#allocate)|Chiamare questo metodo per allocare memoria nell'heap per archiviare gli oggetti.|
|[CHeapPtr:: Reallocate](#reallocate)|Chiamare questo metodo per riallocare la memoria nell'heap.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CHeapPtr:: operator =](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Commenti

`CHeapPtr` deriva da [CHeapPtrBase](../../atl/reference/cheapptrbase-class.md) e per impostazione predefinita usa le routine CRT (in [CCRTAllocator](../../atl/reference/ccrtallocator-class.md)) per allocare e liberare memoria. La classe [CHeapPtrList](../../atl/reference/cheapptrlist-class.md) può essere usata per costruire un elenco di puntatori dell'heap. Vedere anche [CComHeapPtr](../../atl/reference/ccomheapptr-class.md), che usa le routine di allocazione della memoria com.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)

`CHeapPtr`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore. h

## <a name="cheapptrallocate"></a><a name="allocate"></a> CHeapPtr:: allocate

Chiamare questo metodo per allocare memoria nell'heap per archiviare gli oggetti.

```
bool Allocate(size_t nElements = 1) throw();
```

### <a name="parameters"></a>Parametri

*nElements*<br/>
Numero di elementi utilizzati per calcolare la quantità di memoria da allocare. Il valore predefinito è 1.

### <a name="return-value"></a>Valore restituito

Restituisce true se la memoria è stata allocata correttamente, false in caso di errore.

### <a name="remarks"></a>Commenti

Le routine dell'allocatore vengono usate per riservare memoria sufficiente nell'heap per archiviare gli oggetti *nElement* di un tipo definito nel costruttore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#77](../../atl/codesnippet/cpp/cheapptr-class_1.cpp)]

## <a name="cheapptrcheapptr"></a><a name="cheapptr"></a> CHeapPtr:: CHeapPtr

Costruttore.

```
CHeapPtr() throw();
explicit CHeapPtr(T* p) throw();
CHeapPtr(CHeapPtr<T, Allocator>& p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore a heap esistente o `CHeapPtr` .

### <a name="remarks"></a>Commenti

Il puntatore dell'heap può essere creato facoltativamente utilizzando un puntatore esistente o un `CHeapPtr` oggetto. In tal caso, il nuovo `CHeapPtr` oggetto assume la responsabilità della gestione del nuovo puntatore e delle risorse.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#78](../../atl/codesnippet/cpp/cheapptr-class_2.cpp)]

## <a name="cheapptroperator-"></a><a name="operator_eq"></a> CHeapPtr:: operator =

Operatore di assegnazione.

```
CHeapPtr<T, Allocator>& operator=(
    CHeapPtr<T, Allocator>& p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Oggetto `CHeapPtr` esistente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'oggetto aggiornato `CHeapPtr` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#80](../../atl/codesnippet/cpp/cheapptr-class_3.cpp)]

## <a name="cheapptrreallocate"></a><a name="reallocate"></a> CHeapPtr:: Reallocate

Chiamare questo metodo per riallocare la memoria nell'heap.

```
bool Reallocate(size_t nElements) throw();
```

### <a name="parameters"></a>Parametri

*nElements*<br/>
Nuovo numero di elementi utilizzati per calcolare la quantità di memoria da allocare.

### <a name="return-value"></a>Valore restituito

Restituisce true se la memoria è stata allocata correttamente, false in caso di errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#79](../../atl/codesnippet/cpp/cheapptr-class_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)<br/>
[Classe CCRTAllocator](../../atl/reference/ccrtallocator-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
