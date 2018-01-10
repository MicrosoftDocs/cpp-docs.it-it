---
title: Classe concurrent_priority_queue | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- concurrent_priority_queue
- CONCURRENT_PRIORITY_QUEUE/concurrency::concurrent_priority_queue
- CONCURRENT_PRIORITY_QUEUE/concurrency::concurrent_priority_queue::concurrent_priority_queue
- CONCURRENT_PRIORITY_QUEUE/concurrency::concurrent_priority_queue::clear
- CONCURRENT_PRIORITY_QUEUE/concurrency::concurrent_priority_queue::empty
- CONCURRENT_PRIORITY_QUEUE/concurrency::concurrent_priority_queue::get_allocator
- CONCURRENT_PRIORITY_QUEUE/concurrency::concurrent_priority_queue::push
- CONCURRENT_PRIORITY_QUEUE/concurrency::concurrent_priority_queue::size
- CONCURRENT_PRIORITY_QUEUE/concurrency::concurrent_priority_queue::swap
- CONCURRENT_PRIORITY_QUEUE/concurrency::concurrent_priority_queue::try_pop
dev_langs: C++
helpviewer_keywords: concurrent_priority_queue class
ms.assetid: 3e740381-0f4e-41fc-8b66-ad0bb55f17a3
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1796351dc594712ef69ec5562f85501b30997104
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="concurrentpriorityqueue-class"></a>Classe concurrent_priority_queue
La classe `concurrent_priority_queue` è un contenitore che consente a più thread di inserire e togliere elementi contemporaneamente. Gli elementi vengono prelevati secondo un ordine di priorità dove la priorità è determinata da una funzione fornita come argomento del modello.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <typename T,
    typename _Compare= std::less<T>,
    typename _Ax = std::allocator<T>
>,
    typename _Ax = std::allocator<T>> class concurrent_priority_queue;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo di dati degli elementi da archiviare nella coda di priorità.  
  
 `_Compare`  
 Tipo dell'oggetto funzione tramite cui è possibile confrontare i valori di due elementi come chiavi di ordinamento per determinarne l'ordine relativo nella coda di priorità. Questo argomento è facoltativo e il predicato binario `less<T>` rappresenta il valore predefinito.  
  
 `_Ax`  
 Tipo che rappresenta l'oggetto allocatore archiviato in cui sono inclusi i dettagli sull'allocazione e sulla deallocazione di memoria per la coda di priorità simultanea. Questo argomento è facoltativo e il valore predefinito è `allocator<T>`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`allocator_type`|Tipo che rappresenta la classe dell'allocatore per la coda di priorità simultanea.|  
|`const_reference`|Tipo che rappresenta un riferimento const a un elemento del tipo archiviato in una coda di priorità simultanea.|  
|`reference`|Tipo che rappresenta un riferimento a un elemento del tipo archiviato in una coda di priorità simultanea.|  
|`size_type`|Tipo che conta il numero di elementi in una coda di priorità simultanea.|  
|`value_type`|Tipo che rappresenta il tipo di dati archiviati in una coda di priorità simultanea.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[concurrent_priority_queue](#ctor)|Di overload. Costruisce una coda di priorità simultanea.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[clear](#clear)|Cancella tutti gli elementi nella coda di priorità simultanea. Questo metodo non è indipendente dalla concorrenza.|  
|[empty](#empty)|Testa se la coda di priorità simultanea è vuota nel momento in cui questo metodo viene chiamato. Questo metodo è indipendente dalla concorrenza.|  
|[get_allocator](#get_allocator)|Restituisce una copia dell'allocatore utilizzato per costruire la coda di priorità simultanea. Questo metodo è indipendente dalla concorrenza.|  
|[push](#push)|Di overload. Aggiunge un elemento alla coda di priorità simultanea. Questo metodo è indipendente dalla concorrenza.|  
|[size](#size)|Restituisce il numero di elementi presenti nella coda di priorità simultanea. Questo metodo è indipendente dalla concorrenza.|  
|[swap](#swap)|Scambia il contenuto di due code di priorità simultanee. Questo metodo non è indipendente dalla concorrenza.|  
|[try_pop](#try_pop)|Rimuove e restituisce l'elemento con la priorità più elevata dalla coda se quest'ultima non è vuota. Questo metodo è indipendente dalla concorrenza.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operator=](#operator_eq)|Di overload. Assegna il contenuto di un altro `concurrent_priority_queue` questo oggetto. Questo metodo non è indipendente dalla concorrenza.|  
  
## <a name="remarks"></a>Note  
 Per informazioni dettagliate sul `concurrent_priority_queue` classe, vedere [contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `concurrent_priority_queue`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concurrent_priority_queue. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="clear"></a>deselezionare 

 Cancella tutti gli elementi nella coda di priorità simultanea. Questo metodo non è indipendente dalla concorrenza.  
  
```
void clear();
```  
  
### <a name="remarks"></a>Note  
 `clear`non è indipendente dalla concorrenza. È necessario assicurarsi che nessun altro thread sta chiamando metodi sulla coda di priorità simultanea quando si chiama questo metodo. `clear`libera la memoria.  
  
##  <a name="ctor"></a>concurrent_priority_queue 

 Costruisce una coda di priorità simultanea.  
  
```
explicit concurrent_priority_queue(
    const allocator_type& _Al = allocator_type());

explicit concurrent_priority_queue(
    size_type _Init_capacity,
    const allocator_type& _Al = allocator_type());

template<typename _InputIterator>
concurrent_priority_queue(_InputIterator _Begin,
    _InputIterator _End,
    const allocator_type& _Al = allocator_type());

concurrent_priority_queue(
    const concurrent_priority_queue& _Src);

concurrent_priority_queue(
    const concurrent_priority_queue& _Src,
    const allocator_type& _Al);

concurrent_priority_queue(
    concurrent_priority_queue&& _Src);

concurrent_priority_queue(
    concurrent_priority_queue&& _Src,
    const allocator_type& _Al);
```  
  
### <a name="parameters"></a>Parametri  
 `_InputIterator`  
 Tipo di iteratore di input.  
  
 `_Al`  
 Classe Allocator da usare con questo oggetto.  
  
 `_Init_capacity`  
 Capacità iniziale dell'oggetto `concurrent_priority_queue`.  
  
 `_Begin`  
 Posizione del primo elemento nell'intervallo di elementi da copiare.  
  
 `_End`  
 Posizione del primo elemento oltre l'intervallo di elementi da copiare.  
  
 `_Src`  
 Oggetto `concurrent_priority_queue` di origine da cui copiare o spostare elementi.  
  
### <a name="remarks"></a>Note  
 Tutti i costruttori archiviano un oggetto allocatore `_Al` e inizializzare la coda di priorità.  
  
 Il primo costruttore specifica una coda di priorità iniziale vuoto e, facoltativamente, specifica un allocatore.  
  
 Il secondo costruttore specifica una coda di priorità con una capacità iniziale `_Init_capacity` e, facoltativamente, specifica un allocatore.  
  
 Il terzo costruttore specifica i valori forniti dall'intervallo dell'iteratore [ `_Begin`, `_End`) e, facoltativamente, specifica un allocatore.  
  
 Il quarto e quinto costruttore viene specificata una copia della coda di priorità `_Src`.  
  
 Il sesto e il settimo costruttore specificano uno spostamento della coda di priorità `_Src`.  
  
##  <a name="empty"></a>vuoto 

 Testa se la coda di priorità simultanea è vuota nel momento in cui questo metodo viene chiamato. Questo metodo è indipendente dalla concorrenza.  
  
```
bool empty() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se la coda di priorità era vuota nel momento in cui è stata chiamata la funzione, `false` in caso contrario.  
  
##  <a name="get_allocator"></a>get_allocator 

 Restituisce una copia dell'allocatore utilizzato per costruire la coda di priorità simultanea. Questo metodo è indipendente dalla concorrenza.  
  
```
allocator_type get_allocator() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Una copia dell'allocatore utilizzato per costruire il `concurrent_priority_queue` oggetto.  
  
##  <a name="operator_eq"></a>operator = 

 Assegna il contenuto di un altro `concurrent_priority_queue` questo oggetto. Questo metodo non è indipendente dalla concorrenza.  
  
```
concurrent_priority_queue& operator= (const concurrent_priority_queue& _Src);

concurrent_priority_queue& operator= (concurrent_priority_queue&& _Src);
```  
  
### <a name="parameters"></a>Parametri  
 `_Src`  
 Oggetto `concurrent_priority_queue` di origine.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a questo `concurrent_priority_queue` oggetto.  
  
##  <a name="push"></a>push 

 Aggiunge un elemento alla coda di priorità simultanea. Questo metodo è indipendente dalla concorrenza.  
  
```
void push(const value_type& _Elem);

void push(value_type&& _Elem);
```  
  
### <a name="parameters"></a>Parametri  
 `_Elem`  
 L'elemento da aggiungere alla coda di priorità simultanea.  
  
##  <a name="size"></a>dimensioni 

 Restituisce il numero di elementi presenti nella coda di priorità simultanea. Questo metodo è indipendente dalla concorrenza.  
  
```
size_type size() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi in questo `concurrent_priority_queue` oggetto.  
  
### <a name="remarks"></a>Note  
 La dimensione restituita è garantita da includere tutti gli elementi aggiunti dalle chiamate alla funzione `push`. Tuttavia, potrebbe non riflettere i risultati di operazioni simultanee in sospeso.  
  
##  <a name="swap"></a>swap 

 Scambia il contenuto di due code di priorità simultanee. Questo metodo non è indipendente dalla concorrenza.  
  
```
void swap(concurrent_priority_queue& _Queue);
```  
  
### <a name="parameters"></a>Parametri  
 `_Queue`  
 Il `concurrent_priority_queue` oggetto scambiare contenuti con.  
  
##  <a name="try_pop"></a>try_pop 

 Rimuove e restituisce l'elemento con la priorità più elevata dalla coda se quest'ultima non è vuota. Questo metodo è indipendente dalla concorrenza.  
  
```
bool try_pop(reference _Elem);
```  
  
### <a name="parameters"></a>Parametri  
 `_Elem`  
 Un riferimento a una variabile che verrà popolato con l'elemento di priorità più elevata, se la coda non vuota.  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se è stato estratto un valore, `false` in caso contrario.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md)



