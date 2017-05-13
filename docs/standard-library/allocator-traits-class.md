---
title: Classe allocator_traits | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- memory/std::allocator_traits
- memory/std::allocator_traits::propagate_on_container_move_assignment
- memory/std::allocator_traits::const_pointer
- memory/std::allocator_traits::propagate_on_container_swap
- memory/std::allocator_traits::propagate_on_container_copy_assignment
- memory/std::allocator_traits::difference_type
- memory/std::allocator_traits::allocator_type
- memory/std::allocator_traits::value_type
- memory/std::allocator_traits::pointer
- memory/std::allocator_traits::size_type
- memory/std::allocator_traits::const_void_pointer
- memory/std::allocator_traits::void_pointer
- memory/std::allocator_traits::allocate
- memory/std::allocator_traits::construct
- memory/std::allocator_traits::deallocate
- memory/std::allocator_traits::destroy
- memory/std::allocator_traits::max_size
- memory/std::allocator_traits::select_on_container_copy_construction
dev_langs:
- C++
ms.assetid: 612974b8-b5d4-4668-82fb-824bff6821d6
caps.latest.revision: 12
author: corob-msft
ms.author: corob
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: d4fdcb8af6fa8b33ee6153563770b9bf00f02942
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="allocatortraits-class"></a>Classe allocator_traits
La classe di modello descrive un oggetto che completa un *tipo di allocatore*. Un tipo di allocatore è un tipo che descrive un oggetto allocatore usato per la gestione dello spazio di archiviazione allocato. In particolare, per qualsiasi tipo di allocatore `Alloc`, è possibile usare `allocator_traits<Alloc>` per determinare tutte le informazioni necessarie per un contenitore che supporta gli allocatori. Per altre informazioni, vedere la [Classe allocator](../standard-library/allocator-class.md) predefinita.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template <class Alloc>
class allocator_traits;
```  
  
### <a name="typedefs"></a>Typedef  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`allocator_traits::allocator_type`|Questo tipo è un sinonimo del parametro di modello `Alloc`.|  
|`allocator_traits::const_pointer`|Questo tipo è `Alloc::const_pointer`, se il tipo è ben formato; in caso contrario, questo tipo è `pointer_traits<pointer>::rebind<const value_type>`.|  
|`allocator_traits::const_void_pointer`|Questo tipo è `Alloc::const_void_pointer`, se il tipo è ben formato; in caso contrario, questo tipo è `pointer_traits<pointer>::rebind<const void>`.|  
|`allocator_traits::difference_type`|Questo tipo è `Alloc::difference_type`, se il tipo è ben formato; in caso contrario, questo tipo è `pointer_traits<pointer>::difference_type`.|  
|`allocator_traits::pointer`|Questo tipo è `Alloc::pointer`, se il tipo è ben formato; in caso contrario, questo tipo è `value_type *`.|  
|`allocator_traits::propagate_on_container_copy_assignment`|Questo tipo è `Alloc::propagate_on_container_copy_assignment`, se il tipo è ben formato; in caso contrario, questo tipo è `false_type`.|  
|`allocator_traits::propagate_on_container_move_assignment`|Questo tipo è `Alloc::propagate_on_container_move_assignment`, se il tipo è ben formato; in caso contrario, questo tipo è `false_type`. Se il tipo dà come risultato true, un contenitore che supporta gli allocatori copia l'allocatore archiviato in un'assegnazione di spostamento.|  
|`allocator_traits::propagate_on_container_swap`|Questo tipo è `Alloc::propagate_on_container_swap`, se il tipo è ben formato; in caso contrario, questo tipo è `false_type`. Se il tipo dà come risultato true, un contenitore che supporta gli allocatori scambia l'allocatore archiviato in uno scambio.|  
|`allocator_traits::size_type`|Questo tipo è `Alloc::size_type`, se il tipo è ben formato; in caso contrario, questo tipo è `make_unsigned<difference_type>::type`.|  
|`allocator_traits::value_type`|Questo tipo è sinonimo di `Alloc::value_type`.|  
|`allocator_traits::void_pointer`|Questo tipo è `Alloc::void_pointer`, se il tipo è ben formato; in caso contrario, questo tipo è `pointer_traits<pointer>::rebind<void>`.|  
  
### <a name="static-methods"></a>Metodi statici  
 I metodi statici seguenti chiamano il metodo corrispondente in un parametro allocatore specificato.  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[allocate](#allocate)|Metodo statico che alloca la memoria usando il parametro allocatore specificato.|  
|[construct](#construct)|Metodo statico che usa un allocatore specificato per costruire un oggetto.|  
|[deallocate](#deallocate)|Metodo statico che usa un allocatore specificato per deallocare un numero specificato di oggetti.|  
|[destroy](#destroy)|Metodo statico che usa un allocatore specificato per chiamare il distruttore in un oggetto senza la deallocazione della memoria.|  
|[max_size](#max_size)|Metodo statico che usa un allocatore specificato per determinare il numero massimo di oggetti che possono essere allocati.|  
|[select_on_container_copy_construction](#select_on_container_copy_construction)|Metodo statico che chiama `select_on_container_copy_construction`nell'allocatore specificato.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<memory>  
  
 **Spazio dei nomi:** std  
  
##  <a name="allocate"></a>allocator_traits:: allocate
 Metodo statico che alloca la memoria usando il parametro allocatore specificato.  
  
```cpp  
static pointer allocate(Alloc& al, size_type count);

static pointer allocate(Alloc& al, size_type count,
    typename allocator_traits<void>::const_pointer* hint);
```  
  
### <a name="parameters"></a>Parametri  
 `al`  
 Un oggetto allocatore.  
  
 `count`  
 Numero di elementi da allocare.  
  
 `hint`  
 `const_pointer` che può essere utile all'oggetto allocatore per soddisfare la richiesta di spazio di archiviazione individuando l'indirizzo di un oggetto allocato prima della richiesta. Un puntatore null viene considerato come assenza di hint.  
  
### <a name="return-value"></a>Valore restituito  
 Ogni metodo restituisce un puntatore all'oggetto allocato.  
  
 Il primo metodo statico restituisce `al.allocate(count)`.  
  
 Il secondo metodo statico restituisce `al.allocate(count, hint)`, se l'espressione è ben formata; in caso contrario, restituisce `al.allocate(count)`.  
  
##  <a name="construct"></a>allocator_traits:: Construct
 Metodo statico che usa un allocatore specificato per costruire un oggetto.  
  
```cpp  
template <class Uty, class Types>
static void construct(Alloc& al, Uty* ptr, Types&&... args);
```  
  
### <a name="parameters"></a>Parametri  
 `al`  
 Un oggetto allocatore.  
  
 `ptr`  
 Puntatore al percorso in cui deve essere creato l'oggetto.  
  
 `args`  
 Elenco di argomenti passato al costruttore dell'oggetto.  
  
### <a name="remarks"></a>Note  
 La funzione membro statica chiama `al.construct(ptr, args...)`, se l'espressione è ben formata; in caso contrario, restituisce `::new (static_cast<void *>(ptr)) Uty(std::forward<Types>(args)...)`.  
  
##  <a name="deallocate"></a>allocator_traits:: deallocate
 Metodo statico che usa un allocatore specificato per deallocare un numero specificato di oggetti.  
  
```cpp  
static void deallocate(Alloc al,
    pointer ptr,
    size_type count);
```  
  
### <a name="parameters"></a>Parametri  
 `al`  
 Un oggetto allocatore.  
  
 `ptr`  
 Puntatore alla posizione iniziale degli oggetti da deallocare.  
  
 `count`  
 Numero di oggetti da deallocare.  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama `al.deallocate(ptr, count)`.  
  
 Questo metodo non genera nulla.  
  
##  <a name="destroy"></a>allocator_traits:: Destroy
 Metodo statico che usa un allocatore specificato per chiamare il distruttore in un oggetto senza la deallocazione della memoria.  
  
```cpp  
template <class Uty>
static void destroy(Alloc& al, Uty* ptr);
```  
  
### <a name="parameters"></a>Parametri  
 `al`  
 Un oggetto allocatore.  
  
 `ptr`  
 Puntatore alla posizione dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama `al.destroy(ptr)`, se l'espressione è ben formata; in caso contrario, restituisce `ptr->~Uty()`.  
  
##  <a name="max_size"></a>allocator_traits:: max_size
 Metodo statico che usa un allocatore specificato per determinare il numero massimo di oggetti che possono essere allocati.  
  
```cpp  
static size_type max_size(const Alloc& al);
```  
  
### <a name="parameters"></a>Parametri  
 `al`  
 Un oggetto allocatore.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce `al.max_size()`, se l'espressione è ben formata; in caso contrario, restituisce `numeric_limits<size_type>::max()`.  
  
##  <a name="select_on_container_copy_construction"></a>allocator_traits:: select_on_container_copy_construction
 Metodo statico che chiama `select_on_container_copy_construction`nell'allocatore specificato.  
  
```cpp  
static Alloc select_on_container_copy_construction(const Alloc& al);
```  
  
### <a name="parameters"></a>Parametri  
 `al`  
 Un oggetto allocatore.  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo restituisce `al.select_on_container_copy_construction()`, se il tipo è ben formato; in caso contrario, restituisce `al`.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene usato per specificare un allocatore quando il contenitore associato è creato con un costruttore di copia.  
  
## <a name="see-also"></a>Vedere anche  
 [\<memory>](../standard-library/memory.md)   
 [Struct pointer_traits](../standard-library/pointer-traits-struct.md)   
 [Classe scoped_allocator_adaptor](../standard-library/scoped-allocator-adaptor-class.md)

