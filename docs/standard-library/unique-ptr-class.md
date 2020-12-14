---
description: 'Altre informazioni su: unique_ptr Class'
title: Classe unique_ptr
ms.date: 11/04/2016
f1_keywords:
- memory/std::unique_ptr
- memory/std::unique_ptr::deleter_type
- memory/std::unique_ptr::element_type
- memory/std::unique_ptr::pointer
- memory/std::unique_ptr::get
- memory/std::unique_ptr::get_deleter
- memory/std::unique_ptr::release
- memory/std::unique_ptr::reset
- memory/std::unique_ptr::swap
helpviewer_keywords:
- std::unique_ptr [C++]
- std::unique_ptr [C++], deleter_type
- std::unique_ptr [C++], element_type
- std::unique_ptr [C++], pointer
- std::unique_ptr [C++], get
- std::unique_ptr [C++], get_deleter
- std::unique_ptr [C++], release
- std::unique_ptr [C++], reset
- std::unique_ptr [C++], swap
ms.assetid: acdf046b-831e-4a4a-83aa-6d4ee467db9a
ms.openlocfilehash: 888229c4e07a0b2189e46bcecd562e0177cfd67e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97243692"
---
# <a name="unique_ptr-class"></a>Classe unique_ptr

Consente di archiviare un puntatore a un oggetto o a una matrice di proprietà. L'oggetto/la matrice non è di proprietà di altri `unique_ptr`. L'oggetto/la matrice viene eliminato quando viene eliminato `unique_ptr`.

## <a name="syntax"></a>Sintassi

```cpp
class unique_ptr {
public:
    unique_ptr();
    unique_ptr(nullptr_t Nptr);
    explicit unique_ptr(pointer Ptr);
    unique_ptr(pointer Ptr,
        typename conditional<is_reference<Del>::value, Del,
        typename add_reference<const Del>::type>::type Deleter);
    unique_ptr(pointer Ptr,
        typename remove_reference<Del>::type&& Deleter);
    unique_ptr(unique_ptr&& Right);
    template <class T2, Class Del2>
    unique_ptr(unique_ptr<T2, Del2>&& Right);
    unique_ptr(const unique_ptr& Right) = delete;
    unique_ptr& operator=(const unique_ptr& Right) = delete;
};

//Specialization for arrays:
template <class T, class D>
class unique_ptr<T[], D> {
public:
    typedef pointer;
    typedef T element_type;
    typedef D deleter_type;
    constexpr unique_ptr() noexcept;
    template <class U>
    explicit unique_ptr(U p) noexcept;
    template <class U>
    unique_ptr(U p, see below d) noexcept;
    template <class U>
    unique_ptr(U p, see below d) noexcept;
    unique_ptr(unique_ptr&& u) noexcept;
    constexpr unique_ptr(nullptr_t) noexcept : unique_ptr() { }     template <class U, class E>
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
    template <class U>
    void reset(U p) noexcept = delete;
    void swap(unique_ptr& u) noexcept;  // disable copy from lvalue unique_ptr(const unique_ptr&) = delete;
    unique_ptr& operator=(const unique_ptr&) = delete;
};
```

### <a name="parameters"></a>Parametri

*Ok*\
Oggetto `unique_ptr`.

*Nptr*\
Oggetto `rvalue` di tipo `std::nullptr_t`.

*PTR*\
Oggetto `pointer`.

*Deleter*\
Funzione di `deleter` associata a un `unique_ptr`.

## <a name="exceptions"></a>Eccezioni

Non viene generata alcuna eccezione da `unique_ptr`.

## <a name="remarks"></a>Commenti

La classe `unique_ptr` sostituisce `auto_ptr` e può essere utilizzata come elemento dei contenitori della libreria standard C++.

Usare la funzione helper [make_unique](../standard-library/memory-functions.md#make_unique) per creare in modo efficiente nuove istanze di `unique_ptr`.

`unique_ptr` gestisce una risorsa in modo univoco. Ogni oggetto `unique_ptr` archivia un puntatore nell'oggetto di sua proprietà oppure archivia un puntatore Null. Una risorsa può appartenere a non più di un oggetto `unique_ptr`. Quando un oggetto `unique_ptr` proprietario di una risorsa particolare viene eliminato definitivamente, la risorsa viene liberata. Un oggetto `unique_ptr` può essere spostato, ma non copiato. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

La risorsa viene liberata chiamando un oggetto `deleter` archiviato di tipo `Del` in grado di allocare le risorse per un determinato `unique_ptr`. Per impostazione predefinita `deleter` `default_delete<T>` , si presuppone che la risorsa a cui punta `ptr` venga allocata con **`new`** e che possa essere liberata chiamando `delete _Ptr` . Una specializzazione parziale `unique_ptr<T[]>` gestisce gli oggetti matrice allocati con `new[]` e ha il valore predefinito `deleter` `default_delete<T[]>`, specializzato per chiamare delete [] `ptr`.

Il puntatore archiviato in una risorsa di proprietà, `stored_ptr` è di tipo `pointer`. È `Del::pointer` se definito; in caso contrario, `T *`. L'oggetto `deleter` archiviato `stored_deleter` non occupa spazio nell'oggetto se `deleter` è senza stato. Si noti che `Del` può essere un tipo di riferimento.

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|Nome|Description|
|-|-|
|[unique_ptr](#unique_ptr)|Esistono sette costruttori per `unique_ptr`.|

### <a name="typedefs"></a>Typedef

|Nome|Description|
|-|-|
|[deleter_type](#deleter_type)|Sinonimo del parametro di modello `Del`.|
|[element_type](#element_type)|Sinonimo del parametro di modello `T`.|
|[puntatore](#pointer)|Sinonimo di `Del::pointer` se definito, in caso contrario, `T *`.|

### <a name="functions"></a>Funzioni

|Nome|Description|
|-|-|
|[get](#get)|Restituisce `stored_ptr`.|
|[get_deleter](#get_deleter)|Restituisce un riferimento a `stored_deleter`.|
|[versione](#release)|archivia `pointer()` in `stored_ptr` e restituisce il relativo contenuto precedente.|
|[reset](#reset)|Elimina la risorsa attualmente di proprietà e accetta una nuova risorsa.|
|[scambio](#swap)|Scambia la risorsa e `deleter` con l'`unique_ptr` fornito.|

### <a name="operators"></a>Operatori

|Nome|Description|
|-|-|
|**operatore bool**|L'operatore restituisce un valore di un tipo convertibile in **`bool`** . Il risultato della conversione a **`bool`** è **`true`** quando `get() != pointer()` , in caso contrario, **`false`** .|
|`operator->`|La funzione membro restituisce`stored_ptr`.|
|`operator*`|La funzione membro restituisce`*stored_ptr`.|
|[operatore =](#unique_ptr_operator_eq)|Assegna il valore di un oggetto `unique_ptr` (o `pointer-type`) all'oggetto `unique_ptr` corrente.|

### <a name="deleter_type"></a><a name="deleter_type"></a> deleter_type

Il tipo è un sinonimo del parametro di modello `Del`.

```cpp
typedef Del deleter_type;
```

#### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del parametro di modello `Del`.

### <a name="element_type"></a><a name="element_type"></a> element_type

Il tipo è un sinonimo del parametro di modello `Type`.

```cpp
typedef Type element_type;
```

#### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del parametro di modello `Ty`.

### <a name="get"></a><a name="get"></a> Ottieni

Restituisce `stored_ptr`.

```cpp
pointer get() const;
```

#### <a name="remarks"></a>Commenti

La funzione membro restituisce`stored_ptr`.

### <a name="get_deleter"></a><a name="get_deleter"></a> get_deleter

Restituisce un riferimento a `stored_deleter`.

```cpp
Del& get_deleter();

const Del& get_deleter() const;
```

#### <a name="remarks"></a>Commenti

La funzione membro restituisce un riferimento a `stored_deleter`.

### <a name="operator"></a><a name="unique_ptr_operator_eq"></a> operatore =

Assegna l'indirizzo dell'oggetto `unique_ptr` fornito a quello corrente.

```cpp
unique_ptr& operator=(unique_ptr&& right);
template <class U, Class Del2>
unique_ptr& operator=(unique_ptr<Type, Del>&& right);
unique_ptr& operator=(pointer-type);
```

#### <a name="parameters"></a>Parametri

Un riferimento `unique_ptr` usato per assegnare il valore dell'oggetto `unique_ptr` corrente.

#### <a name="remarks"></a>Commenti

Le funzioni membro chiamano `reset(right.release())` e spostano `right.stored_deleter` in `stored_deleter` , quindi restituiscono **`*this`** .

### <a name="pointer"></a>Puntatore <a name="pointer"></a>

Sinonimo di `Del::pointer` se definito, in caso contrario, `Type *`.

```cpp
typedef T1 pointer;
```

#### <a name="remarks"></a>Commenti

Il tipo è un sinonimo di `Del::pointer` se definito, in caso contrario, `Type *`.

### <a name="release"></a><a name="release"></a> versione

Rilascia la proprietà del puntatore archiviato restituito al chiamante e imposta il valore del puntatore archiviato su **`nullptr`** .

```cpp
pointer release();
```

#### <a name="remarks"></a>Commenti

Usare `release` per acquisire la proprietà del puntatore non elaborato archiviato da `unique_ptr`. Il chiamante è responsabile dell'eliminazione del puntatore restituito. `unique-ptr` è impostato sullo stato costruito in modo predefinito vuoto. È possibile assegnare un altro puntatore di tipo compatibile a `unique_ptr` dopo la chiamata a `release`.

#### <a name="example"></a>Esempio

In questo esempio viene mostrato in che modo il chiamante della versione è responsabile dell'oggetto restituito:

```cpp
// stl_release_unique.cpp
// Compile by using: cl /W4 /EHsc stl_release_unique.cpp
#include <iostream>
#include <memory>

struct Sample {
   int content_;
   Sample(int content) : content_(content) {
      std::cout << "Constructing Sample(" << content_ << ")" << std::endl;
   }
   ~Sample() {
      std::cout << "Deleting Sample(" << content_ << ")" << std::endl;
   }
};

void ReleaseUniquePointer() {
   // Use make_unique function when possible.
   auto up1 = std::make_unique<Sample>(3);
   auto up2 = std::make_unique<Sample>(42);

   // Take over ownership from the unique_ptr up2 by using release
   auto ptr = up2.release();
   if (up2) {
      // This statement does not execute, because up2 is empty.
      std::cout << "up2 is not empty." << std::endl;
   }
   // We are now responsible for deletion of ptr.
   delete ptr;
   // up1 deletes its stored pointer when it goes out of scope.
}

int main() {
   ReleaseUniquePointer();
}
```

```Output
Constructing Sample(3)
Constructing Sample(42)
Deleting Sample(42)
Deleting Sample(3)
```

### <a name="reset"></a><a name="reset"></a> reimpostazione

Acquisisce la proprietà del parametro del puntatore, quindi elimina il puntatore archiviato originale. Se il nuovo puntatore è uguale al puntatore archiviato originale, `reset` Elimina il puntatore e imposta il puntatore archiviato su **`nullptr`** .

```cpp
void reset(pointer ptr = pointer());
void reset(nullptr_t ptr);
```

#### <a name="parameters"></a>Parametri

*PTR*\
Puntatore alla risorsa di cui acquisire la proprietà.

#### <a name="remarks"></a>Commenti

Utilizzare `reset` per modificare il [puntatore](#pointer) archiviato di proprietà di `unique_ptr` in *ptr* , quindi eliminare il puntatore archiviato originale. Se l'oggetto `unique_ptr` non è vuoto, `reset` richiama la funzione deleter restituita da [get_deleter](#get_deleter) nel puntatore archiviato originale.

Poiché `reset` innanzitutto archivia il nuovo puntatore *ptr*, quindi Elimina il puntatore archiviato originale, è possibile che `reset` elimini immediatamente *ptr* se è uguale al puntatore archiviato originale.

### <a name="swap"></a><a name="swap"></a> scambio

Scambi di puntatori tra due oggetti `unique_ptr`.

```cpp
void swap(unique_ptr& right);
```

#### <a name="parameters"></a>Parametri

*Ok*\
`unique_ptr` usato a puntatori swap.

#### <a name="remarks"></a>Commenti

La funzione membro scambia `stored_ptr` con `right.stored_ptr` e `stored_deleter` con `right.stored_deleter`.

### <a name="unique_ptr"></a><a name="unique_ptr"></a> unique_ptr

Esistono sette costruttori per `unique_ptr`.

```cpp
unique_ptr();

unique_ptr(nullptr_t);
explicit unique_ptr(pointer ptr);

unique_ptr(
    Type* ptr,
    typename conditional<
    is_reference<Del>::value,
    Del,
    typename add_reference<const Del>::type>::type _Deleter);

unique_ptr(pointer ptr, typename remove_reference<Del>::type&& _Deleter);
unique_ptr(unique_ptr&& right);
template <class Ty2, Class Del2>
    unique_ptr(unique_ptr<Ty2, Del2>&& right);
```

#### <a name="parameters"></a>Parametri

*PTR*\
Puntatore alla risorsa da assegnare a un oggetto `unique_ptr` .

*_Deleter*\
Un oggetto `deleter` da assegnare a un oggetto `unique_ptr`.

*Ok*\
Un oggetto `rvalue reference` a un oggetto `unique_ptr` da cui i campi `unique_ptr` vengono assegnati all'oggetto `unique_ptr` appena costruito.

#### <a name="remarks"></a>Commenti

I primi due costruttori costruiscono un oggetto che non gestisce alcuna risorsa. Il terzo costruttore archivia *ptr* in `stored_ptr` . Il quarto costruttore archivia *ptr* in `stored_ptr` e `deleter` in `stored_deleter` .

Il quinto costruttore archivia *ptr* in `stored_ptr` e passa `deleter` a `stored_deleter` . Il sesto e il settimo costruttore archiviano `right.release()` in `stored_ptr` e spostano `right.get_deleter()` in `stored_deleter`.

### <a name="unique_ptr"></a><a name="dtorunique_ptr"></a> ~ unique_ptr

Il distruttore per `unique_ptr` distribuisce un oggetto `unique_ptr`.

```cpp
~unique_ptr();
```

#### <a name="remarks"></a>Commenti

Il distruttore chiama `get_deleter()(stored_ptr)`.
