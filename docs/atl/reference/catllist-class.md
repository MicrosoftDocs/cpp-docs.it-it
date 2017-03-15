---
title: Classe CAtlList | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CAtlList
- CAtlList
- ATL::CAtlList
dev_langs:
- C++
helpviewer_keywords:
- CAtlList class
ms.assetid: 09e98053-64b2-4efa-99ab-d0542caaf981
caps.latest.revision: 19
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: b1ed350da625695f610980f9f48a6ae11394d3c8
ms.lasthandoff: 02/24/2017

---
# <a name="catllist-class"></a>Classe CAtlList
Questa classe fornisce metodi per la creazione e la gestione di un oggetto elenco.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename E, class ETraits = CElementTraits<E>>  
class CAtlList
```  
  
#### <a name="parameters"></a>Parametri  
 `E`  
 Tipo dell'elemento.  
  
 `ETraits`  
 Il codice utilizzato per copiare o spostare elementi. Vedere [CElementTraits classe](../../atl/reference/celementtraits-class.md) per ulteriori dettagli.  
  
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
|[CAtlList::SwapElements](#swapelements)|Chiamare questo metodo per scambiare gli elementi nell'elenco.|  
  
## <a name="remarks"></a>Note  
 La `CAtlList` classe supporta elenchi ordinati di oggetti non univoci accessibili in sequenza o in base al valore. `CAtlList`elenchi si comportino come elenchi collegati doppiamente. Ogni elenco contiene una head e una coda e nuovi elementi (o gli elenchi in alcuni casi) possono essere aggiunto a delle estremità dell'elenco o inseriti prima o dopo elementi specifici.  
  
 La maggior parte del `CAtlList` i metodi utilizzano un valore di posizione. Questo valore viene utilizzato dai metodi per fare riferimento alla posizione di memoria effettivo in cui gli elementi vengono archiviati e non di calcolo o stimati direttamente. Se è necessario per l'accesso di *n*ennesimo elemento nell'elenco, il metodo [CAtlList::FindIndex](#findindex) restituirà il valore della posizione corrispondente per un determinato indice. I metodi [CAtlList::GetNext](#getnext) e [CAtlList::GetPrev](#getprev) può essere utilizzato per scorrere gli oggetti nell'elenco.  
  
 Per ulteriori informazioni riguardanti le classi di raccolta disponibili con ATL, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="a-nameaddheada--catllistaddhead"></a><a name="addhead"></a>CAtlList::AddHead  
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
 [!code-cpp[13 NVC_ATL_Utilities](../../atl/codesnippet/cpp/catllist-class_1.cpp)]  
  
##  <a name="a-nameaddheadlista--catllistaddheadlist"></a><a name="addheadlist"></a>CAtlList::AddHeadList  
 Chiamare questo metodo per aggiungere un elenco esistente all'inizio dell'elenco.  
  
```
void AddHeadList(const CAtlList<E, ETraits>* plNew);
```  
  
### <a name="parameters"></a>Parametri  
 `plNew`  
 L'elenco da aggiungere.  
  
### <a name="remarks"></a>Note  
 Nell'elenco a cui puntava `plNew` viene inserito all'inizio dell'elenco esistente. Nelle build di debug, un errore di asserzione verificherà se `plNew` è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#14;](../../atl/codesnippet/cpp/catllist-class_2.cpp)]  
  
##  <a name="a-nameaddtaila--catllistaddtail"></a><a name="addtail"></a>CAtlList::AddTail  
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
 Se viene utilizzata la prima versione, viene creato un elemento vuoto utilizzando il costruttore predefinito, anziché il costruttore di copia. L'elemento viene aggiunto alla fine dell'elenco e quindi risulta ora la parte finale. Questo metodo può essere utilizzato con un elenco vuoto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#15;](../../atl/codesnippet/cpp/catllist-class_3.cpp)]  
  
##  <a name="a-nameaddtaillista--catllistaddtaillist"></a><a name="addtaillist"></a>CAtlList::AddTailList  
 Chiamare questo metodo per aggiungere un elenco esistente alla fine dell'elenco.  
  
```
void AddTailList(const CAtlList<E, ETraits>* plNew);
```  
  
### <a name="parameters"></a>Parametri  
 `plNew`  
 L'elenco da aggiungere.  
  
### <a name="remarks"></a>Note  
 Nell'elenco a cui puntava `plNew` viene inserito dopo l'ultimo elemento (se presenti) nell'oggetto elenco. L'ultimo elemento di `plNew` elenco diventa quindi la parte finale. Nelle build di debug, un errore di asserzione verificherà se *plNew* è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#16;](../../atl/codesnippet/cpp/catllist-class_4.cpp)]  
  
##  <a name="a-nameassertvalida--catllistassertvalid"></a><a name="assertvalid"></a>CAtlList::AssertValid  
 Chiamare questo metodo per verificare che l'elenco è valido.  
  
```
void AssertValid() const;
```  
  
### <a name="remarks"></a>Note  
 Nelle build di debug, si verificherà un errore di asserzione se l'oggetto elenco non è valido. Per essere valido, deve avere un elenco vuoto sia inizio e alla fine che punta a NULL e deve avere un elenco che non è vuoto sia inizio e alla fine che punta a indirizzi validi.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities n.&17;](../../atl/codesnippet/cpp/catllist-class_5.cpp)]  
  
##  <a name="a-namecatllista--catllistcatllist"></a><a name="catllist"></a>CAtlList::CAtlList  
 Costruttore.  
  
```
CAtlList(UINT nBlockSize = 10) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nBlockSize`  
 La dimensione del blocco.  
  
### <a name="remarks"></a>Note  
 Il costruttore per il `CAtlList` oggetto. La dimensione del blocco è una misura della quantità di memoria allocata quando è necessario un nuovo elemento. Dimensioni blocco ridurre le chiamate alle routine di allocazione della memoria, ma utilizzano più risorse.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#18;](../../atl/codesnippet/cpp/catllist-class_6.cpp)]  
  
##  <a name="a-namedtora--catllistcatllist"></a><a name="dtor"></a>CAtlList:: ~ CAtlList  
 Distruttore.  
  
```
~CAtlList() throw();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate, inclusa una chiamata a [CAtlList::RemoveAll](#removeall) per rimuovere tutti gli elementi dall'elenco.  
  
 Nelle build di debug, un errore di asserzione verificherà se l'elenco contiene ancora alcuni elementi dopo la chiamata a `RemoveAll`.  
  
##  <a name="a-namefinda--catllistfind"></a><a name="find"></a>CAtlList::Find  
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
 [!code-cpp[&#19; NVC_ATL_Utilities](../../atl/codesnippet/cpp/catllist-class_7.cpp)]  
  
##  <a name="a-namefindindexa--catllistfindindex"></a><a name="findindex"></a>CAtlList::FindIndex  
 Chiamare questo metodo per ottenere la posizione di un elemento, dato un valore di indice.  
  
```
POSITION FindIndex(size_t iElement) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `iElement`  
 Indice in base zero dell'elemento elenco richiesti.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di posizione corrispondente o NULL se `iElement` è compreso nell'intervallo.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce la posizione corrispondente a un valore di indice specificato, consentendo l'accesso per il *n*ennesimo elemento nell'elenco.  
  
 Nelle build di debug, si verificherà un errore di asserzione se l'oggetto elenco non è valido.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#20;](../../atl/codesnippet/cpp/catllist-class_8.cpp)]  
  
##  <a name="a-namegetata--catllistgetat"></a><a name="getat"></a>CAtlList::GetAt  
 Chiamare questo metodo per restituire l'elemento in una posizione specificata nell'elenco.  
  
```
E& GetAt(POSITION pos) throw();
const E& GetAt(POSITION pos) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il valore della posizione che specifica un particolare elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a, o copia dell'elemento.  
  
### <a name="remarks"></a>Note  
 Se l'elenco è **const**, `GetAt` restituisce una copia dell'elemento. In questo modo il metodo può essere utilizzato solo sul lato destro di un'istruzione di assegnazione e protegge l'elenco dalla modifica.  
  
 Se l'elenco non è **const**, `GetAt` restituisce un riferimento all'elemento. Ciò consente al metodo da utilizzare su entrambi i lati di un'istruzione di assegnazione e pertanto consente le voci dell'elenco da modificare.  
  
 Nelle build di debug, un errore di asserzione verificherà se `pos` è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CAtlList::FindIndex](#findindex).  
  
##  <a name="a-namegetcounta--catllistgetcount"></a><a name="getcount"></a>CAtlList::GetCount  
 Chiamare questo metodo per restituire il numero di oggetti nell'elenco.  
  
```
size_t GetCount() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di elementi nell'elenco.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CAtlList::Find](#find).  
  
##  <a name="a-namegetheada--catllistgethead"></a><a name="gethead"></a>CAtlList::GetHead  
 Chiamare questo metodo per restituire l'elemento in corrispondenza dell'inizio dell'elenco.  
  
```
E& GetHead() throw();
const E& GetHead() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento o una copia dell'elemento in corrispondenza dell'inizio dell'elenco.  
  
### <a name="remarks"></a>Note  
 Se l'elenco è **const**, `GetHead` restituisce una copia dell'elemento in corrispondenza dell'inizio dell'elenco. In questo modo il metodo può essere utilizzato solo sul lato destro di un'istruzione di assegnazione e protegge l'elenco dalla modifica.  
  
 Se l'elenco non è **const**, `GetHead` restituisce un riferimento all'elemento head dell'elenco. Ciò consente al metodo da utilizzare su entrambi i lati di un'istruzione di assegnazione e pertanto consente le voci dell'elenco da modificare.  
  
 Nelle build di debug si verificherà un errore di asserzione se l'inizio dell'elenco fa riferimento a NULL.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CAtlList::AddHead](#addhead).  
  
##  <a name="a-namegetheadpositiona--catllistgetheadposition"></a><a name="getheadposition"></a>CAtlList::GetHeadPosition  
 Chiamare questo metodo per ottenere la posizione di inizio dell'elenco.  
  
```
POSITION GetHeadPosition() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore della posizione corrispondente all'elemento in corrispondenza dell'inizio dell'elenco.  
  
### <a name="remarks"></a>Note  
 Se l'elenco è vuoto, il valore restituito è NULL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities numero&21;](../../atl/codesnippet/cpp/catllist-class_9.cpp)]  
  
##  <a name="a-namegetnexta--catllistgetnext"></a><a name="getnext"></a>CAtlList::GetNext  
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
 Il contatore di posizione, `pos`, viene aggiornato per puntare all'elemento successivo nell'elenco oppure NULL se non sono presenti più elementi. Nelle build di debug, un errore di asserzione verificherà se `pos` è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CAtlList::GetHeadPosition](#getheadposition).  
  
##  <a name="a-namegetpreva--catllistgetprev"></a><a name="getprev"></a>CAtlList::GetPrev  
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
 Il contatore di posizione, `pos`, viene aggiornato per puntare all'elemento precedente nell'elenco oppure NULL se non sono presenti più elementi. Nelle build di debug, un errore di asserzione verificherà se `pos` è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CAtlList::GetTailPosition](#gettailposition).  
  
##  <a name="a-namegettaila--catllistgettail"></a><a name="gettail"></a>CAtlList::GetTail  
 Chiamare questo metodo per restituire l'elemento in corrispondenza della parte finale dell'elenco.  
  
```
E& GetTail() throw();
const E& GetTail() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento o una copia dell'elemento in corrispondenza della parte finale dell'elenco.  
  
### <a name="remarks"></a>Note  
 Se l'elenco è **const**, `GetTail` restituisce una copia dell'elemento in corrispondenza dell'inizio dell'elenco. In questo modo il metodo può essere utilizzato solo sul lato destro di un'istruzione di assegnazione e protegge l'elenco dalla modifica.  
  
 Se l'elenco non è **const**, `GetTail` restituisce un riferimento all'elemento head dell'elenco. Ciò consente al metodo da utilizzare su entrambi i lati di un'istruzione di assegnazione e pertanto consente le voci dell'elenco da modificare.  
  
 Nelle build di debug si verificherà un errore di asserzione se la parte finale dell'elenco fa riferimento a NULL.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CAtlList::AddTail](#addtail).  
  
##  <a name="a-namegettailpositiona--catllistgettailposition"></a><a name="gettailposition"></a>CAtlList::GetTailPosition  
 Chiamare questo metodo per ottenere la posizione di fine dell'elenco.  
  
```
POSITION GetTailPosition() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore della posizione corrispondente all'elemento in corrispondenza della coda dell'elenco.  
  
### <a name="remarks"></a>Note  
 Se l'elenco è vuoto, il valore restituito è NULL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#22;](../../atl/codesnippet/cpp/catllist-class_10.cpp)]  
  
##  <a name="a-nameinargtypea--catllistinargtype"></a><a name="inargtype"></a>CAtlList::INARGTYPE  
 Tipo utilizzato quando un elemento viene passato come argomento di input.  
  
```
typedef ETraits::INARGTYPE INARGTYPE;
```  
  
##  <a name="a-nameinsertaftera--catllistinsertafter"></a><a name="insertafter"></a>CAtlList::InsertAfter  
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
 Nelle build di debug si verificherà un errore di asserzione se l'elenco non è valido, se l'inserimento ha esito negativo o se viene effettuato un tentativo di inserire l'elemento dopo la parte finale.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#23;](../../atl/codesnippet/cpp/catllist-class_11.cpp)]  
  
##  <a name="a-nameinsertbeforea--catllistinsertbefore"></a><a name="insertbefore"></a>CAtlList::InsertBefore  
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
 [!code-cpp[NVC_ATL_Utilities&#24;](../../atl/codesnippet/cpp/catllist-class_12.cpp)]  
  
##  <a name="a-nameisemptya--catllistisempty"></a><a name="isempty"></a>CAtlList::IsEmpty  
 Chiamare questo metodo per determinare se l'elenco è vuoto.  
  
```
bool IsEmpty() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'elenco non contiene oggetti, in caso contrario false.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#25;](../../atl/codesnippet/cpp/catllist-class_13.cpp)]  
  
##  <a name="a-namemovetoheada--catllistmovetohead"></a><a name="movetohead"></a>CAtlList::MoveToHead  
 Chiamare questo metodo per spostare l'elemento specificato all'inizio dell'elenco.  
  
```
void MoveToHead(POSITION pos) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il valore della posizione dell'elemento da spostare.  
  
### <a name="remarks"></a>Note  
 L'elemento specificato viene spostato dalla posizione corrente all'inizio dell'elenco. Nelle build di debug, un errore di asserzione verificherà se `pos` è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#26; NVC_ATL_Utilities](../../atl/codesnippet/cpp/catllist-class_14.cpp)]  
  
##  <a name="a-namemovetotaila--catllistmovetotail"></a><a name="movetotail"></a>CAtlList::MoveToTail  
 Chiamare questo metodo per spostare l'elemento specificato alla fine dell'elenco.  
  
```
void MoveToTail(POSITION pos) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il valore della posizione dell'elemento da spostare.  
  
### <a name="remarks"></a>Note  
 L'elemento specificato viene spostato dalla posizione corrente alla fine dell'elenco. Nelle build di debug, un errore di asserzione verificherà se `pos` è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CAtlList::MoveToHead](#movetohead).  
  
##  <a name="a-nameremovealla--catllistremoveall"></a><a name="removeall"></a>CAtlList::RemoveAll  
 Chiamare questo metodo per rimuovere tutti gli elementi dall'elenco.  
  
```
void RemoveAll() throw();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo rimuove tutti gli elementi dall'elenco e libera la memoria allocata. Nelle build di debug, verrà generato un ATLASSERT se non vengono eliminati tutti gli elementi o se la struttura dell'elenco è stata danneggiata.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CAtlList::IsEmpty](#isempty).  
  
##  <a name="a-nameremoveata--catllistremoveat"></a><a name="removeat"></a>CAtlList::RemoveAt  
 Chiamare questo metodo per rimuovere un singolo elemento dall'elenco.  
  
```
void RemoveAt(POSITION pos) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il valore della posizione dell'elemento da rimuovere.  
  
### <a name="remarks"></a>Note  
 L'elemento a cui fa riferimento `pos` viene rimosso e viene liberata memoria. È possibile utilizzare `RemoveAt` per rimuovere l'intestazione o la fine dell'elenco.  
  
 Nelle build di debug, si verificherà un errore di asserzione se l'elenco non è valido o se la rimozione dell'elemento, l'elenco di memoria che non fa parte della struttura di elenco.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#27;](../../atl/codesnippet/cpp/catllist-class_15.cpp)]  
  
##  <a name="a-nameremoveheada--catllistremovehead"></a><a name="removehead"></a>CAtlList::RemoveHead  
 Chiamare questo metodo per rimuovere l'elemento in corrispondenza dell'inizio dell'elenco.  
  
```
E RemoveHead();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'elemento in corrispondenza dell'inizio dell'elenco.  
  
### <a name="remarks"></a>Note  
 L'elemento head viene eliminato dall'elenco e viene liberata la memoria. Viene restituita una copia dell'elemento. Nelle build di debug, si verificherà un errore di asserzione se l'elenco è vuoto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[28 NVC_ATL_Utilities](../../atl/codesnippet/cpp/catllist-class_16.cpp)]  
  
##  <a name="a-nameremoveheadnoreturna--catllistremoveheadnoreturn"></a><a name="removeheadnoreturn"></a>CAtlList::RemoveHeadNoReturn  
 Chiamare questo metodo per rimuovere l'elemento in corrispondenza dell'inizio dell'elenco senza restituire alcun valore.  
  
```
void RemoveHeadNoReturn() throw();
```  
  
### <a name="remarks"></a>Note  
 L'elemento head viene eliminato dall'elenco e viene liberata la memoria. Nelle build di debug, si verificherà un errore di asserzione se l'elenco è vuoto.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CAtlList::IsEmpty](#isempty).  
  
##  <a name="a-nameremovetaila--catllistremovetail"></a><a name="removetail"></a>CAtlList::RemoveTail  
 Chiamare questo metodo per rimuovere l'elemento in corrispondenza della parte finale dell'elenco.  
  
```
E RemoveTail();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'elemento in corrispondenza della parte finale dell'elenco.  
  
### <a name="remarks"></a>Note  
 L'elemento della coda viene eliminato dall'elenco e viene liberata la memoria. Viene restituita una copia dell'elemento. Nelle build di debug, si verificherà un errore di asserzione se l'elenco è vuoto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#29;](../../atl/codesnippet/cpp/catllist-class_17.cpp)]  
  
##  <a name="a-nameremovetailnoreturna--catllistremovetailnoreturn"></a><a name="removetailnoreturn"></a>CAtlList::RemoveTailNoReturn  
 Chiamare questo metodo per rimuovere l'elemento in corrispondenza della parte finale dell'elenco senza restituire alcun valore.  
  
```
void RemoveTailNoReturn() throw();
```  
  
### <a name="remarks"></a>Note  
 L'elemento della coda viene eliminato dall'elenco e viene liberata la memoria. Nelle build di debug, si verificherà un errore di asserzione se l'elenco è vuoto.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CAtlList::IsEmpty](#isempty).  
  
##  <a name="a-namesetata--catllistsetat"></a><a name="setat"></a>CAtlList::SetAt  
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
 Sostituisce il valore esistente con `element`. Nelle build di debug, un errore di asserzione verificherà se `pos` è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#30; NVC_ATL_Utilities](../../atl/codesnippet/cpp/catllist-class_18.cpp)]  
  
##  <a name="a-nameswapelementsa--catllistswapelements"></a><a name="swapelements"></a>CAtlList::SwapElements  
 Chiamare questo metodo per scambiare gli elementi nell'elenco.  
  
```
void SwapElements(POSITION pos1, POSITION pos2) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *pos1*  
 Il primo valore di posizione.  
  
 *pos2*  
 Il secondo valore della posizione.  
  
### <a name="remarks"></a>Note  
 Scambia gli elementi in due posizioni specificate. Nelle build di debug, si verificherà un errore di asserzione se il valore di posizione è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#31;](../../atl/codesnippet/cpp/catllist-class_19.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [CList (classe)](../../mfc/reference/clist-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

