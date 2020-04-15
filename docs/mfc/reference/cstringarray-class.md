---
title: Classe CStringArray
ms.date: 11/04/2016
f1_keywords:
- CStringArray
- AFXCOLL/CStringArray
- AFXCOLL/CStringArray::CStringArray
- AFXCOLL/CStringArray::Add
- AFXCOLL/CStringArray::Append
- AFXCOLL/CStringArray::Copy
- AFXCOLL/CStringArray::ElementAt
- AFXCOLL/CStringArray::FreeExtra
- AFXCOLL/CStringArray::GetAt
- AFXCOLL/CStringArray::GetCount
- AFXCOLL/CStringArray::GetData
- AFXCOLL/CStringArray::GetSize
- AFXCOLL/CStringArray::GetUpperBound
- AFXCOLL/CStringArray::InsertAt
- AFXCOLL/CStringArray::IsEmpty
- AFXCOLL/CStringArray::RemoveAll
- AFXCOLL/CStringArray::RemoveAt
- AFXCOLL/CStringArray::SetAt
- AFXCOLL/CStringArray::SetAtGrow
- AFXCOLL/CStringArray::SetSize
helpviewer_keywords:
- CStringArray [MFC], CStringArray
- CStringArray [MFC], Add
- CStringArray [MFC], Append
- CStringArray [MFC], Copy
- CStringArray [MFC], ElementAt
- CStringArray [MFC], FreeExtra
- CStringArray [MFC], GetAt
- CStringArray [MFC], GetCount
- CStringArray [MFC], GetData
- CStringArray [MFC], GetSize
- CStringArray [MFC], GetUpperBound
- CStringArray [MFC], InsertAt
- CStringArray [MFC], IsEmpty
- CStringArray [MFC], RemoveAll
- CStringArray [MFC], RemoveAt
- CStringArray [MFC], SetAt
- CStringArray [MFC], SetAtGrow
- CStringArray [MFC], SetSize
ms.assetid: 6c637e06-bba8-4c08-b0fc-cf8cb067ce34
ms.openlocfilehash: 96a272cbbb76b399ed7a3db6848ab3f74a615a38
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365981"
---
# <a name="cstringarray-class"></a>Classe CStringArray

Supporta matrici di [oggetti CString.](../../atl-mfc-shared/using-cstring.md)

## <a name="syntax"></a>Sintassi

```
class CStringArray : public CObject
```

## <a name="members"></a>Membri

Le funzioni `CStringArray` membro di sono simili alle funzioni membro della classe [CObArray](../../mfc/reference/cobarray-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CObArray`. Ovunque venga visualizzato `CObject` un puntatore come valore restituito, sostituire un [CString](../../atl-mfc-shared/using-cstring.md) oggetto (non un [CString](../../atl-mfc-shared/using-cstring.md) puntatore). Ogni volta che un puntatore `CObject` appare come parametro di funzione, sostituire con un `LPCTSTR`.

`CObject* CObArray::GetAt( int <nIndex> ) const;`

ad esempio, si converte in

`CString CStringArray::GetAt( int <nIndex> ) const;`

e

`void SetAt( int <nIndex>, CObject* <newElement> )`

si converte in

`void SetAt( int <nIndex>, LPCTSTR <newElement> )`

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStringArray::CStringArray](../../mfc/reference/cobarray-class.md#cobarray)|Costruisce una matrice vuota.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStringArray::Add](../../mfc/reference/cobarray-class.md#add)|Aggiunge un elemento alla fine della matrice; se necessario, aumenta le dimensioni della matrice.|
|[CStringArray::Accoda](../../mfc/reference/cobarray-class.md#append)|Accoda alla matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|
|[CStringArray::Copia](../../mfc/reference/cobarray-class.md#copy)|Copia nella matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|
|[CStringArray::ElementAt](../../mfc/reference/cobarray-class.md#elementat)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|
|[CStringArray::FreeExtra](../../mfc/reference/cobarray-class.md#freeextra)|Libera tutta la memoria non utilizzata oltre limite il superiore corrente.|
|[CStringArray::GetAt](../../mfc/reference/cobarray-class.md#getat)|Restituisce il valore in corrispondenza di un indice specificato.|
|[CStringArray::GetCount](../../mfc/reference/cobarray-class.md#getcount)|Ottiene il numero di elementi nella matrice.|
|[CStringArray::GetData](../../mfc/reference/cobarray-class.md#getdata)|Consente l'accesso a tutti gli elementi nella matrice. Può essere **NULL**.|
|[CStringArray::GetSize](../../mfc/reference/cobarray-class.md#getsize)|Ottiene il numero di elementi nella matrice.|
|[CStringArray::GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound)|Restituisce il massimo indice valido.|
|[CStringArray::InsertAt](../../mfc/reference/cobarray-class.md#insertat)|Inserisce un elemento (o tutti gli elementi di un'altra matrice) in corrispondenza di un indice specificato.|
|[CStringArray::IsEmpty](../../mfc/reference/cobarray-class.md#isempty)|Determina se la matrice è vuota.|
|[CStringArray::RemoveAll](../../mfc/reference/cobarray-class.md#removeall)|Rimuove tutti gli elementi dalla matrice.|
|[CStringArray::RemoveAt](../../mfc/reference/cobarray-class.md#removeat)|Rimuove un elemento in corrispondenza di un indice specificato.|
|[CStringArray::SetAt](../../mfc/reference/cobarray-class.md#setat)|Imposta il valore per un indice specificato; l'aumento di dimensioni della matrice non è consentito.|
|[CStringArray::SetAtGrow](../../mfc/reference/cobarray-class.md#setatgrow)|Imposta il valore per un indice specificato; se necessario, aumenta le dimensioni della matrice.|
|[CStringArray::SetSize](../../mfc/reference/cobarray-class.md#setsize)|Imposta il numero di elementi che la matrice deve contenere.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStringArray::operatore \[\]](../../mfc/reference/cobarray-class.md#operator_at)|Imposta o ottiene l'elemento in corrispondenza dell'indice specificato.|

## <a name="remarks"></a>Osservazioni

`CStringArray`incorpora la macro IMPLEMENT_SERIAL per supportare la serializzazione e il dump dei relativi elementi. Se una matrice di oggetti `CString` viene memorizzata in un archivio, con un operatore di inserimento di overload o con la funzione membro `Serialize`, ogni elemento viene serializzato a turno.

> [!NOTE]
> Prima di usare una matrice, usare `SetSize` per determinarne le dimensioni e allocare la necessaria memoria. Se non si usa `SetSize`, l'aggiunta di elementi alla matrice ne causa la riallocazione e la copia frequente. Le operazioni di riallocazione e copia frequenti sono inefficienti e possono frammentare la memoria.

Se è necessario un dump di singoli elementi di tipo stringa nella matrice, è necessario impostare la profondità del contesto di dump a 1 o superiore.

Quando una matrice `CString` viene eliminata o i relativi elementi vengono rimossi, viene liberata la memoria di stringa appropriata.

Per ulteriori informazioni `CStringArray`sull'utilizzo di , vedere l'articolo [Raccolte](../../mfc/collections.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CStringArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcoll.h

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
