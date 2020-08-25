---
title: Classe IAtlStringMgr
ms.date: 10/18/2018
f1_keywords:
- IAtlStringMgr
- ATLSIMPSTR/ATL::IAtlStringMgr
- ATLSIMPSTR/ATL::Allocate
- ATLSIMPSTR/ATL::Clone
- ATLSIMPSTR/ATL::Free
- ATLSIMPSTR/ATL::GetNilString
- ATLSIMPSTR/ATL::Reallocate
helpviewer_keywords:
- shared classes, IAtlStringMgr
- memory, managing
- IAtlStringMgr class
ms.assetid: 722f0346-a770-4aa7-8f94-177be8dba823
ms.openlocfilehash: a617ba829999e9e5778bd7f0091cfb0d624dce71
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88832009"
---
# <a name="iatlstringmgr-class"></a>Classe IAtlStringMgr

Questa classe rappresenta l'interfaccia per un `CStringT` gestore della memoria.

## <a name="syntax"></a>Sintassi

```
__interface IAtlStringMgr
```

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|Nome|Descrizione|
|-|-|
|[Allocare](#allocate)|Chiamare questo metodo per allocare una nuova struttura di dati stringa.|
|[Clone](#clone)|Chiamare questo metodo per restituire un puntatore a un nuovo gestore di stringhe da utilizzare con un'altra istanza di `CSimpleStringT` .|
|[Free](#free)|Chiamare questo metodo per liberare una struttura di dati stringa.|
|[GetNilString](#getnilstring)|Restituisce un puntatore all' `CStringData` oggetto utilizzato da oggetti stringa vuoti.|
|[Riassegnare](#reallocate)|Chiamare questo metodo per riallocare una struttura di dati stringa.|

## <a name="remarks"></a>Osservazioni

Questa interfaccia gestisce la memoria utilizzata dalle classi stringa indipendenti da MFC; come [CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md), [CStringT](../../atl-mfc-shared/reference/cstringt-class.md)e [CFixedStringT](../../atl-mfc-shared/reference/cfixedstringt-class.md).

È anche possibile usare questa classe per implementare un gestore della memoria personalizzato per la classe String personalizzata. Per ulteriori informazioni, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpstr. h

## <a name="iatlstringmgrallocate"></a><a name="allocate"></a> IAtlStringMgr:: allocate

Alloca una nuova struttura di dati stringa.

```
CStringData* Allocate(int nAllocLength,int nCharSize) throw();
```

### <a name="parameters"></a>Parametri

*nAllocLength*<br/>
Numero di caratteri nel nuovo blocco di memoria.

*nCharSize*<br/>
Dimensioni (in byte) del tipo di carattere utilizzato da Gestione stringhe.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'inizio del blocco di memoria appena allocata.

> [!NOTE]
> Non segnalare un'allocazione non riuscita generando un'eccezione. Al contrario, un'allocazione non riuscita deve essere segnalata restituendo NULL.

### <a name="remarks"></a>Osservazioni

Chiamare [IAtlStringMgr:: Free](#free) o [IAtlStringMgr:: Reallocate](#reallocate) per liberare la memoria allocata da questo metodo.

> [!NOTE]
> Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="iatlstringmgrclone"></a><a name="clone"></a> IAtlStringMgr:: Clone

Restituisce un puntatore a un nuovo gestore di stringhe da utilizzare con un'altra istanza di `CSimpleStringT` .

```
IAtlStringMgr* Clone() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una copia dell'oggetto `IAtlStringMgr`.

### <a name="remarks"></a>Osservazioni

Comunemente chiamato dal framework quando è necessario un gestore di stringhe per una nuova stringa. Nella maggior parte dei casi **`this`** viene restituito il puntatore.

Tuttavia, se il gestore della memoria non supporta l'utilizzo da parte di più istanze di `CSimpleStringT` , deve essere restituito un puntatore a un gestore di stringhe condivisibile.

> [!NOTE]
> Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="iatlstringmgrfree"></a><a name="free"></a> IAtlStringMgr:: Free

Libera una struttura di dati stringa.

```cpp
void Free(CStringData* pData) throw();
```

### <a name="parameters"></a>Parametri

*pData*<br/>
Puntatore al blocco di memoria da liberare.

### <a name="remarks"></a>Osservazioni

Libera il blocco di memoria specificato allocato in precedenza da [allocare](#allocate) o [riallocare](../../atl/reference/iatlmemmgr-class.md#reallocate).

> [!NOTE]
> Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="iatlstringmgrgetnilstring"></a><a name="getnilstring"></a> IAtlStringMgr:: GetNilString

Restituisce un puntatore a una struttura di dati stringa per una stringa vuota.

```
CStringData* GetNilString() throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore all' `CStringData` oggetto utilizzato per rappresentare una stringa vuota.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per restituire una rappresentazione di una stringa vuota.

> [!NOTE]
> Quando si implementa un gestore di stringhe personalizzato, questa funzione non deve mai avere esito negativo. È possibile verificare questa operazione incorporando un'istanza di `CNilStringData` nella classe di gestione delle stringhe e restituire un puntatore a tale istanza.

> [!NOTE]
> Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="iatlstringmgrreallocate"></a><a name="reallocate"></a> IAtlStringMgr:: Reallocate

Rialloca una struttura di dati stringa.

```
CStringData* Reallocate(
    CStringData* pData,
    int nAllocLength,
    int nCharSize) throw();
```

### <a name="parameters"></a>Parametri

*pData*<br/>
Puntatore alla memoria allocata in precedenza da questo gestore della memoria.

*nAllocLength*<br/>
Numero di caratteri nel nuovo blocco di memoria.

*nCharSize*<br/>
Dimensioni (in byte) del tipo di carattere utilizzato da Gestione stringhe.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'inizio del blocco di memoria allocata.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per ridimensionare il blocco di memoria esistente specificato da *pData*.

Chiamare [IAtlStringMgr:: Free](#free) per liberare la memoria allocata da questo metodo.

> [!NOTE]
> Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
