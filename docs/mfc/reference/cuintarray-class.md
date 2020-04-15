---
title: Classe CUIntArray
ms.date: 11/04/2016
f1_keywords:
- CUIntArray
- AFXCOLL/CUIntArray
- AFXCOLL/CUIntArray::CUIntArray
- AFXCOLL/CUIntArray::Add
- AFXCOLL/CUIntArray::Append
- AFXCOLL/CUIntArray::Copy
- AFXCOLL/CUIntArray::ElementAt
- AFXCOLL/CUIntArray::FreeExtra
- AFXCOLL/CUIntArray::GetAt
- AFXCOLL/CUIntArray::GetCount
- AFXCOLL/CUIntArray::GetData
- AFXCOLL/CUIntArray::GetSize
- AFXCOLL/CUIntArray::GetUpperBound
- AFXCOLL/CUIntArray::InsertAt
- AFXCOLL/CUIntArray::IsEmpty
- AFXCOLL/CUIntArray::RemoveAll
- AFXCOLL/CUIntArray::RemoveAt
- AFXCOLL/CUIntArray::SetAt
- AFXCOLL/CUIntArray::SetAtGrow
- AFXCOLL/CUIntArray::SetSize
helpviewer_keywords:
- CUIntArray [MFC], CUIntArray
- CUIntArray [MFC], Add
- CUIntArray [MFC], Append
- CUIntArray [MFC], Copy
- CUIntArray [MFC], ElementAt
- CUIntArray [MFC], FreeExtra
- CUIntArray [MFC], GetAt
- CUIntArray [MFC], GetCount
- CUIntArray [MFC], GetData
- CUIntArray [MFC], GetSize
- CUIntArray [MFC], GetUpperBound
- CUIntArray [MFC], InsertAt
- CUIntArray [MFC], IsEmpty
- CUIntArray [MFC], RemoveAll
- CUIntArray [MFC], RemoveAt
- CUIntArray [MFC], SetAt
- CUIntArray [MFC], SetAtGrow
- CUIntArray [MFC], SetSize
ms.assetid: d71f3d8f-ef9f-4e48-9b69-7782c0e2ddf7
ms.openlocfilehash: 9d620269bbf6695af992feaf0df2ef1161c9ae8f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373247"
---
# <a name="cuintarray-class"></a>Classe CUIntArray

Supporta matrici di Unsigned Integer.

## <a name="syntax"></a>Sintassi

```
class CUIntArray : public CObject
```

## <a name="members"></a>Membri

Le funzioni `CUIntArray` membro di sono simili alle funzioni membro della classe [CObArray](../../mfc/reference/cobarray-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CObArray`. Ovunque venga visualizzato `CObject` un puntatore come parametro di funzione o valore restituito, sostituire UINT.

`CObject* CObArray::GetAt( int <nIndex> ) const;`

ad esempio, si converte in

`UINT CUIntArray::GetAt( int <nIndex> ) const;`

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CUIntArray::CUIntArray (matrice)](../../mfc/reference/cobarray-class.md#cobarray)|Costruisce una matrice vuota.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CUIntArray::Aggiungi](../../mfc/reference/cobarray-class.md#add)|Aggiunge un elemento alla fine della matrice; se necessario, aumenta le dimensioni della matrice.|
|[CUIntArray::Accoda](../../mfc/reference/cobarray-class.md#append)|Accoda alla matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|
|[CUIntArray::Copia](../../mfc/reference/cobarray-class.md#copy)|Copia nella matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|
|[CUIntArray::ElementAt](../../mfc/reference/cobarray-class.md#elementat)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|
|[CUIntArray::FreeExtra](../../mfc/reference/cobarray-class.md#freeextra)|Libera tutta la memoria non utilizzata oltre limite il superiore corrente.|
|[CUIntArray::GetAt](../../mfc/reference/cobarray-class.md#getat)|Restituisce il valore in corrispondenza di un indice specificato.|
|[CUIntArray::GetCount](../../mfc/reference/cobarray-class.md#getcount)|Ottiene il numero di elementi nella matrice.|
|[CUIntArray::GetData](../../mfc/reference/cobarray-class.md#getdata)|Consente l'accesso a tutti gli elementi nella matrice. Può essere NULL.|
|[CUIntArray::GetSize](../../mfc/reference/cobarray-class.md#getsize)|Ottiene il numero di elementi nella matrice.|
|[CUIntArray::GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound)|Restituisce il massimo indice valido.|
|[CUIntArray::InsertAt](../../mfc/reference/cobarray-class.md#insertat)|Inserisce un elemento (o tutti gli elementi di un'altra matrice) in corrispondenza di un indice specificato.|
|[CUIntArray::IsEmpty](../../mfc/reference/cobarray-class.md#isempty)|Determina se la matrice è vuota.|
|[CUIntArray::RemoveAll](../../mfc/reference/cobarray-class.md#removeall)|Rimuove tutti gli elementi dalla matrice.|
|[CUIntArray::RemoveAt](../../mfc/reference/cobarray-class.md#removeat)|Rimuove un elemento in corrispondenza di un indice specificato.|
|[CUIntArray::SetAt](../../mfc/reference/cobarray-class.md#setat)|Imposta il valore per un indice specificato; l'aumento di dimensioni della matrice non è consentito.|
|[CUIntArray::SetAtGrow](../../mfc/reference/cobarray-class.md#setatgrow)|Imposta il valore per un indice specificato; se necessario, aumenta le dimensioni della matrice.|
|[CUIntArray::SetSize](../../mfc/reference/cobarray-class.md#setsize)|Imposta il numero di elementi che la matrice deve contenere.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CUIntArray::operatore \[\]](../../mfc/reference/cobarray-class.md#operator_at)|Imposta o ottiene l'elemento in corrispondenza dell'indice specificato.|

## <a name="remarks"></a>Osservazioni

Un numero intero senza segno, o UINT, differisce dalle parole e dalle parole doppie in quanto la dimensione fisica di un UINT può cambiare a seconda dell'ambiente operativo di destinazione. Un UINT ha le stesse dimensioni di una parola doppia.

`CUIntArray`incorpora la macro [IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic) per supportare l'accesso e il dump dei tipi in fase di esecuzione in un oggetto [CDumpContext.](../../mfc/reference/cdumpcontext-class.md) Se è necessario un dump di singoli elementi Unsigned Integer, è necessario impostare la profondità del contesto di dump su 1 o su un valore maggiore. Le matrici di interi senza segno non possono essere serializzate.

> [!NOTE]
> Prima di usare una matrice, usare `SetSize` per determinarne le dimensioni e allocare la necessaria memoria. Se non si usa `SetSize`, l'aggiunta di elementi alla matrice ne causa la riallocazione e la copia frequente. Le operazioni di riallocazione e copia frequenti sono inefficienti e possono frammentare la memoria.

Per ulteriori informazioni `CUIntArray`sull'utilizzo di , vedere l'articolo [Raccolte](../../mfc/collections.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CUIntArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcoll.h

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
