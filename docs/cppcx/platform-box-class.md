---
title: Classe Platform::Box
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Box
ms.assetid: b3d7ea37-e98a-4fbc-80b0-ad35e50250c6
ms.openlocfilehash: 6afc12dbc3f6980bb7fd42d7f0a8fdc9e6d0e284
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232170"
---
# <a name="platformbox-class"></a>Classe Platform::Box

Abilita un tipo di valore, ad esempio `Windows::Foundation::DateTime` o un tipo scalare, ad esempio, **`int`** da archiviare in un `Platform::Object` tipo. In genere non è necessario usare `Box` in modo esplicito perché la conversione boxing avviene in modo implicito quando si esegue il cast di un tipo valore `Object^`.

### <a name="syntax"></a>Sintassi

```cpp
ref class Box abstract;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** vccorlib.h

**Spazio dei nomi:** Platform

### <a name="members"></a>Membri

|Membro|Descrizione|
|------------|-----------------|
|[Box](#ctor) | Crea un oggetto `Box` che può incapsulare un valore del tipo specificato. |
|[Operatore Box &lt; const T&gt;^](#box-const-t) | Consente le conversioni boxing da una classe **`const`** `T` di valori o da una **`enum`** classe `T` a `Box<T>` . |
|[Operatore Box &lt; const volatile T&gt;^](#box-const-volatile-t) | Consente le conversioni boxing da una **`const volatile`** classe `T` di valori o **`enum`** da un tipo `T` a `Box<T>` . |
|[Casella operatore &lt; T&gt;^](#box-t) | Consente conversioni boxing da una classe di valori `T` a `Box<T>`. |
|[operatore &lt; T volatile box&gt;^](#box-volatile-t) | Consente le conversioni boxing da una **`volatile`** classe `T` di valori o **`enum`** da un tipo `T` a `Box<T>` . |
|[Operatore Box:: T](#t) | Consente le conversioni boxing da una classe `T` di valori o **`enum`** da una classe `T` a `Box<T>` . |
|[Proprietà Value](#value) | Restituisce il valore incapsulato nell'oggetto `Box`. |

## <a name="boxbox-constructor"></a><a name="ctor"></a>Costruttore box:: box

Crea un oggetto `Box` che può incapsulare un valore del tipo specificato.

### <a name="syntax"></a>Sintassi

```cpp
Box(T valueArg);
```

### <a name="parameters"></a>Parametri

*valueArg*<br/>
Tipo di valore da boxed, ad esempio,,, **`int`** **`bool`** `float64` `DateTime` .

## <a name="boxoperator-boxltconst-tgt-operator"></a><a name="box-const-t"></a>Operatore Box:: operator Box &lt; const T &gt; ^

Consente le conversioni boxing da una classe **`const`** `T` di valori o da una **`enum`** classe `T` a `Box<T>` .

### <a name="syntax"></a>Sintassi

```cpp
operator Box<const T>^(const T valueType);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Qualsiasi classe di valore, struct di valore o tipo enum. Include i tipi incorporati nello [spazio dei nomi predefinito](../cppcx/default-namespace.md).

### <a name="return-value"></a>Valore restituito

`Platform::Box<T>^`Istanza che rappresenta il valore originale boxed in una classe di riferimento.

## <a name="boxoperator-boxltconst-volatile-tgt-operator"></a><a name="box-const-volatile-t"></a>Operatore Box:: operator Box &lt; const volatile T &gt; ^

Consente le conversioni boxing da una **`const volatile`** classe `T` di valori o **`enum`** da un tipo `T` a `Box<T>` .

### <a name="syntax"></a>Sintassi

```cpp
operator Box<const volatile T>^(const volatile T valueType);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Qualsiasi tipo enum, classe di valori o struct di valori. Include i tipi incorporati nello [spazio dei nomi predefinito](../cppcx/default-namespace.md).

### <a name="return-value"></a>Valore restituito

`Platform::Box<T>^`Istanza che rappresenta il valore originale boxed in una classe di riferimento.

## <a name="boxoperator-boxlttgt-operator"></a><a name="box-t"></a>Operatore Box:: operator Box &lt; T &gt; ^

Consente conversioni boxing da una classe di valori `T` a `Box<T>`.

### <a name="syntax"></a>Sintassi

```cpp
operator Box<const T>^(const T valueType);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Qualsiasi tipo enum, classe di valori o struct di valori. Include i tipi incorporati nello [spazio dei nomi predefinito](../cppcx/default-namespace.md).

### <a name="return-value"></a>Valore restituito

`Platform::Box<T>^`Istanza che rappresenta il valore originale boxed in una classe di riferimento.

## <a name="boxoperator-boxltvolatile-tgt-operator"></a><a name="box-volatile-t"></a>Operatore Box:: operator Box &lt; volatile T &gt; ^

Consente le conversioni boxing da una **`volatile`** classe `T` di valori o **`enum`** da un tipo `T` a `Box<T>` .

### <a name="syntax"></a>Sintassi

```cpp
operator Box<volatile T>^(volatile T valueType);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Qualsiasi tipo enum, classe di valori o struct di valori. Include i tipi incorporati nello [spazio dei nomi predefinito](../cppcx/default-namespace.md).

### <a name="return-value"></a>Valore restituito

`Platform::Box<T>^`Istanza che rappresenta il valore originale boxed in una classe di riferimento.

## <a name="boxoperator-t-operator"></a><a name="t"></a>Operatore Box:: operator T

Consente le conversioni boxing da una classe `T` di valori o **`enum`** da una classe `T` a `Box<T>` .

### <a name="syntax"></a>Sintassi

```cpp
operator Box<T>^(T valueType);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Qualsiasi tipo enum, classe di valori o struct di valori. Include i tipi incorporati nello [spazio dei nomi predefinito](../cppcx/default-namespace.md).

### <a name="return-value"></a>Valore restituito

`Platform::Box<T>^`Istanza che rappresenta il valore originale boxed in una classe di riferimento.

## <a name="boxvalue-property"></a><a name="value"></a>Proprietà box:: value

Restituisce il valore incapsulato nell'oggetto `Box`.

### <a name="syntax"></a>Sintassi

```cpp
virtual property T Value{
   T get();
}
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore boxed con lo stesso tipo presente in origine prima di essere sottoposto a boxing.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)<br/>
[Boxing](../cppcx/boxing-c-cx.md)
