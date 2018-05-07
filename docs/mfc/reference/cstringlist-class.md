---
title: Classe di oggetto CStringList | Documenti Microsoft
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
ms.openlocfilehash: 91a88fc73b27323327bce477fa2cdaca747ed21c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cstringlist-class"></a>Classe di oggetto CStringList
Supporta elenchi di oggetti `CString` .  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CStringList : public CObject  
```  
  
## <a name="members"></a>Membri  
 Le funzioni membro di `CStringList` sono simili alle funzioni membro della classe [CObList](../../mfc/reference/coblist-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CObList`. Ogni volta che un `CObject` puntatore come valore restituito, sostituire con un `CString` (non un `CString` puntatore). Ogni volta che un `CObject` puntatore come parametro di funzione, sostituire un `LPCTSTR`.  
  
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
|[CObList::AddHead](../../mfc/reference/coblist-class.md#addhead)|Aggiunge un elemento (o tutti gli elementi in un altro elenco) all'inizio dell'elenco (effettua un nuovo inizio).|  
|[CObList::AddTail](../../mfc/reference/coblist-class.md#addtail)|Aggiunge un elemento (o tutti gli elementi in un altro elenco) alla fine dell'elenco (effettua una nuova fine).|  
|[CObList::Find](../../mfc/reference/coblist-class.md#find)|Ottiene la posizione di un elemento specificato dal valore di puntatore.|  
|[CObList::FindIndex](../../mfc/reference/coblist-class.md#findindex)|Ottiene la posizione di un elemento specificato da un indice in base zero.|  
|[CObList::GetAt](../../mfc/reference/coblist-class.md#getat)|Ottiene l'elemento in una determinata posizione.|  
|[CObList::GetCount](../../mfc/reference/coblist-class.md#getcount)|Restituisce il numero di elementi nell'elenco.|  
|[CObList::GetHead](../../mfc/reference/coblist-class.md#gethead)|Restituisce l'elemento head dell'elenco (non può essere vuoto).|  
|[CObList::GetHeadPosition](../../mfc/reference/coblist-class.md#getheadposition)|Restituisce la posizione dell'elemento head dell'elenco.|  
|[CObList::GetNext](../../mfc/reference/coblist-class.md#getnext)|Ottiene l'elemento successivo per eseguire l'iterazione.|  
|[CObList::GetPrev](../../mfc/reference/coblist-class.md#getprev)|Ottiene l'elemento precedente per eseguire l'iterazione.|  
|[CObList::GetSize](../../mfc/reference/coblist-class.md#getsize)|Restituisce il numero di elementi nell'elenco.|  
|[CObList::GetTail](../../mfc/reference/coblist-class.md#gettail)|Restituisce l'elemento della parte finale dell'elenco (non può essere vuoto).|  
|[CObList::GetTailPosition](../../mfc/reference/coblist-class.md#gettailposition)|Restituisce la posizione dell'elemento della parte finale dell'elenco.|  
|[CObList::InsertAfter](../../mfc/reference/coblist-class.md#insertafter)|Inserisce un nuovo elemento dopo una determinata posizione.|  
|[CObList::InsertBefore](../../mfc/reference/coblist-class.md#insertbefore)|Inserisce un nuovo elemento prima di una determinata posizione.|  
|[CObList::IsEmpty](../../mfc/reference/coblist-class.md#isempty)|Verifica se la condizione di elenco vuoto (nessun elemento).|  
|[CObList::RemoveAll](../../mfc/reference/coblist-class.md#removeall)|Rimuove tutti gli elementi da questo elenco.|  
|[CObList::RemoveAt](../../mfc/reference/coblist-class.md#removeat)|Rimuove un elemento dall'elenco, specificato dalla posizione.|  
|[CObList::RemoveHead](../../mfc/reference/coblist-class.md#removehead)|Rimuove l'elemento head dell'elenco.|  
|[CObList::RemoveTail](../../mfc/reference/coblist-class.md#removetail)|Rimuove l'elemento dalla coda dell'elenco.|  
|[CObList::SetAt](../../mfc/reference/coblist-class.md#setat)|Imposta l'elemento in una determinata posizione.|  
  
## <a name="remarks"></a>Note  
 Tutti i confronti vengono eseguiti per valore, vale a dire che i caratteri nella stringa vengono confrontati anziché gli indirizzi delle stringhe.  
  
 `CStringList` incorpora la macro `IMPLEMENT_SERIAL` per supportare la serializzazione e il dump dei relativi elementi. Se un elenco di `CString` oggetti viene archiviato in un archivio, con un operatore di inserimento in overload o con il `Serialize` ogni funzione membro `CString` elemento viene serializzato a turno.  
  
 Se è necessario un dump di singoli `CString` elementi, è necessario impostare la profondità del contesto di dump su 1 o versione successiva.  
  
 Per ulteriori informazioni sull'utilizzo `CStringList`, vedere l'articolo [raccolte](../../mfc/collections.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CStringList`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcoll. h  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC COLLECT](../../visual-cpp-samples.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



