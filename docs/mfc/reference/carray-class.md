---
title: CArray (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CArray
dev_langs:
- C++
helpviewer_keywords:
- CArray class
- arrays [C++], classes
- templates, collection classes
- collection classes, template-based
ms.assetid: fead8b00-4cfd-4625-ad0e-251df62ba92f
caps.latest.revision: 33
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
ms.openlocfilehash: bac8e08540ffead565d1097c6ef1efcae5e606c2
ms.lasthandoff: 02/24/2017

---
# <a name="carray-class"></a>CArray (classe)
Supporta matrici che sono simili a matrici del linguaggio C, ma possono dinamicamente ridurre e ingrandire in base alle esigenze.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class TYPE, class ARG_TYPE = const TYPE&>  
class CArray : public CObject  
```  
  
#### <a name="parameters"></a>Parametri  
 `TYPE`  
 Parametro di modello che specifica il tipo degli oggetti archiviati nella matrice. `TYPE`è un parametro restituito da `CArray`.  
  
 `ARG` *_* `TYPE`  
 Parametro modello che specifica il tipo di argomento che viene utilizzato per accedere agli oggetti memorizzati nella matrice. Spesso un riferimento a `TYPE`. `ARG_TYPE`è un parametro che viene passato a `CArray`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CArray::CArray](#carray)|Costruisce una matrice vuota.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CArray::Add](#add)|Aggiunge un elemento alla fine della matrice; se necessario, aumenta le dimensioni della matrice.|  
|[CArray:: Append](#append)|Accoda alla matrice un'altra matrice; aumenta la matrice, se necessario|  
|[CArray:: Copy](#copy)|Copia nella matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|  
|[CArray::ElementAt](#elementat)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|  
|[CArray::FreeExtra](#freeextra)|Libera tutta la memoria non utilizzata oltre limite il superiore corrente.|  
|[CArray::GetAt](#getat)|Restituisce il valore in corrispondenza di un indice specificato.|  
|[CArray::GetCount](#getcount)|Ottiene il numero di elementi nella matrice.|  
|[CArray::GetData](#getdata)|Consente l'accesso a tutti gli elementi nella matrice. Può essere **NULL**.|  
|[CArray::GetSize](#getsize)|Ottiene il numero di elementi nella matrice.|  
|[CArray::GetUpperBound](#getupperbound)|Restituisce il massimo indice valido.|  
|[CArray::InsertAt](#insertat)|Inserisce un elemento (o tutti gli elementi di un'altra matrice) in corrispondenza di un indice specificato.|  
|[CArray::IsEmpty](#isempty)|Determina se la matrice è vuota.|  
|[CArray::RemoveAll](#removeall)|Rimuove tutti gli elementi dalla matrice.|  
|[CArray::RemoveAt](#removeat)|Rimuove un elemento in corrispondenza di un indice specificato.|  
|[CArray::SetAt](#setat)|Imposta il valore per un indice specificato; l'aumento di dimensioni della matrice non è consentito.|  
|[CArray::SetAtGrow](#setatgrow)|Imposta il valore per un indice specificato; se necessario, aumenta le dimensioni della matrice.|  
|[CArray](#setsize)|Imposta il numero di elementi che la matrice deve contenere.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operator&#91;&#93;](#operator_at)|Imposta o ottiene l'elemento in corrispondenza dell'indice specificato.|  
  
## <a name="remarks"></a>Note  
 Gli indici di matrice iniziano sempre dalla posizione 0. È possibile decidere se correggere il limite superiore o abilitare la matrice espandere quando si aggiungono elementi di associazione corrente. Memoria viene allocata in modo contiguo al limite massimo, anche se alcuni elementi sono null.  
  
> [!NOTE]
>  La maggior parte dei metodi che ridimensionano un `CArray` dell'oggetto o aggiungere elementi a esso utilizzano [memcpy_s](../../c-runtime-library/reference/memcpy-s-wmemcpy-s.md) quale spostare gli elementi. Questo è un problema perché `memcpy_s` non è compatibile con tutti gli oggetti che richiedono il costruttore da chiamare. Se gli elementi di `CArray` non sono compatibili con `memcpy_s`, è necessario creare un nuovo `CArray` della dimensione appropriata. È quindi necessario utilizzare [CArray:: Copy](#copy) e [CArray::SetAt](#setat) per popolare la nuova matrice poiché questi metodi utilizzano un operatore di assegnazione anziché `memcpy_s`.  
  
 Come con una matrice di C, il tempo di accesso per un `CArray` elemento indicizzato è costante e indipendente delle dimensioni della matrice.  
  
> [!TIP]
>  Prima di utilizzare una matrice, utilizzare [SetSize](#setsize) per determinarne le dimensioni e allocare memoria. Se non si usa `SetSize`, l'aggiunta di elementi alla matrice ne causa la riallocazione e la copia frequente. Le operazioni di riallocazione e copia frequenti sono inefficienti e possono frammentare la memoria.  
  
 Se è necessario un dump di singoli elementi in una matrice, è necessario impostare la profondità del [CDumpContext](../../mfc/reference/cdumpcontext-class.md) su 1 o maggiore.  
  
 Alcune funzioni membro di questa classe chiamano funzioni di supporto globale che devono essere personalizzati per la maggior parte dei casi della `CArray` classe. Vedere l'argomento [classi Collection](../../mfc/reference/collection-class-helpers.md) nella sezione delle macro MFC e funzioni globali.  
  
 Derivazione di classi di matrice è simile all'elenco derivazione.  
  
 Per ulteriori informazioni su come usare `CArray`, vedere l'articolo [raccolte](../../mfc/collections.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CArray`  
  
## <a name="requirements"></a>Requisiti  
 `Header:`afxtempl. h  
  
##  <a name="a-nameadda--carrayadd"></a><a name="add"></a>CArray::Add  
 Aggiunge un nuovo elemento alla fine di una matrice, aumenta la matrice di 1.  
  
```  
INT_PTR Add(ARG_TYPE newElement);
```  
  
### <a name="parameters"></a>Parametri  
 `ARG_TYPE`  
 Parametro di modello che specifica il tipo di riferimento a elementi nella matrice di argomenti.  
  
 `newElement`  
 L'elemento da aggiungere a questa matrice.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'elemento aggiunto.  
  
### <a name="remarks"></a>Note  
 Se [SetSize](#setsize) è stato utilizzato con un `nGrowBy` valore maggiore di 1, allora la memoria aggiuntiva può essere allocata. Tuttavia, il limite superiore aumenterà di solo 1.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections&#22;](../../mfc/codesnippet/cpp/carray-class_1.cpp)]  
  
##  <a name="a-nameappenda--carrayappend"></a><a name="append"></a>CArray:: Append  
 Chiamare questa funzione membro per aggiungere il contenuto di una matrice alla fine di un altro.  
  
```  
INT_PTR Append(const CArray& src);
```  
  
### <a name="parameters"></a>Parametri  
 *src*  
 Origine degli elementi da aggiungere alla matrice.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice del primo elemento aggiunto.  
  
### <a name="remarks"></a>Note  
 Le matrici devono essere dello stesso tipo.  
  
 Se necessario, **Append** potrebbe allocare memoria aggiuntiva per contenere gli elementi aggiunti alla matrice.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections&#23;](../../mfc/codesnippet/cpp/carray-class_2.cpp)]  
  
##  <a name="a-namecarraya--carraycarray"></a><a name="carray"></a>CArray::CArray  
 Costruisce una matrice vuota.  
  
```  
CArray();
```  
  
### <a name="remarks"></a>Note  
 La matrice si espande un elemento alla volta.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections&#24;](../../mfc/codesnippet/cpp/carray-class_3.cpp)]  
  
##  <a name="a-namecopya--carraycopy"></a><a name="copy"></a>CArray:: Copy  
 Utilizzare questa funzione membro per copiare gli elementi di una matrice a un altro.  
  
```  
void Copy(const CArray& src);
```  
  
### <a name="parameters"></a>Parametri  
 *src*  
 Origine degli elementi da copiare in una matrice.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro per sovrascrivere gli elementi di una matrice con gli elementi di un'altra matrice.  
  
 **Copia** non libera la memoria; tuttavia, se necessario, **copia** potrebbe allocare memoria aggiuntiva per contenere gli elementi copiati nella matrice.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections&#25;](../../mfc/codesnippet/cpp/carray-class_4.cpp)]  
  
##  <a name="a-nameelementata--carrayelementat"></a><a name="elementat"></a>CArray::ElementAt  
 Restituisce un riferimento temporaneo per l'elemento specificato all'interno della matrice.  
  
```  
TYPE& ElementAt(INT_PTR nIndex);  
const TYPE& ElementAt(INT_PTR nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Un indice intero maggiore o uguale a 0 e minore o uguale al valore restituito da [GetUpperBound](#getupperbound).  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a un elemento di matrice.  
  
### <a name="remarks"></a>Note  
 Viene utilizzato per implementare l'operatore di assegnazione a sinistra per le matrici.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [GetSize](#getsize).  
  
##  <a name="a-namefreeextraa--carrayfreeextra"></a><a name="freeextra"></a>CArray::FreeExtra  
 Consente di liberare memoria aggiuntiva allocata mentre la matrice è stata aumentata.  
  
```  
void FreeExtra();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione non ha effetto sulla dimensione o limite superiore della matrice.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [GetData](#getdata).  
  
##  <a name="a-namegetata--carraygetat"></a><a name="getat"></a>CArray::GetAt  
 Restituisce l'elemento di matrice in corrispondenza dell'indice specificato.  
  
```  
TYPE& GetAt(INT_PTR nIndex);  
const TYPE& GetAt(INT_PTR nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro di modello che specifica il tipo degli elementi della matrice.  
  
 `nIndex`  
 Un indice intero maggiore o uguale a 0 e minore o uguale al valore restituito da [GetUpperBound](#getupperbound).  
  
### <a name="return-value"></a>Valore restituito  
 Elemento della matrice attualmente in questo indice.  
  
### <a name="remarks"></a>Note  
 Passando un valore negativo o un valore maggiore del valore restituito da `GetUpperBound` comporterà un'asserzione non riuscita.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#26; NVC_MFCCollections](../../mfc/codesnippet/cpp/carray-class_5.cpp)]  
  
##  <a name="a-namegetcounta--carraygetcount"></a><a name="getcount"></a>CArray::GetCount  
 Restituisce il numero di elementi della matrice.  
  
```  
INT_PTR GetCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi nella matrice.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per recuperare il numero di elementi nella matrice. Poiché gli indici sono a base zero, la dimensione è maggiore dell'indice più grande di 1. Questo metodo genera lo stesso risultato di [CArray::GetSize](#getsize) metodo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections&#27;](../../mfc/codesnippet/cpp/carray-class_6.cpp)]  
  
##  <a name="a-namegetdataa--carraygetdata"></a><a name="getdata"></a>CArray::GetData  
 Utilizzare questa funzione membro per ottenere l'accesso diretto agli elementi in una matrice.  
  
```  
const TYPE* GetData() const; 
TYPE* GetData();
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro di modello che specifica il tipo degli elementi della matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un elemento di matrice.  
  
### <a name="remarks"></a>Note  
 Se sono presenti elementi disponibili, `GetData` restituisce un valore null.  
  
 Durante l'accesso diretto agli elementi della matrice consentono di lavorare più rapidamente, prestare attenzione quando si chiama `GetData`; gli eventuali errori apportate direttamente interessano gli elementi della matrice.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[28 NVC_MFCCollections](../../mfc/codesnippet/cpp/carray-class_7.cpp)]  
  
##  <a name="a-namegetsizea--carraygetsize"></a><a name="getsize"></a>CArray::GetSize  
 Restituisce la dimensione della matrice.  
  
```  
INT_PTR GetSize() const;  
```  
  
### <a name="remarks"></a>Note  
 Poiché gli indici sono a base zero, la dimensione è maggiore dell'indice più grande di 1. Questo metodo genera lo stesso risultato di [CArray::GetCount](#getcount) metodo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections&#29;](../../mfc/codesnippet/cpp/carray-class_8.cpp)]  
  
##  <a name="a-namegetupperbounda--carraygetupperbound"></a><a name="getupperbound"></a>CArray::GetUpperBound  
 Restituisce il limite corrente di questa matrice.  
  
```  
INT_PTR GetUpperBound() const;  
```  
  
### <a name="remarks"></a>Note  
 Poiché gli indici di matrice in base zero, questa funzione restituisce un valore 1 meno `GetSize`.  
  
 La condizione **() GetUpperBound** = -1 indica che la matrice non contiene elementi.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CArray::GetAt](#getat).  
  
##  <a name="a-nameinsertata--carrayinsertat"></a><a name="insertat"></a>CArray::InsertAt  
 La prima versione di `InsertAt` inserisce un elemento (o più copie di un elemento) in corrispondenza dell'indice specificato in una matrice.  
  
```  
void InsertAt(
    INT_PTR nIndex,
    ARG_TYPE newElement,  
    INT_PTR nCount = 1);
 
void InsertAt(
    INT_PTR nStartIndex,  
    CArray* pNewArray);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Un indice intero che può essere maggiore del valore restituito da `GetUpperBound`.  
  
 `ARG_TYPE`  
 Parametro di modello che specifica il tipo di elementi nella matrice.  
  
 `newElement`  
 L'elemento da inserire nella matrice.  
  
 `nCount`  
 Il numero di volte in cui che questo elemento deve essere inserito (valore predefinito è 1).  
  
 `nStartIndex`  
 Un indice intero che può essere maggiore del valore restituito da [GetUpperBound](#getupperbound).  
  
 `pNewArray`  
 Un'altra matrice che contiene gli elementi da aggiungere a questa matrice.  
  
### <a name="remarks"></a>Note  
 Nel processo di passa (incrementando l'indice) viene spostato l'elemento esistente in questo indice e tutti gli elementi sopra di esso.  
  
 La seconda versione inserisce tutti gli elementi da un altro `CArray` insieme, a partire la `nStartIndex` posizione.  
  
 Il `SetAt` funzione, al contrario, sostituisce un elemento di matrice specificato e non spostare tutti gli elementi.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#30; NVC_MFCCollections](../../mfc/codesnippet/cpp/carray-class_9.cpp)]  
  
##  <a name="a-nameisemptya--carrayisempty"></a><a name="isempty"></a>CArray::IsEmpty  
 Determina se la matrice è vuota.  
  
```  
BOOL IsEmpty() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la matrice non contiene elementi; in caso contrario 0.  
  
##  <a name="a-nameoperatorata--carrayoperator-"></a><a name="operator_at"></a>CArray::operator\[\]  
 Questi operatori di indice sono un sostituto utile per la [SetAt](#setat) e [GetAt](#getat) funzioni.  
  
```  
TYPE& operator[](int_ptr nindex);  
const TYPE& operator[](int_ptr nindex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro di modello che specifica il tipo di elementi nella matrice.  
  
 `nIndex`  
 Indice dell'elemento a cui accedere.  
  
### <a name="remarks"></a>Note  
 Il primo operatore, chiamato per le matrici non **const**, può essere utilizzata in destra (r-value) o a sinistra (l-value) di un'istruzione di assegnazione. La seconda chiamata per **const** matrici, può essere utilizzato solo a destra.  
  
 La versione di Debug della libreria indica se l'indice (in base a sinistra o destra di un'istruzione di assegnazione) è compreso nell'intervallo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections&#34;](../../mfc/codesnippet/cpp/carray-class_10.cpp)]  
  
##  <a name="a-namerelocateelementsa--carrayrelocateelements"></a><a name="relocateelements"></a>CArray::RelocateElements  
 Consente di spostare dati in un nuovo buffer quando la matrice deve aumentare o ridurre.  
  
```  
template<class TYPE, class ARG_TYPE>  
AFX_INLINE void CArray<TYPE, ARG_TYPE>::RelocateElements(
    TYPE* pNewData,  
    const TYPE* pData,  
    INT_PTR nCount);
```  
  
### <a name="parameters"></a>Parametri  
 `pNewData`  
 Un nuovo buffer per la matrice di elementi.  
  
 `pData`  
 Matrice di elementi precedente.  
  
 `nCount`  
 Numero di elementi nella matrice precedente.  
  
### <a name="remarks"></a>Note  
 `pNewData`è sempre sufficientemente grande da contenere tutti i `pData` elementi.  
  
 Il [CArray](../../mfc/reference/carray-class.md) implementazione utilizza questo metodo per copiare i vecchi dati di un nuovo buffer quando la matrice deve aumentare o ridurre (quando [SetSize](#setsize) o [FreeExtra](#freeextra) vengono chiamati). L'implementazione predefinita copia solo i dati.  
  
 Per le matrici in cui un elemento contiene un puntatore a uno dei propri membri o un'altra struttura contiene un puntatore a uno degli elementi della matrice, i puntatori non vengono aggiornati in normale copia. In questo caso, è possibile correggere i puntatori implementando una specializzazione di `RelocateElements` con i relativi tipi. È inoltre responsabile per la copia dei dati.  
  
##  <a name="a-nameremovealla--carrayremoveall"></a><a name="removeall"></a>CArray::RemoveAll  
 Rimuove tutti gli elementi dalla matrice.  
  
```  
void RemoveAll();
```  
  
### <a name="remarks"></a>Note  
 Se la matrice è vuota, la funzione continui a funzionare.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections&#31;](../../mfc/codesnippet/cpp/carray-class_11.cpp)]  
  
##  <a name="a-nameremoveata--carrayremoveat"></a><a name="removeat"></a>CArray::RemoveAt  
 Rimuove uno o più elementi a partire da un indice specificato nella matrice.  
  
```  
void RemoveAt(
    INT_PTR nIndex,  
    INT_PTR nCount = 1);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Un indice intero maggiore o uguale a 0 e minore o uguale al valore restituito da [GetUpperBound](#getupperbound).  
  
 `nCount`  
 Numero di elementi da rimuovere.  
  
### <a name="remarks"></a>Note  
 Nel processo, viene spostato verso il basso tutti gli elementi sopra gli elementi rimossi. Si decrementa superiore associato della matrice, ma non viene liberata memoria.  
  
 Se si tenta di rimuovere più elementi che sono contenuti nella matrice sopra il punto di rimozione, la versione di Debug della libreria di asserzioni.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections n.&32;](../../mfc/codesnippet/cpp/carray-class_12.cpp)]  
  
##  <a name="a-namesetata--carraysetat"></a><a name="setat"></a>CArray::SetAt  
 Imposta l'elemento della matrice in corrispondenza dell'indice specificato.  
  
```  
void SetAt(INT_PTR nIndex, ARG_TYPE newElement);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Un indice intero maggiore o uguale a 0 e minore o uguale al valore restituito da [GetUpperBound](#getupperbound).  
  
 `ARG_TYPE`  
 Parametro di modello che specifica il tipo di argomenti utilizzati per fare riferimento a elementi di matrice.  
  
 `newElement`  
 Il nuovo valore dell'elemento da archiviare nella posizione specificata.  
  
### <a name="remarks"></a>Note  
 `SetAt`non comporterà la matrice a crescere. Utilizzare [SetAtGrow](#setatgrow) se si desidera che la matrice di aumento automatico delle dimensioni.  
  
 È necessario assicurarsi che il valore di indice rappresenta una valida posizione nella matrice. Se è compreso nell'intervallo, la versione di Debug della libreria di asserzioni.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [GetAt](#getat).  
  
##  <a name="a-namesetatgrowa--carraysetatgrow"></a><a name="setatgrow"></a>CArray::SetAtGrow  
 Imposta l'elemento della matrice in corrispondenza dell'indice specificato.  
  
```  
void SetAtGrow(INT_PTR nIndex, ARG_TYPE newElement);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Un indice intero maggiore o uguale a 0.  
  
 `ARG_TYPE`  
 Parametro di modello che specifica il tipo di elementi nella matrice.  
  
 `newElement`  
 L'elemento da aggiungere a questa matrice. Oggetto **NULL** il valore è consentito.  
  
### <a name="remarks"></a>Note  
 La matrice si espande automaticamente se necessario (vale a dire il limite superiore viene regolato per inserire il nuovo elemento).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections n.&33;](../../mfc/codesnippet/cpp/carray-class_13.cpp)]  
  
##  <a name="a-namesetsizea--carraysetsize"></a><a name="setsize"></a>CArray  
 Stabilisce la dimensione di una matrice vuota o esistente. Alloca memoria se necessario.  
  
```  
void SetSize(
    INT_PTR nNewSize,  
    INT_PTR nGrowBy = -1);
```  
  
### <a name="parameters"></a>Parametri  
 `nNewSize`  
 La nuova dimensione della matrice (numero di elementi). Deve essere maggiore o uguale a 0.  
  
 `nGrowBy`  
 Il numero minimo di slot di elemento per allocare se è necessario un aumento delle dimensioni.  
  
### <a name="remarks"></a>Note  
 Se le nuove dimensioni sono inferiori alle dimensioni precedenti, la matrice verrà troncata e tutta la memoria inutilizzata viene rilasciata.  
  
 Utilizzare questa funzione per impostare le dimensioni della matrice prima di iniziare a utilizzare la matrice. Se non si usa `SetSize`, l'aggiunta di elementi alla matrice ne causa la riallocazione e la copia frequente. Le operazioni di riallocazione e copia frequenti sono inefficienti e possono frammentare la memoria.  
  
 Il `nGrowBy` parametro influisce sull'allocazione di memoria interna, mentre è in continua crescita della matrice. L'uso non influisce mai la dimensione della matrice come riportato da [GetSize](#getsize) e [GetUpperBound](#getupperbound). Se viene utilizzato il valore predefinito, MFC alloca memoria in una modalità di calcolo per evitare la frammentazione della memoria e ottimizzare l'efficienza per la maggior parte dei casi.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [GetData](#getdata).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC COLLECT](../../visual-cpp-samples.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CObArray (classe)](../../mfc/reference/cobarray-class.md)   
 [Classi di raccolte](../../mfc/reference/collection-class-helpers.md)

