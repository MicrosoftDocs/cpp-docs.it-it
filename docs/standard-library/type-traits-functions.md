---
title: Funzioni &lt;type_traits&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
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
ms.openlocfilehash: ff6d6066d90fe5049b89586ce657e62860c12f9f
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="lttypetraitsgt-functions"></a>Funzioni &lt;type_traits&gt;

||||
|-|-|-|
|[is_assignable](#is_assignable)|[is_copy_assignable](#is_copy_assignable)|[is_copy_constructible](#is_copy_constructible)|
|[is_default_constructible](#is_default_constructible)|[is_move_assignable](#is_move_assignable)|[is_move_constructible](#is_move_constructible)|
|[is_nothrow_move_assignable](#is_nothrow_move_assignable)|[is_trivially_copy_assignable](#is_trivially_copy_assignable)|[is_trivially_move_assignable](#is_trivially_move_assignable)|
|[is_trivially_move_constructible](#is_trivially_move_constructible)|

## <a name="is_assignable"></a>  is_assignable

Verifica se un valore di tipo `From` può essere assegnato a un tipo `To`.

```cpp
template <class To, class From>
struct is_assignable;
```

### <a name="parameters"></a>Parametri

Per il tipo di oggetto che riceve l'assegnazione.

Dal tipo dell'oggetto che fornisce il valore.

### <a name="remarks"></a>Note

L'espressione non valutata `declval<To>() = declval<From>()` deve essere nel formato corretto. `From` e `To` devono essere tipi completi, `void`, o matrici di valori associati sconosciuti.

## <a name="is_copy_assignable"></a>  is_copy_assignable

Test se è il tipo può essere copiato in un'assegnazione.

```cpp
template <class Ty>
struct is_copy_assignable;
```

### <a name="parameters"></a>Parametri

`Ty` Il tipo di query.

### <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo `Ty` è una classe che ha un operatore di assegnazione di copia; in caso contrario, contiene false. Equivalente a is_assignable\<Ty&, const Ty&>.

## <a name="is_copy_constructible"></a>  is_copy_constructible

Verifica se il tipo ha un costruttore di copia.

```cpp
template <class Ty>
struct is_copy_constructible;
```

### <a name="parameters"></a>Parametri

`Ty` Il tipo di query.

### <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo `Ty` è una classe che ha un costruttore di copia; in caso contrario, contiene false.

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

`T` Il tipo di query.

### <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo `T` è un tipo di classe con un costruttore predefinito; in caso contrario, contiene false. Equivale al predicato `is_constructible<T>`. Il tipo `T` deve essere un tipo completo, `void`o una matrice di valori associati sconosciuti.

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

`T` Il tipo di query.

### <a name="remarks"></a>Note

Un tipo può essere assegnato mediante spostamento se un riferimento rvalue a tale tipo può essere assegnato a un riferimento al tipo stesso. Il predicato del tipo è equivalente a `is_assignable<T&, T&&>`. I tipi assegnabili mediante spostamento includono tipi scalari referenziabili e tipi di classe con operatori di assegnazione mediante spostamento generati dal compilatore o definiti dall'utente.

## <a name="is_move_constructible"></a>  is_move_constructible

Verifica se il tipo ha un costruttore di spostamento.

```cpp
template <class T>
struct is_move_constructible;
```

### <a name="parameters"></a>Parametri

T il tipo da valutare

### <a name="remarks"></a>Note

Un predicato di tipo che restituisce true se il tipo `T` può essere costruito con un'operazione di spostamento. Questo predicato è equivalente a `is_constructible<T, T&&>`.

## <a name="is_nothrow_move_assignable"></a>  is_nothrow_move_assignable

Verifica se il tipo ha un operatore **nothrow** di assegnazione di spostamento.

```cpp
template <class Ty>
struct is_nothrow_move_assignable;
```

### <a name="parameters"></a>Parametri

`Ty` Il tipo di query.

### <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo `Ty` è un operatore di assegnazione di spostamento nothrow; in caso contrario, contiene false.

## <a name="is_trivially_copy_assignable"></a>  is_trivially_copy_assignable

Verifica se il tipo ha un operatore di assegnazione di copia semplice.

```cpp
template <class Ty>
struct is_trivially_copy_assignable;
```

### <a name="parameters"></a>Parametri

`T` Il tipo di query.

### <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo `T` è una classe che ha un operatore di assegnazione di copia semplice; in caso contrario, contiene false.

Un costruttore di assegnazione per una classe `T` è semplice se è fornito in modo implicito, la classe `T` non dispone di funzioni virtuali, la classe `T` non dispone di basi virtuali, le classi di tutti i membri di dati non statici di tipo classe dispongono di operatori di assegnazione semplice e le classi di tutti i membri di dati non statici di tipo matrice di classe dispongono di operatori di assegnazione semplice.

## <a name="is_trivially_move_assignable"></a>  is_trivially_move_assignable

Verifica se il tipo ha un operatore di assegnazione di spostamento semplice.

```cpp
template <class Ty>
struct is_trivially_move_assignable;
```

### <a name="parameters"></a>Parametri

`Ty` Il tipo di query.

### <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo `Ty` è una classe che ha un operatore di assegnazione di spostamento semplice; in caso contrario, contiene false.

Un operatore di assegnazione di spostamento per una classe `Ty` è semplice se:

viene fornito in modo implicito

la classe `Ty` non ha funzioni virtuali

la classe `Ty` non ha basi virtuali

le classi di tutti i membri dati non statici del tipo di classe hanno operatori di assegnazione di spostamento semplici

le classi di tutti i membri dati non statici di tipo matrice della classe hanno operatori di assegnazione di spostamento semplici

## <a name="is_trivially_move_constructible"></a>  is_trivially_move_constructible

Verifica se il tipo ha un costruttore di spostamento semplice.

```cpp
template <class Ty>
struct is_trivially_move_constructible;
```

### <a name="parameters"></a>Parametri

`Ty` Il tipo di query.

### <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo `Ty` è una classe che ha un costruttore di spostamento semplice; in caso contrario, contiene false.

Un costruttore di spostamento per una classe `Ty` è piuttosto semplice se:

viene dichiarato in modo implicito

i tipi di parametro sono equivalenti a quelli di una dichiarazione implicita

la classe `Ty` non ha funzioni virtuali

la classe `Ty` non ha basi virtuali

la classe non ha alcun membro dati non statici volatili

tutte le basi dirette della classe `Ty` hanno costruttori di spostamento semplici

le classi di tutti i membri dati non statici del tipo di classe hanno costruttori di spostamento semplici

le classi di tutti i membri dati non statici di tipo matrice della classe hanno costruttori di spostamento semplici

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
