---
title: Classe concurrent_unordered_multimap | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- concurrent_unordered_map/concurrency::concurrent_unordered_multimap
dev_langs:
- C++
helpviewer_keywords:
- concurrent_unordered_multimap class
ms.assetid: 4dada5d7-15df-4382-b9c9-348e75b2f3c1
caps.latest.revision: 12
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
ms.sourcegitcommit: 19244e5527207f852256e646abd18ad298fb28cd
ms.openlocfilehash: 293bad383694d46839cbb1d074f801d2b7be7591
ms.lasthandoff: 02/24/2017

---
# <a name="concurrentunorderedmultimap-class"></a>Classe concurrent_unordered_multimap
La classe `concurrent_unordered_multimap` è un contenitore indipendente dalla concorrenza che controlla una sequenza di lunghezza variabile di elementi di tipo `std::pair<const K, _Element_type>`. La sequenza viene rappresentata in un modo che abilita le operazioni di accodamento, accesso elementi, accesso iteratori e attraversamento iteratori in modo indipendente dalla concorrenza.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <typename K,
    typename _Element_type,
    typename _Hasher = std::hash<K>,
    typename key_equality = std::equal_to<K>,
    typename _Allocator_type = std::allocator<std::pair<const K,
    _Element_type>>
>,
 typename key_equality = std::equal_to<K>,
    typename _Allocator_type = std::allocator<std::pair<const K,
    _Element_type>>> class concurrent_unordered_multimap : public details::_Concurrent_hash<details::_Concurrent_unordered_map_traits<K,
    _Element_type,
 details::_Hash_compare<K,
    _Hasher,
 key_equality>,
    _Allocator_type,
 true>>;
```  
  
#### <a name="parameters"></a>Parametri  
 `K`  
 Tipo di chiave.  
  
 `_Element_type`  
 Tipo mappato.  
  
 `_Hasher`  
 Tipo di oggetto della funzione hash. Questo argomento è facoltativo e il valore predefinito è `std::hash<``K``>`.  
  
 `key_equality`  
 Tipo di oggetto della funzione di confronto di uguaglianza. Questo argomento è facoltativo e il valore predefinito è `std::equal_to<``K``>`.  
  
 `_Allocator_type`  
 Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli sull'allocazione e deallocazione della memoria per il vettore simultaneo. Questo argomento è facoltativo e il valore predefinito è `std::allocator<std::pair<``K`, `_Element_type``>>`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`allocator_type`|Tipo di un allocatore per gestire l'archiviazione.|  
|`const_iterator`|Tipo di un iteratore costante per la sequenza controllata.|  
|`const_local_iterator`|Tipo di un iteratore di bucket costante per la sequenza controllata.|  
|`const_pointer`|Tipo di un puntatore costante a un elemento.|  
|`const_reference`|Tipo di un riferimento costante a un elemento.|  
|`difference_type`|Tipo di una distanza Signed tra due elementi.|  
|`hasher`|Tipo della funzione hash.|  
|`iterator`|Tipo di un iteratore per la sequenza controllata.|  
|`key_equal`|Tipo della funzione di confronto.|  
|`key_type`|Tipo di una chiave di ordinamento.|  
|`local_iterator`|Tipo di un iteratore di bucket per la sequenza controllata.|  
|`mapped_type`|Tipo di un valore mappato associato a ogni chiave.|  
|`pointer`|Tipo di un puntatore a un elemento.|  
|`reference`|Tipo di un riferimento a un elemento.|  
|`size_type`|Tipo di una distanza Unsigned tra due elementi.|  
|`value_type`|Tipo di un elemento.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore concurrent_unordered_multimap](#ctor)|Di overload. Costruisce un multimap non ordinato simultaneo.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[hash_function (metodo)](#hash_function)|Restituisce l'oggetto della funzione hash archiviato.|  
|[Insert (metodo)](#insert)|Di overload. Aggiunge gli elementi di `concurrent_unordered_multimap` oggetto.|  
|[key_eq (metodo)](#key_eq)|Restituisce l'oggetto funzione di confronto di uguaglianza stored.|  
|[swap (metodo)](#swap)|Scambia il contenuto di due `concurrent_unordered_multimap` oggetti. Questo metodo non è indipendente dalla concorrenza.|  
|[unsafe_erase (metodo)](#unsafe_erase)|Di overload. Rimuove gli elementi dal `concurrent_unordered_multimap` in posizioni specificate. Questo metodo non è indipendente dalla concorrenza.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operatore = (operatore)](#operator_eq)|Di overload. Assegna il contenuto di un altro `concurrent_unordered_multimap` a questo oggetto. Questo metodo non è indipendente dalla concorrenza.|  
  
## <a name="remarks"></a>Note  
 Per informazioni dettagliate sul `concurrent_unordered_multimap` , vedere [contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `_Traits`  
  
 `_Concurrent_hash`  
  
 `concurrent_unordered_multimap`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concurrent_unordered_map.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namebegina-begin"></a><a name="begin"></a>iniziare 

 Restituisce un iteratore che punta al primo elemento nel contenitore simultaneo. Questo metodo è sicuro di concorrenza.  
  
```
iterator begin();

const_iterator begin() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore al primo elemento nel contenitore simultaneo.  
  
##  <a name="a-namecbegina-cbegin"></a><a name="cbegin"></a>cbegin 

 Restituisce un iteratore const che punta al primo elemento nel contenitore simultaneo. Questo metodo è sicuro di concorrenza.  
  
```
const_iterator cbegin() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore const al primo elemento nel contenitore simultaneo.  
  
##  <a name="a-namecenda-cend"></a><a name="cend"></a>cend 

 Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento nel contenitore simultaneo. Questo metodo è sicuro di concorrenza.  
  
```
const_iterator cend() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore const alla posizione successiva all'ultimo elemento nel contenitore simultaneo.  
  
##  <a name="a-namecleara-clear"></a><a name="clear"></a>deselezionare 

 Cancella tutti gli elementi nel contenitore simultaneo. Questa funzione non è sicuro di concorrenza.  
  
```
void clear();
```  
  
##  <a name="a-namectora-concurrentunorderedmultimap"></a><a name="ctor"></a>concurrent_unordered_multimap 

 Costruisce un multimap non ordinato simultaneo.  
  
```
explicit concurrent_unordered_multimap(
    size_type _Number_of_buckets = 8,
    const hasher& _Hasher = hasher(),
    const key_equal& key_equality = key_equal(),
    const allocator_type& _Allocator = allocator_type());

concurrent_unordered_multimap(
    const allocator_type& _Allocator);

template <typename _Iterator>
concurrent_unordered_multimap(_Iterator _Begin,
    _Iterator _End,
    size_type _Number_of_buckets = 8,
    const hasher& _Hasher = hasher(),
    const key_equal& key_equality = key_equal(),
    const allocator_type& _Allocator = allocator_type());

concurrent_unordered_multimap(
    const concurrent_unordered_multimap& _Umap);

concurrent_unordered_multimap(
    const concurrent_unordered_multimap& _Umap,
    const allocator_type& _Allocator);

concurrent_unordered_multimap(
    concurrent_unordered_multimap&& _Umap);
```  
  
### <a name="parameters"></a>Parametri  
 `_Iterator`  
 Tipo di iteratore di input.  
  
 `_Number_of_buckets`  
 Numero iniziale di bucket per questo multimap non ordinato.  
  
 `_Hasher`  
 Funzione hash per questo multimap non ordinato.  
  
 `key_equality`  
 Funzione di confronto di uguaglianza per questo multimap non ordinato.  
  
 `_Allocator`  
 Allocatore per questo multimap non ordinato.  
  
 `_Begin`  
 Posizione del primo elemento nell'intervallo di elementi da copiare.  
  
 `_End`  
 Posizione del primo elemento oltre l'intervallo di elementi da copiare.  
  
 `_Umap`  
 L'origine `concurrent_unordered_multimap` oggetto copiare gli elementi.  
  
### <a name="remarks"></a>Note  
 Tramite tutti i costruttori viene archiviato un oggetto allocatore `_Allocator` e viene inizializzato il multimap non ordinato.  
  
 Tramite il primo costruttore viene specificato un multimap iniziale vuoto e vengono indicati in modo esplicito il numero di bucket, la funzione hash, la funzione di uguaglianza e il tipo di allocatore da utilizzare.  
  
 Tramite il secondo costruttore viene specificato un allocatore per il multimap non ordinato.  
  
 Il terzo costruttore specifica i valori forniti dall'intervallo dell'iteratore [ `_Begin`, `_End`).  
  
 Tramite il quarto e il quinto costruttore viene specificata una copia del multimap non ordinato simultaneo `_Umap`.  
  
 Tramite l'ultimo costruttore viene specificato uno spostamento del multimap non ordinato simultaneo `_Umap`.  
  
##  <a name="a-namecounta-count"></a><a name="count"></a>conteggio 

 Conta il numero di elementi corrispondenti a una chiave specificata. Questa funzione è concorrenza-safe.  
  
```
size_type count(const key_type& KVal) const;
```  
  
### <a name="parameters"></a>Parametri  
 `KVal`  
 Chiave da ricercare.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di volte in cui numero di volte in cui che la chiave presente nel contenitore.  
  
##  <a name="a-nameemptya-empty"></a><a name="empty"></a>vuoto 

 Verifica se sono presenti o meno degli elementi. Questo metodo è sicuro di concorrenza.  
  
```
bool empty() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il contenitore simultaneo è vuoto, `false` in caso contrario.  
  
### <a name="remarks"></a>Note  
 In presenza di inserimento simultanee, se il contenitore simultaneo è vuoto potrebbe cambiare immediatamente dopo la chiamata questa funzione, prima che il valore restituito viene letto.  
  
##  <a name="a-nameenda-end"></a><a name="end"></a>fine 

 Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento nel contenitore simultaneo. Questo metodo è sicuro di concorrenza.  
  
```
iterator end();

const_iterator end() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore alla posizione successiva all'ultimo elemento nel contenitore simultaneo.  
  
##  <a name="a-nameequalrangea-equalrange"></a><a name="equal_range"></a>equal_range 

 Trova un intervallo che corrisponde a una chiave specificata. Questa funzione è concorrenza-safe.  
  
```
std::pair<iterator,
    iterator> equal_range(
    const key_type& KVal);

std::pair<const_iterator,
    const_iterator> equal_range(
    const key_type& KVal) const;
```  
  
### <a name="parameters"></a>Parametri  
 `KVal`  
 Il valore della chiave da cercare.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [coppia](http://msdn.microsoft.com/en-us/32e72d66-3020-4cb9-92c3-f7a5fa7998ff) in cui il primo elemento è un iteratore all'inizio e il secondo elemento è un iteratore alla fine dell'intervallo.  
  
### <a name="remarks"></a>Note  
 È possibile per gli inserimenti simultanei causare altre chiavi deve essere inserito dopo l'iteratore begin e prima che l'iteratore di fine.  
  
##  <a name="a-namefinda-find"></a><a name="find"></a>Trova 

 Trova un elemento che corrisponde a una chiave specificata. Questa funzione è concorrenza-safe.  
  
```
iterator find(const key_type& KVal);

const_iterator find(const key_type& KVal) const;
```  
  
### <a name="parameters"></a>Parametri  
 `KVal`  
 Il valore della chiave da cercare.  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore che punta alla posizione del primo elemento che la chiave fornita corrisponde o l'iteratore `end()` se tale elemento non esiste.  
  
##  <a name="a-namegetallocatora-getallocator"></a><a name="get_allocator"></a>get_allocator 

 Restituisce l'oggetto allocatore archiviato per questo contenitore simultaneo. Questo metodo è sicuro di concorrenza.  
  
```
allocator_type get_allocator() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 L'oggetto allocatore archiviato per questo contenitore simultaneo.  
  
##  <a name="a-namehashfunctiona-hashfunction"></a><a name="hash_function"></a>hash_function 

 Restituisce l'oggetto della funzione hash archiviato.  
  
```
hasher hash_function() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto della funzione hash archiviato.  
  
##  <a name="a-nameinserta-insert"></a><a name="insert"></a>inserimento 

 Aggiunge gli elementi di `concurrent_unordered_multimap` oggetto.  
  
```
iterator insert(
    const value_type& value);

iterator insert(
    const_iterator _Where,
    const value_type& value);

template<class _Iterator>
void insert(_Iterator first,
    _Iterator last);

template<class V>
iterator insert(
    V&& value);

template<class V>
typename std::enable_if<!std::is_same<const_iterator,
    typename std::remove_reference<V>::type>::value,
    iterator>::type insert(
    const_iterator _Where,
    V&& value);
```  
  
### <a name="parameters"></a>Parametri  
 `_Iterator`  
 Tipo di iteratore utilizzato per l'inserimento.  
  
 `V`  
 Il tipo del valore inserito nella mappa.  
  
 `value`  
 Valore da inserire.  
  
 `_Where`  
 Posizione iniziale in corrispondenza della quale cercare un punto di inserimento.  
  
 `first`  
 Inizio dell'intervallo da inserire.  
  
 `last`  
 Fine dell'intervallo da inserire.  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore che punta alla posizione di inserimento.  
  
### <a name="remarks"></a>Note  
 Tramite la prima funzione membro l'elemento `value` viene inserito nella sequenza controllata, quindi viene restituito l'iteratore mediante cui viene definito l'elemento inserito.  
  
 La seconda funzione membro restituisce insert ( `value`), utilizzando `_Where` come punto di partenza nella sequenza controllata per cercare il punto di inserimento.  
  
 La terza funzione membro inserisce la sequenza di valori degli elementi nell'intervallo [ `first`, `last`).  
  
 Il comportamento delle ultime due funzioni membro è uguale a quello delle prime due, con la differenza che `value` viene utilizzato per costruire il valore inserito.  
  
##  <a name="a-namekeyeqa-keyeq"></a><a name="key_eq"></a>key_eq 

 Restituisce l'oggetto funzione di confronto di uguaglianza stored.  
  
```
key_equal key_eq() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 L'oggetto della funzione di confronto uguaglianza stored.  
  
##  <a name="a-nameloadfactora-loadfactor"></a><a name="load_factor"></a>load_factor 

 Calcola e restituisce il fattore di carico corrente del contenitore. Il fattore di carico è il numero di elementi nel contenitore diviso per il numero di bucket.  
  
```
float load_factor() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il fattore di carico per il contenitore.  
  
##  <a name="a-namemaxloadfactora-maxloadfactor"></a><a name="max_load_factor"></a>max_load_factor 

 Ottiene o imposta il fattore di carico massimo del contenitore. Il fattore di carico massimo è il numero massimo di elementi che possono essere bucket prima che il contenitore aumenta la tabella interna.  
  
```
float max_load_factor() const;

void max_load_factor(float _Newmax);
```  
  
### <a name="parameters"></a>Parametri  
 `_Newmax`  
  
### <a name="return-value"></a>Valore restituito  
 La prima funzione membro restituisce il fattore di carico massimo archiviato. La seconda funzione membro non restituisce un valore, ma genera un [out_of_range](../../../standard-library/out-of-range-class.md) eccezione se il fattore di carico specificato non è valido...  
  
##  <a name="a-namemaxsizea-maxsize"></a><a name="max_size"></a>max_size 

 Restituisce la dimensione massima del contenitore simultaneo, determinato dall'allocatore. Questo metodo è sicuro di concorrenza.  
  
```
size_type max_size() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero massimo di elementi che possono essere inseriti in questo contenitore simultaneo.  
  
### <a name="remarks"></a>Note  
 Questo valore limite superiore potrebbe essere superiore a ciò che effettivamente può contenere il contenitore.  
  
##  <a name="a-nameoperatoreqa-operator"></a><a name="operator_eq"></a>operatore = 

 Assegna il contenuto di un altro `concurrent_unordered_multimap` a questo oggetto. Questo metodo non è indipendente dalla concorrenza.  
  
```
concurrent_unordered_multimap& operator= (const concurrent_unordered_multimap& _Umap);

concurrent_unordered_multimap& operator= (concurrent_unordered_multimap&& _Umap);
```  
  
### <a name="parameters"></a>Parametri  
 `_Umap`  
 Oggetto `concurrent_unordered_multimap` di origine.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a questo `concurrent_unordered_multimap` oggetto.  
  
### <a name="remarks"></a>Note  
 Dopo l'eliminazione di tutti gli elementi esistenti in un multimap non ordinato simultaneo, tramite `operator=` il contenuto di `_Umap` viene copiato o spostato nel multimap non ordinato simultaneo.  
  
##  <a name="a-namerehasha-rehash"></a><a name="rehash"></a>rehash 

 Ricompila la tabella hash.  
  
```
void rehash(size_type _Buckets);
```  
  
### <a name="parameters"></a>Parametri  
 `_Buckets`  
 Il numero di bucket desiderato.  
  
### <a name="remarks"></a>Note  
 La funzione membro modifica il numero di bucket in modo da essere almeno pari a `_Buckets` e ricompila la tabella hash in base alle esigenze. Il numero di bucket deve essere una potenza di 2. Se non una potenza di 2, si verrà arrotondato per eccesso al più grande potenza di 2.  
  
 Genera un [out_of_range](../../../standard-library/out-of-range-class.md) eccezione se il numero di bucket non valida (0 o maggiore del numero massimo di bucket).  
  
##  <a name="a-namesizea-size"></a><a name="size"></a>dimensioni 

 Restituisce il numero di elementi in questo contenitore simultaneo. Questo metodo è sicuro di concorrenza.  
  
```
size_type size() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi presenti nel contenitore.  
  
### <a name="remarks"></a>Note  
 In presenza di operazioni di inserimento simultanee, il numero di elementi presenti nel contenitore simultaneo potrebbe cambiare immediatamente dopo la chiamata a questa funzione, prima che il valore restituito venga letto.  
  
##  <a name="a-nameswapa-swap"></a><a name="swap"></a>swap 

 Scambia il contenuto di due `concurrent_unordered_multimap` oggetti. Questo metodo non è indipendente dalla concorrenza.  
  
```
void swap(concurrent_unordered_multimap& _Umap);
```  
  
### <a name="parameters"></a>Parametri  
 `_Umap`  
 Oggetto `concurrent_unordered_multimap` con cui eseguire lo scambio.  
  
##  <a name="a-nameunsafebegina-unsafebegin"></a><a name="unsafe_begin"></a>unsafe_begin 

 Restituisce un iteratore al primo elemento in questo contenitore per un bucket specifico.  
  
```
local_iterator unsafe_begin(size_type _Bucket);

const_local_iterator unsafe_begin(size_type _Bucket) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Bucket`  
 L'indice di bucket.  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore che punta all'inizio del bucket.  
  
##  <a name="a-nameunsafebucketa-unsafebucket"></a><a name="unsafe_bucket"></a>unsafe_bucket 

 Restituisce l'indice di bucket associato a una chiave specifica in questo contenitore.  
  
```
size_type unsafe_bucket(const key_type& KVal) const;
```  
  
### <a name="parameters"></a>Parametri  
 `KVal`  
 Chiave dell'elemento da cercare.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice di bucket per la chiave in questo contenitore.  
  
##  <a name="a-nameunsafebucketcounta-unsafebucketcount"></a><a name="unsafe_bucket_count"></a>unsafe_bucket_count 

 Restituisce il numero corrente di bucket in questo contenitore.  
  
```
size_type unsafe_bucket_count() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero corrente di bucket in questo contenitore.  
  
##  <a name="a-nameunsafebucketsizea-unsafebucketsize"></a><a name="unsafe_bucket_size"></a>unsafe_bucket_size 

 Restituisce il numero di elementi in un bucket specifico di questo contenitore.  
  
```
size_type unsafe_bucket_size(size_type _Bucket);
```  
  
### <a name="parameters"></a>Parametri  
 `_Bucket`  
 Il bucket per la ricerca.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero corrente di bucket in questo contenitore.  
  
##  <a name="a-nameunsafecbegina-unsafecbegin"></a><a name="unsafe_cbegin"></a>unsafe_cbegin 

 Restituisce un iteratore al primo elemento in questo contenitore per un bucket specifico.  
  
```
const_local_iterator unsafe_cbegin(size_type _Bucket) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Bucket`  
 L'indice di bucket.  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore che punta all'inizio del bucket.  
  
##  <a name="a-nameunsafecenda-unsafecend"></a><a name="unsafe_cend"></a>unsafe_cend 

 Restituisce un iteratore alla posizione successiva all'ultimo elemento in un bucket specifico.  
  
```
const_local_iterator unsafe_cend(size_type _Bucket) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Bucket`  
 L'indice di bucket.  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore che punta all'inizio del bucket.  
  
##  <a name="a-nameunsafeenda-unsafeend"></a><a name="unsafe_end"></a>unsafe_end 

 Restituisce un iteratore all'ultimo elemento in questo contenitore per un bucket specifico.  
  
```
local_iterator unsafe_end(size_type _Bucket);

const_local_iterator unsafe_end(size_type _Bucket) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Bucket`  
 L'indice di bucket.  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore che punta alla fine del bucket.  
  
##  <a name="a-nameunsafeerasea-unsafeerase"></a><a name="unsafe_erase"></a>unsafe_erase 

 Rimuove gli elementi dal `concurrent_unordered_multimap` in posizioni specificate. Questo metodo non è indipendente dalla concorrenza.  
  
```
iterator unsafe_erase(
    const_iterator _Where);

size_type unsafe_erase(
    const key_type& KVal);

iterator unsafe_erase(
    const_iterator first,
    const_iterator last);
```  
  
### <a name="parameters"></a>Parametri  
 `_Where`  
 La posizione dell'iteratore da cancellare.  
  
 `KVal`  
 Il valore della chiave da cancellare.  
  
 `first`  
 `last`  
  
### <a name="return-value"></a>Valore restituito  
 Le prime due funzioni restituiscono un iteratore che definisce il primo elemento rimanente oltre gli elementi rimossi o `concurrent_unordered_multimap::end`() se tale elemento non esiste. La terza funzione membro restituisce il numero di elementi che vengono rimossi.  
  
### <a name="remarks"></a>Note  
 Tramite la prima funzione membro viene rimosso l'elemento della sequenza controllata puntata da `_Where`. La seconda funzione membro rimuove gli elementi nell'intervallo [ `_Begin`, `_End`).  
  
 La terza funzione membro rimuove gli elementi nell'intervallo delimitato dal `concurrent_unordered_multimap::equal_range`(KVal).  
  
##  <a name="a-nameunsafemaxbucketcounta-unsafemaxbucketcount"></a><a name="unsafe_max_bucket_count"></a>unsafe_max_bucket_count 

 Restituisce il numero massimo di bucket in questo contenitore.  
  
```
size_type unsafe_max_bucket_count() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero massimo di bucket in questo contenitore.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md)




