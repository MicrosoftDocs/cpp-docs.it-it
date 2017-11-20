---
title: Classe CAtlList | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAtlList
- ATLCOLL/ATL::CAtlList
- ATLCOLL/ATL::CAtlList::INARGTYPE
- ATLCOLL/ATL::CAtlList::CAtlList
- ATLCOLL/ATL::CAtlList::AddHead
- ATLCOLL/ATL::CAtlList::AddHeadList
- ATLCOLL/ATL::CAtlList::AddTail
- ATLCOLL/ATL::CAtlList::AddTailList
- ATLCOLL/ATL::CAtlList::AssertValid
- ATLCOLL/ATL::CAtlList::Find
- ATLCOLL/ATL::CAtlList::FindIndex
- ATLCOLL/ATL::CAtlList::GetAt
- ATLCOLL/ATL::CAtlList::GetCount
- ATLCOLL/ATL::CAtlList::GetHead
- ATLCOLL/ATL::CAtlList::GetHeadPosition
- ATLCOLL/ATL::CAtlList::GetNext
- ATLCOLL/ATL::CAtlList::GetPrev
- ATLCOLL/ATL::CAtlList::GetTail
- ATLCOLL/ATL::CAtlList::GetTailPosition
- ATLCOLL/ATL::CAtlList::InsertAfter
- ATLCOLL/ATL::CAtlList::InsertBefore
- ATLCOLL/ATL::CAtlList::IsEmpty
- ATLCOLL/ATL::CAtlList::MoveToHead
- ATLCOLL/ATL::CAtlList::MoveToTail
- ATLCOLL/ATL::CAtlList::RemoveAll
- ATLCOLL/ATL::CAtlList::RemoveAt
- ATLCOLL/ATL::CAtlList::RemoveHead
- ATLCOLL/ATL::CAtlList::RemoveHeadNoReturn
- ATLCOLL/ATL::CAtlList::RemoveTail
- ATLCOLL/ATL::CAtlList::RemoveTailNoReturn
- ATLCOLL/ATL::CAtlList::SetAt
- ATLCOLL/ATL::CAtlList::SwapElements
dev_langs: C++
helpviewer_keywords: CAtlList class
ms.assetid: 09e98053-64b2-4efa-99ab-d0542caaf981
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 80f8f66787d2268c6543f8f7a66ca7d13ae167ff
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="catllist-class"></a>Classe CAtlList
Questa classe fornisce metodi per la creazione e gestione di un oggetto elenco.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename E, class ETraits = CElementTraits<E>>  
class CAtlList
```  
  
#### <a name="parameters"></a>Parametri  
 `E`  
 Tipo dell'elemento.  
  
 `ETraits`  
 Il codice utilizzato per copiare o spostare elementi. Vedere [CElementTraits classe](../../atl/reference/celementtraits-class.md) per altri dettagli.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlList::INARGTYPE](#inargtype)||  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlList::CAtlList](#catllist)|Costruttore.|  
|[CAtlList:: ~ CAtlList](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlList::AddHead](#addhead)|Chiamare questo metodo per aggiungere un elemento head dell'elenco.|  
|[CAtlList::AddHeadList](#addheadlist)|Chiamare questo metodo per aggiungere un elenco esistente all'inizio dell'elenco.|  
|[CAtlList::AddTail](#addtail)|Chiamare questo metodo per aggiungere un elemento alla fine dell'elenco.|  
|[CAtlList::AddTailList](#addtaillist)|Chiamare questo metodo per aggiungere un elenco esistente alla fine dell'elenco.|  
|[CAtlList::AssertValid](#assertvalid)|Chiamare questo metodo per verificare che l'elenco è valido.|  
|[CAtlList::Find](#find)|Chiamare questo metodo per eseguire ricerche nell'elenco per l'elemento specificato.|  
|[CAtlList::FindIndex](#findindex)|Chiamare questo metodo per ottenere la posizione di un elemento, dato un valore di indice.|  
|[CAtlList::GetAt](#getat)|Chiamare questo metodo per restituire l'elemento in una posizione specificata nell'elenco.|  
|[CAtlList::GetCount](#getcount)|Chiamare questo metodo per restituire il numero di oggetti nell'elenco.|  
|[CAtlList::GetHead](#gethead)|Chiamare questo metodo per restituire l'elemento in corrispondenza dell'inizio dell'elenco.|  
|[CAtlList::GetHeadPosition](#getheadposition)|Chiamare questo metodo per ottenere la posizione di inizio dell'elenco.|  
|[CAtlList::GetNext](#getnext)|Chiamare questo metodo per restituire l'elemento successivo nell'elenco.|  
|[CAtlList::GetPrev](#getprev)|Chiamare questo metodo per restituire l'elemento precedente nell'elenco.|  
|[CAtlList::GetTail](#gettail)|Chiamare questo metodo per restituire l'elemento in corrispondenza della parte finale dell'elenco.|  
|[CAtlList::GetTailPosition](#gettailposition)|Chiamare questo metodo per ottenere la posizione di fine dell'elenco.|  
|[CAtlList::InsertAfter](#insertafter)|Chiamare questo metodo per inserire un nuovo elemento nell'elenco alla posizione specificata.|  
|[CAtlList::InsertBefore](#insertbefore)|Chiamare questo metodo per inserire un nuovo elemento nell'elenco prima della posizione specificata.|  
|[CAtlList::IsEmpty](#isempty)|Chiamare questo metodo per determinare se l'elenco è vuoto.|  
|[CAtlList::MoveToHead](#movetohead)|Chiamare questo metodo per spostare l'elemento specificato all'inizio dell'elenco.|  
|[CAtlList::MoveToTail](#movetotail)|Chiamare questo metodo per spostare l'elemento specificato alla fine dell'elenco.|  
|[CAtlList::RemoveAll](#removeall)|Chiamare questo metodo per rimuovere tutti gli elementi dall'elenco.|  
|[CAtlList::RemoveAt](#removeat)|Chiamare questo metodo per rimuovere un singolo elemento dall'elenco.|  
|[CAtlList::RemoveHead](#removehead)|Chiamare questo metodo per rimuovere l'elemento in corrispondenza dell'inizio dell'elenco.|  
|[CAtlList::RemoveHeadNoReturn](#removeheadnoreturn)|Chiamare questo metodo per rimuovere l'elemento in corrispondenza dell'inizio dell'elenco senza restituire alcun valore.|  
|[CAtlList::RemoveTail](#removetail)|Chiamare questo metodo per rimuovere l'elemento in corrispondenza della parte finale dell'elenco.|  
|[CAtlList::RemoveTailNoReturn](#removetailnoreturn)|Chiamare questo metodo per rimuovere l'elemento in corrispondenza della parte finale dell'elenco senza restituire alcun valore.|  
|[CAtlList::SetAt](#setat)|Chiamare questo metodo per impostare il valore dell'elemento in una determinata posizione nell'elenco.|  
|[CAtlList::SwapElements](#swapelements)|Chiamare questo metodo per eseguire lo scambio di elementi nell'elenco.|  
  
## <a name="remarks"></a>Note  
 Il `CAtlList` supporta elenchi ordinati di oggetti non univoci accessibili in sequenza o in base al valore di classe. `CAtlList`elenchi si comportano come gli elenchi collegati doppiamente. Ogni elenco contiene un elemento head e una coda e i nuovi elementi (o gli elenchi in alcuni casi) possono essere aggiunto a delle estremità dell'elenco o inseriti prima o dopo elementi specifici.  
  
 La maggior parte del `CAtlList` metodi utilizzare di un valore di posizione. Questo valore è utilizzato dai metodi per fare riferimento alla posizione di memoria effettivo in cui gli elementi vengono archiviati e non di calcolo o stimati direttamente. Se è necessario per l'accesso di  *n* elemento th nell'elenco, il metodo [CAtlList::FindIndex](#findindex) restituirà il valore di posizione corrispondente per un indice specificato. I metodi [CAtlList::GetNext](#getnext) e [CAtlList::GetPrev](#getprev) può essere utilizzato per scorrere gli oggetti nell'elenco.  
  
 Per ulteriori informazioni sulle classi di raccolta disponibili con ATL, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="addhead"></a>CAtlList::AddHead  
 Chiamare questo metodo per aggiungere un elemento head dell'elenco.  
  
```
POSITION AddHead();
POSITION AddHead(INARGTYPE element);
```  
  
### <a name="parameters"></a>Parametri  
 `element`  
 Il nuovo elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la posizione dell'elemento appena aggiunto.  
  
### <a name="remarks"></a>Note  
 Se viene utilizzata la prima versione, viene creato un elemento vuoto utilizzando il costruttore predefinito, anziché il costruttore di copia.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#13](../../atl/codesnippet/cpp/catllist-class_1.cpp)]  
  
##  <a name="addheadlist"></a>CAtlList::AddHeadList  
 Chiamare questo metodo per aggiungere un elenco esistente all'inizio dell'elenco.  
  
```
void AddHeadList(const CAtlList<E, ETraits>* plNew);
```  
  
### <a name="parameters"></a>Parametri  
 `plNew`  
 Elenco da aggiungere.  
  
### <a name="remarks"></a>Note  
 Nell'elenco a cui puntava `plNew` viene inserito all'inizio dell'elenco esistente. Nelle build di debug, un errore di asserzione si verificherà se `plNew` è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#14](../../atl/codesnippet/cpp/catllist-class_2.cpp)]  
  
##  <a name="addtail"></a>CAtlList::AddTail  
 Chiamare questo metodo per aggiungere un elemento alla fine dell'elenco.  
  
```
POSITION AddTail();
POSITION AddTail(INARGTYPE element);
```  
  
### <a name="parameters"></a>Parametri  
 `element`  
 Elemento da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la posizione dell'elemento appena aggiunto.  
  
### <a name="remarks"></a>Note  
 Se viene utilizzata la prima versione, viene creato un elemento vuoto utilizzando il costruttore predefinito, anziché il costruttore di copia. L'elemento viene aggiunto alla fine dell'elenco e quindi ora diventa la parte finale. Questo metodo può essere utilizzato con un elenco vuoto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#15](../../atl/codesnippet/cpp/catllist-class_3.cpp)]  
  
##  <a name="addtaillist"></a>CAtlList::AddTailList  
 Chiamare questo metodo per aggiungere un elenco esistente alla fine dell'elenco.  
  
```
void AddTailList(const CAtlList<E, ETraits>* plNew);
```  
  
### <a name="parameters"></a>Parametri  
 `plNew`  
 Elenco da aggiungere.  
  
### <a name="remarks"></a>Note  
 Nell'elenco a cui puntava `plNew` viene inserito dopo l'ultimo elemento (se presenti) nell'oggetto elenco. L'ultimo elemento di `plNew` elenco diventa quindi la coda. Nelle build di debug, un errore di asserzione si verificherà se *plNew* è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#16](../../atl/codesnippet/cpp/catllist-class_4.cpp)]  
  
##  <a name="assertvalid"></a>CAtlList::AssertValid  
 Chiamare questo metodo per verificare che l'elenco è valido.  
  
```
void AssertValid() const;
```  
  
### <a name="remarks"></a>Note  
 Nelle build di debug, si verificherà un errore di asserzione se l'oggetto elenco non è valido. Per essere valida, deve avere un elenco vuoto head sia della parte finale del riferimento su NULL e deve avere un elenco che non sia vuoto, head e chiusura che punta a indirizzi validi.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#17](../../atl/codesnippet/cpp/catllist-class_5.cpp)]  
  
##  <a name="catllist"></a>CAtlList::CAtlList  
 Costruttore.  
  
```
CAtlList(UINT nBlockSize = 10) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nBlockSize`  
 La dimensione del blocco.  
  
### <a name="remarks"></a>Note  
 Il costruttore per il `CAtlList` oggetto. La dimensione del blocco è una misura della quantità di memoria allocata quando è necessario un nuovo elemento. Blocchi di dimensioni maggiori di ridurre ulteriormente le chiamate alle routine di allocazione di memoria, ma usano più risorse.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#18](../../atl/codesnippet/cpp/catllist-class_6.cpp)]  
  
##  <a name="dtor"></a>CAtlList:: ~ CAtlList  
 Distruttore.  
  
```
~CAtlList() throw();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate, inclusa una chiamata a [CAtlList::RemoveAll](#removeall) per rimuovere tutti gli elementi dall'elenco.  
  
 Nelle build di debug, un errore di asserzione si verificherà se l'elenco contiene ancora alcuni elementi dopo la chiamata a `RemoveAll`.  
  
##  <a name="find"></a>CAtlList::Find  
 Chiamare questo metodo per eseguire ricerche nell'elenco per l'elemento specificato.  
  
```
POSITION Find(INARGTYPE element, POSITION posStartAfter = NULL) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `element`  
 L'elemento da trovare nell'elenco.  
  
 `posStartAfter`  
 La posizione iniziale per la ricerca. Se viene specificato alcun valore, la ricerca inizia con l'elemento head.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore della posizione dell'elemento, se trovato, in caso contrario restituisce NULL.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug si verifica un errore di asserzione se l'oggetto elenco non è valido, oppure se il `posStartAfter` valore non compreso nell'intervallo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#19](../../atl/codesnippet/cpp/catllist-class_7.cpp)]  
  
##  <a name="findindex"></a>CAtlList::FindIndex  
 Chiamare questo metodo per ottenere la posizione di un elemento, dato un valore di indice.  
  
```
POSITION FindIndex(size_t iElement) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `iElement`  
 Indice in base zero dell'elemento di elenco ' required.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di posizione corrispondente, o NULL se `iElement` non compreso nell'intervallo.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce la posizione corrispondente a un valore di indice specificato, che consente l'accesso per il  *n* elemento th nell'elenco.  
  
 Nelle build di debug, si verificherà un errore di asserzione se l'oggetto elenco non è valido.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#20](../../atl/codesnippet/cpp/catllist-class_8.cpp)]  
  
##  <a name="getat"></a>CAtlList::GetAt  
 Chiamare questo metodo per restituire l'elemento in una posizione specificata nell'elenco.  
  
```
E& GetAt(POSITION pos) throw();
const E& GetAt(POSITION pos) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il valore della posizione specifica di un elemento specifico.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a, o copia di, l'elemento.  
  
### <a name="remarks"></a>Note  
 Se l'elenco è **const**, `GetAt` restituisce una copia dell'elemento. In questo modo il metodo può essere utilizzato solo sul lato destro di un'istruzione di assegnazione e protegge l'elenco dalla modifica.  
  
 Se l'elenco non è **const**, `GetAt` restituisce un riferimento all'elemento. Ciò consente al metodo da utilizzare su entrambi i lati di un'istruzione di assegnazione e pertanto consente le voci dell'elenco da modificare.  
  
 Nelle build di debug, un errore di asserzione si verificherà se `pos` è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlList::FindIndex](#findindex).  
  
##  <a name="getcount"></a>CAtlList::GetCount  
 Chiamare questo metodo per restituire il numero di oggetti nell'elenco.  
  
```
size_t GetCount() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di elementi nell'elenco.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlList::Find](#find).  
  
##  <a name="gethead"></a>CAtlList::GetHead  
 Chiamare questo metodo per restituire l'elemento in corrispondenza dell'inizio dell'elenco.  
  
```
E& GetHead() throw();
const E& GetHead() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento o una copia di, l'elemento in corrispondenza dell'inizio dell'elenco.  
  
### <a name="remarks"></a>Note  
 Se l'elenco è **const**, `GetHead` restituisce una copia dell'elemento in corrispondenza dell'inizio dell'elenco. In questo modo il metodo può essere utilizzato solo sul lato destro di un'istruzione di assegnazione e protegge l'elenco dalla modifica.  
  
 Se l'elenco non è **const**, `GetHead` restituisce un riferimento all'elemento in corrispondenza dell'inizio dell'elenco. Ciò consente al metodo da utilizzare su entrambi i lati di un'istruzione di assegnazione e pertanto consente le voci dell'elenco da modificare.  
  
 Nelle build di debug, si verificherà un errore di asserzione se l'elemento head dell'elenco fa riferimento a NULL.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlList::AddHead](#addhead).  
  
##  <a name="getheadposition"></a>CAtlList::GetHeadPosition  
 Chiamare questo metodo per ottenere la posizione di inizio dell'elenco.  
  
```
POSITION GetHeadPosition() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di posizione corrispondente all'elemento in corrispondenza dell'inizio dell'elenco.  
  
### <a name="remarks"></a>Note  
 Se l'elenco è vuoto, il valore restituito è NULL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#21](../../atl/codesnippet/cpp/catllist-class_9.cpp)]  
  
##  <a name="getnext"></a>CAtlList::GetNext  
 Chiamare questo metodo per restituire l'elemento successivo nell'elenco.  
  
```
E& GetNext(POSITION& pos) throw();
const E& GetNext(POSITION& pos) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Un valore di posizione, restituito da una precedente chiamata a `GetNext`, [CAtlList::GetHeadPosition](#getheadposition), o altri `CAtlList` metodo.  
  
### <a name="return-value"></a>Valore restituito  
 Se l'elenco è **const**, `GetNext` restituisce una copia dell'elemento successivo dell'elenco. In questo modo il metodo può essere utilizzato solo sul lato destro di un'istruzione di assegnazione e protegge l'elenco dalla modifica.  
  
 Se l'elenco non è **const**, `GetNext` restituisce un riferimento all'elemento successivo dell'elenco. Ciò consente al metodo da utilizzare su entrambi i lati di un'istruzione di assegnazione e pertanto consente le voci dell'elenco da modificare.  
  
### <a name="remarks"></a>Note  
 Il contatore di posizione, `pos`, viene aggiornato per puntare all'elemento successivo nell'elenco oppure NULL se non sono presenti più elementi. Nelle build di debug, un errore di asserzione si verificherà se `pos` è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlList::GetHeadPosition](#getheadposition).  
  
##  <a name="getprev"></a>CAtlList::GetPrev  
 Chiamare questo metodo per restituire l'elemento precedente nell'elenco.  
  
```
E& GetPrev(POSITION& pos) throw();
const E& GetPrev(POSITION& pos) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Un valore di posizione, restituito da una precedente chiamata a `GetPrev`, [CAtlList::GetTailPosition](#gettailposition), o altri `CAtlList` metodo.  
  
### <a name="return-value"></a>Valore restituito  
 Se l'elenco è **const**, `GetPrev` restituisce una copia di un elemento dell'elenco. In questo modo il metodo può essere utilizzato solo sul lato destro di un'istruzione di assegnazione e protegge l'elenco dalla modifica.  
  
 Se l'elenco non è **const**, `GetPrev` restituisce un riferimento a un elemento dell'elenco. Ciò consente al metodo da utilizzare su entrambi i lati di un'istruzione di assegnazione e pertanto consente le voci dell'elenco da modificare.  
  
### <a name="remarks"></a>Note  
 Il contatore di posizione, `pos`, viene aggiornato per puntare all'elemento precedente nell'elenco oppure NULL se non sono presenti più elementi. Nelle build di debug, un errore di asserzione si verificherà se `pos` è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlList::GetTailPosition](#gettailposition).  
  
##  <a name="gettail"></a>CAtlList::GetTail  
 Chiamare questo metodo per restituire l'elemento in corrispondenza della parte finale dell'elenco.  
  
```
E& GetTail() throw();
const E& GetTail() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento o una copia di, l'elemento in corrispondenza della parte finale dell'elenco.  
  
### <a name="remarks"></a>Note  
 Se l'elenco è **const**, `GetTail` restituisce una copia dell'elemento in corrispondenza dell'inizio dell'elenco. In questo modo il metodo può essere utilizzato solo sul lato destro di un'istruzione di assegnazione e protegge l'elenco dalla modifica.  
  
 Se l'elenco non è **const**, `GetTail` restituisce un riferimento all'elemento in corrispondenza dell'inizio dell'elenco. Ciò consente al metodo da utilizzare su entrambi i lati di un'istruzione di assegnazione e pertanto consente le voci dell'elenco da modificare.  
  
 Nelle build di debug si verificherà un errore di asserzione se la parte finale dell'elenco fa riferimento a NULL.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlList::AddTail](#addtail).  
  
##  <a name="gettailposition"></a>CAtlList::GetTailPosition  
 Chiamare questo metodo per ottenere la posizione di fine dell'elenco.  
  
```
POSITION GetTailPosition() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di posizione corrispondente all'elemento in corrispondenza della coda dell'elenco.  
  
### <a name="remarks"></a>Note  
 Se l'elenco è vuoto, il valore restituito è NULL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#22](../../atl/codesnippet/cpp/catllist-class_10.cpp)]  
  
##  <a name="inargtype"></a>CAtlList::INARGTYPE  
 Tipo utilizzato per un elemento viene passato come argomento di input.  
  
```
typedef ETraits::INARGTYPE INARGTYPE;
```  
  
##  <a name="insertafter"></a>CAtlList::InsertAfter  
 Chiamare questo metodo per inserire un nuovo elemento nell'elenco alla posizione specificata.  
  
```
POSITION InsertAfter(POSITION pos, INARGTYPE element);
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il valore della posizione dopo il quale verrà inserito il nuovo elemento.  
  
 `element`  
 L'elemento da inserire.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore della posizione del nuovo elemento.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug, si verificherà un errore di asserzione se l'elenco non è valido, se l'inserimento ha esito negativo o se viene effettuato un tentativo di inserire l'elemento dopo la parte finale.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#23](../../atl/codesnippet/cpp/catllist-class_11.cpp)]  
  
##  <a name="insertbefore"></a>CAtlList::InsertBefore  
 Chiamare questo metodo per inserire un nuovo elemento nell'elenco prima della posizione specificata.  
  
```
POSITION InsertBefore(POSITION pos, INARGTYPE element);
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il nuovo elemento verrà inserito nell'elenco prima di questo valore di posizione.  
  
 `element`  
 L'elemento da inserire.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore della posizione del nuovo elemento.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug si verificherà un errore di asserzione se l'elenco non è valido, se l'inserimento ha esito negativo o se viene effettuato un tentativo di inserire l'elemento prima dell'inizio.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#24](../../atl/codesnippet/cpp/catllist-class_12.cpp)]  
  
##  <a name="isempty"></a>CAtlList::IsEmpty  
 Chiamare questo metodo per determinare se l'elenco è vuoto.  
  
```
bool IsEmpty() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'elenco non contiene oggetti, in caso contrario false.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#25](../../atl/codesnippet/cpp/catllist-class_13.cpp)]  
  
##  <a name="movetohead"></a>CAtlList::MoveToHead  
 Chiamare questo metodo per spostare l'elemento specificato all'inizio dell'elenco.  
  
```
void MoveToHead(POSITION pos) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il valore della posizione dell'elemento da spostare.  
  
### <a name="remarks"></a>Note  
 L'elemento specificato viene spostato dalla posizione corrente all'inizio dell'elenco. Nelle build di debug, un errore di asserzione si verificherà se `pos` è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#26](../../atl/codesnippet/cpp/catllist-class_14.cpp)]  
  
##  <a name="movetotail"></a>CAtlList::MoveToTail  
 Chiamare questo metodo per spostare l'elemento specificato alla fine dell'elenco.  
  
```
void MoveToTail(POSITION pos) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il valore della posizione dell'elemento da spostare.  
  
### <a name="remarks"></a>Note  
 L'elemento specificato viene spostato dalla posizione corrente alla fine dell'elenco. Nelle build di debug, un errore di asserzione si verificherà se `pos` è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlList::MoveToHead](#movetohead).  
  
##  <a name="removeall"></a>CAtlList::RemoveAll  
 Chiamare questo metodo per rimuovere tutti gli elementi dall'elenco.  
  
```
void RemoveAll() throw();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo rimuove tutti gli elementi dall'elenco e libera la memoria allocata. Nelle build di debug, verrà generato un ATLASSERT se non vengono eliminati tutti gli elementi o se la struttura dell'elenco è stata danneggiata.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlList::IsEmpty](#isempty).  
  
##  <a name="removeat"></a>CAtlList::RemoveAt  
 Chiamare questo metodo per rimuovere un singolo elemento dall'elenco.  
  
```
void RemoveAt(POSITION pos) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il valore della posizione dell'elemento da rimuovere.  
  
### <a name="remarks"></a>Note  
 L'elemento a cui fa riferimento `pos` viene rimosso e viene liberata memoria. È possibile utilizzare `RemoveAt` per rimuovere l'intestazione o fine dell'elenco.  
  
 Nelle build di debug, si verificherà un errore di asserzione se l'elenco non è valido o se la rimozione dell'elemento, l'elenco di accedere alla memoria che non fa parte della struttura di elenco.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#27](../../atl/codesnippet/cpp/catllist-class_15.cpp)]  
  
##  <a name="removehead"></a>CAtlList::RemoveHead  
 Chiamare questo metodo per rimuovere l'elemento in corrispondenza dell'inizio dell'elenco.  
  
```
E RemoveHead();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'elemento in corrispondenza dell'inizio dell'elenco.  
  
### <a name="remarks"></a>Note  
 L'elemento head viene eliminato dall'elenco e viene liberata memoria. Viene restituita una copia dell'elemento. Nelle build di debug, si verificherà un errore di asserzione se l'elenco è vuoto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#28](../../atl/codesnippet/cpp/catllist-class_16.cpp)]  
  
##  <a name="removeheadnoreturn"></a>CAtlList::RemoveHeadNoReturn  
 Chiamare questo metodo per rimuovere l'elemento in corrispondenza dell'inizio dell'elenco senza restituire alcun valore.  
  
```
void RemoveHeadNoReturn() throw();
```  
  
### <a name="remarks"></a>Note  
 L'elemento head viene eliminato dall'elenco e viene liberata memoria. Nelle build di debug, si verificherà un errore di asserzione se l'elenco è vuoto.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlList::IsEmpty](#isempty).  
  
##  <a name="removetail"></a>CAtlList::RemoveTail  
 Chiamare questo metodo per rimuovere l'elemento in corrispondenza della parte finale dell'elenco.  
  
```
E RemoveTail();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'elemento in corrispondenza della parte finale dell'elenco.  
  
### <a name="remarks"></a>Note  
 L'elemento della parte finale è stato eliminato dall'elenco e viene liberata memoria. Viene restituita una copia dell'elemento. Nelle build di debug, si verificherà un errore di asserzione se l'elenco è vuoto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#29](../../atl/codesnippet/cpp/catllist-class_17.cpp)]  
  
##  <a name="removetailnoreturn"></a>CAtlList::RemoveTailNoReturn  
 Chiamare questo metodo per rimuovere l'elemento in corrispondenza della parte finale dell'elenco senza restituire alcun valore.  
  
```
void RemoveTailNoReturn() throw();
```  
  
### <a name="remarks"></a>Note  
 L'elemento della parte finale è stato eliminato dall'elenco e viene liberata memoria. Nelle build di debug, si verificherà un errore di asserzione se l'elenco è vuoto.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlList::IsEmpty](#isempty).  
  
##  <a name="setat"></a>CAtlList::SetAt  
 Chiamare questo metodo per impostare il valore dell'elemento in una determinata posizione nell'elenco.  
  
```
void SetAt(POSITION pos, INARGTYPE element);
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il valore di posizione corrispondente all'elemento da modificare.  
  
 `element`  
 Il nuovo valore dell'elemento.  
  
### <a name="remarks"></a>Note  
 Sostituisce il valore esistente con `element`. Nelle build di debug, un errore di asserzione si verificherà se `pos` è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#30](../../atl/codesnippet/cpp/catllist-class_18.cpp)]  
  
##  <a name="swapelements"></a>CAtlList::SwapElements  
 Chiamare questo metodo per eseguire lo scambio di elementi nell'elenco.  
  
```
void SwapElements(POSITION pos1, POSITION pos2) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *pos1*  
 Il primo valore di posizione.  
  
 *pos2*  
 Il secondo valore di posizione.  
  
### <a name="remarks"></a>Note  
 Scambia gli elementi in due posizioni specificate. Nelle build di debug, si verificherà un errore di asserzione se il valore di posizione è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#31](../../atl/codesnippet/cpp/catllist-class_19.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [CList (classe)](../../mfc/reference/clist-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
