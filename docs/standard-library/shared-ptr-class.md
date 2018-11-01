---
title: Classe shared_ptr
ms.date: 11/04/2016
f1_keywords:
- memory/std::shared_ptr
- memory/std::shared_ptr::element_type
- memory/std::shared_ptr::get
- memory/std::shared_ptr::owner_before
- memory/std::shared_ptr::reset
- memory/std::shared_ptr::swap
- memory/std::shared_ptr::unique
- memory/std::shared_ptr::use_count
- memory/std::shared_ptr::operator boolean-type
- memory/std::shared_ptr::operator*
- memory/std::shared_ptr::operator=
- memory/std::shared_ptr::operator->
helpviewer_keywords:
- std::shared_ptr [C++]
- std::shared_ptr [C++], element_type
- std::shared_ptr [C++], get
- std::shared_ptr [C++], owner_before
- std::shared_ptr [C++], reset
- std::shared_ptr [C++], swap
- std::shared_ptr [C++], unique
- std::shared_ptr [C++], use_count
- std::shared_ptr [C++], element_type
- std::shared_ptr [C++], get
- std::shared_ptr [C++], owner_before
- std::shared_ptr [C++], reset
- std::shared_ptr [C++], swap
- std::shared_ptr [C++], unique
- std::shared_ptr [C++], use_count
ms.assetid: 1469fc51-c658-43f1-886c-f4530dd84860
ms.openlocfilehash: 57874a87dcd7102c98ec5a387f1d3346bfa00195
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50627552"
---
# <a name="sharedptr-class"></a>Classe shared_ptr

Esegue il wrapping di un puntatore intelligente con conteggio dei riferimenti attorno a un oggetto allocato in modo dinamico.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
class shared_ptr;
```

## <a name="remarks"></a>Note

La classe shared_ptr descrive un oggetto che usa il conteggio dei riferimenti per gestire le risorse. Un oggetto `shared_ptr` contiene efficacemente un puntatore a una risorsa che contiene un puntatore null. Una risorsa può appartenere a non più di un oggetto `shared_ptr`. Quando un oggetto `shared_ptr` proprietario di una risorsa particolare viene eliminato, la risorsa viene liberata.

Un oggetto `shared_ptr` smette di contenere una risorsa quando viene riassegnato o reimpostato.

Un argomento di modello `T` potrebbe essere un tipo incompleto ad eccezione di quanto indicato per determinate funzioni membro.

Quando un oggetto `shared_ptr<T>` viene costruito da un puntatore di risorse di tipo `G*` o `shared_ptr<G>`, il tipo di puntatore `G*` deve essere convertibile in `T*`. In caso contrario, il codice non verrà compilato. Ad esempio:

```cpp
#include <memory>
using namespace std;

class F {};
class G : public F {};

shared_ptr<G> sp0(new G);   // okay, template parameter G and argument G*
shared_ptr<G> sp1(sp0);     // okay, template parameter G and argument shared_ptr<G>
shared_ptr<F> sp2(new G);   // okay, G* convertible to F*
shared_ptr<F> sp3(sp0);     // okay, template parameter F and argument shared_ptr<G>
shared_ptr<F> sp4(sp2);     // okay, template parameter F and argument shared_ptr<F>
shared_ptr<int> sp5(new G); // error, G* not convertible to int*
shared_ptr<int> sp6(sp2);   // error, template parameter int and argument shared_ptr<F>
```

Un oggetto `shared_ptr` possiede una risorsa nei casi seguenti:

- se viene costruito con un puntatore alla risorsa,

- se è stato creato da un oggetto `shared_ptr` proprietario della risorsa,

- se è stato creato da un oggetto [classe weak_ptr](../standard-library/weak-ptr-class.md) che punta alla risorsa o

- se la proprietà di tale risorsa è stata assegnata all'oggetto stesso con [shared_ptr::operator=](#op_eq) o mediante una chiamata alla funzione membro [shared_ptr::reset](#reset).

Gli oggetti `shared_ptr` che possiedono una risorsa condividono un blocco di controllo. Il blocco di controllo contiene gli elementi seguenti:

- numero di oggetti `shared_ptr` che possiedono la risorsa,

- numero di oggetti `weak_ptr` che puntano alla risorsa,

- metodo Deleter per tale risorsa (se disponibile),

- allocatore personalizzato per un blocco di controllo (se presente).

Un oggetto `shared_ptr` inizializzato tramite un puntatore null possiede un blocco di controllo e non è vuoto. Dopo che un oggetto `shared_ptr` rilascia una risorsa, non possiede più tale risorsa. Dopo che un oggetto `weak_ptr` rilascia una risorsa, non punta più a tale risorsa.

Quando il numero di oggetti `shared_ptr` che possiedono una risorsa diventa zero, la risorsa viene liberata, eliminandola o passandone l'indirizzo a un metodo Deleter, in base al modo in cui la proprietà della risorsa è stata inizialmente creata. Quando il numero di oggetti `shared_ptr` che possiedono una risorsa è zero e il numero di oggetti `weak_ptr` che puntano a tale risorsa è zero, il blocco di controllo viene liberato, utilizzando l'allocatore personalizzato per un blocco di controllo (se presente).

Un oggetto vuoto `shared_ptr` non possiede alcuna risorsa e non ha blocco di controllo.

Un metodo Deleter è un oggetto funzione con una funzione membro `operator()`. Il tipo deve essere costruibile per copia e i relativi costruttore copia e distruttore copia non devono generare eccezioni. Accetta un parametro, ovvero l'oggetto da eliminare.

Alcune funzioni accettano un elenco di argomenti che definiscono le proprietà dell'oggetto `shared_ptr<T>` risultante o dell'oggetto `weak_ptr<T>`. È possibile specificare tale elenco di argomenti in diversi modi:

nessun argomento, ovvero l'oggetto risultante è un oggetto `shared_ptr` o `weak_ptr` vuoto.

`ptr`, ovvero un puntatore di tipo `Other*` alla risorsa da gestire. L'oggetto `T` deve essere un tipo completo. Se la funzione ha esito negativo (perché il blocco di controllo non può essere allocato), valuta l'espressione `delete ptr`.

`ptr, dtor`, ovvero un puntatore di tipo `Other*` alla risorsa da gestire e un metodo Deleter per tale risorsa. Se la funzione ha esito negativo (perché il blocco di controllo non può essere allocato), chiama `dtor(ptr)` che deve essere ben definito.

`ptr, dtor, alloc`, ovvero un puntatore di tipo `Other*` alla risorsa da gestire, un metodo Deleter per tale risorsa e un allocatore per gestire qualsiasi archiviazione che deve essere allocata e liberata. Se la funzione ha esito negativo (perché il blocco di controllo non può essere allocato), chiama `dtor(ptr)` che deve essere ben definito.

`sp`, ovvero un oggetto `shared_ptr<Other>` proprietario della risorsa da gestire.

`wp`, ovvero un oggetto `weak_ptr<Other>` che punta alla risorsa da gestire.

`ap`, ovvero un oggetto `auto_ptr<Other>` che contiene un puntatore alla risorsa da gestire. Se la funzione ha esito positivo, chiama `ap.release()`, in caso contrario lascia `ap` invariato.

In tutti i casi, il tipo di puntatore `Other*` deve essere convertibile in `T*`.

## <a name="thread-safety"></a>Thread safety

Più thread possono leggere e scrivere contemporaneamente oggetti `shared_ptr` diversi, anche se gli oggetti sono copie che ne condividono la proprietà.

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[shared_ptr](#shared_ptr)|Costruisce un oggetto `shared_ptr`.|
|[shared_ptr::~shared_ptr](#dtorshared_ptr)|Elimina un oggetto `shared_ptr`.|

### <a name="types"></a>Tipi

|Nome del tipo|Descrizione|
|-|-|
|[element_type](#element_type)|Tipo di un elemento.|

### <a name="functions"></a>Funzioni

|Funzione|Descrizione|
|-|-|
|[get](#get)|Ottiene l'indirizzo della risorsa posseduta.|
|[owner_before](#owner_before)|Restituisce true se `shared_ptr` è ordinato in posizione precedente (o è minore di) del puntatore fornito.|
|[reset](#reset)|Sostituisce una risorsa di proprietà.|
|[swap](#swap)|Scambia due oggetti `shared_ptr`.|
|[unique](#unique)|Verifica se la risorsa di proprietà è univoca.|
|[use_count](#use_count)|Conta il numero dei proprietari delle risorse.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[shared_ptr:: operator bool](#op_bool)|Verifica se una risorsa di proprietà esiste.|
|[shared_ptr::operator*](#op_star)|Ottiene il valore definito.|
|[shared_ptr::operator=](#op_eq)|Sostituisce la risorsa di proprietà.|
|[shared_ptr::operator-&gt;](#op_arrow)|Ottiene un puntatore al valore definito.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<memory>

**Spazio dei nomi:** std

## <a name="element_type"></a>  shared_ptr::element_type

Tipo di un elemento.

```cpp
typedef T element_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `T`.

### <a name="example"></a>Esempio

```cpp
// std__memory__shared_ptr_element_type.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp0(new int(5));
    std::shared_ptr<int>::element_type val = *sp0;

    std::cout << "*sp0 == " << val << std::endl;

    return (0);
}

```

```Output
*sp0 == 5
```

## <a name="get"></a>  shared_ptr::get

Ottiene l'indirizzo della risorsa posseduta.

```cpp
T *get() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce l'indirizzo della risorsa posseduta. Se l'oggetto non possiede una risorsa, restituisce 0.

### <a name="example"></a>Esempio

```cpp
// std__memory__shared_ptr_get.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp0;
    std::shared_ptr<int> sp1(new int(5));

    std::cout << "sp0.get() == 0 == " << std::boolalpha
        << (sp0.get() == 0) << std::endl;
    std::cout << "*sp1.get() == " << *sp1.get() << std::endl;

    return (0);
}

```

```Output
sp0.get() == 0 == true
*sp1.get() == 5
```

## <a name="op_bool"></a>  shared_ptr:: operator bool

Verifica se una risorsa di proprietà esiste.

```cpp
explicit operator bool() const noexcept;
```

### <a name="remarks"></a>Note

L'operatore restituisce un valore pari **true** quando `get() != nullptr`; in caso contrario **false**.

### <a name="example"></a>Esempio

```cpp
// std__memory__shared_ptr_operator_bool.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp0;
    std::shared_ptr<int> sp1(new int(5));

    std::cout << "(bool)sp0 == " << std::boolalpha
        << (bool)sp0 << std::endl;
    std::cout << "(bool)sp1 == " << std::boolalpha
        << (bool)sp1 << std::endl;

    return (0);
}

```

```Output
(bool)sp0 == false
(bool)sp1 == true
```

## <a name="op_star"></a>  shared_ptr::operator*

Ottiene il valore definito.

```cpp
T& operator*() const;
```

### <a name="remarks"></a>Note

L'operatore di riferimento indiretto restituisce `*get()`. Di conseguenza, il puntatore archiviato non deve essere null.

### <a name="example"></a>Esempio

```cpp
// std__memory__shared_ptr_operator_st.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp0(new int(5));

    std::cout << "*sp0 == " << *sp0 << std::endl;

    return (0);
}

```

```Output
*sp0 == 5
```

## <a name="op_eq"></a>  shared_ptr::operator=

Sostituisce la risorsa di proprietà.

```cpp
shared_ptr& operator=(const shared_ptr& sp);

template <class Other>
shared_ptr& operator=(const shared_ptr<Other>& sp);

template <class Other>
shared_ptr& operator=(auto_ptr<Other>& ap);

template <class Other>
shared_ptr& operator=(auto_ptr<Other>& ap);

template <class Other>
shared_ptr& operator=(auto_ptr<Other>&& ap);

template <class Other, class Deletor>
shared_ptr& operator=(unique_ptr<Other, Deletor>&& ap);
```

### <a name="parameters"></a>Parametri

*SP*<br/>
Puntatore condiviso da copiare.

*Asia Pacifico*<br/>
Puntatore automatico da copiare.

### <a name="remarks"></a>Note

Tutti gli operatori riducono il numero dei riferimenti per la risorsa attualmente di proprietà di `*this` e assegnano a `*this` la proprietà della risorsa descritta dalla sequenza di operandi. Se il conteggio dei riferimenti scende a zero, la risorsa viene rilasciata. Se un operatore ha esito negativo, `*this` non viene modificato.

### <a name="example"></a>Esempio

```cpp
// std__memory__shared_ptr_operator_as.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp0;
    std::shared_ptr<int> sp1(new int(5));
    std::auto_ptr<int> ap(new int(10));

    sp0 = sp1;
    std::cout << "*sp0 == " << *sp0 << std::endl;

    sp0 = ap;
    std::cout << "*sp0 == " << *sp0 << std::endl;

    return (0);
}

```

```Output
*sp0 == 5
*sp0 == 10
```

## <a name="op_arrow"></a>  shared_ptr::operator-&gt;

Ottiene un puntatore al valore definito.

```cpp
T * operator->() const;
```

### <a name="remarks"></a>Note

L'operatore di selezione restituisce `get()`, in modo che l'espressione `sp->member` si comporti come `(sp.get())->member` dove `sp` è un oggetto di classe `shared_ptr<T>`. Di conseguenza, il puntatore archiviato non deve essere null e `T` deve essere una classe, una struttura o un tipo di unione con un membro `member`.

### <a name="example"></a>Esempio

```cpp
// std__memory__shared_ptr_operator_ar.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

typedef std::pair<int, int> Mypair;
int main()
{
    std::shared_ptr<Mypair> sp0(new Mypair(1, 2));

    std::cout << "sp0->first == " << sp0->first << std::endl;
    std::cout << "sp0->second == " << sp0->second << std::endl;

    return (0);
}

```

```Output
sp0->first == 1
sp0->second == 2
```

## <a name="owner_before"></a>  shared_ptr::owner_before

Restituisce true se `shared_ptr` è ordinato in posizione precedente (o è minore di) del puntatore fornito.

```cpp
template <class Other>
bool owner_before(const shared_ptr<Other>& ptr);

template <class Other>
bool owner_before(const weak_ptr<Other>& ptr);
```

### <a name="parameters"></a>Parametri

*ptr*<br/>
Riferimento `lvalue` a `shared_ptr` o `weak_ptr`.

### <a name="remarks"></a>Note

La funzione membro di modello restituisce true se `*this` viene `ordered before` `ptr`.

## <a name="reset"></a>  shared_ptr::reset

Sostituisce una risorsa di proprietà.

```cpp
void reset();

template <class Other>
void reset(Other *ptr;);

template <class Other, class D>
void reset(Other *ptr, D dtor);

template <class Other, class D, class A>
void reset(Other *ptr, D dtor, A alloc);
```

### <a name="parameters"></a>Parametri

*Altro*<br/>
Tipo controllato dal puntatore argomento.

*D*<br/>
Tipo del metodo Deleter.

*ptr*<br/>
Puntatore da copiare.

*DTOR*<br/>
Metodo Deleter da copiare.

*A*<br/>
Tipo dell'allocatore.

*Alloc*<br/>
Allocatore da copiare.

### <a name="remarks"></a>Note

Tutti gli operatori riducono il numero dei riferimenti per la risorsa attualmente di proprietà di `*this` e assegnano a `*this` la proprietà della risorsa descritta dalla sequenza di operandi. Se il conteggio dei riferimenti scende a zero, la risorsa viene rilasciata. Se un operatore ha esito negativo, `*this` non viene modificato.

### <a name="example"></a>Esempio

```cpp
// std__memory__shared_ptr_reset.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

struct deleter
{
    void operator()(int *p)
    {
        delete p;
    }
};

int main()
{
    std::shared_ptr<int> sp(new int(5));

    std::cout << "*sp == " << std::boolalpha
        << *sp << std::endl;

    sp.reset();
    std::cout << "(bool)sp == " << std::boolalpha
        << (bool)sp << std::endl;

    sp.reset(new int(10));
    std::cout << "*sp == " << std::boolalpha
        << *sp << std::endl;

    sp.reset(new int(15), deleter());
    std::cout << "*sp == " << std::boolalpha
        << *sp << std::endl;

    return (0);
}

```

```Output
*sp == 5
(bool)sp == false
*sp == 10
*sp == 15
```

## <a name="shared_ptr"></a>  shared_ptr::shared_ptr

Costruisce un oggetto `shared_ptr`.

```cpp
shared_ptr();

shared_ptr(nullptr_t);

shared_ptr(const shared_ptr& sp);

shared_ptr(shared_ptr&& sp);

template <class Other>
explicit shared_ptr(Other* ptr);

template <class Other, class D>
shared_ptr(Other* ptr, D dtor);

template <class D>
shared_ptr(nullptr_t ptr, D dtor);

template <class Other, class D, class A>
shared_ptr(Other* ptr, D dtor, A  alloc);

template <class D, class A>
shared_ptr(nullptr_t ptr, D dtor, A alloc);

template <class Other>
shared_ptr(const shared_ptr<Other>& sp);

template <class Other>
shared_ptr(const weak_ptr<Other>& wp);

template <class &>
shared_ptr(std::auto_ptr<Other>& ap);

template <class &>
shared_ptr(std::auto_ptr<Other>&& ap);

template <class Other, class D>
shared_ptr(unique_ptr<Other, D>&& up);

template <class Other>
shared_ptr(const shared_ptr<Other>& sp, T* ptr);

template <class Other, class D>
shared_ptr(const unique_ptr<Other, D>& up) = delete;
```

### <a name="parameters"></a>Parametri

*Altro*<br/>
Tipo controllato dal puntatore argomento.

*ptr*<br/>
Puntatore da copiare.

*D*<br/>
Tipo del metodo Deleter.

*A*<br/>
Tipo dell'allocatore.

*DTOR*<br/>
Metodo Deleter.

*Accelerator*<br/>
Allocatore.

*SP*<br/>
Puntatore intelligente da copiare.

*Windows Phone*<br/>
Puntatore debole.

*Asia Pacifico*<br/>
Puntatore automatico da copiare.

### <a name="remarks"></a>Note

Ogni costruttore crea un oggetto che possiede la risorsa descritta dalla sequenza di operandi. Il costruttore `shared_ptr(const weak_ptr<Other>& wp)` genera un oggetto eccezione di tipo [bad_weak_ptr Class](../standard-library/bad-weak-ptr-class.md) se `wp.expired()`.

### <a name="example"></a>Esempio

```cpp
// std__memory__shared_ptr_construct.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

struct deleter
{
    void operator()(int *p)
    {
        delete p;
    }
};

int main()
{
    std::shared_ptr<int> sp0;
    std::cout << "(bool)sp0 == " << std::boolalpha
        << (bool)sp0 << std::endl;

    std::shared_ptr<int> sp1(new int(5));
    std::cout << "*sp1 == " << *sp1 << std::endl;

    std::shared_ptr<int> sp2(new int(10), deleter());
    std::cout << "*sp2 == " << *sp2 << std::endl;

    std::shared_ptr<int> sp3(sp2);
    std::cout << "*sp3 == " << *sp3 << std::endl;

    std::weak_ptr<int> wp(sp3);
    std::shared_ptr<int> sp4(wp);
    std::cout << "*sp4 == " << *sp4 << std::endl;

    std::auto_ptr<int> ap(new int(15));
    std::shared_ptr<int> sp5(ap);
    std::cout << "*sp5 == " << *sp5 << std::endl;

    return (0);
}

```

```Output
(bool)sp0 == false
*sp1 == 5
*sp2 == 10
*sp3 == 10
*sp4 == 10
*sp5 == 15
```

## <a name="dtorshared_ptr"></a>  shared_ptr::~shared_ptr

Elimina un oggetto `shared_ptr`.

```cpp
~shared_ptr();
```

### <a name="remarks"></a>Note

Il distruttore riduce il numero di riferimenti per la risorsa attualmente di proprietà di `*this`. Se il conteggio dei riferimenti scende a zero, la risorsa viene rilasciata.

### <a name="example"></a>Esempio

```cpp
// std__memory__shared_ptr_destroy.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

struct deleter
{
    void operator()(int *p)
    {
        delete p;
    }
};

int main()
{
    std::shared_ptr<int> sp1(new int(5));
    std::cout << "*sp1 == " << *sp1 << std::endl;
    std::cout << "use count == " << sp1.use_count() << std::endl;

    {
        std::shared_ptr<int> sp2(sp1);
        std::cout << "*sp2 == " << *sp2 << std::endl;
        std::cout << "use count == " << sp1.use_count() << std::endl;
    }

    // check use count after sp2 is destroyed
    std::cout << "use count == " << sp1.use_count() << std::endl;

    return (0);
}

```

```Output
*sp1 == 5
use count == 1
*sp2 == 5
use count == 2
use count == 1
```

## <a name="swap"></a>  shared_ptr::swap

Scambia due oggetti `shared_ptr`.

```cpp
void swap(shared_ptr& sp);
```

### <a name="parameters"></a>Parametri

*SP*<br/>
Puntatore condiviso con cui effettuare lo scambio.

### <a name="remarks"></a>Note

La funzione membro lascia che la risorsa originariamente di proprietà `*this` successivamente appartenenti *sp*e la risorsa originariamente di proprietà *sp* successivamente appartenenti `*this`. La funzione non modifica i conteggi dei riferimenti per le due risorse e non genera alcuna eccezione.

### <a name="example"></a>Esempio

```cpp
// std__memory__shared_ptr_swap.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

struct deleter
{
    void operator()(int *p)
    {
        delete p;
    }
};

int main()
{
    std::shared_ptr<int> sp1(new int(5));
    std::shared_ptr<int> sp2(new int(10));
    std::cout << "*sp1 == " << *sp1 << std::endl;

    sp1.swap(sp2);
    std::cout << "*sp1 == " << *sp1 << std::endl;

    swap(sp1, sp2);
    std::cout << "*sp1 == " << *sp1 << std::endl;
    std::cout << std::endl;

    std::weak_ptr<int> wp1(sp1);
    std::weak_ptr<int> wp2(sp2);
    std::cout << "*wp1 == " << *wp1.lock() << std::endl;

    wp1.swap(wp2);
    std::cout << "*wp1 == " << *wp1.lock() << std::endl;

    swap(wp1, wp2);
    std::cout << "*wp1 == " << *wp1.lock() << std::endl;

    return (0);
}

```

```Output
*sp1 == 5
*sp1 == 10
*sp1 == 5

*wp1 == 5
*wp1 == 10
*wp1 == 5
```

## <a name="unique"></a>  shared_ptr::unique

Verifica se la risorsa di proprietà è univoca.

```cpp
bool unique() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce **true** se nessun altro `shared_ptr` oggetto proprietario della risorsa di proprietà `*this`; in caso contrario **false**.

### <a name="example"></a>Esempio

```cpp
// std__memory__shared_ptr_unique.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

struct deleter
{
    void operator()(int *p)
    {
        delete p;
    }
};

int main()
{
    std::shared_ptr<int> sp1(new int(5));
    std::cout << "sp1.unique() == " << std::boolalpha
        << sp1.unique() << std::endl;

    std::shared_ptr<int> sp2(sp1);
    std::cout << "sp1.unique() == " << std::boolalpha
        << sp1.unique() << std::endl;

    return (0);
}

```

```Output
sp1.unique() == true
sp1.unique() == false
```

## <a name="use_count"></a>  shared_ptr::use_count

Conta il numero dei proprietari delle risorse.

```cpp
long use_count() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce il numero di oggetti `shared_ptr` che possiedono la risorsa di proprietà di `*this`.

### <a name="example"></a>Esempio

```cpp
// std__memory__shared_ptr_use_count.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp1(new int(5));
    std::cout << "sp1.use_count() == "
        << sp1.use_count() << std::endl;

    std::shared_ptr<int> sp2(sp1);
    std::cout << "sp1.use_count() == "
        << sp1.use_count() << std::endl;

    return (0);
}

```

```Output
sp1.use_count() == 1
sp1.use_count() == 2
```

## <a name="see-also"></a>Vedere anche

[Classe weak_ptr](../standard-library/weak-ptr-class.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
