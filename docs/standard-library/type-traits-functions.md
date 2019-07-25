---
title: Funzioni &lt;type_traits&gt;
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_assignable
- type_traits/std::is_copy_assignable
- type_traits/std::is_copy_constructible
- type_traits/std::is_default_constructible
- type_traits/std::is_move_assignable
- type_traits/std::is_move_constructible
- type_traits/std::is_nothrow_move_assignable
- type_traits/std::is_trivially_copy_assignable
- type_traits/std::is_trivially_move_assignable
- type_traits/std::is_trivially_move_constructible
ms.assetid: dce4492f-f3e4-4d5e-bdb4-5875321254ec
helpviewer_keywords:
- std::is_assignable
- std::is_copy_assignable
- std::is_copy_constructible
- std::is_default_constructible
- std::is_move_assignable
- std::is_move_constructible
- std::is_nothrow_move_assignable
- std::is_trivially_copy_assignable
- std::is_trivially_move_assignable
- std::is_trivially_move_constructible
ms.openlocfilehash: 48ca51d56994f3d487af6744801acedf5c6cc79c
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68447038"
---
# <a name="lttypetraitsgt-functions"></a>Funzioni &lt;type_traits&gt;

||||
|-|-|-|
|[is_assignable](#is_assignable)|[is_copy_assignable](#is_copy_assignable)|[is_copy_constructible](#is_copy_constructible)|
|[is_default_constructible](#is_default_constructible)|[is_move_assignable](#is_move_assignable)|[is_move_constructible](#is_move_constructible)|
|[is_nothrow_move_assignable](#is_nothrow_move_assignable)|[is_nothrow_swappable](#is_nothrow_swappable)|[is_nothrow_swappable_with](#is_nothrow_swappable_with)|
|[is_swappable](#is_swappable)|[is_swappable_with](#is_swappable_with)|[is_trivially_copy_assignable](#is_trivially_copy_assignable)|
|[is_trivially_move_assignable](#is_trivially_move_assignable)|[is_trivially_move_constructible](#is_trivially_move_constructible)|

## <a name="is_assignable"></a>  is_assignable

Verifica se un valore di tipo *from* può essere assegnato *a un tipo* .

```cpp
template <class To, class From>
struct is_assignable;
```

### <a name="parameters"></a>Parametri

*A*\
Il tipo di oggetto che riceve l'assegnazione.

*Da*\
Il tipo di oggetto che fornisce il valore.

### <a name="remarks"></a>Note

L'espressione non valutata `declval<To>() = declval<From>()` deve essere nel formato corretto. Sia *da* che *da a* devono essere tipi completi, **void**o matrici di associazione sconosciuta.

## <a name="is_copy_assignable"></a>  is_copy_assignable

Test se è il tipo può essere copiato in un'assegnazione.

```cpp
template <class Ty>
struct is_copy_assignable;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

### <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo *Ty* è una classe che ha un operatore di assegnazione di copia; in caso contrario, contiene false. Equivalente a is_assignable\<Ty&, const Ty&>.

## <a name="is_copy_constructible"></a>  is_copy_constructible

Verifica se il tipo ha un costruttore di copia.

```cpp
template <class Ty>
struct is_copy_constructible;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

### <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo *Ty* è una classe che ha un costruttore di copia; in caso contrario, contiene false.

### <a name="example"></a>Esempio

```cpp
#include <type_traits>
#include <iostream>

struct Copyable
{
    int val;
};

struct NotCopyable
{
   NotCopyable(const NotCopyable&) = delete;
   int val;

};

int main()
{
    std::cout << "is_copy_constructible<Copyable> == " << std::boolalpha
        << std::is_copy_constructible<Copyable>::value << std::endl;
    std::cout << "is_copy_constructible<NotCopyable> == " << std::boolalpha
        << std::is_copy_constructible<NotCopyable>::value << std::endl;

    return (0);
}
```

```Output
is_copy_constructible<Copyable> == true
is_copy_constructible<NotCopyable > == false
```

## <a name="is_default_constructible"></a>  is_default_constructible

Verifica se il tipo ha un costruttore predefinito.

```cpp
template <class Ty>
struct is_default_constructible;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

### <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo *T* è un tipo di classe con un costruttore predefinito; in caso contrario, contiene false. Equivale al predicato `is_constructible<T>`. Il tipo *T* deve essere un tipo completo, **void**o una matrice di associazione sconosciuta.

### <a name="example"></a>Esempio

```cpp
#include <type_traits>
#include <iostream>

struct Simple
{
    Simple() : val(0) {}
    int val;
};

struct Simple2
{
    Simple2(int v) : val(v) {}
    int val;
};

int main()
{
    std::cout << "is_default_constructible<Simple> == " << std::boolalpha
        << std::is_default_constructible<Simple>::value << std::endl;
    std::cout << "is_default_constructible<Simple2> == " << std::boolalpha
        << std::is_default_constructible<Simple2>::value << std::endl;

    return (0);
}
```

```Output
is_default_constructible<Simple> == true
is_default_constructible<Simple2> == false
```

## <a name="is_move_assignable"></a>  is_move_assignable

Verifica se il tipo può essere assegnato mediante spostamento.

```cpp
template <class T>
struct is_move_assignable;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

### <a name="remarks"></a>Note

Un tipo può essere assegnato mediante spostamento se un riferimento rvalue a tale tipo può essere assegnato a un riferimento al tipo stesso. Il predicato del tipo è equivalente a `is_assignable<T&, T&&>`. I tipi assegnabili mediante spostamento includono tipi scalari referenziabili e tipi di classe con operatori di assegnazione mediante spostamento generati dal compilatore o definiti dall'utente.

## <a name="is_move_constructible"></a>  is_move_constructible

Verifica se il tipo ha un costruttore di spostamento.

```cpp
template <class T>
struct is_move_constructible;
```

### <a name="parameters"></a>Parametri

*T*\
Il tipo da valutare

### <a name="remarks"></a>Note

Predicato di tipo che restituisce true se il tipo *T* può essere costruito usando un'operazione di spostamento. Questo predicato è equivalente a `is_constructible<T, T&&>`.

## <a name="is_nothrow_move_assignable"></a>  is_nothrow_move_assignable

Verifica se il tipo ha un operatore **nothrow** di assegnazione di spostamento.

```cpp
template <class Ty>
struct is_nothrow_move_assignable;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

### <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo *Ty* ha un operatore nothrow di assegnazione di spostamento; in caso contrario, contiene false.

## <a name="is_nothrow_swappable"></a>is_nothrow_swappable

```cpp
template <class T> struct is_nothrow_swappable;
```

## <a name="is_nothrow_swappable_with"></a>is_nothrow_swappable_with

```cpp
template <class T, class U> struct is_nothrow_swappable_with;
```

## <a name="is_swappable"></a>is_swappable

```cpp
template <class T> struct is_swappable;
```

## <a name="is_swappable_with"></a>is_swappable_with

```cpp
template <class T, class U> struct is_swappable_with;
```

## <a name="is_trivially_copy_assignable"></a>  is_trivially_copy_assignable

Verifica se il tipo ha un operatore di assegnazione di copia semplice.

```cpp
template <class Ty>
struct is_trivially_copy_assignable;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

### <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo *T* è una classe che ha un operatore di assegnazione di copia semplice; in caso contrario, contiene false.

Un costruttore di assegnazione per una classe *t* è semplice se viene specificato in modo implicito, la classe *t* non ha funzioni virtuali, la classe *t* non ha basi virtuali, le classi di tutti i membri dati non statici del tipo di classe hanno un'assegnazione semplice gli operatori e le classi di tutti i membri dati non statici di tipo matrice della classe hanno operatori di assegnazione semplici.

## <a name="is_trivially_move_assignable"></a>  is_trivially_move_assignable

Verifica se il tipo ha un operatore di assegnazione di spostamento semplice.

```cpp
template <class Ty>
struct is_trivially_move_assignable;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

### <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo *Ty* è una classe che ha un operatore di assegnazione di spostamento semplice; in caso contrario, contiene false.

Un operatore di assegnazione di spostamento per una classe *Ty* è semplice se:

viene fornito in modo implicito

la classe *Ty* non ha funzioni virtuali

la classe *Ty* non ha basi virtuali

le classi di tutti i membri dati non statici del tipo di classe hanno operatori di assegnazione di spostamento semplici

le classi di tutti i membri dati non statici di tipo matrice della classe hanno operatori di assegnazione di spostamento semplici

## <a name="is_trivially_move_constructible"></a>  is_trivially_move_constructible

Verifica se il tipo ha un costruttore di spostamento semplice.

```cpp
template <class Ty>
struct is_trivially_move_constructible;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

### <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo *Ty* è una classe che ha un costruttore di spostamento semplice; in caso contrario, contiene false.

Un costruttore di spostamento per una classe *Ty* è semplice se:

viene dichiarato in modo implicito

i tipi di parametro sono equivalenti a quelli di una dichiarazione implicita

la classe *Ty* non ha funzioni virtuali

la classe *Ty* non ha basi virtuali

la classe non ha alcun membro dati non statici volatili

tutte le basi dirette della classe *Ty* hanno costruttori di spostamento semplici

le classi di tutti i membri dati non statici del tipo di classe hanno costruttori di spostamento semplici

le classi di tutti i membri dati non statici di tipo matrice della classe hanno costruttori di spostamento semplici

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
