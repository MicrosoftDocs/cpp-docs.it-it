---
title: CHeapPtr (classe)
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
ms.openlocfilehash: a512aa974cb57072915f887f0c2a20ed1263ffa3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326910"
---
# <a name="cheapptr-class"></a>CHeapPtr (classe)

Una classe puntatore intelligente per la gestione dei puntatori dell'heap.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<typename T, class Allocator=CCRTAllocator>
class CHeapPtr : public CHeapPtrBase<T, Allocator>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di oggetto da archiviare nell'heap.

*Allocatore*<br/>
Classe di allocazione di memoria da utilizzare.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHeapPtr::CHeapPtr](#cheapptr)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHeapPtr::Allocate](#allocate)|Chiamare questo metodo per allocare memoria nell'heap per archiviare gli oggetti.|
|[CHeapPtr::Riallocare](#reallocate)|Chiamare questo metodo per riallocare la memoria nell'heap.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHeapPtr::operatore](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Osservazioni

`CHeapPtr`è derivato da [CHeapPtrBase](../../atl/reference/cheapptrbase-class.md) e per impostazione predefinita utilizza le routine CRT (in [CCRTAllocator](../../atl/reference/ccrtallocator-class.md)) per allocare e liberare memoria. La classe [CHeapPtrList](../../atl/reference/cheapptrlist-class.md) può essere utilizzata per costruire un elenco di puntatori all'heap. Vedere anche [CComHeapPtr](../../atl/reference/ccomheapptr-class.md), che utilizza le routine di allocazione della memoria COM.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)

`CHeapPtr`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore.h

## <a name="cheapptrallocate"></a><a name="allocate"></a>CHeapPtr::Allocate

Chiamare questo metodo per allocare memoria nell'heap per archiviare gli oggetti.

```
bool Allocate(size_t nElements = 1) throw();
```

### <a name="parameters"></a>Parametri

*nElementi*<br/>
Numero di elementi utilizzati per calcolare la quantità di memoria da allocare. Il valore predefinito è 1.

### <a name="return-value"></a>Valore restituito

Restituisce true se la memoria è stata allocata correttamente, false in caso di errore.

### <a name="remarks"></a>Osservazioni

Le routine dell'allocatore vengono utilizzate per riservare memoria sufficiente nell'heap per archiviare oggetti *nElement* di un tipo definito nel costruttore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#77](../../atl/codesnippet/cpp/cheapptr-class_1.cpp)]

## <a name="cheapptrcheapptr"></a><a name="cheapptr"></a>CHeapPtr::CHeapPtr

Costruttore.

```
CHeapPtr() throw();
explicit CHeapPtr(T* p) throw();
CHeapPtr(CHeapPtr<T, Allocator>& p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
Un puntatore `CHeapPtr`heap esistente o .

### <a name="remarks"></a>Osservazioni

Il puntatore dell'heap può essere creato `CHeapPtr` facoltativamente utilizzando un puntatore esistente o un oggetto. In tal caso, il nuovo `CHeapPtr` oggetto si assume la responsabilità della gestione del nuovo puntatore e delle nuove risorse.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#78](../../atl/codesnippet/cpp/cheapptr-class_2.cpp)]

## <a name="cheapptroperator-"></a><a name="operator_eq"></a>CHeapPtr::operatore

Operatore di assegnazione.

```
CHeapPtr<T, Allocator>& operator=(
    CHeapPtr<T, Allocator>& p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
Oggetto `CHeapPtr` esistente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento `CHeapPtr`all'oggetto aggiornato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#80](../../atl/codesnippet/cpp/cheapptr-class_3.cpp)]

## <a name="cheapptrreallocate"></a><a name="reallocate"></a>CHeapPtr::Riallocare

Chiamare questo metodo per riallocare la memoria nell'heap.

```
bool Reallocate(size_t nElements) throw();
```

### <a name="parameters"></a>Parametri

*nElementi*<br/>
Nuovo numero di elementi utilizzati per calcolare la quantità di memoria da allocare.

### <a name="return-value"></a>Valore restituito

Restituisce true se la memoria è stata allocata correttamente, false in caso di errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#79](../../atl/codesnippet/cpp/cheapptr-class_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)<br/>
[Classe CCRTAllocator](../../atl/reference/ccrtallocator-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
