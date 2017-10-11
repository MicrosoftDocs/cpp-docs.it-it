---
title: Classe scoped_allocator_adaptor | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- scoped_allocator/std::scoped_allocator_adaptor
- scoped_allocator/std::scoped_allocator_adaptor::rebind Struct
- scoped_allocator/std::scoped_allocator_adaptor::allocate
- scoped_allocator/std::scoped_allocator_adaptor::construct
- scoped_allocator/std::scoped_allocator_adaptor::deallocate
- scoped_allocator/std::scoped_allocator_adaptor::destroy
- scoped_allocator/std::scoped_allocator_adaptor::inner_allocator
- scoped_allocator/std::scoped_allocator_adaptor::max_size
- scoped_allocator/std::scoped_allocator_adaptor::outer_allocator
- scoped_allocator/std::scoped_allocator_adaptor::select_on_container_copy_construction
dev_langs:
- C++
helpviewer_keywords:
- std::scoped_allocator_adaptor
- std::scoped_allocator_adaptor::allocate
- std::scoped_allocator_adaptor::construct
- std::scoped_allocator_adaptor::deallocate
- std::scoped_allocator_adaptor::destroy
- std::scoped_allocator_adaptor::inner_allocator
- std::scoped_allocator_adaptor::max_size
- std::scoped_allocator_adaptor::outer_allocator
- std::scoped_allocator_adaptor::select_on_container_copy_construction
ms.assetid: 0d9b06a1-9a4a-4669-9470-8805cae48e89
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: cc02ef4e65fc2762ab1c4eca0f0727d1e1258639
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="scopedallocatoradaptor-class"></a>Classe scoped_allocator_adaptor
Rappresenta un annidamento di allocatori.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template <class Outer, class... Inner>  
class scoped_allocator_adaptor;  
```  
  
## <a name="remarks"></a>Note  
 La classe modello incapsula un annidamento di uno o più allocatori. Ogni classe di questo tipo ha un allocatore più esterno di tipo `outer_allocator_type`, un sinonimo di `Outer`, che è una base pubblica dell'oggetto `scoped_allocator_adaptor`. `Outer` viene usato per allocare memoria da destinare a un contenitore. È possibile ottenere un riferimento a questo oggetto allocatore di base chiamando `outer_allocator`.  
  
 La parte rimanente dell'annidamento è di tipo `inner_allocator_type`. Per allocare memoria per gli elementi all'interno di un contenitore viene usato un allocatore interno. È possibile ottenere un riferimento all'oggetto archiviato di questo tipo chiamando `inner_allocator`. Se `Inner...` non è vuoto, `inner_allocator_type` è di tipo `scoped_allocator_adaptor<Inner...>` e `inner_allocator` definisce un oggetto membro. In caso contrario, `inner_allocator_type` è di tipo `scoped_allocator_adaptor<Outer>` e `inner_allocator` definisce l'intero oggetto.  
  
 L'annidamento si comporta come se avesse una profondità arbitraria, replicando l'allocatore incapsulato più interno in base alle esigenze.  
  
 Alcuni concetti che non fanno parte dell'interfaccia visibile aiutano a descrivere il comportamento di questa classe modello. Un *allocatore più esterno* svolge una funzione di mediazione per tutte le chiamate ai metodi construct e destroy. È definito dalla funzione ricorsiva `OUTERMOST(X)`, dove `OUTERMOST(X)` ha uno dei valori seguenti:  
  
-   Se `X.outer_allocator()` è nel formato corretto, `OUTERMOST(X)` è `OUTERMOST(X.outer_allocator())`.  
  
-   In caso contrario, `OUTERMOST(X)` sarà `X`.  
  
 Tre tipi sono definiti a scopo di illustrazione:  
  
|Tipo|Descrizione|  
|----------|-----------------|  
|`Outermost`|Tipo di `OUTERMOST(*this)`.|  
|`Outermost_traits`|`allocator_traits<Outermost>`|  
|`Outer_traits`|`allocator_traits<Outer>`|  
  
### <a name="constructors"></a>Costruttori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[scoped_allocator_adaptor](#scoped_allocator_adaptor)|Costruisce un oggetto `scoped_allocator_adaptor`.|  
  
### <a name="typedefs"></a>Definizioni typedef  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`const_pointer`|Questo tipo è un sinonimo del tipo `const_pointer` associato all'allocatore `Outer`.|  
|`const_void_pointer`|Questo tipo è un sinonimo del tipo `const_void_pointer` associato all'allocatore `Outer`.|  
|`difference_type`|Questo tipo è un sinonimo del tipo `difference_type` associato all'allocatore `Outer`.|  
|`inner_allocator_type`|Questo tipo è un sinonimo del tipo dell'adattatore annidato `scoped_allocator_adaptor<Inner...>`.|  
|`outer_allocator_type`|Questo tipo è un sinonimo del tipo dell'allocatore di base `Outer`.|  
|`pointer`|Questo tipo è un sinonimo del tipo `pointer` associato all'allocatore `Outer`.|  
|`propagate_on_container_copy_assignment`|Il tipo contiene true solo se `Outer_traits::propagate_on_container_copy_assignment` o `inner_allocator_type::propagate_on_container_copy_assignment` contiene true.|  
|`propagate_on_container_move_assignment`|Il tipo contiene true solo se `Outer_traits::propagate_on_container_move_assignment` o `inner_allocator_type::propagate_on_container_move_assignment` contiene true.|  
|`propagate_on_container_swap`|Il tipo contiene true solo se `Outer_traits::propagate_on_container_swap` o `inner_allocator_type::propagate_on_container_swap` contiene true.|  
|`size_type`|Questo tipo è un sinonimo del tipo `size_type` associato all'allocatore `Outer`.|  
|`value_type`|Questo tipo è un sinonimo del tipo `value_type` associato all'allocatore `Outer`.|  
|`void_pointer`|Questo tipo è un sinonimo del tipo `void_pointer` associato all'allocatore `Outer`.|  
  
### <a name="structs"></a>Strutture  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Struct scoped_allocator_adaptor::rebind](#rebind_struct)|Definisce il tipo `Outer::rebind\<Other>::other` come sinonimo di `scoped_allocator_adaptor\<Other, Inner...>`.|  
  
### <a name="methods"></a>Metodi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[allocate](#allocate)|Alloca memoria tramite l'allocatore `Outer`.|  
|[construct](#construct)|Costruisce un oggetto.|  
|[deallocate](#deallocate)|Dealloca oggetti usando l'allocatore esterno.|  
|[destroy](#destroy)|Distrugge un oggetto specificato.|  
|[inner_allocator](#inner_allocator)|Recupera un riferimento all'oggetto archiviato di tipo `inner_allocator_type`.|  
|[max_size](#max_size)|Determina il numero massimo di oggetti che possono essere allocati dall'allocatore esterno.|  
|[outer_allocator](#outer_allocator)|Recupera un riferimento all'oggetto archiviato di tipo `outer_allocator_type`.|  
|[select_on_container_copy_construction](#select_on_container_copy_construction)|Crea un nuovo oggetto `scoped_allocator_adaptor` con ogni oggetto allocatore archiviato inizializzato tramite una chiamata a `select_on_container_copy_construction` per ogni allocatore corrispondente.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<scoped_allocator>  
  
 **Spazio dei nomi:** std  
  
##  <a name="allocate"></a>scoped_allocator_adaptor:: allocate
 Alloca memoria tramite l'allocatore `Outer`.  
  
```cpp  
pointer allocate(size_type count);pointer allocate(size_type count, const_void_pointer hint);
```  
  
### <a name="parameters"></a>Parametri  
 `count`  
 Numero di elementi per cui deve essere allocata memoria sufficiente.  
  
 `hint`  
 Puntatore che può essere utile all'oggetto allocatore individuando l'indirizzo di un oggetto allocato prima della richiesta.  
  
### <a name="return-value"></a>Valore restituito  
 La prima funzione membro restituisce `Outer_traits::allocate(outer_allocator(), count)`. La seconda funzione membro restituisce `Outer_traits::allocate(outer_allocator(), count, hint)`.  
  
##  <a name="construct"></a>scoped_allocator_adaptor:: Construct
 Costruisce un oggetto.  
  
```cpp  
template <class Ty, class... Atypes>  
void construct(Ty* ptr, Atypes&&... args);

template <class Ty1, class Ty2, class... Atypes1, class... Atypes2>  
void construct(pair<Ty1, Ty2>* ptr, piecewise_construct_t,  
    tuple<Atypes1&&...>  
first, tuple<Atypes1&&...> second);

template <class Ty1, class Ty2>  
void construct(pair<Ty1, Ty2>* ptr);

template <class Ty1, class Ty2, class Uy1, class Uy2>  
void construct(pair<Ty1, Ty2>* ptr,  
    class Uy1&& first, class Uy2&& second);

template <class Ty1, class Ty2, class Uy1, class Uy2>  
void construct(pair<Ty1, Ty2>* ptr, const pair<Uy1, Uy2>& right);

template <class Ty1, class Ty2, class Uy1, class Uy2>  
void construct(pair<Ty1, Ty2>* ptr, pair<Uy1, Uy2>&& right);
```  
  
### <a name="parameters"></a>Parametri  
 `ptr`  
 Puntatore alla posizione di memoria in cui deve essere costruito l'oggetto.  
  
 `args`  
 Elenco di argomenti.  
  
 `first`  
 Oggetto del primo tipo in una coppia.  
  
 `second`  
 Oggetto del secondo tipo in una coppia.  
  
 `right`  
 Oggetto esistente da spostare o copiare.  
  
### <a name="remarks"></a>Note  
 Il primo metodo costruisce l'oggetto in `ptr` chiamando `Outermost_traits::construct(OUTERMOST(*this), ptr, xargs...)`, dove `xargs...` ha uno dei valori seguenti:  
  
-   Se `uses_allocator<Ty, inner_allocator_type>` contiene false, `xargs...` è `args...`.  
  
-   Se `uses_allocator<Ty, inner_allocator_type>` e `is_constructible<Ty, allocator_arg_t, inner_allocator_type, args...>` contengono entrambi true, `xargs...` è `allocator_arg, inner_allocator(), args...`.  
  
-   Se `uses_allocator<Ty, inner_allocator_type>` e `is_constructible<Ty, args..., inner_allocator()>` contengono entrambi true, `xargs...` è `args..., inner_allocator()`.  
  
 Il secondo metodo costruisce l'oggetto pair in `ptr` chiamando `Outermost_traits::construct(OUTERMOST(*this), &ptr->first, xargs...)`, dove `xargs...` è `first...` modificato come nell'elenco precedente, e `Outermost_traits::construct(OUTERMOST(*this), &ptr->second, xargs...)`, dove `xargs...` è `second...` modificato come nell'elenco precedente.  
  
 Il terzo metodo si comporta come `this->construct(ptr, piecewise_construct, tuple<>, tuple<>)`.  
  
 Il quarto metodo si comporta come `this->construct(ptr, piecewise_construct, forward_as_tuple(std::forward<Uy1>(first), forward_as_tuple(std::forward<Uy2>(second))`.  
  
 Il quinto metodo si comporta come `this->construct(ptr, piecewise_construct, forward_as_tuple(right.first), forward_as_tuple(right.second))`.  
  
 Il sesto metodo si comporta come `this->construct(ptr, piecewise_construct, forward_as_tuple(std::forward<Uy1>(right.first), forward_as_tuple(std::forward<Uy2>(right.second))`.  
  
##  <a name="deallocate"></a>scoped_allocator_adaptor:: deallocate
 Dealloca oggetti usando l'allocatore esterno.  
  
```cpp  
void deallocate(pointer ptr, size_type count);
```  
  
### <a name="parameters"></a>Parametri  
 `ptr`  
 Puntatore alla posizione iniziale degli oggetti da deallocare.  
  
 `count`  
 Numero di oggetti da deallocare.  
  
##  <a name="destroy"></a>scoped_allocator_adaptor:: Destroy
 Distrugge un oggetto specificato.  
  
```cpp  
template <class Ty>  
void destroy(Ty* ptr)  
```  
  
### <a name="parameters"></a>Parametri  
 `ptr`  
 Puntatore all'oggetto da distruggere.  
  
### <a name="return-value"></a>Valore restituito  
 `Outermost_traits::destroy(OUTERMOST(*this), ptr)`  
  
##  <a name="inner_allocator"></a>scoped_allocator_adaptor:: inner_allocator
 Recupera un riferimento all'oggetto archiviato di tipo `inner_allocator_type`.  
  
```cpp  
inner_allocator_type& inner_allocator() noexcept;  
const inner_allocator_type& inner_allocator() const noexcept;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto archiviato di tipo `inner_allocator_type`.  
  
##  <a name="max_size"></a>scoped_allocator_adaptor:: max_size
 Determina il numero massimo di oggetti che possono essere allocati dall'allocatore esterno.  
  
```cpp  
size_type max_size();
```  
  
### <a name="return-value"></a>Valore restituito  
 `Outer_traits::max_size(outer_allocator())`  
  
##  <a name="outer_allocator"></a>scoped_allocator_adaptor:: outer_allocator
 Recupera un riferimento all'oggetto archiviato di tipo `outer_allocator_type`.  
  
```cpp  
outer_allocator_type& outer_allocator() noexcept;  
const outer_allocator_type& outer_allocator() const noexcept;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto archiviato di tipo `outer_allocator_type`.  
  
##  <a name="rebind_struct"></a>  Struct scoped_allocator_adaptor::rebind  
 Definisce il tipo `Outer::rebind\<Other>::other` come sinonimo di `scoped_allocator_adaptor\<Other, Inner...>`.  
  
struct rebind{  
   typedef Other_traits::rebind\<Other>  
   Other_alloc;  
   typedef scoped_allocator_adaptor\<Other_alloc, Inner...> other;  
   };  
  
##  <a name="scoped_allocator_adaptor"></a>  Costruttore scoped_allocator_adaptor::scoped_allocator_adaptor  
 Costruisce un oggetto `scoped_allocator_adaptor`.  
  
```cpp  
scoped_allocator_adaptor();

scoped_allocator_adaptor(const scoped_allocator_adaptor& right) noexcept;  
template <class Outer2>  
scoped_allocator_adaptor(
 const scoped_allocator_adaptor<Outer2, Inner...>& right) noexcept;  
template <class Outer2>  
scoped_allocator_adaptor(
 scoped_allocator_adaptor<Outer2, Inner...>&& right) noexcept;  
template <class Outer2>  
scoped_allocator_adaptor(Outer2&& al,  
    const Inner&... rest) noexcept;  
```  
  
### <a name="parameters"></a>Parametri  
 `right`  
 Oggetto `scoped_allocator_adaptor` esistente.  
  
 `al`  
 Allocatore esistente da usare come allocatore esterno.  
  
 `rest`  
 Elenco di allocatori da usare come allocatori interni.  
  
### <a name="remarks"></a>Note  
 Il primo costruttore crea per impostazione predefinita i relativi oggetti allocator archiviati. Ognuno dei tre costruttori successivi crea i relativi oggetti allocator archiviati in base agli oggetti corrispondenti in `right`. L'ultimo costruttore crea i relativi oggetti allocator archiviati in base agli argomenti corrispondenti nell'elenco degli argomenti.  
  
##  <a name="select_on_container_copy_construction"></a>scoped_allocator_adaptor:: select_on_container_copy_construction
 Crea un nuovo oggetto `scoped_allocator_adaptor` con ogni oggetto allocatore archiviato inizializzato tramite una chiamata a `select_on_container_copy_construction` per ogni allocatore corrispondente.  
  
```cpp  
scoped_allocator_adaptor select_on_container_copy_construction();
```  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo restituisce `scoped_allocator_adaptor(Outer_traits::select_on_container_copy_construction(*this), inner_allocator().select_on_container_copy_construction())`. Il risultato è un nuovo oggetto `scoped_allocator_adaptor` con ogni oggetto allocatore archiviato inizializzato tramite una chiamata a `al.select_on_container_copy_construction()` per l'allocatore `al` corrispondente.  
  
## <a name="see-also"></a>Vedere anche  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md) (Riferimento file di intestazione)




