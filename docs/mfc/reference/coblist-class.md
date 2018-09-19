---
title: Classe cObList | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CObList
- AFXCOLL/CObList
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
ms.assetid: 80699c93-33d8-4f8b-b8cf-7b58aeab64ca
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 07949bdf7116f4a0eb1d598f90cb0be78b116259
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46112226"
---
# <a name="coblist-class"></a>Classe cObList
elenchi ordinati di non univoco fSupports `CObject` puntatori accessibili in sequenza o dal puntatore il valore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CObList : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObList:: CObList](#coblist)|Costruisce un elenco vuoto per `CObject` puntatori.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObList::AddHead](#addhead)|Aggiunge un elemento (o tutti gli elementi in un altro elenco) nell'intestazione dell'elenco (creando un nuovo inizio).|  
|[CObList::AddTail](#addtail)|Aggiunge un elemento (o tutti gli elementi in un altro elenco) alla fine dell'elenco (creando una nuova fine).|  
|[CObList::Find](#find)|Ottiene la posizione di un elemento specificato dal valore del puntatore.|  
|[CObList::FindIndex](#findindex)|Ottiene la posizione di un elemento specificato da un indice in base zero.|  
|[CObList::GetAt](#getat)|Ottiene l'elemento in una determinata posizione.|  
|[CObList::GetCount](#getcount)|Restituisce il numero di elementi in questo elenco.|  
|[CObList::GetHead](#gethead)|Restituisce l'elemento head dell'elenco (non può essere vuoto).|  
|[CObList::GetHeadPosition](#getheadposition)|Restituisce la posizione dell'elemento head dell'elenco.|  
|[CObList::GetNext](#getnext)|Ottiene l'elemento successivo per eseguire l'iterazione.|  
|[CObList::GetPrev](#getprev)|Ottiene l'elemento precedente per eseguire l'iterazione.|  
|[CObList::GetSize](#getsize)|Restituisce il numero di elementi in questo elenco.|  
|[CObList::GetTail](#gettail)|Restituisce l'elemento della parte finale dell'elenco (non può essere vuoto).|  
|[CObList::GetTailPosition](#gettailposition)|Restituisce la posizione dell'elemento della parte finale dell'elenco.|  
|[CObList::InsertAfter](#insertafter)|Inserisce un nuovo elemento dopo una determinata posizione.|  
|[CObList::InsertBefore](#insertbefore)|Inserisce un nuovo elemento prima di una determinata posizione.|  
|[CObList::IsEmpty](#isempty)|Verifica se la condizione di elenco vuoto (nessun elemento).|  
|[CObList::RemoveAll](#removeall)|Rimuove tutti gli elementi da questo elenco.|  
|[CObList::RemoveAt](#removeat)|Rimuove un elemento da questo elenco, specificato dalla posizione.|  
|[CObList::RemoveHead](#removehead)|Rimuove l'elemento dall'inizio dell'elenco.|  
|[CObList::RemoveTail](#removetail)|Rimuove l'elemento dalla parte finale dell'elenco.|  
|[CObList::SetAt](#setat)|Imposta l'elemento in una determinata posizione.|  
  
## <a name="remarks"></a>Note  
 `CObList` gli elenchi si comportano come gli elenchi collegati doppiamente.  
  
 Una variabile di tipo di posizione è una chiave per l'elenco. È possibile utilizzare una variabile di posizione come un iteratore per attraversare un elenco in ordine sequenziale e come segnalibro per mantenere una posizione. Una posizione non è quello utilizzato per un indice, tuttavia.  
  
 Inserimento di elementi sono operazioni molto veloce in corrispondenza dell'inizio dell'elenco, nella fase finale e in una posizione nota. Una ricerca sequenziale è necessaria cercare un elemento dal valore o all'indice. Questa ricerca può essere lenta se l'elenco è lungo.  
  
 `CObList` incorpora l'IMPLEMENT_SERIAL (macro) per supportare la serializzazione e il dump dei relativi elementi. Se un elenco delle `CObject` puntatori viene archiviato in un archivio, con un operatore di inserimento di overload o con il `Serialize` ogni membro di funzione `CObject` elemento viene serializzato a turno.  
  
 Se è necessario un dump di singoli `CObject` elementi nell'elenco, è necessario impostare la profondità del contesto di dump su 1 o versioni successive.  
  
 Quando un `CObList` oggetto viene eliminato o quando gli elementi vengono rimossi, solo il `CObject` puntatori sono stati rimossi, non gli oggetti fanno riferimento.  
  
 È possibile derivare classi personalizzate da `CObList`. La nuova classe di elenco, progettata per includervi i puntatori agli oggetti derivati da `CObject`, vengono aggiunti nuovi membri dati e nuove funzioni membro. Si noti che l'elenco risultante non è strettamente type-safe, perché consente l'inserimento di qualsiasi `CObject` puntatore.  
  
> [!NOTE]
>  È necessario usare il [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) macro nell'implementazione della classe derivata se si prevede di serializzare l'elenco.  
  
 Per altre informazioni sull'uso `CObList`, vedere l'articolo [raccolte](../../mfc/collections.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CObList`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcoll. h  
  
##  <a name="addhead"></a>  CObList::AddHead  
 Aggiunge un nuovo elemento o un elenco di elementi nell'intestazione di questo elenco.  
  
```  
POSITION AddHead(CObject* newElement);  
void AddHead(CObList* pNewList);
```  
  
### <a name="parameters"></a>Parametri  
 *newElement*  
 Il `CObject` puntatore da aggiungere a questo elenco.  
  
 *pNewList*  
 Un puntatore a un altro `CObList` elenco. Gli elementi in *pNewList* verrà aggiunto a questo elenco.  
  
### <a name="return-value"></a>Valore restituito  
 La prima versione restituisce il valore di posizione dell'elemento appena inserito.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::AddHead`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSIZIONE AddHead (void** <strong>\*</strong> `newElement` **);**<br /><br /> **void AddHead (CPtrList** <strong>\*</strong> `pNewList` **);**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSIZIONE AddHead (CString const &** `newElement` **);**<br /><br /> **POSIZIONE AddHead (LPCTSTR** `newElement` **);**<br /><br /> **void AddHead (CStringList** <strong>\*</strong> `pNewList` **);**|  
  
### <a name="remarks"></a>Note  
 L'elenco può essere vuoto prima dell'operazione.  
  
### <a name="example"></a>Esempio  
  Visualizzare [CObList:: CObList](#coblist) per un elenco del `CAge` classe.  
  
 [!code-cpp[NVC_MFCCollections#89](../../mfc/codesnippet/cpp/coblist-class_1.cpp)]  
  
 I risultati di questo programma sono come segue:  
  
```Output
AddHead example: A CObList with 2 elements
a CAge at $44A8 40
a CAge at $442A 21
```
  
##  <a name="addtail"></a>  CObList::AddTail  
 Aggiunge un nuovo elemento o un elenco di elementi alla fine di questo elenco.  
  
```  
POSITION AddTail(CObject* newElement);  
void AddTail(CObList* pNewList);
```  
  
### <a name="parameters"></a>Parametri  
 *newElement*  
 Il `CObject` puntatore da aggiungere a questo elenco.  
  
 *pNewList*  
 Un puntatore a un altro `CObList` elenco. Gli elementi in *pNewList* verrà aggiunto a questo elenco.  
  
### <a name="return-value"></a>Valore restituito  
 La prima versione restituisce il valore di posizione dell'elemento appena inserito.  
  
### <a name="remarks"></a>Note  
 L'elenco può essere vuoto prima dell'operazione.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::AddTail`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSIZIONE AddTail (void** <strong>\*</strong> `newElement` **);**<br /><br /> **void AddTail (CPtrList** <strong>\*</strong> `pNewList` **);**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSIZIONE AddTail (CString const &** `newElement` **);**<br /><br /> **POSIZIONE AddTail (LPCTSTR** `newElement` **);**<br /><br /> **void AddTail (CStringList** <strong>\*</strong> `pNewList` **);**|  
  
### <a name="example"></a>Esempio  
  Visualizzare [CObList:: CObList](#coblist) per un elenco del `CAge` classe.  
  
 [!code-cpp[NVC_MFCCollections#90](../../mfc/codesnippet/cpp/coblist-class_2.cpp)]  
  
 I risultati di questo programma sono come segue:  
  
```Output
AddTail example: A CObList with 2 elements
a CAge at $444A 21
a CAge at $4526 40
```
  
##  <a name="coblist"></a>  CObList:: CObList  
 Costruisce un oggetto vuoto `CObject` elenco con puntatore.  
  
```  
CObList(INT_PTR nBlockSize = 10);
```  
  
### <a name="parameters"></a>Parametri  
 *nBlockSize*  
 La granularità di allocazione della memoria per l'estensione nell'elenco.  
  
### <a name="remarks"></a>Note  
 Man mano che aumenta l'elenco, la memoria viene allocata in unità pari *nBlockSize* voci. Se un'allocazione di memoria non riesce, un `CMemoryException` viene generata un'eccezione.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::CObList`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**CPtrList (INT_PTR** `nBlockSize` **= 10);**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**CStringList (INT_PTR** `nBlockSize` **= 10);**|  
  
### <a name="example"></a>Esempio  
  Di seguito è riportato un elenco del `CObject`-classe derivata `CAge` utilizzata in tutti gli esempi di raccolta:  
  
 [!code-cpp[NVC_MFCCollections#91](../../mfc/codesnippet/cpp/coblist-class_3.h)]  
  
 Di seguito è riportato un esempio di `CObList` sull'utilizzo di costruttore:  
  
 [!code-cpp[NVC_MFCCollections#92](../../mfc/codesnippet/cpp/coblist-class_4.cpp)]  
  
##  <a name="find"></a>  CObList::Find  
 Cerca nell'elenco in ordine sequenziale per trovare il primo `CObject` puntatore corrispondente specificato `CObject` puntatore.  
  
```  
POSITION Find(
    CObject* searchValue,  
    POSITION startAfter = NULL) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *searchValue*  
 Il puntatore all'oggetto da trovare in questo elenco.  
  
 *startAfter*  
 Posizione iniziale per la ricerca.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di posizione che può essere utilizzato per iterazione o il recupero di puntatore a oggetto; NULL se l'oggetto non viene trovato.  
  
### <a name="remarks"></a>Note  
 Si noti che devono essere confrontati i valori di puntatore, non il contenuto degli oggetti.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::Find`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**Ricerca di posizione (void** <strong>\*</strong> `searchValue` **, posizione** `startAfter` **= NULL) const;**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**Ricerca di posizione (LPCTSTR** `searchValue` **, posizione** `startAfter` **= NULL) const;**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](#coblist) per un elenco del `CAge` classe.  
  
 [!code-cpp[NVC_MFCCollections#93](../../mfc/codesnippet/cpp/coblist-class_5.cpp)]  
  
##  <a name="findindex"></a>  CObList::FindIndex  
 Usa il valore della *nIndex* come indice nell'elenco.  
  
```  
POSITION FindIndex(INT_PTR nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Indice a base zero dell'elemento di elenco da trovare.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di posizione che può essere utilizzato per iterazione o il recupero di puntatore a oggetto; NULL se *nIndex* è troppo grande. (Il framework genera un'asserzione se *nIndex* è negativo.)  
  
### <a name="remarks"></a>Note  
 Avviare un'analisi sequenza dall'inizio dell'elenco, arresto nel *n*elemento th.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::FindIndex`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSIZIONE FindIndex (INT_PTR** `nIndex` **) const;**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSIZIONE FindIndex (INT_PTR** `nIndex` **) const;**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](#coblist) per un elenco del `CAge` classe.  
  
 [!code-cpp[NVC_MFCCollections#94](../../mfc/codesnippet/cpp/coblist-class_6.cpp)]  
  
##  <a name="getat"></a>  CObList::GetAt  
 Una variabile di tipo di posizione è una chiave per l'elenco.  
  
```  
CObject*& GetAt(POSITION position);  
const CObject*& GetAt(POSITION position) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *posizione*  
 Un valore di posizione restituito da una precedente `GetHeadPosition` o `Find` chiamata di funzione membro.  
  
### <a name="return-value"></a>Valore restituito  
 Vedere la descrizione del valore restituito di [GetHead](#gethead).  
  
### <a name="remarks"></a>Note  
 Non è quello utilizzato per un indice e non è possibile operare su un valore di posizione manualmente. `GetAt` Recupera il `CObject` puntatore associato a una determinata posizione.  
  
 È necessario assicurarsi che il valore di posizione rappresenta una posizione valida nell'elenco. Se non è valido, quindi asserisce la versione di Debug della libreria di classi Microsoft Foundation.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::GetAt`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**const void\*& GetAt (posizione** *posizione* **) const;**<br /><br /> **void\*& GetAt (posizione** *posizione* **);**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**CString const & GetAt (posizione** *posizione* **) const;**<br /><br /> **CString & GetAt (posizione** *posizione* **);**|  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [FindIndex](#findindex).  
  
##  <a name="getcount"></a>  CObList::GetCount  
 Ottiene il numero di elementi in questo elenco.  
  
```  
INT_PTR GetCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore integer contenente il numero di elementi.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::GetCount`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**() GetCount INT_PTR const.**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**() GetCount INT_PTR const.**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](#coblist) per un elenco del `CAge` classe.  
  
 [!code-cpp[NVC_MFCCollections#95](../../mfc/codesnippet/cpp/coblist-class_7.cpp)]  
  
##  <a name="gethead"></a>  CObList::GetHead  
 Ottiene il `CObject` puntatore che rappresenta l'elemento head dell'elenco.  
  
```  
CObject*& GetHead();  
const CObject*& GetHead() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se l'elenco è accessibile tramite un puntatore a un `const CObList`, quindi `GetHead` restituisce un `CObject` puntatore. In questo modo la funzione può essere utilizzato solo sul lato destro di un'istruzione di assegnazione e quindi protegge l'elenco dalle modifiche.  
  
 Se l'elenco è possibile accedere direttamente o tramite un puntatore a un `CObList`, quindi `GetHead` restituisce un riferimento a un `CObject` puntatore. Questo modo la funzione deve essere utilizzata in entrambi i lati di un'istruzione di assegnazione e pertanto le voci dell'elenco da modificare.  
  
### <a name="remarks"></a>Note  
 È necessario assicurarsi che l'elenco non sia vuota prima di chiamare `GetHead`. Se l'elenco è vuoto, quindi asserisce la versione di Debug della libreria di classi Microsoft Foundation. Uso [IsEmpty](#isempty) per verificare che l'elenco contiene gli elementi.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::GetHead`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**const void\*& GetHead () const; void\*& GetHead ();**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**const CString & GetHead () const; CString & GetHead ();**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](#coblist) per un elenco del `CAge` classe.  
  
 Nell'esempio seguente viene illustrato l'utilizzo di `GetHead` sul lato sinistro di un'istruzione di assegnazione.  
  
 [!code-cpp[NVC_MFCCollections#96](../../mfc/codesnippet/cpp/coblist-class_8.cpp)]  
  
##  <a name="getheadposition"></a>  CObList::GetHeadPosition  
 Ottiene la posizione dell'elemento head dell'elenco.  
  
```  
POSITION GetHeadPosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di posizione che può essere utilizzato per iterazione o il recupero di puntatore a oggetto; NULL se l'elenco è vuoto.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::GetHeadPosition`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSIZIONARE GetHeadPosition () const;**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSIZIONARE GetHeadPosition () const;**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](#coblist) per un elenco del `CAge` classe.  
  
 [!code-cpp[NVC_MFCCollections#97](../../mfc/codesnippet/cpp/coblist-class_9.cpp)]  
  
##  <a name="getnext"></a>  CObList::GetNext  
 Ottiene l'elemento di elenco identificato da *rPosition*, quindi imposta *rPosition* per il `POSITION` valore della voce successiva nell'elenco.  
  
```  
CObject*& GetNext(POSITION& rPosition);  
const CObject* GetNext(POSITION& rPosition) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *rPosition.*  
 Un riferimento a un valore di posizione restituito da una precedente `GetNext`, `GetHeadPosition`, o un'altra chiamata di funzione membro.  
  
### <a name="return-value"></a>Valore restituito  
 Vedere la descrizione del valore restituito di [GetHead](#gethead).  
  
### <a name="remarks"></a>Note  
 È possibile usare `GetNext` in un ciclo di iterazione in avanti se si stabilisce la posizione iniziale con una chiamata a `GetHeadPosition` o `Find`.  
  
 È necessario assicurarsi che il valore di posizione rappresenta una posizione valida nell'elenco. Se non è valido, quindi asserisce la versione di Debug della libreria di classi Microsoft Foundation.  
  
 Se l'elemento recuperato è l'ultimo nell'elenco, quindi il nuovo valore della *rPosition* è impostato su NULL.  
  
 È possibile rimuovere un elemento durante un'iterazione. Vedere l'esempio relativo [RemoveAt](#removeat).  
  
> [!NOTE]
>  A partire da MFC 8.0 la versione const di questo metodo è stato modificato per restituire `const CObject*` invece di `const CObject*&`.  Questa modifica è stata apportata per rendere il compilatore della conformità allo standard C++.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::GetNext`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|`void*& GetNext( POSITION&` `rPosition` `);`<br /><br /> `const void* GetNext( POSITION&` `rPosition` `) const;`|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|`CString& GetNext( POSITION&` `rPosition` `);`<br /><br /> `const CString& GetNext( POSITION&` `rPosition` `) const;`|  
  
### <a name="example"></a>Esempio  
  Visualizzare [CObList:: CObList](#coblist) per un elenco del `CAge` classe.  
  
 [!code-cpp[NVC_MFCCollections#98](../../mfc/codesnippet/cpp/coblist-class_10.cpp)]  
  
 I risultati di questo programma sono come segue:  
  
```Output
a CAge at $479C 40
a CAge at $46C0 21
```
  
##  <a name="getprev"></a>  CObList::GetPrev  
 Ottiene l'elemento di elenco identificato da *rPosition*, quindi imposta *rPosition* sul valore di posizione della voce nell'elenco precedente.  
  
```  
CObject*& GetPrev(POSITION& rPosition);  
const CObject* GetPrev(POSITION& rPosition) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *rPosition.*  
 Un riferimento a un valore di posizione restituito da una precedente `GetPrev` o un'altra chiamata di funzione membro.  
  
### <a name="return-value"></a>Valore restituito  
 Vedere la descrizione del valore restituito di [GetHead](#gethead).  
  
### <a name="remarks"></a>Note  
 È possibile usare `GetPrev` in un ciclo di iterazione inversa se si stabilisce la posizione iniziale con una chiamata a `GetTailPosition` o `Find`.  
  
 È necessario assicurarsi che il valore di posizione rappresenta una posizione valida nell'elenco. Se non è valido, quindi asserisce la versione di Debug della libreria di classi Microsoft Foundation.  
  
 Se l'elemento recuperato è il primo nell'elenco, quindi il nuovo valore della *rPosition* è impostato su NULL.  
  
> [!NOTE]
>  A partire da MFC 8.0 la versione const di questo metodo è stato modificato per restituire `const CObject*` invece di `const CObject*&`.  Questa modifica è stata apportata per rendere il compilatore della conformità allo standard C++.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::GetPrev`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|`void*& GetPrev( POSITION&` `rPosition` `);`<br /><br /> `const void* GetPrev( POSITION&` `rPosition` `) const;`|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|`CString& GetPrev( POSITION&` `rPosition` `);`<br /><br /> `const CString& GetPrev( POSITION&` `rPosition` `) const;`|  
  
### <a name="example"></a>Esempio  
  Visualizzare [CObList:: CObList](#coblist) per un elenco del `CAge` classe.  
  
 [!code-cpp[NVC_MFCCollections#99](../../mfc/codesnippet/cpp/coblist-class_11.cpp)]  
  
 I risultati di questo programma sono come segue:  
  
```Output
a CAge at $421C 21
a CAge at $421C 40
```
  
##  <a name="getsize"></a>  CObList::GetSize  
 Restituisce il numero di elementi dell'elenco.  
  
```  
INT_PTR GetSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi nell'elenco.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per recuperare il numero di elementi nell'elenco.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::GetSize`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**() GetSize INT_PTR const.**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**() GetSize INT_PTR const.**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](#coblist) per un elenco del `CAge` classe.  
  
 [!code-cpp[NVC_MFCCollections#100](../../mfc/codesnippet/cpp/coblist-class_12.cpp)]  
  
##  <a name="gettail"></a>  CObList::GetTail  
 Ottiene il `CObject` puntatore che rappresenta l'elemento della parte finale di questo elenco.  
  
```  
CObject*& GetTail();  
const CObject*& GetTail() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Vedere la descrizione del valore restituito di [GetHead](#gethead).  
  
### <a name="remarks"></a>Note  
 È necessario assicurarsi che l'elenco non sia vuota prima di chiamare `GetTail`. Se l'elenco è vuoto, quindi asserisce la versione di Debug della libreria di classi Microsoft Foundation. Uso [IsEmpty](#isempty) per verificare che l'elenco contiene gli elementi.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::GetTail`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**const void\*& GetTail () const; void\*& GetTail ();**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**const CString & GetTail () const; CString & GetTail ();**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](#coblist) per un elenco del `CAge` classe.  
  
 [!code-cpp[NVC_MFCCollections#101](../../mfc/codesnippet/cpp/coblist-class_13.cpp)]  
  
##  <a name="gettailposition"></a>  CObList::GetTailPosition  
 Ottiene la posizione dell'elemento della parte finale di questo elenco. **NULL** se l'elenco è vuoto.  
  
```  
POSITION GetTailPosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di posizione che può essere utilizzato per iterazione o il recupero di puntatore a oggetto; NULL se l'elenco è vuoto.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::GetTailPosition`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSIZIONARE GetTailPosition () const;**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSIZIONARE GetTailPosition () const;**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](#coblist) per un elenco del `CAge` classe.  
  
 [!code-cpp[NVC_MFCCollections#102](../../mfc/codesnippet/cpp/coblist-class_14.cpp)]  
  
##  <a name="insertafter"></a>  CObList::InsertAfter  
 Aggiunge un elemento all'elenco dopo l'elemento in corrispondenza della posizione specificata.  
  
```  
POSITION InsertAfter(
    POSITION position,  
    CObject* newElement);
```  
  
### <a name="parameters"></a>Parametri  
 *posizione*  
 Un valore di posizione restituito da una precedente `GetNext`, `GetPrev`, o `Find` chiamata di funzione membro.  
  
 *newElement*  
 Il puntatore all'oggetto da aggiungere a questo elenco.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::InsertAfter`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSIZIONE InsertAfter (posizione** *posizione* **, void** <strong>\*</strong> `newElement` **);**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSIZIONE InsertAfter (posizione** *posizione* **, CString const &** `newElement` **);**<br /><br /> **POSIZIONE InsertAfter (posizione** *posizione* **, LPCTSTR** `newElement` **);**|  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di posizione che è lo stesso come il *posizione* parametro.  
  
### <a name="example"></a>Esempio  
  Visualizzare [CObList:: CObList](#coblist) per un elenco del `CAge` classe.  
  
 [!code-cpp[NVC_MFCCollections#103](../../mfc/codesnippet/cpp/coblist-class_15.cpp)]  
  
 I risultati di questo programma sono come segue:  
  
```Output
InsertAfter example: A CObList with 3 elements
a CAge at $4A44 40
a CAge at $4A64 65
a CAge at $4968 21
```
  
##  <a name="insertbefore"></a>  CObList::InsertBefore  
 Aggiunge un elemento all'elenco prima dell'elemento nella posizione specificata.  
  
```  
POSITION InsertBefore(
    POSITION position,  
    CObject* newElement);
```  
  
### <a name="parameters"></a>Parametri  
 *posizione*  
 Un valore di posizione restituito da una precedente `GetNext`, `GetPrev`, o `Find` chiamata di funzione membro.  
  
 *newElement*  
 Il puntatore all'oggetto da aggiungere a questo elenco.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di posizione che può essere utilizzato per iterazione o il recupero di puntatore a oggetto; NULL se l'elenco è vuoto.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::InsertBefore`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSIZIONE InsertBefore (posizione** *posizione* **, void** <strong>\*</strong> `newElement` **);**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSIZIONE InsertBefore (posizione** *posizione* **, CString const &** `newElement` **);**<br /><br /> **POSIZIONE InsertBefore (posizione** *posizione* **, LPCTSTR** `newElement` **);**|  
  
### <a name="example"></a>Esempio  
  Visualizzare [CObList:: CObList](#coblist) per un elenco del `CAge` classe.  
  
 [!code-cpp[NVC_MFCCollections#104](../../mfc/codesnippet/cpp/coblist-class_16.cpp)]  
  
 I risultati di questo programma sono come segue:  
  
```Output
InsertBefore example: A CObList with 3 elements
a CAge at $4AE2 40
a CAge at $4B02 65
a CAge at $49E6 21
```
  
##  <a name="isempty"></a>  CObList::IsEmpty  
 Indica se questo elenco non contiene elementi.  
  
```  
BOOL IsEmpty() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se questo elenco è vuoto. in caso contrario 0.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::IsEmpty`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**IsEmpty BOOL () const;**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**IsEmpty BOOL () const;**|  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [RemoveAll](#removeall).  
  
##  <a name="removeall"></a>  CObList::RemoveAll  
 Rimuove tutti gli elementi da questo elenco e libera associato `CObList` memoria.  
  
```  
void RemoveAll();
```  
  
### <a name="remarks"></a>Note  
 Se l'elenco è vuoto, viene generato alcun errore.  
  
 Quando si rimuovono elementi da un `CObList`, i puntatori a oggetti rimuovere dall'elenco. È responsabilità dell'utente per eliminare gli oggetti stessi.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::RemoveAll`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**void RemoveAll( );**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**void RemoveAll( );**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](#coblist) per un elenco del `CAge` classe.  
  
 [!code-cpp[NVC_MFCCollections#105](../../mfc/codesnippet/cpp/coblist-class_17.cpp)]  
  
##  <a name="removeat"></a>  CObList::RemoveAt  
 Rimuove l'elemento specificato da questo elenco.  
  
```  
void RemoveAt(POSITION position);
```  
  
### <a name="parameters"></a>Parametri  
 *posizione*  
 La posizione dell'elemento da rimuovere dall'elenco.  
  
### <a name="remarks"></a>Note  
 Quando si rimuove un elemento da un `CObList`, è rimuovere il puntatore all'oggetto nell'elenco. È responsabilità dell'utente per eliminare gli oggetti stessi.  
  
 È necessario assicurarsi che il valore di posizione rappresenta una posizione valida nell'elenco. Se non è valido, quindi asserisce la versione di Debug della libreria di classi Microsoft Foundation.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::RemoveAt`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**void RemoveAt (posizione** *posizione* **);**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**void RemoveAt (posizione** *posizione* **);**|  
  
### <a name="example"></a>Esempio  
  Prestare attenzione quando si rimuove un elemento durante un'iterazione dell'elenco. L'esempio seguente illustra una tecnica di rimozione che garantisce un oggetto valido **posizione** affare [GetNext](#getnext).  
  
 Visualizzare [CObList:: CObList](#coblist) per un elenco del `CAge` classe.  
  
 [!code-cpp[NVC_MFCCollections#106](../../mfc/codesnippet/cpp/coblist-class_18.cpp)]  
  
 I risultati di questo programma sono come segue:  
  
 `RemoveAt example: A CObList with 2 elements`  
  
 `a CAge at $4C1E 65`  
  
 `a CAge at $4B22 21`  
  
##  <a name="removehead"></a>  CObList::RemoveHead  
 Rimuove l'elemento dall'inizio dell'elenco e restituisce un puntatore a esso.  
  
```  
CObject* RemoveHead();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il `CObject` puntatore precedentemente all'inizio dell'elenco.  
  
### <a name="remarks"></a>Note  
 È necessario assicurarsi che l'elenco non sia vuota prima di chiamare `RemoveHead`. Se l'elenco è vuoto, quindi asserisce la versione di Debug della libreria di classi Microsoft Foundation. Uso [IsEmpty](#isempty) per verificare che l'elenco contiene gli elementi.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::RemoveHead`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**void\* RemoveHead ();**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**CString RemoveHead ();**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](#coblist) per un elenco del `CAge` classe.  
  
 [!code-cpp[NVC_MFCCollections#107](../../mfc/codesnippet/cpp/coblist-class_19.cpp)]  
  
##  <a name="removetail"></a>  CObList::RemoveTail  
 Rimuove l'elemento dalla parte finale dell'elenco e restituisce un puntatore a esso.  
  
```  
CObject* RemoveTail();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'oggetto che era nella fase finale dell'elenco.  
  
### <a name="remarks"></a>Note  
 È necessario assicurarsi che l'elenco non sia vuota prima di chiamare `RemoveTail`. Se l'elenco è vuoto, quindi asserisce la versione di Debug della libreria di classi Microsoft Foundation. Uso [IsEmpty](#isempty) per verificare che l'elenco contiene gli elementi.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::RemoveTail`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**void\* RemoveTail ();**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**CString RemoveTail ();**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](#coblist) per un elenco del `CAge` classe.  
  
 [!code-cpp[NVC_MFCCollections#108](../../mfc/codesnippet/cpp/coblist-class_20.cpp)]  
  
##  <a name="setat"></a>  CObList::SetAt  
 Imposta l'elemento in una determinata posizione.  
  
```  
void SetAt(
    POSITION pos,  
    CObject* newElement);
```  
  
### <a name="parameters"></a>Parametri  
 *POS*  
 La posizione dell'elemento da impostare.  
  
 *newElement*  
 Il `CObject` puntatore deve essere scritto all'elenco.  
  
### <a name="remarks"></a>Note  
 Una variabile di tipo di posizione è una chiave per l'elenco. Non è quello utilizzato per un indice e non è possibile operare su un valore di posizione manualmente. `SetAt` Scrive il `CObject` puntatore nella posizione specificata nell'elenco.  
  
 È necessario assicurarsi che il valore di posizione rappresenta una posizione valida nell'elenco. Se non è valido, quindi asserisce la versione di Debug della libreria di classi Microsoft Foundation.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObList::SetAt`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**void SetAt (posizione** `pos` **, CString const &** `newElement` **);**|  
|[CStringList](../../mfc/reference/cstringlist-class.md)|**void SetAt (posizione** `pos` **, LPCTSTR** `newElement` **);**|  
  
### <a name="example"></a>Esempio  
  Visualizzare [CObList:: CObList](#coblist) per un elenco del `CAge` classe.  
  
 [!code-cpp[NVC_MFCCollections#109](../../mfc/codesnippet/cpp/coblist-class_21.cpp)]  
  
 I risultati di questo programma sono come segue:  
  
```Output
SetAt example: A CObList with 2 elements
a CAge at $4D98 40
a CAge at $4DB8 65
```
  
## <a name="see-also"></a>Vedere anche  
 [Classe CObject](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CStringList](../../mfc/reference/cstringlist-class.md)   
 [Classe CPtrList](../../mfc/reference/cptrlist-class.md)
