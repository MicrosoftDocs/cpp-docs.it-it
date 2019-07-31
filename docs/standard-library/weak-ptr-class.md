---
title: Classe weak_ptr
ms.date: 07/29/2019
f1_keywords:
- memory/std::weak_ptr
- memory/std::weak_ptr::element_type
- memory/std::weak_ptr::expired
- memory/std::weak_ptr::lock
- memory/std::weak_ptr::owner_before
- memory/std::weak_ptr::reset
- memory/std::weak_ptr::swap
- memory/std::weak_ptr::use_count
- memory/std::weak_ptr::operator=
helpviewer_keywords:
- std::weak_ptr [C++]
- std::weak_ptr [C++], element_type
- std::weak_ptr [C++], expired
- std::weak_ptr [C++], lock
- std::weak_ptr [C++], owner_before
- std::weak_ptr [C++], reset
- std::weak_ptr [C++], swap
- std::weak_ptr [C++], use_count
- std::weak_ptr [C++], element_type
- std::weak_ptr [C++], expired
- std::weak_ptr [C++], lock
- std::weak_ptr [C++], owner_before
- std::weak_ptr [C++], reset
- std::weak_ptr [C++], swap
- std::weak_ptr [C++], use_count
ms.assetid: 2db4afb2-c7be-46fc-9c20-34ec2f8cc7c2
ms.openlocfilehash: d4ba30f737bc570a4ee700b3a317b5feebe8a50a
ms.sourcegitcommit: 725e86dabe2901175ecc63261c3bf05802dddff4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/31/2019
ms.locfileid: "68682415"
---
# <a name="weakptr-class"></a>Classe weak_ptr

Esegue il wrapping di un puntatore collegato in modo debole.

## <a name="syntax"></a>Sintassi

```cpp
template<class T> class weak_ptr;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo controllato dal puntatore debole.

## <a name="remarks"></a>Note

La classe modello descrive un oggetto che punta a una risorsa gestita da uno o più oggetti [shared_ptr](shared-ptr-class.md) . Gli `weak_ptr` oggetti che puntano a una risorsa non influiscono sul conteggio dei riferimenti della risorsa. Quando l'ultimo `shared_ptr` oggetto che gestisce la risorsa viene eliminato definitivamente, la risorsa verrà liberata, anche se sono `weak_ptr` presenti oggetti che puntano a tale risorsa. Questo comportamento è essenziale per evitare cicli nelle strutture di dati.

Un oggetto `weak_ptr` punta a una risorsa se è stato costruito da un oggetto `shared_ptr` proprietario di tale risorsa, se è stato costruito da un oggetto `weak_ptr` che punta a tale risorsa o se la risorsa è stata assegnata a esso con [operator=](#op_eq). Un `weak_ptr` oggetto non fornisce accesso diretto alla risorsa a cui punta. Il codice che deve usare la risorsa lo fa tramite un oggetto `shared_ptr` proprietario di tale risorsa, creato chiamando la funzione membro [lock](#lock). Un `weak_ptr` oggetto è scaduto quando la risorsa a cui punta è stata liberata perché tutti `shared_ptr` gli oggetti proprietari della risorsa sono stati eliminati definitivamente. Chiamando `lock` su un oggetto `weak_ptr` scaduto viene creato un oggetto shared_ptr vuoto.

Un oggetto weak_ptr vuoto non punta ad alcuna risorsa e non ha un blocco di controllo. La sua funzione membro `lock` restituisce un oggetto shared_ptr vuoto.

Si verifica un ciclo quando due o più risorse controllate da oggetti `shared_ptr` contengono oggetti `shared_ptr` che fanno riferimento uno con l'altro. Ad esempio, un elenco collegato circolare con tre elementi ha un nodo head `N0`, tale nodo contiene un oggetto `shared_ptr` proprietario del nodo successivo `N1`, tale nodo contiene un oggetto `shared_ptr` proprietario del nodo successivo `N2` e tale nodo, a sua volta, contiene un oggetto `shared_ptr` proprietario del nodo head `N0`, che chiude il ciclo. In questa situazione, i conteggi dei riferimenti non diventano mai zero e i nodi nel ciclo non vengono mai liberati. Per eliminare il ciclo, l'ultimo nodo `N2` deve contenere un oggetto `weak_ptr` che punta all'oggetto `N0` anziché un oggetto `shared_ptr`. Poiché l' `weak_ptr` oggetto non è `N0` proprietario di, `N0`non influisce sul conteggio dei riferimenti e quando l'ultimo riferimento del programma al nodo head viene eliminato definitivamente, anche i nodi nell'elenco verranno eliminati definitivamente.

## <a name="members"></a>Members

|||
|-|-|
| **Costruttori** | |
|[weak_ptr](#weak_ptr)|Costruisce un oggetto `weak_ptr`.|
| **Distruttori** | |
|[~ weak_ptr](#tilde-weak_ptr)|Costruisce un oggetto `weak_ptr`.|
| **Typedef** | |
|[element_type](#element_type)|Tipo dell'elemento.|
| **Funzioni membro** | |
|[expired](#expired)|Verifica se la proprietà è scaduta.|
|[lock](#lock)|Ottiene la proprietà esclusiva di una risorsa.|
|[owner_before](#owner_before)|Restituisce **true** se `weak_ptr` l'oggetto è ordinato prima (o minore di) del puntatore fornito.|
|[reset](#reset)|Rilascia una risorsa di proprietà.|
|[swap](#swap)|Scambia due oggetti `weak_ptr`.|
|[use_count](#use_count)|Conta il numero `shared_ptr` di oggetti.|
| **Operatori** | |
|[operator=](#op_eq)|Sostituisce una risorsa di proprietà.|

## <a name="element_type"></a>element_type

Tipo dell'elemento.

```cpp
typedef T element_type; // through C++17
using element_type = remove_extent_t<T>; // C++20
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `T`.

### <a name="example"></a>Esempio

```cpp
// std__memory__weak_ptr_element_type.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp0(new int(5));
    std::weak_ptr<int> wp0(sp0);
    std::weak_ptr<int>::element_type val = *wp0.lock();

    std::cout << "*wp0.lock() == " << val << std::endl;

    return (0);
}
```

```Output
*wp0.lock() == 5
```

## <a name="expired"></a>scaduto

Verifica se la proprietà è scaduta, ovvero se l'oggetto a cui si fa riferimento è stato eliminato.

```cpp
bool expired() const noexcept;
```

### <a name="remarks"></a>Note

La funzione membro restituisce **true** se `*this` è scaduto; in caso contrario, **false**.

### <a name="example"></a>Esempio

```cpp
// std__memory__weak_ptr_expired.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::weak_ptr<int> wp;

    {
        std::shared_ptr<int> sp(new int(10));
        wp = sp;
        std::cout << "wp.expired() == " << std::boolalpha
            << wp.expired() << std::endl;
        std::cout << "*wp.lock() == " << *wp.lock() << std::endl;
    }

    // check expired after sp is destroyed
    std::cout << "wp.expired() == " << std::boolalpha
        << wp.expired() << std::endl;
    std::cout << "(bool)wp.lock() == " << std::boolalpha
        << (bool)wp.lock() << std::endl;

    return (0);
}
```

```Output
wp.expired() == false
*wp.lock() == 10
wp.expired() == true
(bool)wp.lock() == false
```

## <a name="lock"></a>blocco

Ottiene un oggetto `shared_ptr` che condivide la proprietà di una risorsa.

```cpp
shared_ptr<T> lock() const noexcept;
```

### <a name="remarks"></a>Note

La funzione membro restituisce un oggetto [shared_ptr](shared-ptr-class.md) vuoto se `*this` è scaduto. in caso contrario, `shared_ptr<T>` restituisce un oggetto proprietario della risorsa `*this` a cui punta. Restituisce un valore equivalente all'esecuzione atomica di `expired() ? shared_ptr<T>() : shared_ptr<T>(*this)`.

### <a name="example"></a>Esempio

```cpp
// std__memory__weak_ptr_lock.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::weak_ptr<int> wp;

    {
        std::shared_ptr<int> sp(new int(10));
        wp = sp;
        std::cout << "wp.expired() == " << std::boolalpha
            << wp.expired() << std::endl;
        std::cout << "*wp.lock() == " << *wp.lock() << std::endl;
    }

    // check expired after sp is destroyed
    std::cout << "wp.expired() == " << std::boolalpha
        << wp.expired() << std::endl;
    std::cout << "(bool)wp.lock() == " << std::boolalpha
        << (bool)wp.lock() << std::endl;

    return (0);
}
```

```Output
wp.expired() == false
*wp.lock() == 10
wp.expired() == true
(bool)wp.lock() == false
```

## <a name="op_eq"></a> operator=

Sostituisce una risorsa di proprietà.

```cpp
weak_ptr& operator=(const weak_ptr& ptr) noexcept;

template <class Other>
weak_ptr& operator=(const weak_ptr<Other>& ptr) noexcept;

template <class Other>
weak_ptr& operator=(const shared_ptr<Other>& ptr) noexcept;
```

### <a name="parameters"></a>Parametri

*Altri*\
Tipo controllato dal puntatore condiviso o debole dell'argomento.

*PTR*\
Puntatore debole o puntatore condiviso da copiare.

### <a name="remarks"></a>Note

Tutti gli operatori rilasciano la risorsa a cui `*this` punta attualmente e assegnano la proprietà della risorsa denominata `*this`da *ptr* a. Se un operatore ha esito negativo `*this` , lascia invariato. Ogni operatore ha un effetto equivalente a `weak_ptr(ptr).swap(*this)`.

### <a name="example"></a>Esempio

```cpp
// std__memory__weak_ptr_operator_as.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp0(new int(5));
    std::weak_ptr<int> wp0(sp0);
    std::cout << "*wp0.lock() == " << *wp0.lock() << std::endl;

    std::shared_ptr<int> sp1(new int(10));
    wp0 = sp1;
    std::cout << "*wp0.lock() == " << *wp0.lock() << std::endl;

    std::weak_ptr<int> wp1;
    wp1 = wp0;
    std::cout << "*wp1.lock() == " << *wp1.lock() << std::endl;

    return (0);
}
```

```Output
*wp0.lock() == 5
*wp0.lock() == 10
*wp1.lock() == 10
```

## <a name="owner_before"></a>owner_before

Restituisce **true** se `weak_ptr` l'oggetto è ordinato prima (o minore di) del puntatore fornito.

```cpp
template <class Other>
bool owner_before(const shared_ptr<Other>& ptr) const noexcept;

template <class Other>
bool owner_before(const weak_ptr<Other>& ptr) const noexcept;
```

### <a name="parameters"></a>Parametri

*PTR*\
Riferimento lvalue a un `shared_ptr` oggetto `weak_ptr`o.

### <a name="remarks"></a>Note

La funzione membro del modello restituisce true `*this` se viene ordinato prima di *ptr*.

## <a name="reset"></a>reimpostazione

Rilascia la risorsa di proprietà.

```cpp
void reset() noexcept;
```

### <a name="remarks"></a>Note

La funzione membro rilascia la risorsa a cui punta `*this` e viene `*this` convertito in un `weak_ptr` oggetto vuoto.

### <a name="example"></a>Esempio

```cpp
// std__memory__weak_ptr_reset.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp(new int(5));
    std::weak_ptr<int> wp(sp);
    std::cout << "*wp.lock() == " << *wp.lock() << std::endl;
    std::cout << "wp.expired() == " << std::boolalpha
        << wp.expired() << std::endl;

    wp.reset();
    std::cout << "wp.expired() == " << std::boolalpha
        << wp.expired() << std::endl;

    return (0);
}
```

```Output
*wp.lock() == 5
wp.expired() == false
wp.expired() == true
```

## <a name="swap"></a> swap

Scambia due oggetti `weak_ptr`.

```cpp
void swap(weak_ptr& wp) noexcept;
```

Include inoltre la specializzazione:

```cpp
template<class T>
void swap(weak_ptr<T>& a, weak_ptr<T>& b) noexcept;
```

### <a name="parameters"></a>Parametri

*WP*\
Puntatore debole da scambiare.

### <a name="remarks"></a>Note

Dopo un `swap`oggetto, alla risorsa a `*this` cui fa riferimento originariamente viene fatto riferimento da *WP*e la risorsa a cui fa riferimento *WP* viene puntata `*this`da. La funzione non modifica i conteggi dei riferimenti per le due risorse e non genera alcuna eccezione. L'effetto della specializzazione del modello è equivalente a `a.swap(b)`.

### <a name="example"></a>Esempio

```cpp
// std__memory__weak_ptr_swap.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

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

## <a name="use_count"></a>use_count

Conta il numero di `shared_ptr` oggetti che possiedono la risorsa condivisa.

```cpp
long use_count() const noexcept;
```

### <a name="remarks"></a>Note

La funzione membro restituisce il numero di oggetti `shared_ptr` che possiedono la risorsa a cui puntava `*this`.

### <a name="example"></a>Esempio

```cpp
// std__memory__weak_ptr_use_count.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp1(new int(5));
    std::weak_ptr<int> wp(sp1);
    std::cout << "wp.use_count() == "
        << wp.use_count() << std::endl;

    std::shared_ptr<int> sp2(sp1);
    std::cout << "wp.use_count() == "
        << wp.use_count() << std::endl;

    return (0);
}
```

```Output
wp.use_count() == 1
wp.use_count() == 2
```

## <a name="weak_ptr"></a>weak_ptr

Costruisce un oggetto `weak_ptr`.

```cpp
constexpr weak_ptr() noexcept;

weak_ptr(const weak_ptr& wp) noexcept;

weak_ptr(weak_ptr&& wp) noexcept;

template <class Other>
weak_ptr(const weak_ptr<Other>& wp) noexcept;

template <class Other>
weak_ptr(weak_ptr<Other>&& sp) noexcept;

template <class Other>
weak_ptr(const shared_ptr<Other>& sp) noexcept;
```

### <a name="parameters"></a>Parametri

*Altri*\
Tipo controllato dal puntatore dell'argomento condiviso/debole. Questi costruttori non partecipano alla risoluzione dell'overload a _meno\* che_ non sia `element_type*`compatibile con.

*WP*\
Puntatore debole da copiare.

*SP*\
Puntatore condiviso da copiare.

### <a name="remarks"></a>Note

Il costruttore predefinito costruisce un oggetto `weak_ptr` vuoto. I costruttori che accettano un argomento ogni costrutto di un `weak_ptr` oggetto vuoto se il puntatore dell'argomento è vuoto. In caso contrario, costruiscono un `weak_ptr` oggetto che punta alla risorsa denominata dall'argomento. Il conteggio dei riferimenti dell'oggetto condiviso non è stato modificato.

### <a name="example"></a>Esempio

```cpp
// std__memory__weak_ptr_construct.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::weak_ptr<int> wp0;
    std::cout << "wp0.expired() == " << std::boolalpha
        << wp0.expired() << std::endl;

    std::shared_ptr<int> sp1(new int(5));
    std::weak_ptr<int> wp1(sp1);
    std::cout << "*wp1.lock() == "
        << *wp1.lock() << std::endl;

    std::weak_ptr<int> wp2(wp1);
    std::cout << "*wp2.lock() == "
        << *wp2.lock() << std::endl;

    return (0);
}
```

```Output
wp0.expired() == true
*wp1.lock() == 5
*wp2.lock() == 5
```

## <a name="tilde-weak_ptr"></a>~ weak_ptr

Elimina un oggetto `weak_ptr`.

```cpp
~weak_ptr();
```

### <a name="remarks"></a>Note

Il distruttore Elimina questa operazione `weak_ptr` , ma non ha alcun effetto sul conteggio dei riferimenti dell'oggetto a cui punta il puntatore archiviato.

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](cpp-standard-library-header-files.md)\
[\<memory>](memory.md)\
[Classe shared_ptr](shared-ptr-class.md)
