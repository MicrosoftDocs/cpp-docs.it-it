---
title: "Classe unique_ptr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "unique_ptr"
  - "std.unique_ptr"
  - "std::unique_ptr"
  - "memory/std::unique_ptr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unique_ptr (classe)"
ms.assetid: acdf046b-831e-4a4a-83aa-6d4ee467db9a
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# Classe unique_ptr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente di archiviare un puntatore a un oggetto o a una matrice di proprietà.  L'oggetto\/la matrice non è di proprietà di altri `unique_ptr`.  L'oggetto\/la matrice viene eliminato quando viene eliminato `unique_ptr`.  
  
## Sintassi  
  
```  
template< class T, class Del = default_delete<T> >  
    class unique_ptr {  
public:  
    unique_ptr( );  
    unique_ptr( nullptr_t Nptr );  
    explicit unique_ptr( pointer Ptr );  
    unique_ptr( pointer Ptr,  
        typename conditional<is_reference<Del>::value,   
            Del,  
            typename add_reference<const Del>::type>::type Deleter);  
    unique_ptr (pointer Ptr,  
        typename remove_reference<Del>::type&& Deleter);  
    unique_ptr (unique_ptr&& Right);  
    template<class T2, Class Del2> unique_ptr( unique_ptr<T2, Del2>&& Right );  
    unique_ptr( const unique_ptr& Right    ) = delete;  
    unique_ptr& operator=(const unique_ptr& Right     ) = delete;  
};  
  
```  
  
```  
//Specialization for arrays:  
template <class T, class D> class unique_ptr<T[], D>   
{   public:       
     typedef pointer;  
     typedef T element_type;  
     typedef D deleter_type;  
  
     constexpr unique_ptr() noexcept;  
     template <class U> explicit unique_ptr(U p) noexcept;  
     template <class U> unique_ptr(U p, see below d) noexcept;  
     template <class U> unique_ptr(U p, see below d) noexcept;  
     unique_ptr(unique_ptr&& u) noexcept;  
     constexpr unique_ptr(nullptr_t) noexcept : unique_ptr() { }  
     template <class U, class E>  
       unique_ptr(unique_ptr<U, E>&& u) noexcept;  
  
     ~unique_ptr();  
  
     unique_ptr& operator=(unique_ptr&& u) noexcept;  
     template <class U, class E>  
       unique_ptr& operator=(unique_ptr<U, E>&& u) noexcept;  
     unique_ptr& operator=(nullptr_t) noexcept;  
  
     T& operator[](size_t i) const;  
     pointer get() const noexcept;  
     deleter_type& get_deleter() noexcept;  
     const deleter_type& get_deleter() const noexcept;  
     explicit operator bool() const noexcept;  
  
     pointer release() noexcept;  
     void reset(pointer p = pointer()) noexcept;  
     void reset(nullptr_t = nullptr) noexcept;  
     template <class U> void reset(U p) noexcept = delete;  
     void swap(unique_ptr& u) noexcept;  
  
    // disable copy from lvalue  
     unique_ptr(const unique_ptr&) = delete;  
     unique_ptr& operator=(const unique_ptr&) = delete;  
   };  
 }  
  
```  
  
#### Parametri  
 `Right`  
 Oggetto `unique_ptr`.  
  
 `Nptr`  
 Oggetto `rvalue` di tipo `std::nullptr_t`.  
  
 `Ptr`  
 Oggetto `pointer`.  
  
 `Deleter`  
 Funzione di `deleter` associata a un `unique_ptr`.  
  
## Eccezioni  
 Non viene generata alcuna eccezione da `unique_ptr`.  
  
## Note  
 La classe `unique_ptr` sostituisce `auto_ptr` e può essere utilizzata come elemento dei contenitori STL.  
  
 Utilizzare la funzione di supporto [make\_unique](../Topic/make_unique.md) per creare in modo efficiente nuove istanze di `unique_ptr`.  
  
 `unique_ptr` gestisce una risorsa in modo univoco.  Ogni oggetto `unique_ptr` archivia un puntatore nell'oggetto di sua proprietà oppure archivia un puntatore Null.  Una risorsa non può appartenere a più di un oggetto `unique_ptr`;  quando un oggetto `unique_ptr` proprietario di una risorsa particolare viene eliminato, la risorsa viene liberata.  Un oggetto `unique_ptr`può essere spostato, ma non copiato;  per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).  
  
 La risorsa viene liberata chiamando un oggetto `deleter` archiviato di tipo `Del` in grado di allocare le risorse per un determinato `unique_ptr`.  Per impostazione predefinita, `deleter` `default_delete``<T>` presuppone che la risorsa a cui punta `_Ptr` venga allocata con `new` e che possa essere liberata chiamando `delete _``Ptr`.  Una specializzazione parziale `unique_ptr<T[]>`gestisce gli oggetti matrice allocati con `new[]` e ha il valore predefinito `deleter` `default_delete<T[]>`, specializzato per chiamare delete \[\]. `_Ptr`.  
  
 Il puntatore archiviato in una risorsa di proprietà, `stored_ptr` è di tipo `pointer`.  È `Del::pointer` se definito, in caso contrario, `T *` .  L'oggetto `deleter` archiviato `stored_deleter` non occupa spazio nell'oggetto se `deleter` è senza stato.  Si noti che `Del` può essere un tipo di riferimento.  
  
## Membri  
  
### Costruttori  
  
|||  
|-|-|  
|[unique\_ptr::unique\_ptr](../Topic/unique_ptr::unique_ptr.md)|Esistono sette costruttori per `unique_ptr`.|  
  
### Typedef  
  
|||  
|-|-|  
|[deleter\_type](../Topic/deleter_type.md)|Sinonimo del parametro di modello `Del`.|  
|[element\_type](../Topic/element_type.md)|Sinonimo del parametro di modello `T``.`|  
|[puntatore](../Topic/pointer.md)|Sinonimo di `Del::pointer` se definito, in caso contrario, `T *`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[unique\_ptr::get](../Topic/unique_ptr::get.md)|Restituisce `stored_ptr`.|  
|[unique\_ptr::get\_deleter](../Topic/unique_ptr::get_deleter.md)|Restituisce un riferimento a `stored_deleter`.|  
|[unique\_ptr::release](../Topic/unique_ptr::release.md)|archivia `pointer()` in `stored_ptr` e restituisce il relativo contenuto precedente.|  
|[unique\_ptr::reset](../Topic/unique_ptr::reset.md)|Elimina la risorsa attualmente di proprietà e accetta una nuova risorsa.|  
|[unique\_ptr::swap](../Topic/unique_ptr::swap.md)|Scambia la risorsa e `deleter` con l'`unique_ptr` fornito.|  
  
### Operatori  
  
|||  
|-|-|  
|`operator bool`|L'operatore restituisce un valore di un tipo convertibile in `bool`.  Risultato della conversione in `bool` è `true` quando `get() != pointer()`, in caso contrario, `false`.|  
|`operator->`|La funzione membro restituisce `stored_ptr``.`|  
|`operator*`|La funzione membro restituisce\*`stored_ptr``.`|  
|[unique\_ptr operator\=](../Topic/unique_ptr%20operator=.md)|Assegna il valore di un `unique_ptr` \(o un `pointer-type`\) allo `unique_ptr` corrente.|  
  
## Requisiti  
 **Intestazione:** \<memory\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<memory\>](../standard-library/memory.md)