---
title: Classe Platform::Box
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Box
ms.assetid: b3d7ea37-e98a-4fbc-80b0-ad35e50250c6
ms.openlocfilehash: 7484bcda3f05a8a9e56a33222d0630d4597e1219
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81354751"
---
# <a name="platformbox-class"></a>Classe Platform::Box

Consente un tipo valore, ad esempio `Windows::Foundation::DateTime` o un tipo scalare, ad esempio `int` da archiviare in un tipo `Platform::Object` . In genere non è necessario usare `Box` in modo esplicito perché la conversione boxing avviene in modo implicito quando si esegue il cast di un tipo valore `Object^`.

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
|[operatore&lt;Box const T&gt;^](#box-const-t) | Consente conversioni boxing da una classe di valori `const``T` o da una classe `enum``T` a `Box<T>`. |
|[operatore&lt;Box const volatile T&gt;^](#box-const-volatile-t) | Abilita le conversioni boxing dal tipo `const volatile` o `T` della classe di valori `enum``T` in `Box<T>`. |
|[operatore&lt;Scatola T&gt;^](#box-t) | Consente conversioni boxing da una classe di valori `T` a `Box<T>`. |
|[operatore&lt;Scatola volatile T&gt;^](#box-volatile-t) | Abilita le conversioni boxing dal tipo `volatile` o `T` della classe di valori `enum``T` in `Box<T>`. |
|[Scatola::operatore T](#t) | Consente le conversioni boxing da una classe di valori `T` o da una classe `enum``T` in `Box<T>`. |
|[Proprietà Value](#value) | Restituisce il valore incapsulato nell'oggetto `Box`. |

## <a name="boxbox-constructor"></a><a name="ctor"></a>Costruttore Box::Box

Crea un oggetto `Box` che può incapsulare un valore del tipo specificato.

### <a name="syntax"></a>Sintassi

```cpp
Box(T valueArg);
```

### <a name="parameters"></a>Parametri

*valueArg (valoreArg)*<br/>
Il tipo di valore boxed, ad esempio, `int`, `bool`, `float64`, `DateTime`.

## <a name="boxoperator-boxltconst-tgt-operator"></a><a name="box-const-t"></a>Box::operator&lt;Box const T&gt;- Operatore

Consente conversioni boxing da una classe di valori `const``T` o da una classe `enum``T` a `Box<T>`.

### <a name="syntax"></a>Sintassi

```cpp
operator Box<const T>^(const T valueType);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Qualsiasi classe di valore, struct di valore o tipo enum. Include i tipi incorporati nello [spazio dei nomi predefinito.](../cppcx/default-namespace.md)

### <a name="return-value"></a>Valore restituito

Istanza `Platform::Box<T>^` che rappresenta il valore originale boxed in una classe di riferimento.

## <a name="boxoperator-boxltconst-volatile-tgt-operator"></a><a name="box-const-volatile-t"></a>Box::operator&lt;Box const&gt;volatile T : Operatore

Abilita le conversioni boxing dal tipo `const volatile` o `T` della classe di valori `enum``T` in `Box<T>`.

### <a name="syntax"></a>Sintassi

```cpp
operator Box<const volatile T>^(const volatile T valueType);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Qualsiasi tipo enum, classe di valori o struct di valori. Include i tipi incorporati nello [spazio dei nomi predefinito.](../cppcx/default-namespace.md)

### <a name="return-value"></a>Valore restituito

Istanza `Platform::Box<T>^` che rappresenta il valore originale boxed in una classe di riferimento.

## <a name="boxoperator-boxlttgt-operator"></a><a name="box-t"></a>Box::operator&lt;Box&gt;T - Operatore

Consente conversioni boxing da una classe di valori `T` a `Box<T>`.

### <a name="syntax"></a>Sintassi

```cpp
operator Box<const T>^(const T valueType);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Qualsiasi tipo enum, classe di valori o struct di valori. Include i tipi incorporati nello [spazio dei nomi predefinito.](../cppcx/default-namespace.md)

### <a name="return-value"></a>Valore restituito

Istanza `Platform::Box<T>^` che rappresenta il valore originale boxed in una classe di riferimento.

## <a name="boxoperator-boxltvolatile-tgt-operator"></a><a name="box-volatile-t"></a>Box::operator&lt;Box&gt;volatile T : Operatore

Abilita le conversioni boxing dal tipo `volatile` o `T` della classe di valori `enum``T` in `Box<T>`.

### <a name="syntax"></a>Sintassi

```cpp
operator Box<volatile T>^(volatile T valueType);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Qualsiasi tipo enum, classe di valori o struct di valori. Include i tipi incorporati nello [spazio dei nomi predefinito.](../cppcx/default-namespace.md)

### <a name="return-value"></a>Valore restituito

Istanza `Platform::Box<T>^` che rappresenta il valore originale boxed in una classe di riferimento.

## <a name="boxoperator-t-operator"></a><a name="t"></a>Box::operator Eoperatore T Operatore

Consente le conversioni boxing da una classe di valori `T` o da una classe `enum``T` in `Box<T>`.

### <a name="syntax"></a>Sintassi

```cpp
operator Box<T>^(T valueType);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Qualsiasi tipo enum, classe di valori o struct di valori. Include i tipi incorporati nello [spazio dei nomi predefinito.](../cppcx/default-namespace.md)

### <a name="return-value"></a>Valore restituito

Istanza `Platform::Box<T>^` che rappresenta il valore originale boxed in una classe di riferimento.

## <a name="boxvalue-property"></a><a name="value"></a>Box::Value Proprietà

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
[Conversione boxing](../cppcx/boxing-c-cx.md)
