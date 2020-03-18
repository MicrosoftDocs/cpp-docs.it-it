---
title: CString (classe)
ms.date: 11/04/2016
f1_keywords:
- CStringList
- AFXCOLL/CStringList
- AFXCOLL/CStringList::CStringList
- AFXCOLL/CStringList::AddHead
- AFXCOLL/CStringList::AddTail
- AFXCOLL/CStringList::Find
- AFXCOLL/CStringList::FindIndex
- AFXCOLL/CStringList::GetAt
- AFXCOLL/CStringList::GetCount
- AFXCOLL/CStringList::GetHead
- AFXCOLL/CStringList::GetHeadPosition
- AFXCOLL/CStringList::GetNext
- AFXCOLL/CStringList::GetPrev
- AFXCOLL/CStringList::GetSize
- AFXCOLL/CStringList::GetTail
- AFXCOLL/CStringList::GetTailPosition
- AFXCOLL/CStringList::InsertAfter
- AFXCOLL/CStringList::InsertBefore
- AFXCOLL/CStringList::IsEmpty
- AFXCOLL/CStringList::RemoveAll
- AFXCOLL/CStringList::RemoveAt
- AFXCOLL/CStringList::RemoveHead
- AFXCOLL/CStringList::RemoveTail
- AFXCOLL/CStringList::SetAt
helpviewer_keywords:
- CStringList [MFC], CStringList
- CStringList [MFC], AddHead
- CStringList [MFC], AddTail
- CStringList [MFC], Find
- CStringList [MFC], FindIndex
- CStringList [MFC], GetAt
- CStringList [MFC], GetCount
- CStringList [MFC], GetHead
- CStringList [MFC], GetHeadPosition
- CStringList [MFC], GetNext
- CStringList [MFC], GetPrev
- CStringList [MFC], GetSize
- CStringList [MFC], GetTail
- CStringList [MFC], GetTailPosition
- CStringList [MFC], InsertAfter
- CStringList [MFC], InsertBefore
- CStringList [MFC], IsEmpty
- CStringList [MFC], RemoveAll
- CStringList [MFC], RemoveAt
- CStringList [MFC], RemoveHead
- CStringList [MFC], RemoveTail
- CStringList [MFC], SetAt
ms.assetid: 310a7edb-263c-4bd2-ac43-0bfbfddc5a33
ms.openlocfilehash: 9eb7a713fc02cd3e51135d1985a41688d4c885d9
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447553"
---
# <a name="cstringlist-class"></a>CString (classe)

Supporta elenchi di oggetti `CString` .

## <a name="syntax"></a>Sintassi

```
class CStringList : public CObject
```

## <a name="members"></a>Members

Le funzioni membro di `CStringList` sono simili alle funzioni membro della classe [CObList](../../mfc/reference/coblist-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CObList`. Ogni volta che viene visualizzato un puntatore `CObject` come valore restituito, sostituire una `CString` (non un puntatore di `CString`). Ogni volta che viene visualizzato un puntatore `CObject` come parametro di funzione, sostituire una `LPCTSTR`.

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
|[CStrings:: CStrings](../../mfc/reference/coblist-class.md#coblist)|Costruisce un elenco vuoto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStrings:: AddHead](../../mfc/reference/coblist-class.md#addhead)|Aggiunge un elemento (o tutti gli elementi di un altro elenco) all'inizio dell'elenco (crea una nuova intestazione).|
|[CStrings:: AddTail](../../mfc/reference/coblist-class.md#addtail)|Aggiunge un elemento (o tutti gli elementi di un altro elenco) alla parte finale dell'elenco (crea una nuova coda).|
|[CStrings:: Find](../../mfc/reference/coblist-class.md#find)|Ottiene la posizione di un elemento specificato dal valore del puntatore.|
|[CStrings:: FindIndex](../../mfc/reference/coblist-class.md#findindex)|Ottiene la posizione di un elemento specificato da un indice in base zero.|
|[CStringt:: GetA](../../mfc/reference/coblist-class.md#getat)|Ottiene l'elemento in una posizione specificata.|
|[CStrings:: GetCount](../../mfc/reference/coblist-class.md#getcount)|Restituisce il numero di elementi in questo elenco.|
|[CStrings:: GetHead](../../mfc/reference/coblist-class.md#gethead)|Restituisce l'elemento Head dell'elenco (non può essere vuoto).|
|[CStrings:: GetHeadPosition](../../mfc/reference/coblist-class.md#getheadposition)|Restituisce la posizione dell'elemento Head dell'elenco.|
|[CStrings:: GetNext](../../mfc/reference/coblist-class.md#getnext)|Ottiene l'elemento successivo per l'iterazione.|
|[CStrings:: GetPrev](../../mfc/reference/coblist-class.md#getprev)|Ottiene l'elemento precedente per l'iterazione.|
|[CStrings:: GetSize](../../mfc/reference/coblist-class.md#getsize)|Restituisce il numero di elementi in questo elenco.|
|[CStrings:: GetTail](../../mfc/reference/coblist-class.md#gettail)|Restituisce l'elemento tail dell'elenco (non può essere vuoto).|
|[CStrings:: GetTailPosition](../../mfc/reference/coblist-class.md#gettailposition)|Restituisce la posizione dell'elemento tail dell'elenco.|
|[CStrings:: InsertAfter](../../mfc/reference/coblist-class.md#insertafter)|Inserisce un nuovo elemento dopo una posizione specificata.|
|[CStrings:: InsertBefore](../../mfc/reference/coblist-class.md#insertbefore)|Inserisce un nuovo elemento prima di una posizione specificata.|
|[CStrings:: IsEmpty](../../mfc/reference/coblist-class.md#isempty)|Verifica se la condizione dell'elenco è vuota (nessun elemento).|
|[CStrings:: RemoveAll](../../mfc/reference/coblist-class.md#removeall)|Rimuove tutti gli elementi da questo elenco.|
|[CStrings:: RemoveAt](../../mfc/reference/coblist-class.md#removeat)|Rimuove un elemento da questo elenco, specificato dalla posizione.|
|[CStrings:: RemoveHead](../../mfc/reference/coblist-class.md#removehead)|Rimuove l'elemento dall'inizio dell'elenco.|
|[CStrings:: RemoveTail](../../mfc/reference/coblist-class.md#removetail)|Rimuove l'elemento dalla parte finale dell'elenco.|
|[CStringt:: SetAt](../../mfc/reference/coblist-class.md#setat)|Imposta l'elemento in una posizione specificata.|

## <a name="remarks"></a>Osservazioni

Tutti i confronti vengono eseguiti per valore, ovvero i caratteri nella stringa vengono confrontati al posto degli indirizzi delle stringhe.

`CStringList` incorpora la macro IMPLEMENT_SERIAL per supportare la serializzazione e il dump dei relativi elementi. Se un elenco di oggetti `CString` viene archiviato in un archivio, con un operatore di inserimento di overload o con la funzione membro `Serialize`, ogni elemento `CString` viene serializzato a sua volta.

Se è necessario un dump di singoli elementi di `CString`, è necessario impostare la profondità del contesto di dump su 1 o su un valore superiore.

Per ulteriori informazioni sull'utilizzo di `CStringList`, vedere le [raccolte](../../mfc/collections.md)di articoli.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CStringList`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXCOLL. h

## <a name="see-also"></a>Vedere anche

[Esempio di raccolta MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
