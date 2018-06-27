---
title: CArray (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CArray
- AFXTEMPL/CArray
- AFXTEMPL/CArray::CArray
- AFXTEMPL/CArray::Add
- AFXTEMPL/CArray::Append
- AFXTEMPL/CArray::Copy
- AFXTEMPL/CArray::ElementAt
- AFXTEMPL/CArray::FreeExtra
- AFXTEMPL/CArray::GetAt
- AFXTEMPL/CArray::GetCount
- AFXTEMPL/CArray::GetData
- AFXTEMPL/CArray::GetSize
- AFXTEMPL/CArray::GetUpperBound
- AFXTEMPL/CArray::InsertAt
- AFXTEMPL/CArray::IsEmpty
- AFXTEMPL/CArray::RemoveAll
- AFXTEMPL/CArray::RemoveAt
- AFXTEMPL/CArray::SetAt
- AFXTEMPL/CArray::SetAtGrow
- AFXTEMPL/CArray::SetSize
dev_langs:
- CPP
helpviewer_keywords:
- CArray [MFC], CArray
- CArray [MFC], Add
- CArray [MFC], Append
- CArray [MFC], Copy
- CArray [MFC], ElementAt
- CArray [MFC], FreeExtra
- CArray [MFC], GetAt
- CArray [MFC], GetCount
- CArray [MFC], GetData
- CArray [MFC], GetSize
- CArray [MFC], GetUpperBound
- CArray [MFC], InsertAt
- CArray [MFC], IsEmpty
- CArray [MFC], RemoveAll
- CArray [MFC], RemoveAt
- CArray [MFC], SetAt
- CArray [MFC], SetAtGrow
- CArray [MFC], SetSize
ms.assetid: fead8b00-4cfd-4625-ad0e-251df62ba92f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f946a7af93a8cbf7a285f0c01ebd0512231f7b3f
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36953388"
---
# <a name="carray-class"></a>CArray (classe)
Supporta matrici che sono analoghi alle matrici di C, ma possono dinamicamente ridurre e ingrandirsi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class TYPE, class ARG_TYPE = const TYPE&>  
class CArray : public CObject  
```  
  
#### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro modello che specifica il tipo di oggetti memorizzati nella matrice. *TIPO di* è un parametro restituito da `CArray`.  
  
 *ARG* *_* *TIPO*  
 Parametro modello che specifica il tipo di argomento che viene utilizzato per accedere agli oggetti memorizzati nella matrice. Spesso un riferimento a *tipo*. *ARG_TYPE* è un parametro che viene passato a `CArray`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CArray::CArray](#carray)|Costruisce una matrice vuota.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CArray::Add](#add)|Aggiunge un elemento alla fine della matrice; se necessario, aumenta le dimensioni della matrice.|  
|[CArray:: Append](#append)|Aggiunge un'altra matrice nella matrice; aumento delle dimensioni della matrice, se necessario|  
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
 Gli indici di matrice iniziano sempre alla posizione 0. È possibile decidere se correggere il limite superiore o abilitare la matrice in cui vengono espanse quando si aggiungono elementi corrente associato. Memoria viene allocata in modo contiguo al limite superiore, anche se alcuni elementi sono null.  
  
> [!NOTE]
>  La maggior parte dei metodi che ridimensionano un `CArray` dell'oggetto o aggiungere elementi a esso utilizzano [memcpy_s](../../c-runtime-library/reference/memcpy-s-wmemcpy-s.md) quale spostare gli elementi. Si tratta di un problema perché `memcpy_s` non è compatibile con tutti gli oggetti che richiedono il costruttore da chiamare. Se gli elementi di `CArray` non sono compatibili con `memcpy_s`, è necessario creare un nuovo `CArray` delle dimensioni appropriate. È quindi necessario utilizzare [CArray:: Copy](#copy) e [CArray::SetAt](#setat) per popolare la nuova matrice perché tali metodi utilizzano un operatore di assegnazione anziché `memcpy_s`.  
  
 Come con una matrice di C, il tempo di accesso per un `CArray` elemento indicizzato è costante ed è indipendente delle dimensioni della matrice.  
  
> [!TIP]
>  Prima di usare una matrice, usare [SetSize](#setsize) per determinarne le dimensioni e allocare memoria per esso. Se non si usa `SetSize`, l'aggiunta di elementi alla matrice ne causa la riallocazione e la copia frequente. Le operazioni di riallocazione e copia frequenti sono inefficienti e possono frammentare la memoria.  
  
 Se è necessario un dump di singoli elementi in una matrice, è necessario impostare la profondità del [CDumpContext](../../mfc/reference/cdumpcontext-class.md) oggetto su 1 o maggiore.  
  
 Alcune funzioni membro di questa chiamata classe helper globale funzioni che devono essere personalizzati per la maggior parte degli utilizzi della `CArray` classe. Vedere l'argomento [classi Collection](../../mfc/reference/collection-class-helpers.md) nella sezione delle macro MFC e variabili globali.  
  
 La derivazione di classi di matrice è simile a derivazione di elenco.  
  
 Per ulteriori informazioni su come usare `CArray`, vedere l'articolo [raccolte](../../mfc/collections.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CArray`  
  
## <a name="requirements"></a>Requisiti  
 `Header:` afxtempl. h  
  
##  <a name="add"></a>  CArray::Add  
 Aggiunge un nuovo elemento alla fine di una matrice, aumento delle dimensioni della matrice di 1.  
  
```  
INT_PTR Add(ARG_TYPE newElement);
```  
  
### <a name="parameters"></a>Parametri  
 *ARG_TYPE*  
 Parametro di modello che specifica il tipo di argomenti che fanno riferimento a elementi in questa matrice.  
  
 *newElement*  
 L'elemento da aggiungere a questa matrice.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'elemento aggiunto.  
  
### <a name="remarks"></a>Note  
 Se [SetSize](#setsize) è stato utilizzato con un *nGrowBy* allocabile valore maggiore di 1, la memoria aggiuntiva. Tuttavia, il limite superiore aumenterà di solo 1.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#22](../../mfc/codesnippet/cpp/carray-class_1.cpp)]  
  
##  <a name="append"></a>  CArray:: Append  
 Chiamare questa funzione membro per aggiungere il contenuto di una matrice alla fine di un altro.  
  
```  
INT_PTR Append(const CArray& src);
```  
  
### <a name="parameters"></a>Parametri  
 *src*  
 Origine degli elementi da aggiungere a una matrice.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice del primo elemento aggiunto.  
  
### <a name="remarks"></a>Note  
 Le matrici devono essere dello stesso tipo.  
  
 Se necessario, `Append` possono allocare memoria aggiuntiva per contenere gli elementi aggiunti alla matrice.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#23](../../mfc/codesnippet/cpp/carray-class_2.cpp)]  
  
##  <a name="carray"></a>  CArray::CArray  
 Costruisce una matrice vuota.  
  
```  
CArray();
```  
  
### <a name="remarks"></a>Note  
 La matrice aumenta le dimensioni di un elemento alla volta.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#24](../../mfc/codesnippet/cpp/carray-class_3.cpp)]  
  
##  <a name="copy"></a>  CArray:: Copy  
 Utilizzare questa funzione membro per copiare gli elementi di una matrice a un altro.  
  
```  
void Copy(const CArray& src);
```  
  
### <a name="parameters"></a>Parametri  
 *src*  
 Origine degli elementi da copiare in una matrice.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro per sovrascrivere gli elementi di una matrice con gli elementi di un'altra matrice.  
  
 **Copia** libera la memoria; tuttavia, se necessario, `Copy` possono allocare memoria aggiuntiva per contenere gli elementi copiati nella matrice.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#25](../../mfc/codesnippet/cpp/carray-class_4.cpp)]  
  
##  <a name="elementat"></a>  CArray::ElementAt  
 Restituisce un riferimento temporaneo per l'elemento specificato all'interno della matrice.  
  
```  
TYPE& ElementAt(INT_PTR nIndex);  
const TYPE& ElementAt(INT_PTR nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Un indice integer che è maggiore o uguale a 0 e minore o uguale al valore restituito da [GetUpperBound](#getupperbound).  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a un elemento di matrice.  
  
### <a name="remarks"></a>Note  
 Viene utilizzato per implementare l'operatore di assegnazione a sinistra per le matrici.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [GetSize](#getsize).  
  
##  <a name="freeextra"></a>  CArray::FreeExtra  
 Consente di liberare memoria aggiuntiva allocata mentre l'array è stato aumentato.  
  
```  
void FreeExtra();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione non ha effetto sulla dimensione o limite superiore della matrice.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [GetData](#getdata).  
  
##  <a name="getat"></a>  CArray::GetAt  
 Restituisce l'elemento di matrice in corrispondenza dell'indice specificato.  
  
```  
TYPE& GetAt(INT_PTR nIndex);  
const TYPE& GetAt(INT_PTR nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro di modello che specifica il tipo degli elementi della matrice.  
  
 *nIndex*  
 Un indice integer che è maggiore o uguale a 0 e minore o uguale al valore restituito da [GetUpperBound](#getupperbound).  
  
### <a name="return-value"></a>Valore restituito  
 Elemento della matrice attualmente in corrispondenza di questo indice.  
  
### <a name="remarks"></a>Note  
 Il passaggio di un valore negativo o un valore maggiore del valore restituito da `GetUpperBound` comporterà un'asserzione non riuscita.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#26](../../mfc/codesnippet/cpp/carray-class_5.cpp)]  
  
##  <a name="getcount"></a>  CArray::GetCount  
 Restituisce il numero di elementi della matrice.  
  
```  
INT_PTR GetCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi nella matrice.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per recuperare il numero di elementi nella matrice. Poiché gli indici sono in base zero, la dimensione è maggiore dell'indice più grande di 1. Chiamare questo metodo genera lo stesso risultato come le [CArray::GetSize](#getsize) metodo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#27](../../mfc/codesnippet/cpp/carray-class_6.cpp)]  
  
##  <a name="getdata"></a>  CArray::GetData  
 Utilizzare questa funzione membro per ottenere l'accesso diretto agli elementi in una matrice.  
  
```  
const TYPE* GetData() const; 
TYPE* GetData();
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro di modello che specifica il tipo degli elementi della matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un elemento di matrice.  
  
### <a name="remarks"></a>Note  
 Se sono presenti elementi disponibili, `GetData` restituisce un valore null.  
  
 Durante l'accesso diretto agli elementi della matrice consentono di lavorare più velocemente, prestare attenzione quando si chiama `GetData`; gli eventuali errori apportate direttamente interessano gli elementi della matrice.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#28](../../mfc/codesnippet/cpp/carray-class_7.cpp)]  
  
##  <a name="getsize"></a>  CArray::GetSize  
 Restituisce le dimensioni della matrice.  
  
```  
INT_PTR GetSize() const;  
```  
  
### <a name="remarks"></a>Note  
 Poiché gli indici sono in base zero, la dimensione è maggiore dell'indice più grande di 1. Chiamare questo metodo genera lo stesso risultato come le [CArray::GetCount](#getcount) metodo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#29](../../mfc/codesnippet/cpp/carray-class_8.cpp)]  
  
##  <a name="getupperbound"></a>  CArray::GetUpperBound  
 Restituisce il limite corrente di questa matrice.  
  
```  
INT_PTR GetUpperBound() const;  
```  
  
### <a name="remarks"></a>Note  
 Poiché gli indici di matrice sono a base zero, questa funzione restituisce un valore 1 minore `GetSize`.  
  
 La condizione `GetUpperBound( )` = -1 indica che la matrice non contiene elementi.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CArray::GetAt](#getat).  
  
##  <a name="insertat"></a>  CArray::InsertAt  
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
 *nIndex*  
 Un indice integer che può essere maggiore del valore restituito da `GetUpperBound`.  
  
 *ARG_TYPE*  
 Parametro di modello che specifica il tipo di elementi nella matrice.  
  
 *newElement*  
 L'elemento da inserire in questa matrice.  
  
 *nCount*  
 Il numero di volte in cui che questo elemento deve essere inserito (valore predefinito è 1).  
  
 *nStartIndex*  
 Un indice integer che può essere maggiore del valore restituito da [GetUpperBound](#getupperbound).  
  
 *pNewArray*  
 Un'altra matrice che contiene gli elementi da aggiungere a questa matrice.  
  
### <a name="remarks"></a>Note  
 Nel processo, viene spostato (incrementando l'indice) si sposta l'elemento esistente in corrispondenza dell'indice e backup di tutti gli elementi sopra di esso.  
  
 La seconda versione inserisce tutti gli elementi da un altro `CArray` insieme, iniziando in corrispondenza di *nStartIndex* posizione.  
  
 Il `SetAt` (funzione), al contrario, sostituisce un elemento della matrice specificata e non spostare tutti gli elementi.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#30](../../mfc/codesnippet/cpp/carray-class_9.cpp)]  
  
##  <a name="isempty"></a>  CArray::IsEmpty  
 Determina se la matrice è vuota.  
  
```  
BOOL IsEmpty() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la matrice non contiene elementi; in caso contrario 0.  
  
##  <a name="operator_at"></a>  CArray::operator \[\]  
 Questi operatori di indice sono un sostituto ideale per il [SetAt](#setat) e [GetAt](#getat) funzioni.  
  
```  
TYPE& operator[](int_ptr nindex);  
const TYPE& operator[](int_ptr nindex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro di modello che specifica il tipo di elementi nella matrice.  
  
 *nIndex*  
 Indice dell'elemento a cui accedere.  
  
### <a name="remarks"></a>Note  
 Il primo operatore, chiamato per le matrici non sono **const**, può essere utilizzata con destra (r-value) o a sinistra (elemento l-value) di un'istruzione di assegnazione. Il secondo, la chiamata per **const** matrici, possono essere utilizzate solo nella parte destra.  
  
 La versione di Debug della libreria dichiara se l'indice (sia a sinistra o destra di un'istruzione di assegnazione) è compreso nell'intervallo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#34](../../mfc/codesnippet/cpp/carray-class_10.cpp)]  
  
##  <a name="relocateelements"></a>  CArray::RelocateElements  
 Consente di spostare i dati per un nuovo buffer quando la matrice deve ingranditi o ridotti.  
  
```  
template<class TYPE, class ARG_TYPE>  
AFX_INLINE void CArray<TYPE, ARG_TYPE>::RelocateElements(
    TYPE* pNewData,  
    const TYPE* pData,  
    INT_PTR nCount);
```  
  
### <a name="parameters"></a>Parametri  
 *pNewData*  
 Un nuovo buffer per la matrice di elementi.  
  
 *pData*  
 La matrice precedente degli elementi.  
  
 *nCount*  
 Numero di elementi nella matrice precedente.  
  
### <a name="remarks"></a>Note  
 *pNewData* è sempre sufficientemente grande da contenere tutti i *pData* elementi.  
  
 Il [CArray](../../mfc/reference/carray-class.md) implementazione Usa questo metodo per copiare i dati precedenti relativi a un nuovo buffer quando la matrice deve ingranditi o ridotti (quando [SetSize](#setsize) oppure [FreeExtra](#freeextra) vengono chiamati). L'implementazione predefinita copia solo i dati.  
  
 Per le matrici in cui un elemento contiene un puntatore a uno dei suoi membri personali o un'altra struttura contiene un puntatore a uno degli elementi della matrice, i puntatori non vengono aggiornati nella copia semplice. In questo caso, è possibile correggere i puntatori implementando una specializzazione di `RelocateElements` con i relativi tipi. Sono inoltre responsabili per la copia dei dati.  
  
##  <a name="removeall"></a>  CArray::RemoveAll  
 Rimuove tutti gli elementi dalla matrice.  
  
```  
void RemoveAll();
```  
  
### <a name="remarks"></a>Note  
 Se la matrice è vuota, la funzione continui a funzionare.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#31](../../mfc/codesnippet/cpp/carray-class_11.cpp)]  
  
##  <a name="removeat"></a>  CArray::RemoveAt  
 Rimuove uno o più elementi a partire dall'indice specificato in una matrice.  
  
```  
void RemoveAt(
    INT_PTR nIndex,  
    INT_PTR nCount = 1);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Un indice integer che è maggiore o uguale a 0 e minore o uguale al valore restituito da [GetUpperBound](#getupperbound).  
  
 *nCount*  
 Numero di elementi da rimuovere.  
  
### <a name="remarks"></a>Note  
 Nel processo, viene spostato verso il basso tutti gli elementi sopra gli elementi rimossi. Si decrementa il limite superiore limite della matrice, ma non libera la memoria.  
  
 Se si tenta di rimuovere più elementi che sono contenuti nella matrice sopra il punto di rimozione, la versione di Debug della libreria di asserzioni.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#32](../../mfc/codesnippet/cpp/carray-class_12.cpp)]  
  
##  <a name="setat"></a>  CArray::SetAt  
 Imposta l'elemento della matrice in corrispondenza dell'indice specificato.  
  
```  
void SetAt(INT_PTR nIndex, ARG_TYPE newElement);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Un indice integer che è maggiore o uguale a 0 e minore o uguale al valore restituito da [GetUpperBound](#getupperbound).  
  
 *ARG_TYPE*  
 Parametro di modello che specifica il tipo di argomenti utilizzato per fare riferimento a elementi di matrice.  
  
 *newElement*  
 Il nuovo valore dell'elemento da archiviare nella posizione specificata.  
  
### <a name="remarks"></a>Note  
 `SetAt` non comporterà la matrice a crescere. Uso [SetAtGrow](#setatgrow) se si desidera che la matrice di aumento automatico delle dimensioni.  
  
 È necessario assicurarsi che il valore di indice rappresenta una posizione valida nella matrice. Se è compreso nell'intervallo, la versione di Debug della libreria di asserzioni.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [GetAt](#getat).  
  
##  <a name="setatgrow"></a>  CArray::SetAtGrow  
 Imposta l'elemento della matrice in corrispondenza dell'indice specificato.  
  
```  
void SetAtGrow(INT_PTR nIndex, ARG_TYPE newElement);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Un indice integer che è maggiore o uguale a 0.  
  
 *ARG_TYPE*  
 Parametro di modello che specifica il tipo di elementi nella matrice.  
  
 *newElement*  
 L'elemento da aggiungere a questa matrice. Un **NULL** il valore è consentito.  
  
### <a name="remarks"></a>Note  
 Matrice di dimensioni sono aumentate automaticamente se necessario (vale a dire, il limite superiore viene regolato per inserire il nuovo elemento).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#33](../../mfc/codesnippet/cpp/carray-class_13.cpp)]  
  
##  <a name="setsize"></a>  CArray  
 Consente di stabilire le dimensioni di una matrice vuota o esistente. Alloca memoria se necessario.  
  
```  
void SetSize(
    INT_PTR nNewSize,  
    INT_PTR nGrowBy = -1);
```  
  
### <a name="parameters"></a>Parametri  
 *nNewSize*  
 La nuova dimensione della matrice (numero di elementi). Deve essere maggiore o uguale a 0.  
  
 *nGrowBy*  
 Il numero minimo di slot di elemento per allocare se è necessario un aumento delle dimensioni.  
  
### <a name="remarks"></a>Note  
 Se le nuove dimensioni sono minori di quelle precedenti, la matrice verrà troncata e tutta la memoria inutilizzata viene rilasciata.  
  
 Utilizzare questa funzione per impostare le dimensioni della matrice prima di iniziare usando la matrice. Se non si usa `SetSize`, l'aggiunta di elementi alla matrice ne causa la riallocazione e la copia frequente. Le operazioni di riallocazione e copia frequenti sono inefficienti e possono frammentare la memoria.  
  
 Il *nGrowBy* parametro influisce sull'allocazione di memoria interna mentre è in aumento della matrice. L'uso non influisce mai sulle dimensioni della matrice come riportato da [GetSize](#getsize) e [GetUpperBound](#getupperbound). Se viene utilizzato il valore predefinito, MFC alloca memoria in una modalità di calcolo per evitare la frammentazione della memoria e ottimizzare l'efficienza per la maggior parte dei casi.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [GetData](#getdata).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC COLLECT](../../visual-cpp-samples.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CObArray](../../mfc/reference/cobarray-class.md)   
 [Supporti delle classi di raccolte](../../mfc/reference/collection-class-helpers.md)
