---
title: Classe CAtlArray | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CAtlArray
- ATLCOLL/ATL::CAtlArray
- ATLCOLL/ATL::Add
- ATLCOLL/ATL::Append
- ATLCOLL/ATL::AssertValid
- ATLCOLL/ATL::Copy
- ATLCOLL/ATL::FreeExtra
- ATLCOLL/ATL::GetAt
- ATLCOLL/ATL::GetCount
- ATLCOLL/ATL::GetData
- ATLCOLL/ATL::InsertArrayAt
- ATLCOLL/ATL::InsertAt
- ATLCOLL/ATL::IsEmpty
- ATLCOLL/ATL::RemoveAll
- ATLCOLL/ATL::RemoveAt
- ATLCOLL/ATL::SetAt
- ATLCOLL/ATL::SetAtGrow
- ATLCOLL/ATL::SetCount
- ATLCOLL/ATL::INARGTYPE
- ATLCOLL/ATL::OUTARGTYPE
dev_langs:
- C++
helpviewer_keywords:
- CAtlArray class
ms.assetid: 0b503aa8-2357-40af-a326-6654bf1da098
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7ceeaf5250cc9dc5cb4cb25c47b3fe179c7c5295
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="catlarray-class"></a>Classe CAtlArray
Questa classe implementa un oggetto matrice.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename E, class ETraits = CElementTraits<E>>
class CAtlArray
```  
  
#### <a name="parameters"></a>Parametri  
 *E*  
 Tipo di dati da memorizzare nella matrice.  
  
 *ETraits*  
 Il codice utilizzato per copiare o spostare elementi.  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Aggiungi](#add)|Chiamare questo metodo per aggiungere un elemento dell'oggetto matrice.|  
|[Aggiungere](#append)|Chiamare questo metodo per aggiungere il contenuto di una matrice alla fine di un altro.|  
|[AssertValid](#assertvalid)|Chiamare questo metodo per verificare che l'oggetto di matrice è valido.|  
|[CAtlArray](#catlarray)|Costruttore.|  
|[~ CAtlArray](#dtor)|Distruttore.|  
|[Copia](#copy)|Chiamare questo metodo per copiare gli elementi di una matrice a un altro.|  
|[FreeExtra](#freeextra)|Chiamare questo metodo per rimuovere eventuali elementi vuoti dalla matrice.|  
|[GetAt](#getat)|Chiamare questo metodo per recuperare un singolo elemento dell'oggetto matrice.|  
|[GetCount](#getcount)|Chiamare questo metodo per restituire il numero di elementi archiviati nella matrice.|  
|[GetData](#getdata)|Chiamare questo metodo per restituire un puntatore al primo elemento nella matrice.|  
|[InsertArrayAt](#insertarrayat)|Chiamare questo metodo per inserire una matrice in un altro.|  
|[InsertAt](#insertat)|Chiamare questo metodo per inserire un nuovo elemento (o più copie di un elemento) nell'oggetto matrice.|  
|[IsEmpty](#isempty)|Chiamare questo metodo per verificare se la matrice è vuota.|  
|[RemoveAll](#removeall)|Chiamare questo metodo per rimuovere tutti gli elementi nell'oggetto matrice.|  
|[RemoveAt](#removeat)|Chiamare questo metodo per rimuovere uno o più elementi dalla matrice.|  
|[SetAt](#setat)|Chiamare questo metodo per impostare il valore di un elemento nell'oggetto matrice.|  
|[SetAtGrow](#setatgrow)|Chiamare questo metodo per impostare il valore di un elemento nell'oggetto matrice, espandendo la matrice in base alle esigenze.|  
|[SetCount](#setcount)|Chiamare questo metodo per impostare le dimensioni dell'oggetto matrice.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[(operatore)&#91;&#93;](#operator_at)|Chiamare questo operatore per restituire un riferimento a un elemento nella matrice.|  

  
### <a name="typedefs"></a>Definizioni typedef  
  
|||  
|-|-|  
|[INARGTYPE](#inargtype)|Il tipo di dati da utilizzare per l'aggiunta di elementi nella matrice.|  
|[OUTARGTYPE](#outargtype)|Il tipo di dati da utilizzare per recuperare elementi dalla matrice.|  
  
## <a name="remarks"></a>Note  
 **CAtlArray** fornisce metodi per la creazione e gestione di una matrice di elementi di un tipo definito dall'utente. Pur essendo simili alle matrici C standard, il **CAtlArray** oggetto in modo dinamico può compattare e aumento delle dimensioni in base alle esigenze. Indice della matrice inizia sempre nella posizione 0 e il limite superiore può essere corretto o è consentito espandere man mano che vengono aggiunti nuovi elementi.  
  
 Per le matrici con un numero limitato di elementi, la classe ATL [CSimpleArray](../../atl/reference/csimplearray-class.md) può essere utilizzato.  
  
 **CAtlArray** MFC è strettamente correlato **CArray** classe e funzionerà in un progetto MFC, ma senza il supporto della serializzazione.  
  
 Per ulteriori informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="add"></a>  CAtlArray::Add  
 Chiamare questo metodo per aggiungere un elemento dell'oggetto matrice.  
  
```
size_t Add(INARGTYPE element);
size_t Add();
```  
  
### <a name="parameters"></a>Parametri  
 `element`  
 L'elemento da aggiungere alla matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'indice dell'elemento aggiunto.  
  
### <a name="remarks"></a>Note  
 Il nuovo elemento viene aggiunto alla fine della matrice. Se l'elemento non viene specificato, viene aggiunto un elemento vuoto. vale a dire la matrice viene aumentata le dimensioni come se è stato aggiunto un elemento reale. Se l'operazione non riesce, [AtlThrow](debugging-and-error-reporting-global-functions.md#atlthrow) viene chiamato con l'argomento E_OUTOFMEMORY.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#1](../../atl/codesnippet/cpp/catlarray-class_1.cpp)]  
  
##  <a name="append"></a>  CAtlArray::Append  
 Chiamare questo metodo per aggiungere il contenuto di una matrice alla fine di un altro.  
  
```
size_t Append(const CAtlArray<E, ETraits>& aSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `aSrc`  
 Matrice da accodare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'indice del primo elemento aggiunto.  
  
### <a name="remarks"></a>Note  
 Gli elementi nella matrice specificata, vengono aggiunti alla fine della matrice esistente. Se necessario, verrà allocata memoria per contenere i nuovi elementi.  
  
 Le matrici devono essere dello stesso tipo e non è possibile aggiungere una matrice a se stessa.  
  
 Nelle build di debug, verrà generato un ATLASSERT se il `CAtlArray` argomento non è una matrice valida o se `aSrc` fa riferimento allo stesso oggetto. Nelle build di rilascio, potrebbero causare un comportamento imprevedibile argomenti non validi.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#2](../../atl/codesnippet/cpp/catlarray-class_2.cpp)]  
  
##  <a name="assertvalid"></a>  CAtlArray::AssertValid  
 Chiamare questo metodo per verificare che l'oggetto di matrice è valido.  
  
```
void AssertValid() const;
```  
  
### <a name="remarks"></a>Note  
 Se l'oggetto di matrice non è valido, `ATLASSERT` genererà un'asserzione. Questo metodo è disponibile solo se è definito debug.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#3](../../atl/codesnippet/cpp/catlarray-class_3.cpp)]  
  
##  <a name="catlarray"></a>  CAtlArray::CAtlArray  
 Costruttore.  
  
```
CAtlArray() throw();
```  
  
### <a name="remarks"></a>Note  
 Inizializza l'oggetto di matrice.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#4](../../atl/codesnippet/cpp/catlarray-class_4.cpp)]  
  
##  <a name="dtor"></a>  CAtlArray:: ~ CAtlArray  
 Distruttore.  
  
```
~CAtlArray() throw();
```  
  
### <a name="remarks"></a>Note  
 Consente di liberare le risorse utilizzate dall'oggetto matrice.  
  
##  <a name="copy"></a>  CAtlArray::Copy  
 Chiamare questo metodo per copiare gli elementi di una matrice a un altro.  
  
```
void Copy(const CAtlArray<E, ETraits>& aSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `aSrc`  
 L'origine degli elementi da copiare in una matrice.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per sovrascrivere gli elementi di una matrice con gli elementi di un'altra matrice. Se necessario, verrà allocata memoria per contenere i nuovi elementi. Non è possibile copiare elementi della matrice a se stessa.  
  
 Se il contenuto esistente della matrice deve essere mantenuto, utilizzare [CAtlArray::Append](#append) invece.  
  
 Nelle build di debug, verrà generato un ATLASSERT se esistenti `CAtlArray` oggetto non è valido, o se `aSrc` fa riferimento allo stesso oggetto. Nelle build di rilascio, potrebbero causare un comportamento imprevedibile argomenti non validi.  
  
> [!NOTE]
> `CAtlArray::Copy` non supporta le matrici costituito dagli elementi creati con il [su CAutoPtr](../../atl/reference/cautoptr-class.md) classe.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#5](../../atl/codesnippet/cpp/catlarray-class_5.cpp)]  
  
##  <a name="freeextra"></a>  CAtlArray::FreeExtra  
 Chiamare questo metodo per rimuovere eventuali elementi vuoti dalla matrice.  
  
```
void FreeExtra() throw();
```  
  
### <a name="remarks"></a>Note  
 Tutti gli elementi vuoti vengono rimossi, ma le dimensioni e il limite superiore della matrice rimangono invariati.  
  
 Nelle build di debug, verrà generato un ATLASSERT se l'oggetto CAtlArray non è valido o se la matrice supera la dimensione massima.  
  
##  <a name="getat"></a>  CAtlArray::GetAt  
 Chiamata di questo metodo recupera un singolo elemento dall'oggetto matrice.  
  
```
const E& GetAt(size_t iElement) const throw();
E& GetAt(size_t iElement) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `iElement`  
 Il valore di indice dell'elemento della matrice da restituire.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento all'elemento della matrice obbligatorio.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug, verrà generato un ATLASSERT se `iElement` supera il numero di elementi nella matrice. Nelle build di rilascio, un argomento non valido potrebbe causare un comportamento imprevedibile.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#6](../../atl/codesnippet/cpp/catlarray-class_6.cpp)]  
  
##  <a name="getcount"></a>  CAtlArray::GetCount  
 Chiamare questo metodo per restituire il numero di elementi archiviati nella matrice.  
  
```
size_t GetCount() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di elementi archiviati nella matrice.  
  
### <a name="remarks"></a>Note  
 Il primo elemento nella matrice è nella posizione 0, il valore restituito da `GetCount` è sempre 1 maggiore dell'indice più grande.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlArray::GetAt](#getat).  
  
##  <a name="getdata"></a>  CAtlArray::GetData  
 Chiamare questo metodo per restituire un puntatore al primo elemento nella matrice.  
  
```
E* GetData() throw();
const E* GetData() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore nella posizione di memoria archiviano il primo elemento nella matrice. Se non sono presenti elementi disponibili, viene restituito NULL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#7](../../atl/codesnippet/cpp/catlarray-class_7.cpp)]  
  
##  <a name="inargtype"></a>  CAtlArray::INARGTYPE  
 Il tipo di dati da utilizzare per l'aggiunta di elementi nella matrice.  
  
```
typedef ETraits::INARGTYPE INARGTYPE;
```  
  
##  <a name="insertarrayat"></a>  CAtlArray::InsertArrayAt  
 Chiamare questo metodo per inserire una matrice in un altro.  
  
```
void InsertArrayAt(size_t iStart, const CAtlArray<E, ETraits>* paNew);
```  
  
### <a name="parameters"></a>Parametri  
 `iStart`  
 Indice in corrispondenza del quale la matrice è da inserire.  
  
 `paNew`  
 Matrice da inserire.  
  
### <a name="remarks"></a>Note  
 Gli elementi dalla matrice `paNew` vengono copiati nell'oggetto matrice, iniziando dall'elemento `iStart`. Gli elementi della matrice esistente vengono spostati per evitare la sovrascrittura.  
  
 Nelle build di debug, verrà generato un ATLASSERT se il `CAtlArray` oggetto non è valido, o se il `paNew` puntatore è NULL o non valido.  
  
> [!NOTE]
> `CAtlArray::InsertArrayAt` non supporta le matrici costituito dagli elementi creati con il [su CAutoPtr](../../atl/reference/cautoptr-class.md) classe.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#8](../../atl/codesnippet/cpp/catlarray-class_8.cpp)]  
  
##  <a name="insertat"></a>  CAtlArray::InsertAt  
 Chiamare questo metodo per inserire un nuovo elemento (o più copie di un elemento) nell'oggetto matrice.  
  
```
void InsertAt(size_t iElement, INARGTYPE element, size_t nCount = 1);
```  
  
### <a name="parameters"></a>Parametri  
 `iElement`  
 Indice in cui gli elementi devono essere inseriti.  
  
 `element`  
 Il valore di uno o più elementi da inserire.  
  
 `nCount`  
 Il numero di elementi da aggiungere.  
  
### <a name="remarks"></a>Note  
 Inserisce uno o più elementi nella matrice, iniziando in corrispondenza dell'indice `iElement`. Gli elementi esistenti vengono spostati per evitare la sovrascrittura.  
  
 Nelle build di debug, verrà generato un ATLASSERT se il `CAtlArray` oggetto non è valido, il numero di elementi da aggiungere è zero o il numero combinato di elementi è troppo grande per contenere la matrice. Nelle build di vendita al dettaglio, il passaggio di parametri non validi può provocare risultati imprevisti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#9](../../atl/codesnippet/cpp/catlarray-class_9.cpp)]  
  
##  <a name="isempty"></a>  CAtlArray::IsEmpty  
 Chiamare questo metodo per verificare se la matrice è vuota.  
  
```
bool IsEmpty() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se la matrice è vuota, false in caso contrario.  
  
### <a name="remarks"></a>Note  
 La matrice è detto vuoto se non contiene alcun elemento. Pertanto, anche se la matrice contiene elementi vuoti, non è vuoto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#10](../../atl/codesnippet/cpp/catlarray-class_10.cpp)]  
  
##  <a name="operator_at"></a>  [] CAtlArray::operator  
 Chiamare questo operatore per restituire un riferimento a un elemento nella matrice.  
  
```
E& operator[](size_t ielement) throw();
const E& operator[](size_t ielement) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `iElement`  
 Il valore di indice dell'elemento della matrice da restituire.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento all'elemento della matrice obbligatorio.  
  
### <a name="remarks"></a>Note  
 Esegue una funzione simile a [CAtlArray::GetAt](#getat). A differenza della classe MFC [CArray](../../mfc/reference/carray-class.md), questo operatore non può essere utilizzato in sostituzione di [CAtlArray::SetAt](#setat).  
  
 Nelle build di debug, verrà generato un ATLASSERT se `iElement` supera il numero totale di elementi nella matrice. Nelle build di vendita al dettaglio, un parametro non valido può provocare risultati imprevisti.  
  
##  <a name="outargtype"></a>  CAtlArray::OUTARGTYPE  
 Il tipo di dati da utilizzare per recuperare elementi dalla matrice.  
  
```
typedef ETraits::OUTARGTYPE OUTARGTYPE;
```  
  
##  <a name="removeall"></a>  CAtlArray::RemoveAll  
 Chiamare questo metodo per rimuovere tutti gli elementi nell'oggetto matrice.  
  
```
void RemoveAll() throw();
```  
  
### <a name="remarks"></a>Note  
 Rimuove tutti gli elementi dall'oggetto matrice.  
  
 Questo metodo chiama [CAtlArray::SetCount](#setcount) per ridimensionare la matrice e successivamente liberata memoria allocata.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlArray::IsEmpty](#isempty).  
  
##  <a name="removeat"></a>  CAtlArray::RemoveAt  
 Chiamare questo metodo per rimuovere uno o più elementi dalla matrice.  
  
```
void RemoveAt(size_t iElement, size_t nCount = 1);
```  
  
### <a name="parameters"></a>Parametri  
 `iElement`  
 L'indice del primo elemento da rimuovere.  
  
 `nCount`  
 Numero di elementi da rimuovere.  
  
### <a name="remarks"></a>Note  
 Rimuove uno o più elementi della matrice. Tutti gli elementi rimanenti vengono spostati verso il basso. Il limite superiore è ridotto, ma non viene liberata memoria fino a quando una chiamata a [CAtlArray::FreeExtra](#freeextra) viene eseguita.  
  
 Nelle build di debug, verrà generato un ATLASSERT se il `CAtlArray` oggetto non è valido, o se il totale combinato di `iElement` e `nCount` supera il numero totale di elementi nella matrice. Nelle build di vendita al dettaglio, i parametri non validi possono provocare risultati imprevisti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#11](../../atl/codesnippet/cpp/catlarray-class_11.cpp)]  
  
##  <a name="setat"></a>  CAtlArray::SetAt  
 Chiamare questo metodo per impostare il valore di un elemento nell'oggetto matrice.  
  
```
void SetAt(size_t iElement, INARGTYPE element);
```  
  
### <a name="parameters"></a>Parametri  
 `iElement`  
 L'indice che punta all'elemento della matrice da impostare.  
  
 `element`  
 Il nuovo valore dell'elemento specificato.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug, verrà generato un ATLASSERT se `iElement` supera il numero di elementi nella matrice. Nelle build di vendita al dettaglio, un parametro non valido può comportare risultati imprevisti.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlArray::GetAt](#getat).  
  
##  <a name="setcount"></a>  CAtlArray::SetCount  
 Chiamare questo metodo per impostare le dimensioni dell'oggetto matrice.  
  
```
bool SetCount(size_t nNewSize, int nGrowBy = - 1);
```  
  
### <a name="parameters"></a>Parametri  
 `nNewSize`  
 La dimensione necessaria della matrice.  
  
 `nGrowBy`  
 Valore utilizzato per determinare le dimensioni di buffer. Il valore-1 determina un valore calcolato internamente da utilizzare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se la matrice è ridimensionato correttamente, false in caso contrario.  
  
### <a name="remarks"></a>Note  
 La matrice può essere aumentata o ridotta. Se aumenta, vengono aggiunti elementi vuoti aggiuntiva nella matrice. Se è diminuito, verranno eliminati gli elementi con gli indici più grande e la memoria liberata.  
  
 Utilizzare questo metodo per impostare le dimensioni della matrice prima di utilizzarlo. Se `SetCount` non viene utilizzato, il processo di aggiunta di elementi, e l'allocazione di memoria successiva eseguita, verrà riduzione delle prestazioni e frammentazione della memoria.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CAtlArray::GetData](#getdata).  
  
##  <a name="setatgrow"></a>  CAtlArray::SetAtGrow  
 Chiamare questo metodo per impostare il valore di un elemento nell'oggetto matrice, espandendo la matrice in base alle esigenze.  
  
```
void SetAtGrow(size_t iElement, INARGTYPE element);
```  
  
### <a name="parameters"></a>Parametri  
 `iElement`  
 L'indice che punta all'elemento della matrice da impostare.  
  
 `element`  
 Il nuovo valore dell'elemento specificato.  
  
### <a name="remarks"></a>Note  
 Sostituisce il valore dell'elemento a cui fa riferimento l'indice. Se `iElement` è maggiore della dimensione corrente della matrice, la matrice viene automaticamente aumentata tramite una chiamata a [CAtlArray::SetCount](#setcount). Nelle build di debug, verrà generato un ATLASSERT se il `CAtlArray` oggetto non è valido. Nelle build di vendita al dettaglio, i parametri non validi possono provocare risultati imprevisti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#12](../../atl/codesnippet/cpp/catlarray-class_12.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MMXSwarm](../../visual-cpp-samples.md)   
 [Esempio DynamicConsumer](../../visual-cpp-samples.md)   
 [Esempio UpdatePV](../../visual-cpp-samples.md)   
 [Esempio di testo scorrevole](../../visual-cpp-samples.md)   
 [CArray (classe)](../../mfc/reference/carray-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
