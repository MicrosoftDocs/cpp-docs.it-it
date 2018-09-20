---
title: Classe CStringList | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CStringList
- AFXCOLL/CStringList
- AFXCOLL/CObList::CObList
- AFXCOLL/CObList::AddHead
- AFXCOLL/CObList::AddTail
- AFXCOLL/CObList::Find
- AFXCOLL/CObList::FindIndex
- AFXCOLL/CObList::GetAt
- AFXCOLL/CObList::GetCount
- AFXCOLL/CObList::GetHead
- AFXCOLL/CObList::GetHeadPosition
- AFXCOLL/CObList::GetNext
- AFXCOLL/CObList::GetPrev
- AFXCOLL/CObList::GetSize
- AFXCOLL/CObList::GetTail
- AFXCOLL/CObList::GetTailPosition
- AFXCOLL/CObList::InsertAfter
- AFXCOLL/CObList::InsertBefore
- AFXCOLL/CObList::IsEmpty
- AFXCOLL/CObList::RemoveAll
- AFXCOLL/CObList::RemoveAt
- AFXCOLL/CObList::RemoveHead
- AFXCOLL/CObList::RemoveTail
- AFXCOLL/CObList::SetAt
dev_langs:
- C++
helpviewer_keywords:
- CObList [MFC], CObList
- CObList [MFC], AddHead
- CObList [MFC], AddTail
- CObList [MFC], Find
- CObList [MFC], FindIndex
- CObList [MFC], GetAt
- CObList [MFC], GetCount
- CObList [MFC], GetHead
- CObList [MFC], GetHeadPosition
- CObList [MFC], GetNext
- CObList [MFC], GetPrev
- CObList [MFC], GetSize
- CObList [MFC], GetTail
- CObList [MFC], GetTailPosition
- CObList [MFC], InsertAfter
- CObList [MFC], InsertBefore
- CObList [MFC], IsEmpty
- CObList [MFC], RemoveAll
- CObList [MFC], RemoveAt
- CObList [MFC], RemoveHead
- CObList [MFC], RemoveTail
- CObList [MFC], SetAt
ms.assetid: 310a7edb-263c-4bd2-ac43-0bfbfddc5a33
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a3182a9f5a53c2f086800eb0eccb7d61e423e591
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46439185"
---
# <a name="cstringlist-class"></a>Classe CStringList

Supporta elenchi di oggetti `CString` .

## <a name="syntax"></a>Sintassi

```
class CStringList : public CObject
```

## <a name="members"></a>Membri

Le funzioni membro della `CStringList` sono simili alle funzioni membro della classe [CObList](../../mfc/reference/coblist-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CObList`. Ogni volta che un `CObject` puntatore come valore restituito, sostituire con un `CString` (non un `CString` puntatore). Ogni volta che un `CObject` puntatore come parametro di funzione, sostituire con un `LPCTSTR`.

`CObject*& CObList::GetHead() const;`

ad esempio, si converte in

`CString& CStringList::GetHead() const;`

e

`POSITION AddHead( CObject* <newElement> );`

si converte in

`POSITION AddHead( LPCTSTR <newElement> );`

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObList:: CObList](../../mfc/reference/coblist-class.md#coblist)|Costruisce un elenco vuoto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObList::AddHead](../../mfc/reference/coblist-class.md#addhead)|Aggiunge un elemento (o tutti gli elementi in un altro elenco) nell'intestazione dell'elenco (creando un nuovo inizio).|
|[CObList::AddTail](../../mfc/reference/coblist-class.md#addtail)|Aggiunge un elemento (o tutti gli elementi in un altro elenco) alla fine dell'elenco (creando una nuova fine).|
|[CObList::Find](../../mfc/reference/coblist-class.md#find)|Ottiene la posizione di un elemento specificato dal valore del puntatore.|
|[CObList::FindIndex](../../mfc/reference/coblist-class.md#findindex)|Ottiene la posizione di un elemento specificato da un indice in base zero.|
|[CObList::GetAt](../../mfc/reference/coblist-class.md#getat)|Ottiene l'elemento in una determinata posizione.|
|[CObList::GetCount](../../mfc/reference/coblist-class.md#getcount)|Restituisce il numero di elementi in questo elenco.|
|[CObList::GetHead](../../mfc/reference/coblist-class.md#gethead)|Restituisce l'elemento head dell'elenco (non può essere vuoto).|
|[CObList::GetHeadPosition](../../mfc/reference/coblist-class.md#getheadposition)|Restituisce la posizione dell'elemento head dell'elenco.|
|[CObList::GetNext](../../mfc/reference/coblist-class.md#getnext)|Ottiene l'elemento successivo per eseguire l'iterazione.|
|[CObList::GetPrev](../../mfc/reference/coblist-class.md#getprev)|Ottiene l'elemento precedente per eseguire l'iterazione.|
|[CObList::GetSize](../../mfc/reference/coblist-class.md#getsize)|Restituisce il numero di elementi in questo elenco.|
|[CObList::GetTail](../../mfc/reference/coblist-class.md#gettail)|Restituisce l'elemento della parte finale dell'elenco (non può essere vuoto).|
|[CObList::GetTailPosition](../../mfc/reference/coblist-class.md#gettailposition)|Restituisce la posizione dell'elemento della parte finale dell'elenco.|
|[CObList::InsertAfter](../../mfc/reference/coblist-class.md#insertafter)|Inserisce un nuovo elemento dopo una determinata posizione.|
|[CObList::InsertBefore](../../mfc/reference/coblist-class.md#insertbefore)|Inserisce un nuovo elemento prima di una determinata posizione.|
|[CObList::IsEmpty](../../mfc/reference/coblist-class.md#isempty)|Verifica se la condizione di elenco vuoto (nessun elemento).|
|[CObList::RemoveAll](../../mfc/reference/coblist-class.md#removeall)|Rimuove tutti gli elementi da questo elenco.|
|[CObList::RemoveAt](../../mfc/reference/coblist-class.md#removeat)|Rimuove un elemento da questo elenco, specificato dalla posizione.|
|[CObList::RemoveHead](../../mfc/reference/coblist-class.md#removehead)|Rimuove l'elemento dall'inizio dell'elenco.|
|[CObList::RemoveTail](../../mfc/reference/coblist-class.md#removetail)|Rimuove l'elemento dalla parte finale dell'elenco.|
|[CObList::SetAt](../../mfc/reference/coblist-class.md#setat)|Imposta l'elemento in una determinata posizione.|

## <a name="remarks"></a>Note

Tutti i confronti vengono eseguiti per valore, vale a dire che i caratteri nella stringa devono essere confrontati invece degli indirizzi delle stringhe.

`CStringList` incorpora l'IMPLEMENT_SERIAL (macro) per supportare la serializzazione e il dump dei relativi elementi. Se un elenco delle `CString` gli oggetti vengono archiviati in un archivio, con un operatore di inserimento di overload o con il `Serialize` ogni membro di funzione `CString` elemento viene serializzato a turno.

Se è necessario un dump di singoli `CString` elementi, è necessario impostare la profondità del contesto di dump su 1 o versioni successive.

Per altre informazioni sull'uso `CStringList`, vedere l'articolo [raccolte](../../mfc/collections.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CStringList`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcoll. h

## <a name="see-also"></a>Vedere anche

[Esempio MFC COLLECT](../../visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)



