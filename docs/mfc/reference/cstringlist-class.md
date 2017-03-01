---
title: Classe di oggetto CStringList | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CStringList
dev_langs:
- C++
helpviewer_keywords:
- strings [C++], lists
- lists, string
- CStringList class
- strings [C++], collections
ms.assetid: 310a7edb-263c-4bd2-ac43-0bfbfddc5a33
caps.latest.revision: 25
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 0b67104e330890ffe8f67bac0dd3b129c7742a29
ms.lasthandoff: 02/24/2017

---
# <a name="cstringlist-class"></a>Oggetto CStringList (classe)
Supporta elenchi di oggetti `CString` .  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CStringList : public CObject  
```  
  
## <a name="members"></a>Membri  
 Le funzioni membro di `CStringList` sono simili alle funzioni membro della classe [CObList](../../mfc/reference/coblist-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CObList`. Ovunque sia visualizzato un `CObject` puntatore come valore restituito, sostituire con un `CString` (non un `CString` puntatore). Ovunque sia visualizzato un `CObject` puntatore come parametro di funzione, sostituire con un `LPCTSTR`.  
  
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
|[CObList:: CObList](../../mfc/reference/coblist-class.md#coblist)|Crea un elenco vuoto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObList::AddHead](../../mfc/reference/coblist-class.md#addhead)|Aggiunge un elemento (o tutti gli elementi in un altro elenco) all'inizio dell'elenco (creando un nuovo inizio).|  
|[CObList::AddTail](../../mfc/reference/coblist-class.md#addtail)|Aggiunge un elemento (o tutti gli elementi in un altro elenco) alla fine dell'elenco (creando una nuova coda).|  
|[CObList::Find](../../mfc/reference/coblist-class.md#find)|Ottiene la posizione di un elemento specificato dal valore del puntatore.|  
|[CObList::FindIndex](../../mfc/reference/coblist-class.md#findindex)|Ottiene la posizione di un elemento specificato da un indice in base zero.|  
|[CObList::GetAt](../../mfc/reference/coblist-class.md#getat)|Ottiene l'elemento in una determinata posizione.|  
|[CObList::GetCount](../../mfc/reference/coblist-class.md#getcount)|Restituisce il numero di elementi nell'elenco.|  
|[CObList::GetHead](../../mfc/reference/coblist-class.md#gethead)|Restituisce l'elemento head dell'elenco (non può essere vuoto).|  
|[CObList::GetHeadPosition](../../mfc/reference/coblist-class.md#getheadposition)|Restituisce la posizione dell'elemento head dell'elenco.|  
|[CObList::GetNext](../../mfc/reference/coblist-class.md#getnext)|Ottiene l'elemento successivo per l'iterazione.|  
|[CObList::GetPrev](../../mfc/reference/coblist-class.md#getprev)|Ottiene l'elemento precedente per l'iterazione.|  
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
  
 `CStringList` incorpora la macro `IMPLEMENT_SERIAL` per supportare la serializzazione e il dump dei relativi elementi. Se un elenco di `CString` oggetti viene archiviato in un archivio, con un operatore di inserimento di overload o con il `Serialize` ogni funzione membro `CString` elemento viene serializzato a turno.  
  
 Se è necessario un dump di singoli `CString` elementi, è necessario impostare la profondità del contesto di dump a 1 o superiore.  
  
 Per ulteriori informazioni sull'utilizzo di `CStringList`, vedere l'articolo [raccolte](../../mfc/collections.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CStringList`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcoll. h  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC COLLECT](../../visual-cpp-samples.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




