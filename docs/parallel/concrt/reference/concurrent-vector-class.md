---
title: Classe concurrent_vector | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- concurrent_vector/Concurrency::concurrent_vector
- concurrent_vector/concurrency::concurrent_vector
dev_langs:
- C++
helpviewer_keywords:
- concurrent_vector class
ms.assetid: a217b4ac-af2b-4d41-94eb-09a75ee28622
caps.latest.revision: 21
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
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: fdc84a03c562a4efa336f62c0cf0a7529c420f95
ms.lasthandoff: 02/24/2017

---
# <a name="concurrentvector-class"></a>Classe concurrent_vector
La classe `concurrent_vector` è una classe contenitore di sequenze che consente un accesso casuale a qualsiasi elemento. Abilita accodamento, accesso elementi, accesso iteratori e operazioni traversali di iterazione indipendenti dalla concorrenza.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename T, class _Ax>
class concurrent_vector: protected details::_Allocator_base<T,
    _Ax>,
 private details::_Concurrent_vector_base_v4;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di dati degli elementi da archiviare nel vettore.  
  
 `_Ax`  
 Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli sull'allocazione e deallocazione della memoria per il vettore simultaneo. Questo argomento è facoltativo e il valore predefinito è `allocator<``T``>`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`allocator_type`|Un tipo che rappresenta la classe dell'allocatore per il vettore simultaneo.|  
|`const_iterator`|Un tipo che fornisce un iteratore ad accesso casuale che può leggere un `const` elemento in un vettore simultaneo.|  
|`const_pointer`|Un tipo che fornisce un puntatore a un `const` elemento in un vettore simultaneo.|  
|`const_reference`|Tipo che fornisce un riferimento a un `const` elemento archiviato in un vettore simultaneo per la lettura e l'esecuzione `const` operazioni.|  
|`const_reverse_iterator`|Un tipo che fornisce un iteratore ad accesso casuale che può leggere qualsiasi `const` elemento nel vettore simultaneo.|  
|`difference_type`|Tipo che fornisce la distanza signed tra due elementi in un vettore simultaneo.|  
|`iterator`|Tipo che fornisce un iteratore ad accesso casuale che può leggere qualsiasi elemento in un vettore simultaneo. Modifica di un elemento utilizzando l'iteratore non indipendenti dalla concorrenza.|  
|`pointer`|Tipo che fornisce un puntatore a un elemento in un vettore simultaneo.|  
|`reference`|Tipo che fornisce un riferimento a un elemento archiviato in un vettore simultaneo.|  
|`reverse_iterator`|Tipo che fornisce un iteratore ad accesso casuale che può leggere qualsiasi elemento in un vettore simultaneo inverso. Modifica di un elemento utilizzando l'iteratore non indipendenti dalla concorrenza.|  
|`size_type`|Tipo che conta il numero di elementi in un vettore simultaneo.|  
|`value_type`|Tipo che rappresenta il tipo di dati archiviati in un vettore simultaneo.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore concurrent_vector](#ctor)|Di overload. Costruisce un vettore simultaneo.|  
|[~ concurrent_vector distruttore](#dtor)|Cancella tutti gli elementi e distrugge questo vettore simultaneo.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ASSIGN (metodo)](#assign)|Di overload. Cancella gli elementi del vettore simultaneo e gli assegna `_N` copie di `_Item`, o sui valori specificati dall'intervallo dell'iteratore [ `_Begin`, `_End`). Questo metodo non è indipendente dalla concorrenza.|  
|[AT (metodo)](#at)|Di overload. Fornisce l'accesso all'elemento in corrispondenza dell'indice specificato in un vettore simultaneo. Questo metodo è indipendente dalla concorrenza per le operazioni di lettura e anche durante la crescita del vettore, purché dopo aver verificato che il valore `_Index` è inferiore alla dimensione del vettore simultaneo.|  
|[back (metodo)](#back)|Di overload. Restituisce un riferimento o un `const` fa riferimento all'ultimo elemento nel vettore simultaneo. Se il vettore simultaneo è vuoto, il valore restituito è indefinito. Questo metodo è indipendente dalla concorrenza.|  
|[Begin (metodo)](#begin)|Di overload. Restituisce un iteratore di tipo `iterator` o `const_iterator` all'inizio del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|  
|[capacità (metodo)](#capacity)|Restituisce la dimensione massima che può raggiungere il vettore simultaneo senza dover allocare altra memoria. Questo metodo è indipendente dalla concorrenza.|  
|[cbegin (metodo)](#cbegin)|Restituisce un iteratore di tipo `const_iterator` all'inizio del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|  
|[cend (metodo)](#cend)|Restituisce un iteratore di tipo `const_iterator` alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|  
|[Clear (metodo)](#clear)|Cancella tutti gli elementi nel vettore simultaneo. Questo metodo non è indipendente dalla concorrenza.|  
|[crbegin (metodo)](#crbegin)|Restituisce un iteratore di tipo `const_reverse_iterator` all'inizio del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|  
|[crend (metodo)](#crend)|Restituisce un iteratore di tipo `const_reverse_iterator` alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|  
|[Empty (metodo)](#empty)|Verifica se il vettore simultaneo è vuoto, al momento questo metodo viene chiamato. Questo metodo è indipendente dalla concorrenza.|  
|[end (metodo)](#end)|Di overload. Restituisce un iteratore di tipo `iterator` o `const_iterator` alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|  
|[front (metodo)](#front)|Di overload. Restituisce un riferimento o un `const` riferimento al primo elemento nel vettore simultaneo. Se il vettore simultaneo è vuoto, il valore restituito è indefinito. Questo metodo è indipendente dalla concorrenza.|  
|[get_allocator (metodo)](#get_allocator)|Restituisce una copia dell'allocatore utilizzato per costruire il vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|  
|[grow_by (metodo)](#grow_by)|Di overload. Aumenta questo vettore simultaneo da `_Delta` elementi. Questo metodo è indipendente dalla concorrenza.|  
|[grow_to_at_least (metodo)](#grow_to_at_least)|Aumenta questo vettore simultaneo fino a quando non dispone di almeno `_N` elementi. Questo metodo è indipendente dalla concorrenza.|  
|[max_size (metodo)](#max_size)|Restituisce il numero massimo di elementi che dal vettore simultaneo può contenere. Questo metodo è indipendente dalla concorrenza.|  
|[push_back (metodo)](#push_back)|Di overload. Aggiunge l'elemento specificato alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|  
|[rbegin (metodo)](#rbegin)|Di overload. Restituisce un iteratore di tipo `reverse_iterator` o `const_reverse_iterator` all'inizio del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|  
|[REND (metodo)](#rend)|Di overload. Restituisce un iteratore di tipo `reverse_iterator` o `const_reverse_iterator` alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|  
|[Reserve (metodo)](#reserve)|Consente di allocare spazio sufficiente per raggiungere il vettore simultaneo dimensioni `_N` senza dover allocare altra memoria in un secondo momento. Questo metodo non è indipendente dalla concorrenza.|  
|[Resize (metodo)](#resize)|Di overload. Modifica la dimensione del vettore simultaneo per la dimensione richiesta, l'eliminazione o aggiunta di elementi in base alle esigenze. Questo metodo non è indipendente dalla concorrenza.|  
|[shrink_to_fit (metodo)](#shrink_to_fit)|Comprime la rappresentazione interna del vettore simultaneo per ridurre la frammentazione e ottimizzare l'utilizzo della memoria. Questo metodo non è indipendente dalla concorrenza.|  
|[dimensioni (metodo)](#size)|Restituisce il numero di elementi nel vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|  
|[swap (metodo)](#swap)|Scambia il contenuto di due vettori simultanei. Questo metodo non è indipendente dalla concorrenza.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operator [] (operatore)](#operator_at)|Di overload. Fornisce l'accesso all'elemento in corrispondenza dell'indice specificato in un vettore simultaneo. Questo metodo è indipendente dalla concorrenza per le operazioni di lettura e anche durante la crescita del vettore, purché il dopo aver verificato che il valore `_Index` è inferiore alla dimensione del vettore simultaneo.|  
|[operatore = (operatore)](#operator_eq)|Di overload. Assegna il contenuto di un altro `concurrent_vector` a questo oggetto. Questo metodo non è indipendente dalla concorrenza.|  
  
## <a name="remarks"></a>Note  
 Per informazioni dettagliate sul `concurrent_vector` , vedere [contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `_Concurrent_vector_base_v4`  
  
 `_Allocator_base`  
  
 `concurrent_vector`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concurrent_vector.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-nameassigna-assign"></a><a name="assign"></a>assegnare 

 Cancella gli elementi del vettore simultaneo e gli assegna `_N` copie di `_Item`, o sui valori specificati dall'intervallo dell'iteratore [ `_Begin`, `_End`). Questo metodo non è indipendente dalla concorrenza.  
  
```
void assign(
    size_type _N,
    const_reference _Item);

template<class _InputIterator>
void assign(_InputIterator _Begin,
    _InputIterator _End);
```  
  
### <a name="parameters"></a>Parametri  
 `_InputIterator`  
 Il tipo dell'iteratore specificato.  
  
 `_N`  
 Il numero di elementi da copiare nel vettore simultaneo.  
  
 `_Item`  
 Riferimento a un valore utilizzato per riempire il vettore simultaneo.  
  
 `_Begin`  
 Un iteratore al primo elemento dell'intervallo di origine.  
  
 `_End`  
 Un iteratore alla prima posizione oltre l'ultimo elemento dell'intervallo di origine.  
  
### <a name="remarks"></a>Note  
 `assign`non è indipendente dalla concorrenza. È necessario assicurarsi che nessun altro thread stia richiamando metodi sul vettore simultaneo quando si chiama questo metodo.  
  
##  <a name="a-nameata-at"></a><a name="at"></a>in 

 Fornisce l'accesso all'elemento in corrispondenza dell'indice specificato in un vettore simultaneo. Questo metodo è indipendente dalla concorrenza per le operazioni di lettura e anche durante la crescita del vettore, purché dopo aver verificato che il valore `_Index` è inferiore alla dimensione del vettore simultaneo.  
  
```
reference at(size_type _Index);

const_reference at(size_type _Index) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Index`  
 L'indice dell'elemento da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'elemento in corrispondenza dell'indice specificato.  
  
### <a name="remarks"></a>Note  
 La versione della funzione `at` che restituisce un non - `const` riferimento non può essere utilizzato per scrivere contemporaneamente all'elemento da thread diversi. Un oggetto di sincronizzazione diverso da utilizzare per sincronizzare simultaneo in lettura e operazioni di scrittura allo stesso elemento di dati.  
  
 Il metodo genera `out_of_range` se `_Index` è maggiore o uguale alla dimensione del vettore simultaneo, e `range_error` se l'indice per una parte interrotta del vettore. Per informazioni dettagliate su come un vettore può essere interrotto, vedere [contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md).  
  
##  <a name="a-namebacka-back"></a><a name="back"></a>Indietro 

 Restituisce un riferimento o un `const` fa riferimento all'ultimo elemento nel vettore simultaneo. Se il vettore simultaneo è vuoto, il valore restituito è indefinito. Questo metodo è indipendente dalla concorrenza.  
  
```
reference back();

const_reference back() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento o `const` fare riferimento all'ultimo elemento nel vettore simultaneo.  
  
##  <a name="a-namebegina-begin"></a><a name="begin"></a>iniziare 

 Restituisce un iteratore di tipo `iterator` o `const_iterator` all'inizio del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.  
  
```
iterator begin();

const_iterator begin() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore di tipo `iterator` o `const_iterator` all'inizio del vettore simultaneo.  
  
##  <a name="a-namecapacitya-capacity"></a><a name="capacity"></a>capacità 

 Restituisce la dimensione massima che può raggiungere il vettore simultaneo senza dover allocare altra memoria. Questo metodo è indipendente dalla concorrenza.  
  
```
size_type capacity() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Dimensione massima raggiungibile dal vettore simultaneo senza dover allocare altra memoria.  
  
### <a name="remarks"></a>Note  
 A differenza di una libreria Standard C++ `vector`, `concurrent_vector` oggetto non sposta gli elementi esistenti se alloca altra memoria.  
  
##  <a name="a-namecbegina-cbegin"></a><a name="cbegin"></a>cbegin 

 Restituisce un iteratore di tipo `const_iterator` all'inizio del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.  
  
```
const_iterator cbegin() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore di tipo `const_iterator` all'inizio del vettore simultaneo.  
  
##  <a name="a-namecenda-cend"></a><a name="cend"></a>cend 

 Restituisce un iteratore di tipo `const_iterator` alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.  
  
```
const_iterator cend() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore di tipo `const_iterator` alla fine del vettore simultaneo.  
  
##  <a name="a-namecleara-clear"></a><a name="clear"></a>deselezionare 

 Cancella tutti gli elementi nel vettore simultaneo. Questo metodo non è indipendente dalla concorrenza.  
  
```
void clear();
```  
  
### <a name="remarks"></a>Note  
 `clear`non è indipendente dalla concorrenza. È necessario assicurarsi che nessun altro thread stia richiamando metodi sul vettore simultaneo quando si chiama questo metodo. `clear`non libera matrici interne. Per liberare matrici interne, chiamare la funzione `shrink_to_fit` dopo `clear`.  
  
##  <a name="a-namectora-concurrentvector"></a><a name="ctor"></a>concurrent_vector 

 Costruisce un vettore simultaneo.  
  
```
explicit concurrent_vector(
    const allocator_type& _Al = allocator_type());

concurrent_vector(
    const concurrent_vector& _Vector);

template<class M>
concurrent_vector(
    const concurrent_vector<T,
    M>& _Vector,
    const allocator_type& _Al = allocator_type());

concurrent_vector(
    concurrent_vector&& _Vector);

explicit concurrent_vector(
    size_type _N);

concurrent_vector(
    size_type _N,
    const_reference _Item,
    const allocator_type& _Al = allocator_type());

template<class _InputIterator>
concurrent_vector(_InputIterator _Begin,
    _InputIterator _End,
    const allocator_type& _Al = allocator_type());
```  
  
### <a name="parameters"></a>Parametri  
 `M`  
 Il tipo di allocatore del vettore di origine.  
  
 `_InputIterator`  
 Tipo di iteratore di input.  
  
 `_Al`  
 Classe Allocator da usare con questo oggetto.  
  
 `_Vector`  
 Oggetto `concurrent_vector` di origine da cui copiare o spostare elementi.  
  
 `_N`  
 Capacità iniziale dell'oggetto `concurrent_vector`.  
  
 `_Item`  
 Il valore degli elementi nell'oggetto costruito.  
  
 `_Begin`  
 Posizione del primo elemento nell'intervallo di elementi da copiare.  
  
 `_End`  
 Posizione del primo elemento oltre l'intervallo di elementi da copiare.  
  
### <a name="remarks"></a>Note  
 Tutti i costruttori archiviano un oggetto allocatore `_Al` e inizializzano il vettore.  
  
 Il primo costruttore specificano un vettore iniziale vuoto e specifica in modo esplicito il tipo di allocatore. da utilizzare.  
  
 Il secondo e terzo costruttore specificano una copia del vettore simultaneo `_Vector`.  
  
 Tramite il quarto costruttore viene specificato un movimento del vettore simultaneo `_Vector`.  
  
 Il quinto costruttore specifica una ripetizione di un numero specificato ( `_N`) degli elementi del valore predefinito per la classe `T`.  
  
 Il sesto costruttore specifica una ripetizione di ( `_N`) degli elementi di valore `_Item`.  
  
 L'ultimo costruttore specifica i valori forniti dall'intervallo dell'iteratore [ `_Begin`, `_End`).  
  
##  <a name="a-namedtora-concurrentvector"></a><a name="dtor"></a>~ concurrent_vector 

 Cancella tutti gli elementi e distrugge questo vettore simultaneo.  
  
```
~concurrent_vector();
```  
  
##  <a name="a-namecrbegina-crbegin"></a><a name="crbegin"></a>crbegin 

 Restituisce un iteratore di tipo `const_reverse_iterator` all'inizio del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.  
  
```
const_reverse_iterator crbegin() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore di tipo `const_reverse_iterator` all'inizio del vettore simultaneo.  
  
##  <a name="a-namecrenda-crend"></a><a name="crend"></a>crend 

 Restituisce un iteratore di tipo `const_reverse_iterator` alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.  
  
```
const_reverse_iterator crend() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore di tipo `const_reverse_iterator` alla fine del vettore simultaneo.  
  
##  <a name="a-nameemptya-empty"></a><a name="empty"></a>vuoto 

 Verifica se il vettore simultaneo è vuoto, al momento questo metodo viene chiamato. Questo metodo è indipendente dalla concorrenza.  
  
```
bool empty() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il vettore era vuoto nel momento in cui è stata chiamata la funzione, `false` in caso contrario.  
  
##  <a name="a-nameenda-end"></a><a name="end"></a>fine 

 Restituisce un iteratore di tipo `iterator` o `const_iterator` alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.  
  
```
iterator end();

const_iterator end() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore di tipo `iterator` o `const_iterator` alla fine del vettore simultaneo.  
  
##  <a name="a-namefronta-front"></a><a name="front"></a>primo piano 

 Restituisce un riferimento o un `const` riferimento al primo elemento nel vettore simultaneo. Se il vettore simultaneo è vuoto, il valore restituito è indefinito. Questo metodo è indipendente dalla concorrenza.  
  
```
reference front();

const_reference front() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento o `const` riferimento al primo elemento nel vettore simultaneo.  
  
##  <a name="a-namegetallocatora-getallocator"></a><a name="get_allocator"></a>get_allocator 

 Restituisce una copia dell'allocatore utilizzato per costruire il vettore simultaneo. Questo metodo è indipendente dalla concorrenza.  
  
```
allocator_type get_allocator() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Una copia dell'allocatore utilizzato per costruire il `concurrent_vector` oggetto.  
  
##  <a name="a-namegrowbya-growby"></a><a name="grow_by"></a>grow_by 

 Aumenta questo vettore simultaneo da `_Delta` elementi. Questo metodo è indipendente dalla concorrenza.  
  
```
iterator grow_by(
    size_type _Delta);

iterator grow_by(
    size_type _Delta,
    const_reference _Item);
```  
  
### <a name="parameters"></a>Parametri  
 `_Delta`  
 Il numero di elementi da aggiungere all'oggetto.  
  
 `_Item`  
 Il valore per inizializzare i nuovi elementi con.  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore al primo elemento aggiunto.  
  
### <a name="remarks"></a>Note  
 Se `_Item` non è specificato, i nuovi elementi sono costruita predefinita.  
  
##  <a name="a-namegrowtoatleasta-growtoatleast"></a><a name="grow_to_at_least"></a>grow_to_at_least 

 Aumenta questo vettore simultaneo fino a quando non dispone di almeno `_N` elementi. Questo metodo è indipendente dalla concorrenza.  
  
```
iterator grow_to_at_least(size_type _N);
```  
  
### <a name="parameters"></a>Parametri  
 `_N`  
 La nuova dimensione minima per il `concurrent_vector` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore che punta all'inizio della sequenza aggiunta o all'elemento in corrispondenza dell'indice `_N` se è non stato aggiunto alcun elemento.  
  
##  <a name="a-namemaxsizea-maxsize"></a><a name="max_size"></a>max_size 

 Restituisce il numero massimo di elementi che dal vettore simultaneo può contenere. Questo metodo è indipendente dalla concorrenza.  
  
```
size_type max_size() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero massimo di elementi di `concurrent_vector` oggetto può contenere.  
  
##  <a name="a-nameoperatoreqa-operator"></a><a name="operator_eq"></a>operatore = 

 Assegna il contenuto di un altro `concurrent_vector` a questo oggetto. Questo metodo non è indipendente dalla concorrenza.  
  
```
concurrent_vector& operator= (
    const concurrent_vector& _Vector);

template<class M>
concurrent_vector& operator= (
    const concurrent_vector<T, M>& _Vector);

concurrent_vector& operator= (
    concurrent_vector&& _Vector);
```  
  
### <a name="parameters"></a>Parametri  
 `M`  
 Il tipo di allocatore del vettore di origine.  
  
 `_Vector`  
 Oggetto `concurrent_vector` di origine.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a questo `concurrent_vector` oggetto.  
  
##  <a name="a-nameoperatorata-operator"></a><a name="operator_at"></a>operator] 

 Fornisce l'accesso all'elemento in corrispondenza dell'indice specificato in un vettore simultaneo. Questo metodo è indipendente dalla concorrenza per le operazioni di lettura e anche durante la crescita del vettore, purché il dopo aver verificato che il valore `_Index` è inferiore alla dimensione del vettore simultaneo.  
  
```
reference operator[](size_type _index);

const_reference operator[](size_type _index) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Index`  
 L'indice dell'elemento da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'elemento in corrispondenza dell'indice specificato.  
  
### <a name="remarks"></a>Note  
 La versione di `operator []` che restituisce un non - `const` riferimento non può essere utilizzato per scrivere contemporaneamente all'elemento da thread diversi. Un oggetto di sincronizzazione diverso da utilizzare per sincronizzare simultaneo in lettura e operazioni di scrittura allo stesso elemento di dati.  
  
 Nessun controllo viene eseguita per assicurare che dei limiti `_Index` è un indice valido nel vettore simultaneo.  
  
##  <a name="a-namepushbacka-pushback"></a><a name="push_back"></a>push_back 

 Aggiunge l'elemento specificato alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.  
  
```
iterator push_back(const_reference _Item);

iterator push_back(T&& _Item);
```  
  
### <a name="parameters"></a>Parametri  
 `_Item`  
 Il valore da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore all'elemento aggiunto.  
  
##  <a name="a-namerbegina-rbegin"></a><a name="rbegin"></a>rbegin 

 Restituisce un iteratore di tipo `reverse_iterator` o `const_reverse_iterator` all'inizio del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.  
  
```
reverse_iterator rbegin();

const_reverse_iterator rbegin() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore di tipo `reverse_iterator` o `const_reverse_iterator` all'inizio del vettore simultaneo.  
  
##  <a name="a-namerenda-rend"></a><a name="rend"></a>REND) 

 Restituisce un iteratore di tipo `reverse_iterator` o `const_reverse_iterator` alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.  
  
```
reverse_iterator rend();

const_reverse_iterator rend() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore di tipo `reverse_iterator` o `const_reverse_iterator` alla fine del vettore simultaneo.  
  
##  <a name="a-namereservea-reserve"></a><a name="reserve"></a>riserva 

 Consente di allocare spazio sufficiente per raggiungere il vettore simultaneo dimensioni `_N` senza dover allocare altra memoria in un secondo momento. Questo metodo non è indipendente dalla concorrenza.  
  
```
void reserve(size_type _N);
```  
  
### <a name="parameters"></a>Parametri  
 `_N`  
 Il numero di elementi per riservare spazio per.  
  
### <a name="remarks"></a>Note  
 `reserve`non è indipendente dalla concorrenza. È necessario assicurarsi che nessun altro thread stia richiamando metodi sul vettore simultaneo quando si chiama questo metodo. La capacità del vettore simultaneo dopo il metodo restituisce potrebbe essere maggiore di prenotazione richiesta.  
  
##  <a name="a-nameresizea-resize"></a><a name="resize"></a>ridimensionamento 

 Modifica la dimensione del vettore simultaneo per la dimensione richiesta, l'eliminazione o aggiunta di elementi in base alle esigenze. Questo metodo non è indipendente dalla concorrenza.  
  
```
void resize(
    size_type _N);

void resize(
    size_type _N,
    const T& val);
```  
  
### <a name="parameters"></a>Parametri  
 `_N`  
 Nuova dimensione di concurrent_vector.  
  
 `val`  
 Valore di nuovi elementi aggiunti al vettore se la nuova dimensione è maggiore di quella originale. Se il valore viene omesso, i nuovi oggetti vengono assegnati il valore predefinito per il relativo tipo.  
  
### <a name="remarks"></a>Note  
 Se le dimensioni del contenitore sono inferiore a quella richiesta, gli elementi vengono aggiunti al vettore finché raggiunge la dimensione richiesta. Se le dimensioni del contenitore sono superiore a quella richiesta, vengono eliminati gli elementi più vicini alla fine del contenitore finché il contenitore raggiunge la dimensione `_N`. Se la dimensione attuale del contenitore corrisponde a quella richiesta, non viene eseguita alcuna azione.  
  
 `resize`non è concorrenza sicuro. È necessario assicurarsi che nessun altro thread stia richiamando metodi sul vettore simultaneo quando si chiama questo metodo.  
  
##  <a name="a-nameshrinktofita-shrinktofit"></a><a name="shrink_to_fit"></a>shrink_to_fit 

 Comprime la rappresentazione interna del vettore simultaneo per ridurre la frammentazione e ottimizzare l'utilizzo della memoria. Questo metodo non è indipendente dalla concorrenza.  
  
```
void shrink_to_fit();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo internamente nuovamente allocazione di memoria spostamento tra elementi, invalidando tutti gli iteratori. `shrink_to_fit`non è indipendente dalla concorrenza. È necessario assicurarsi che nessun altro thread stia richiamando metodi sul vettore simultaneo quando si chiama questa funzione.  
  
##  <a name="a-namesizea-size"></a><a name="size"></a>dimensioni 

 Restituisce il numero di elementi nel vettore simultaneo. Questo metodo è indipendente dalla concorrenza.  
  
```
size_type size() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi in questo `concurrent_vector` oggetto.  
  
### <a name="remarks"></a>Note  
 La dimensione restituita è garantita per includere tutti gli elementi aggiunti dalle chiamate alla funzione `push_back`, o aumentare le operazioni completate prima di richiamare questo metodo. Tuttavia, può includere anche elementi allocati ma ancora sotto costruzione da chiamate simultanee a uno qualsiasi dei metodi di crescita.  
  
##  <a name="a-nameswapa-swap"></a><a name="swap"></a>swap 

 Scambia il contenuto di due vettori simultanei. Questo metodo non è indipendente dalla concorrenza.  
  
```
void swap(concurrent_vector& _Vector);
```  
  
### <a name="parameters"></a>Parametri  
 `_Vector`  
 Il `concurrent_vector` oggetto scambiare i contenuti con.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md)




