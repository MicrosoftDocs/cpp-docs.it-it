---
title: CList (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CList
- AFXTEMPL/CList
- AFXTEMPL/CList::CList
- AFXTEMPL/CList::AddHead
- AFXTEMPL/CList::AddTail
- AFXTEMPL/CList::Find
- AFXTEMPL/CList::FindIndex
- AFXTEMPL/CList::GetAt
- AFXTEMPL/CList::GetCount
- AFXTEMPL/CList::GetHead
- AFXTEMPL/CList::GetHeadPosition
- AFXTEMPL/CList::GetNext
- AFXTEMPL/CList::GetPrev
- AFXTEMPL/CList::GetSize
- AFXTEMPL/CList::GetTail
- AFXTEMPL/CList::GetTailPosition
- AFXTEMPL/CList::InsertAfter
- AFXTEMPL/CList::InsertBefore
- AFXTEMPL/CList::IsEmpty
- AFXTEMPL/CList::RemoveAll
- AFXTEMPL/CList::RemoveAt
- AFXTEMPL/CList::RemoveHead
- AFXTEMPL/CList::RemoveTail
- AFXTEMPL/CList::SetAt
dev_langs:
- C++
helpviewer_keywords:
- CList [MFC], CList
- CList [MFC], AddHead
- CList [MFC], AddTail
- CList [MFC], Find
- CList [MFC], FindIndex
- CList [MFC], GetAt
- CList [MFC], GetCount
- CList [MFC], GetHead
- CList [MFC], GetHeadPosition
- CList [MFC], GetNext
- CList [MFC], GetPrev
- CList [MFC], GetSize
- CList [MFC], GetTail
- CList [MFC], GetTailPosition
- CList [MFC], InsertAfter
- CList [MFC], InsertBefore
- CList [MFC], IsEmpty
- CList [MFC], RemoveAll
- CList [MFC], RemoveAt
- CList [MFC], RemoveHead
- CList [MFC], RemoveTail
- CList [MFC], SetAt
ms.assetid: 6f6273c3-c8f6-47f5-ac2a-0a950379ae5d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7d96a9c1a1b91d7738f768387bf0c24abd01ba22
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="clist-class"></a>CList (classe)
Supporta elenchi ordinati di oggetti non univoci accessibili in sequenza o in base al valore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class TYPE, class ARG_TYPE = const TYPE&>  
class CList : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CList::CList](#clist)|Costruisce un elenco ordinato vuoto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CList::AddHead](#addhead)|Aggiunge un elemento (o tutti gli elementi in un altro elenco) all'inizio dell'elenco (effettua un nuovo inizio).|  
|[CList::AddTail](#addtail)|Aggiunge un elemento (o tutti gli elementi in un altro elenco) alla fine dell'elenco (effettua una nuova fine).|  
|[CList::Find](#find)|Ottiene la posizione di un elemento specificato dal valore di puntatore.|  
|[CList::FindIndex](#findindex)|Ottiene la posizione di un elemento specificato da un indice in base zero.|  
|[CList::GetAt](#getat)|Ottiene l'elemento in una determinata posizione.|  
|[CList::GetCount](#getcount)|Restituisce il numero di elementi nell'elenco.|  
|[CList::GetHead](#gethead)|Restituisce l'elemento head dell'elenco (non può essere vuoto).|  
|[CList::GetHeadPosition](#getheadposition)|Restituisce la posizione dell'elemento head dell'elenco.|  
|[CList](#getnext)|Ottiene l'elemento successivo per eseguire l'iterazione.|  
|[CList::GetPrev](#getprev)|Ottiene l'elemento precedente per eseguire l'iterazione.|  
|[CList::GetSize](#getsize)|Restituisce il numero di elementi nell'elenco.|  
|[CList::GetTail](#gettail)|Restituisce l'elemento della parte finale dell'elenco (non può essere vuoto).|  
|[CList::GetTailPosition](#gettailposition)|Restituisce la posizione dell'elemento della parte finale dell'elenco.|  
|[CList::InsertAfter](#insertafter)|Inserisce un nuovo elemento dopo una determinata posizione.|  
|[CList::InsertBefore](#insertbefore)|Inserisce un nuovo elemento prima di una determinata posizione.|  
|[CList::IsEmpty](#isempty)|Verifica se la condizione di elenco vuoto (nessun elemento).|  
|[CList::RemoveAll](#removeall)|Rimuove tutti gli elementi da questo elenco.|  
|[CList::RemoveAt](#removeat)|Rimuove un elemento dall'elenco, specificato dalla posizione.|  
|[CList::RemoveHead](#removehead)|Rimuove l'elemento head dell'elenco.|  
|[CList::RemoveTail](#removetail)|Rimuove l'elemento dalla coda dell'elenco.|  
|[CList::SetAt](#setat)|Imposta l'elemento in una determinata posizione.|  
  
#### <a name="parameters"></a>Parametri  
 `TYPE`  
 Tipo di oggetto archiviato nell'elenco.  
  
 `ARG` *_* `TYPE`  
 Tipo utilizzato per fare riferimento a oggetti archiviati nell'elenco. Può essere un riferimento.  
  
## <a name="remarks"></a>Note  
 `CList`elenchi si comportano come gli elenchi collegati doppiamente.  
  
 Una variabile di tipo **posizione** è una chiave per l'elenco. È possibile utilizzare un **posizione** variabile come un iteratore per attraversare un elenco in ordine sequenziale e come un segnalibro per indicare una posizione. Una posizione non è lo stesso come un indice, tuttavia.  
  
 Inserimento di elementi è molto veloce in corrispondenza dell'inizio di elenco, nella fase finale e in corrispondenza di una determinata **posizione**. Una ricerca sequenziale è necessaria cercare un elemento per valore o indice. Questa ricerca può essere lenta se l'elenco è lungo.  
  
 Se è necessario un dump di singoli elementi nell'elenco, è necessario impostare la profondità del contesto di dump a 1 o superiore.  
  
 Alcune funzioni membro di questa classe chiamano funzioni di supporto globale che devono essere personalizzati per la maggior parte degli utilizzi della `CList` classe. Vedere [classi Collection](../../mfc/reference/collection-class-helpers.md) nella sezione "Macro e funzioni globali".  
  
 Per ulteriori informazioni sull'utilizzo `CList`, vedere l'articolo [raccolte](../../mfc/collections.md).  
  
## <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#35](../../mfc/codesnippet/cpp/clist-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CList`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtempl.h  
  
##  <a name="addhead"></a>CList::AddHead  
 Aggiunge un nuovo elemento o un elenco di elementi all'inizio di questo elenco.  
  
```  
POSITION AddHead(ARG_TYPE newElement);  
void AddHead(CList* pNewList);
```  
  
### <a name="parameters"></a>Parametri  
 `ARG_TYPE`  
 Parametro del modello che specifica il tipo di elemento dell'elenco (può essere un riferimento).  
  
 `newElement`  
 Il nuovo elemento.  
  
 `pNewList`  
 Un puntatore a un altro `CList` elenco. Gli elementi in `pNewList` verrà aggiunto all'elenco.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la prima versione di **posizione** valore dell'elemento appena inserito.  
  
### <a name="remarks"></a>Note  
 L'elenco può essere vuota prima dell'operazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#36](../../mfc/codesnippet/cpp/clist-class_2.cpp)]  
  
##  <a name="addtail"></a>CList::AddTail  
 Aggiunge un nuovo elemento o un elenco di elementi alla fine dell'elenco.  
  
```  
POSITION AddTail(ARG_TYPE newElement);  
void AddTail(CList* pNewList);
```  
  
### <a name="parameters"></a>Parametri  
 `ARG_TYPE`  
 Parametro del modello che specifica il tipo di elemento dell'elenco (può essere un riferimento).  
  
 `newElement`  
 Elemento da aggiungere all'elenco.  
  
 `pNewList`  
 Un puntatore a un altro `CList` elenco. Gli elementi in `pNewList` verrà aggiunto all'elenco.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la prima versione di **posizione** valore dell'elemento appena inserito.  
  
### <a name="remarks"></a>Note  
 L'elenco può essere vuota prima dell'operazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#37](../../mfc/codesnippet/cpp/clist-class_3.cpp)]  
  
##  <a name="clist"></a>CList::CList  
 Costruisce un elenco ordinato vuoto.  
  
```  
CList(INT_PTR nBlockSize = 10);
```  
  
### <a name="parameters"></a>Parametri  
 `nBlockSize`  
 La granularità dell'allocazione di memoria per l'estensione nell'elenco.  
  
### <a name="remarks"></a>Note  
 Man mano che aumenta l'elenco, la memoria viene allocata in unità di `nBlockSize` voci.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#38](../../mfc/codesnippet/cpp/clist-class_4.cpp)]  
  
##  <a name="find"></a>CList::Find  
 Cerca nell'elenco in ordine sequenziale per trovare il primo elemento corrispondente al specificato `searchValue`.  
  
```  
POSITION Find(
    ARG_TYPE searchValue,  
    POSITION startAfter = NULL) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `ARG_TYPE`  
 Parametro del modello che specifica il tipo di elemento dell'elenco (può essere un riferimento).  
  
 `searchValue`  
 Il valore da trovare nell'elenco.  
  
 `startAfter`  
 La posizione iniziale per la ricerca. Se viene specificato alcun valore, la ricerca inizia con l'elemento head.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **posizione** valore che può essere utilizzato per l'iterazione o il recupero di puntatore a oggetto; **NULL** se l'oggetto non viene trovato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#39](../../mfc/codesnippet/cpp/clist-class_5.cpp)]  
  
##  <a name="findindex"></a>CList::FindIndex  
 Usa il valore di `nIndex` come indice nell'elenco.  
  
```  
POSITION FindIndex(INT_PTR nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice in base zero dell'elemento di elenco da trovare.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **posizione** valore che può essere utilizzato per l'iterazione o il recupero di puntatore a oggetto; **NULL** se `nIndex` è negativo o troppo grande.  
  
### <a name="remarks"></a>Note  
 Avviare un'analisi sequenza dall'inizio dell'elenco, arresto nel  *n* elemento th.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#40](../../mfc/codesnippet/cpp/clist-class_6.cpp)]  
  
##  <a name="getat"></a>CList::GetAt  
 Ottiene l'elemento di elenco in una determinata posizione.  
  
```  
TYPE& GetAt(POSITION position);  
const TYPE& GetAt(POSITION position) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro di modello che specifica il tipo di oggetto nell'elenco.  
  
 *posizione*  
 La posizione nell'elenco dell'elemento da ottenere.  
  
### <a name="return-value"></a>Valore restituito  
 Vedere la descrizione del valore restituito per `GetHead`.  
  
### <a name="remarks"></a>Note  
 `GetAt`Restituisce l'elemento (o un riferimento all'elemento) associato a una determinata posizione. Non ha lo stesso come un indice e non è possibile operare su un **posizione** valore manualmente. Una variabile di tipo **posizione** è una chiave per l'elenco.  
  
 È necessario assicurarsi che il **posizione** valore rappresenta una posizione valida nell'elenco. Se non è valido, la versione di Debug della libreria di classi Microsoft Foundation asserzioni.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CList::GetHeadPosition](#getheadposition).  
  
##  <a name="getcount"></a>CList::GetCount  
 Ottiene il numero di elementi nell'elenco.  
  
```  
INT_PTR GetCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore intero che contiene il numero di elementi.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo genera lo stesso risultato di [CList::GetSize](#getsize) metodo.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CList::RemoveHead](#removehead).  
  
##  <a name="gethead"></a>CList::GetHead  
 Ottiene l'elemento head (o un riferimento all'elemento head) di questo elenco.  
  
```  
const TYPE& GetHead() const;  
  
TYPE& GetHead();
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro di modello che specifica il tipo di oggetto nell'elenco.  
  
### <a name="return-value"></a>Valore restituito  
 Se l'elenco è **const**, `GetHead` restituisce una copia dell'elemento in corrispondenza dell'inizio dell'elenco. In questo modo la funzione può essere utilizzato solo sul lato destro di un'istruzione di assegnazione e protegge l'elenco dalla modifica.  
  
 Se l'elenco non è **const**, `GetHead` restituisce un riferimento all'elemento in corrispondenza dell'inizio dell'elenco. Questo consente la funzione può essere utilizzata su entrambi i lati di un'istruzione di assegnazione e pertanto le voci dell'elenco da modificare.  
  
### <a name="remarks"></a>Note  
 È necessario assicurarsi che l'elenco non è vuota prima di chiamare `GetHead`. Se l'elenco è vuoto, la versione di Debug della libreria di classi Microsoft Foundation asserzioni. Utilizzare [IsEmpty](#isempty) per verificare che l'elenco contiene elementi.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#41](../../mfc/codesnippet/cpp/clist-class_7.cpp)]  
  
##  <a name="getheadposition"></a>CList::GetHeadPosition  
 Ottiene la posizione dell'elemento head dell'elenco.  
  
```  
POSITION GetHeadPosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **posizione** valore che può essere utilizzato per l'iterazione o il recupero di puntatore a oggetto; **NULL** se l'elenco è vuoto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#42](../../mfc/codesnippet/cpp/clist-class_8.cpp)]  
  
##  <a name="getnext"></a>CList  
 Ottiene l'elemento di elenco, identificato da `rPosition`, quindi imposta `rPosition` per il **posizione** valore della voce successiva nell'elenco.  
  
```  
TYPE& GetNext(POSITION& rPosition);  
const TYPE& GetNext(POSITION& rPosition) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro di modello che specifica il tipo degli elementi nell'elenco.  
  
 `rPosition`  
 Un riferimento a un **posizione** valore restituito da una precedente `GetNext`, [GetHeadPosition](#getheadposition), o un'altra chiamata di funzione membro.  
  
### <a name="return-value"></a>Valore restituito  
 Se l'elenco è **const**, `GetNext` restituisce una copia di un elemento dell'elenco. In questo modo la funzione può essere utilizzato solo sul lato destro di un'istruzione di assegnazione e protegge l'elenco dalla modifica.  
  
 Se l'elenco non è **const**, `GetNext` restituisce un riferimento a un elemento dell'elenco. Questo consente la funzione può essere utilizzata su entrambi i lati di un'istruzione di assegnazione e pertanto le voci dell'elenco da modificare.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare `GetNext` in un ciclo di iterazione in avanti, se si stabilisce la posizione iniziale con una chiamata a `GetHeadPosition` o **trovare**.  
  
 È necessario assicurarsi che il **posizione** valore rappresenta una posizione valida nell'elenco. Se non è valido, la versione di Debug della libreria di classi Microsoft Foundation asserzioni.  
  
 Se l'elemento recuperato è l'ultimo nell'elenco, quindi il nuovo valore di `rPosition` è impostato su **NULL**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#43](../../mfc/codesnippet/cpp/clist-class_9.cpp)]  
  
##  <a name="getprev"></a>CList::GetPrev  
 Ottiene l'elemento di elenco, identificato da `rPosition`, quindi imposta `rPosition` per il **posizione** valore della voce nell'elenco precedente.  
  
```  
TYPE& GetPrev(POSITION& rPosition);  
const TYPE& GetPrev(POSITION& rPosition) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro di modello che specifica il tipo degli elementi nell'elenco.  
  
 `rPosition`  
 Un riferimento a un **posizione** valore restituito da una precedente `GetPrev` o un'altra chiamata di funzione membro.  
  
### <a name="return-value"></a>Valore restituito  
 Se l'elenco è **const**, `GetPrev` restituisce una copia dell'elemento in corrispondenza dell'inizio dell'elenco. In questo modo la funzione può essere utilizzato solo sul lato destro di un'istruzione di assegnazione e protegge l'elenco dalla modifica.  
  
 Se l'elenco non è **const**, `GetPrev` restituisce un riferimento a un elemento dell'elenco. Questo consente la funzione può essere utilizzata su entrambi i lati di un'istruzione di assegnazione e pertanto le voci dell'elenco da modificare.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare `GetPrev` in un ciclo di iterazione inversa se si stabilisce la posizione iniziale con una chiamata a `GetTailPosition` o **trovare**.  
  
 È necessario assicurarsi che il **posizione** valore rappresenta una posizione valida nell'elenco. Se non è valido, la versione di Debug della libreria di classi Microsoft Foundation asserzioni.  
  
 Se l'elemento recuperato è il primo nell'elenco, quindi il nuovo valore di `rPosition` è impostato su **NULL**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#44](../../mfc/codesnippet/cpp/clist-class_10.cpp)]  
  
##  <a name="getsize"></a>CList::GetSize  
 Restituisce il numero di elementi dell'elenco.  
  
```  
INT_PTR GetSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi nell'elenco.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per recuperare il numero di elementi nell'elenco.  Chiamare questo metodo genera lo stesso risultato di [CList::GetCount](#getcount) metodo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#45](../../mfc/codesnippet/cpp/clist-class_11.cpp)]  
  
##  <a name="gettail"></a>CList::GetTail  
 Ottiene il `CObject` puntatore che rappresenta l'elemento della parte finale di questo elenco.  
  
```  
TYPE& GetTail();  
const TYPE& GetTail() const;  
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro di modello che specifica il tipo di elementi nell'elenco.  
  
### <a name="return-value"></a>Valore restituito  
 Vedere la descrizione del valore restituito per [GetHead](../../mfc/reference/coblist-class.md#gethead).  
  
### <a name="remarks"></a>Note  
 È necessario assicurarsi che l'elenco non è vuota prima di chiamare `GetTail`. Se l'elenco è vuoto, la versione di Debug della libreria di classi Microsoft Foundation asserzioni. Utilizzare [IsEmpty](../../mfc/reference/coblist-class.md#isempty) per verificare che l'elenco contiene elementi.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#46](../../mfc/codesnippet/cpp/clist-class_12.cpp)]  
  
##  <a name="gettailposition"></a>CList::GetTailPosition  
 Ottiene la posizione dell'elemento della parte finale di questo elenco. **NULL** se l'elenco è vuoto.  
  
```  
POSITION GetTailPosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **posizione** valore che può essere utilizzato per l'iterazione o il recupero di puntatore a oggetto; **NULL** se l'elenco è vuoto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#47](../../mfc/codesnippet/cpp/clist-class_13.cpp)]  
  
##  <a name="insertafter"></a>CList::InsertAfter  
 Aggiunge un elemento all'elenco dopo l'elemento in corrispondenza della posizione specificata.  
  
```  
POSITION InsertAfter(POSITION position, ARG_TYPE newElement);
```  
  
### <a name="parameters"></a>Parametri  
 *posizione*  
 Valore **POSITION** restituito da una chiamata di funzione del membro `GetNext`, `GetPrev`o **Find** .  
  
 `ARG_TYPE`  
 Parametro di modello che specifica il tipo di elemento di elenco.  
  
 `newElement`  
 Elemento da aggiungere all'elenco.  
  
### <a name="return-value"></a>Valore restituito  
 Valore **POSITION** da usare per l'iterazione o il recupero dell'elemento dell'elenco.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#48](../../mfc/codesnippet/cpp/clist-class_14.cpp)]  
  
##  <a name="insertbefore"></a>CList::InsertBefore  
 Aggiunge un elemento all'elenco prima dell'elemento nella posizione specificata.  
  
```  
POSITION InsertBefore(POSITION position, ARG_TYPE newElement);
```  
  
### <a name="parameters"></a>Parametri  
 *posizione*  
 Valore **POSITION** restituito da una chiamata di funzione del membro `GetNext`, `GetPrev`o **Find** .  
  
 `ARG_TYPE`  
 Parametro del modello che specifica il tipo di elemento dell'elenco (può essere un riferimento).  
  
 `newElement`  
 Elemento da aggiungere all'elenco.  
  
### <a name="return-value"></a>Valore restituito  
 Valore **POSITION** da usare per l'iterazione o il recupero dell'elemento dell'elenco.  
  
### <a name="remarks"></a>Note  
 Se *position* è **NULL**, l'elemento viene inserito all'inizio dell'elenco.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#49](../../mfc/codesnippet/cpp/clist-class_15.cpp)]  
  
##  <a name="isempty"></a>CList::IsEmpty  
 Indica se questo elenco non contiene elementi.  
  
```  
BOOL IsEmpty() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elenco è vuoto. in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#50](../../mfc/codesnippet/cpp/clist-class_16.cpp)]  
  
##  <a name="removeall"></a>CList::RemoveAll  
 Rimuove tutti gli elementi da questo elenco e libera la memoria associata.  
  
```  
void RemoveAll();
```  
  
### <a name="remarks"></a>Note  
 Se l'elenco è vuoto, viene generato alcun errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#51](../../mfc/codesnippet/cpp/clist-class_17.cpp)]  
  
##  <a name="removeat"></a>CList::RemoveAt  
 Rimuove l'elemento specificato da questo elenco.  
  
```  
void RemoveAt(POSITION position);
```  
  
### <a name="parameters"></a>Parametri  
 *posizione*  
 La posizione dell'elemento da rimuovere dall'elenco.  
  
### <a name="remarks"></a>Note  
 È necessario assicurarsi che il **posizione** valore rappresenta una posizione valida nell'elenco. Se non è valido, la versione di Debug della libreria di classi Microsoft Foundation asserzioni.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#52](../../mfc/codesnippet/cpp/clist-class_18.cpp)]  
  
##  <a name="removehead"></a>CList::RemoveHead  
 Rimuove l'elemento head dell'elenco e restituisce un puntatore a esso.  
  
```  
TYPE RemoveHead();
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro di modello che specifica il tipo di elementi nell'elenco.  
  
### <a name="return-value"></a>Valore restituito  
 L'elemento in precedenza in corrispondenza dell'inizio dell'elenco.  
  
### <a name="remarks"></a>Note  
 È necessario assicurarsi che l'elenco non è vuota prima di chiamare `RemoveHead`. Se l'elenco è vuoto, la versione di Debug della libreria di classi Microsoft Foundation asserzioni. Utilizzare [IsEmpty](#isempty) per verificare che l'elenco contiene elementi.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#53](../../mfc/codesnippet/cpp/clist-class_19.cpp)]  
  
##  <a name="removetail"></a>CList::RemoveTail  
 Rimuove l'elemento dalla coda dell'elenco e restituisce un puntatore a esso.  
  
```  
TYPE RemoveTail();
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro di modello che specifica il tipo di elementi nell'elenco.  
  
### <a name="return-value"></a>Valore restituito  
 L'elemento che è stata nella fase finale dell'elenco.  
  
### <a name="remarks"></a>Note  
 È necessario assicurarsi che l'elenco non è vuota prima di chiamare `RemoveTail`. Se l'elenco è vuoto, la versione di Debug della libreria di classi Microsoft Foundation asserzioni. Utilizzare [IsEmpty](#isempty) per verificare che l'elenco contiene elementi.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#54](../../mfc/codesnippet/cpp/clist-class_20.cpp)]  
  
##  <a name="setat"></a>CList::SetAt  
 Una variabile di tipo **posizione** è una chiave per l'elenco.  
  
```  
void SetAt(POSITION pos, ARG_TYPE newElement);
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Il **posizione** dell'elemento da impostare.  
  
 `ARG_TYPE`  
 Parametro del modello che specifica il tipo di elemento dell'elenco (può essere un riferimento).  
  
 `newElement`  
 L'elemento da aggiungere all'elenco.  
  
### <a name="remarks"></a>Note  
 Non ha lo stesso come un indice e non è possibile operare su un **posizione** valore manualmente. `SetAt`Scrive l'elemento in corrispondenza della posizione specificata nell'elenco.  
  
 È necessario assicurarsi che il **posizione** valore rappresenta una posizione valida nell'elenco. Se non è valido, la versione di Debug della libreria di classi Microsoft Foundation asserzioni.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#55](../../mfc/codesnippet/cpp/clist-class_21.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC COLLECT](../../visual-cpp-samples.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CMap](../../mfc/reference/cmap-class.md)   
 [Classe CArray](../../mfc/reference/carray-class.md)
