---
title: Operatori &lt;ostream&gt;
ms.date: 11/04/2016
f1_keywords:
- ostream/std::operator&lt;&lt;
ms.assetid: 9282a62e-a3d1-4371-a284-fbc9515bb9a2
ms.openlocfilehash: 3851003500d37a11a88736cf611b69a2d6b1813c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228154"
---
# <a name="ltostreamgt-operators"></a>Operatori &lt;ostream&gt;

||
|-|
|[operatore&lt;&lt;](#op_lt_lt)|

## <a name="operatorltlt"></a><a name="op_lt_lt"></a>operatore&lt;&lt;

Scrive vari tipi nel flusso.

```cpp
template <class _Elem, class _Tr>
basic_ostream<_Elem, _Tr>& operator<<(
    basic_ostream<_Elem, _Tr>& _Ostr,
    const Elem* str);

template <class _Elem, class _Tr>
basic_ostream<_Elem, _Tr>& operator<<(
    basic_ostream<_Elem, _Tr>& _Ostr,
    Elem _Ch);

template <class _Elem, class _Tr>
basic_ostream<_Elem, _Tr>& operator<<(
    basic_ostream<_Elem, _Tr>& _Ostr,
    const char* str);

template <class _Elem, class _Tr>
basic_ostream<_Elem, _Tr>& operator<<(
    basic_ostream<_Elem, _Tr>& _Ostr,
    char _Ch);

template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    const char* str);

template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _ostr,
    char _Ch);

template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    const signed char* str);

template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    signed char _Ch);

template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    const unsigned char* str);

template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    unsigned char _Ch);

template <class _Elem, class _Tr, class T>
basic_ostream <_Elem, _Tr>& operator<<(
    basic_ostream<_Elem, _Tr>&& _Ostr,
    Ty val);
```

### <a name="parameters"></a>Parametri

*_Ch*\
Carattere.

*_Elem*\
Tipo dell'elemento.

*_Ostr*\
Un oggetto `basic_ostream`.

*Str*\
Stringa di caratteri.

*_Tr*\
Tratti di carattere.

*Val*\
Tipo

### <a name="return-value"></a>Valore restituito

Flusso.

### <a name="remarks"></a>Osservazioni

La classe `basic_ostream` definisce inoltre diversi operatori di inserimento. Per ulteriori informazioni, vedere [basic_ostream:: operator &lt; &lt; ](../standard-library/basic-ostream-class.md#basic_ostream_operator_lt_lt).

La funzione modello

```cpp
template <class _Elem, class _Tr>
basic_ostream<Elem, _Tr>& operator<<(
    basic_ostream<Elem, _Tr>& _ostr,
    const Elem *str);
```

determina la lunghezza N = `traits_type::` [length](../standard-library/char-traits-struct.md#length)( `str` ) della sequenza che inizia con *STR*e inserisce la sequenza. Se N < `_Ostr.`[width](../standard-library/ios-base-class.md#width), la funzione inserisce anche una ripetizione di caratteri di riempimento `_Ostr.width` - N. La ripetizione precede la sequenza se ( `_Ostr` . [flags](../standard-library/ios-base-class.md#flags)  &  flag `adjustfield` ! = [Left](../standard-library/ios-functions.md#left). In caso contrario, la ripetizione segue la sequenza. La funzione restituisce *_Ostr*.

La funzione modello

```cpp
template <class _Elem, class _Tr>
basic_ostream<Elem, _Tr>& operator<<(
    basic_ostream<Elem, _Tr>& _Ostr,
    Elem _Ch);
```

inserisce l'elemento `_Ch`. Se 1 < `_Ostr.width`, la funzione inserisce anche una ripetizione di caratteri di riempimento `_Ostr.width` - 1. La ripetizione precede la sequenza se `_Ostr.flags & adjustfield != left`. In caso contrario, la ripetizione segue la sequenza. Restituisce *_Ostr*.

La funzione modello

```cpp
template <class _Elem, class _Tr>
basic_ostream<Elem, _Tr>& operator<<(
    basic_ostream<Elem, _Tr>& _Ostr,
    const char *str);
```

si comporta allo stesso modo di

```cpp
template <class _Elem, class _Tr>
basic_ostream<Elem, _Tr>& operator<<(
    basic_ostream<Elem, _Tr>& _Ostr,
    const Elem *str);
```

ad eccezione del fatto che ogni elemento *_Ch* della sequenza a partire da *Str* viene convertito in un oggetto di tipo chiamando `Elem` `_Ostr.` [put](../standard-library/basic-ostream-class.md#put)( `_Ostr.` [Widen](../standard-library/basic-ios-class.md#widen)( `_Ch` )).

La funzione modello

```cpp
template <class _Elem, class _Tr>
basic_ostream<Elem, _Tr>& operator<<(
    basic_ostream<Elem, _Tr>& _Ostr,
    char _Ch);
```

si comporta allo stesso modo di

```cpp
template <class _Elem, class _Tr>
basic_ostream<Elem, _Tr>& operator<<(
    basic_ostream<Elem, _Tr>& _Ostr,
    Elem _Ch);
```

ad eccezione del fatto che *_Ch* viene convertito in un oggetto di tipo chiamando `Elem` `_Ostr.put( _Ostr.widen( _Ch ))` .

La funzione modello

```cpp
template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    const char *str);
```

si comporta allo stesso modo di

```cpp
template <class _Elem, class _Tr>
basic_ostream<Elem, _Tr>& operator<<(
    basic_ostream<Elem, _Tr>& _Ostr,
    const Elem *str);
```

Non è necessario espandere gli elementi prima di inserirli.

La funzione modello

```cpp
template <class _Tr>
basic_ostream<char, Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    char _Ch);
```

si comporta allo stesso modo di

```cpp
template <class _Elem, class _Tr>
basic_ostream<Elem, _Tr>& operator<<(
    basic_ostream<Elem, _Tr>& _Ostr,
    Elem _Ch);
```

Non è necessario ampliare *_Ch* prima di inserirlo.

La funzione modello

```cpp
template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    const signed char *str);
```

Restituisce `_Ostr << (const char *)str`.

La funzione modello

```cpp
template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    signed char _Ch);
```

Restituisce `_Ostr << (char)_Ch`.

La funzione modello:

```cpp
template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    const unsigned char *str);
```

Restituisce `_Ostr << (const char *)str`.

La funzione modello:

```cpp
template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    unsigned char _Ch);
```

Restituisce `_Ostr << (char)_Ch`.

La funzione modello:

```cpp
template <class _Elem, class _Tr, class T>
basic_ostream<_Elem, _Tr>& operator<<(
    basic_ostream<char, _Tr>&& _Ostr,
    T val);
```

restituisce `_Ostr << val` e converte un [riferimento RValue](../cpp/rvalue-reference-declarator-amp-amp.md) in `_Ostr` in un oggetto lvalue nel processo.

### <a name="example"></a>Esempio

Vedere [flush](../standard-library/ostream-functions.md#flush) per indicazioni su come usare `operator<<`.

## <a name="see-also"></a>Vedere anche

[\<ostream>](../standard-library/ostream.md)
