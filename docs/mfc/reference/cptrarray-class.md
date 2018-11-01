---
title: Classe CPtrArray
ms.date: 11/04/2016
f1_keywords:
- CPtrArray
- AFXCOLL/CPtrArray
- AFXCOLL/CObArray::CObArray
- AFXCOLL/CObArray::Add
- AFXCOLL/CObArray::Append
- AFXCOLL/CObArray::Copy
- AFXCOLL/CObArray::ElementAt
- AFXCOLL/CObArray::FreeExtra
- AFXCOLL/CObArray::GetAt
- AFXCOLL/CObArray::GetCount
- AFXCOLL/CObArray::GetData
- AFXCOLL/CObArray::GetSize
- AFXCOLL/CObArray::GetUpperBound
- AFXCOLL/CObArray::InsertAt
- AFXCOLL/CObArray::IsEmpty
- AFXCOLL/CObArray::RemoveAll
- AFXCOLL/CObArray::RemoveAt
- AFXCOLL/CObArray::SetAt
- AFXCOLL/CObArray::SetAtGrow
- AFXCOLL/CObArray::SetSize
helpviewer_keywords:
- CObArray [MFC], CObArray
- CObArray [MFC], Add
- CObArray [MFC], Append
- CObArray [MFC], Copy
- CObArray [MFC], ElementAt
- CObArray [MFC], FreeExtra
- CObArray [MFC], GetAt
- CObArray [MFC], GetCount
- CObArray [MFC], GetData
- CObArray [MFC], GetSize
- CObArray [MFC], GetUpperBound
- CObArray [MFC], InsertAt
- CObArray [MFC], IsEmpty
- CObArray [MFC], RemoveAll
- CObArray [MFC], RemoveAt
- CObArray [MFC], SetAt
- CObArray [MFC], SetAtGrow
- CObArray [MFC], SetSize
ms.assetid: c23b87a3-bf84-49d6-a66b-61e999d0938a
ms.openlocfilehash: 47b30f1da0d22b63e06a6eee93c905630f5990f1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50648214"
---
# <a name="cptrarray-class"></a>Classe CPtrArray

Supporta matrici di puntatori void.

## <a name="syntax"></a>Sintassi

```
class CPtrArray : public CObject
```

## <a name="members"></a>Membri

Le funzioni membro della `CPtrArray` sono simili alle funzioni membro della classe [CObArray](../../mfc/reference/cobarray-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CObArray`. Ogni volta che un `CObject` puntatore come parametro della funzione o valore restituito, sostituire un puntatore a **void**.

`CObject* CObArray::GetAt( int <nIndex> ) const;`

ad esempio, si converte in

`void* CPtrArray::GetAt( int <nIndex> ) const;`

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObArray::CObArray](../../mfc/reference/cobarray-class.md#cobarray)|Costruisce una matrice vuota.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObArray::Add](../../mfc/reference/cobarray-class.md#add)|Aggiunge un elemento alla fine della matrice; se necessario, aumenta le dimensioni della matrice.|
|[CObArray::Append](../../mfc/reference/cobarray-class.md#append)|Accoda alla matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|
|[CObArray::Copy](../../mfc/reference/cobarray-class.md#copy)|Copia nella matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|
|[CObArray::ElementAt](../../mfc/reference/cobarray-class.md#elementat)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|
|[CObArray::FreeExtra](../../mfc/reference/cobarray-class.md#freeextra)|Libera tutta la memoria non utilizzata oltre limite il superiore corrente.|
|[CObArray::GetAt](../../mfc/reference/cobarray-class.md#getat)|Restituisce il valore in corrispondenza di un indice specificato.|
|[CObArray::GetCount](../../mfc/reference/cobarray-class.md#getcount)|Ottiene il numero di elementi nella matrice.|
|[CObArray::GetData](../../mfc/reference/cobarray-class.md#getdata)|Consente l'accesso a tutti gli elementi nella matrice. Può essere `NULL`.|
|[CObArray::GetSize](../../mfc/reference/cobarray-class.md#getsize)|Ottiene il numero di elementi nella matrice.|
|[CObArray::GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound)|Restituisce il massimo indice valido.|
|[CObArray::InsertAt](../../mfc/reference/cobarray-class.md#insertat)|Inserisce un elemento (o tutti gli elementi di un'altra matrice) in corrispondenza di un indice specificato.|
|[CObArray::IsEmpty](../../mfc/reference/cobarray-class.md#isempty)|Determina se la matrice è vuota.|
|[CObArray::RemoveAll](../../mfc/reference/cobarray-class.md#removeall)|Rimuove tutti gli elementi dalla matrice.|
|[CObArray::RemoveAt](../../mfc/reference/cobarray-class.md#removeat)|Rimuove un elemento in corrispondenza di un indice specificato.|
|[CObArray::SetAt](../../mfc/reference/cobarray-class.md#setat)|Imposta il valore per un indice specificato; l'aumento di dimensioni della matrice non è consentito.|
|[CObArray::SetAtGrow](../../mfc/reference/cobarray-class.md#setatgrow)|Imposta il valore per un indice specificato; se necessario, aumenta le dimensioni della matrice.|
|[CObArray::SetSize](../../mfc/reference/cobarray-class.md#setsize)|Imposta il numero di elementi che la matrice deve contenere.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[[] CObArray::operator](../../mfc/reference/cobarray-class.md#operator_at)|Imposta o ottiene l'elemento in corrispondenza dell'indice specificato.|

## <a name="remarks"></a>Note

`CPtrArray` incorpora l'IMPLEMENT_DYNAMIC (macro) per supportare l'accesso di tipo in fase di esecuzione e il dump per un `CDumpContext` oggetto. Se è necessario un dump puntatore singoli elementi della matrice, è necessario impostare la profondità del contesto di dump a 1 o versioni successive.

> [!NOTE]
>  Prima di usare una matrice, usare `SetSize` per determinarne le dimensioni e allocare la necessaria memoria. Se non si usa `SetSize`, l'aggiunta di elementi alla matrice ne causa la riallocazione e la copia frequente. Le operazioni di riallocazione e copia frequenti sono inefficienti e possono frammentare la memoria.

Matrici di puntatori non possono essere serializzate.

Quando viene eliminato un puntatore di matrice oppure quando gli elementi vengono rimossi, vengono rimossi solo i puntatori, non le entità che referenziano.

Per altre informazioni sull'uso `CPtrArray`, vedere l'articolo [raccolte](../../mfc/collections.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CPtrArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcoll. h

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CObArray](../../mfc/reference/cobarray-class.md)
