---
title: Classe CWordArray
ms.date: 09/07/2019
f1_keywords:
- CWordArray
- AFXCOLL/CWordArray
- AFXCOLL/CWordArray::CWordArray
- AFXCOLL/CWordArray::Add
- AFXCOLL/CWordArray::Append
- AFXCOLL/CWordArray::Copy
- AFXCOLL/CWordArray::ElementAt
- AFXCOLL/CWordArray::FreeExtra
- AFXCOLL/CWordArray::GetAt
- AFXCOLL/CWordArray::GetCount
- AFXCOLL/CWordArray::GetData
- AFXCOLL/CWordArray::GetSize
- AFXCOLL/CWordArray::GetUpperBound
- AFXCOLL/CWordArray::InsertAt
- AFXCOLL/CWordArray::IsEmpty
- AFXCOLL/CWordArray::RemoveAll
- AFXCOLL/CWordArray::RemoveAt
- AFXCOLL/CWordArray::SetAt
- AFXCOLL/CWordArray::SetAtGrow
- AFXCOLL/CWordArray::SetSize
helpviewer_keywords:
- CWordArray [MFC], CWordArray
- CWordArray [MFC], Add
- CWordArray [MFC], Append
- CWordArray [MFC], Copy
- CWordArray [MFC], ElementAt
- CWordArray [MFC], FreeExtra
- CWordArray [MFC], GetAt
- CWordArray [MFC], GetCount
- CWordArray [MFC], GetData
- CWordArray [MFC], GetSize
- CWordArray [MFC], GetUpperBound
- CWordArray [MFC], InsertAt
- CWordArray [MFC], IsEmpty
- CWordArray [MFC], RemoveAll
- CWordArray [MFC], RemoveAt
- CWordArray [MFC], SetAt
- CWordArray [MFC], SetAtGrow
- CWordArray [MFC], SetSize
ms.assetid: 2ba2c194-2c6c-40ff-9db4-e9dbe57e1f57
ms.openlocfilehash: 9dfb0b674d52b288ebd05bf7574f1ae05e4ed1f3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365904"
---
# <a name="cwordarray-class"></a>Classe CWordArray

Supporta matrici di parole a 16 bit.

## <a name="syntax"></a>Sintassi

```
class CWordArray : public CObject
```

## <a name="members"></a>Membri

Le funzioni `CWordArray` membro di sono simili alle funzioni membro della classe [CObArray](../../mfc/reference/cobarray-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CObArray`. Ovunque venga visualizzato un puntatore [CObject](../../mfc/reference/cobject-class.md) come parametro di funzione o valore restituito, sostituire un WORD.

`CObject* CObArray::GetAt( int <nIndex> ) const;`

ad esempio, si converte in

`WORD CWordArray::GetAt( int <nIndex> ) const;`

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWordArray::CWordArray](../../mfc/reference/cobarray-class.md#cobarray)|Costruisce una matrice vuota.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWordArray::Aggiungi](../../mfc/reference/cobarray-class.md#add)|Aggiunge un elemento alla fine della matrice; se necessario, aumenta le dimensioni della matrice.|
|[CWordArray::Accoda](../../mfc/reference/cobarray-class.md#append)|Accoda alla matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|
|[CWordArray::Copia](../../mfc/reference/cobarray-class.md#copy)|Copia nella matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|
|[CWordArray::ElementAt](../../mfc/reference/cobarray-class.md#elementat)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|
|[CWordArray::FreeExtra](../../mfc/reference/cobarray-class.md#freeextra)|Libera tutta la memoria non utilizzata oltre limite il superiore corrente.|
|[CWordArray::GetAt](../../mfc/reference/cobarray-class.md#getat)|Restituisce il valore in corrispondenza di un indice specificato.|
|[CWordArray::GetCount](../../mfc/reference/cobarray-class.md#getcount)|Ottiene il numero di elementi nella matrice.|
|[CWordArray::GetData](../../mfc/reference/cobarray-class.md#getdata)|Consente l'accesso a tutti gli elementi nella matrice. Può essere NULL.|
|[CWordArray::GetSize](../../mfc/reference/cobarray-class.md#getsize)|Ottiene il numero di elementi nella matrice.|
|[CWordArray::GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound)|Restituisce il massimo indice valido.|
|[CWordArray::InsertAt](../../mfc/reference/cobarray-class.md#insertat)|Inserisce un elemento (o tutti gli elementi di un'altra matrice) in corrispondenza di un indice specificato.|
|[CWordArray::IsEmpty](../../mfc/reference/cobarray-class.md#isempty)|Determina se la matrice è vuota.|
|[CWordArray::RemoveAll](../../mfc/reference/cobarray-class.md#removeall)|Rimuove tutti gli elementi dalla matrice.|
|[CWordArray::RemoveAt](../../mfc/reference/cobarray-class.md#removeat)|Rimuove un elemento in corrispondenza di un indice specificato.|
|[CWordArray::SetAt](../../mfc/reference/cobarray-class.md#setat)|Imposta il valore per un indice specificato; l'aumento di dimensioni della matrice non è consentito.|
|[CWordArray::SetAtGrow](../../mfc/reference/cobarray-class.md#setatgrow)|Imposta il valore per un indice specificato; se necessario, aumenta le dimensioni della matrice.|
|[CWordArray::SetSize](../../mfc/reference/cobarray-class.md#setsize)|Imposta il numero di elementi che la matrice deve contenere.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWordArray::operator e &#91;&#93;](../../mfc/reference/cobarray-class.md#operator_at)|Imposta o ottiene l'elemento in corrispondenza dell'indice specificato.|

## <a name="remarks"></a>Osservazioni

`CWordArray`incorpora la macro [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) per supportare la serializzazione e il dump dei relativi elementi. Se una matrice di parole viene archiviata in un archivio, con un operatore di inserimento di overload o con la funzione membro [CObject::Serialize,](../../mfc/reference/cobject-class.md#serialize) ogni elemento viene a sua volta serializzato.

> [!NOTE]
> Prima di usare una matrice, usare `SetSize` per determinarne le dimensioni e allocare la necessaria memoria. Se non si usa `SetSize`, l'aggiunta di elementi alla matrice ne causa la riallocazione e la copia frequente. Le operazioni di riallocazione e copia frequenti sono inefficienti e possono frammentare la memoria.

Se è necessario un dump di singoli elementi nella matrice, è necessario impostare la profondità del contesto di dump su 1 o su un valore maggiore.

Per ulteriori informazioni `CWordArray`sull'utilizzo di , vedere l'articolo [Raccolte](../../mfc/collections.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CWordArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcoll.h

## <a name="see-also"></a>Vedere anche

[Raccolta di campioni MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
