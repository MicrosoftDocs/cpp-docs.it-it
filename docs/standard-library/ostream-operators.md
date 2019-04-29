---
title: Operatori &lt;ostream&gt;
ms.date: 11/04/2016
f1_keywords:
- ostream/std::operator&lt;&lt;
ms.assetid: 9282a62e-a3d1-4371-a284-fbc9515bb9a2
ms.openlocfilehash: ee1a9a6829dbef13b034300d696c43ddba48d9d1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62370950"
---
# <a name="ltostreamgt-operators"></a>Operatori &lt;ostream&gt;

||
|-|
|[operator&lt;&lt;](#op_lt_lt)|

## <a name="op_lt_lt"></a>  operator&lt;&lt;

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

*_Ch*<br/>
Carattere.

*_Elem*<br/>
Tipo dell'elemento.

*_Ostr*<br/>
Oggetto `basic_ostream`.

*str*<br/>
Stringa di caratteri.

*_Tr*<br/>
Tratti di carattere.

*val*<br/>
Tipo

### <a name="return-value"></a>Valore restituito

Flusso.

### <a name="remarks"></a>Note

La classe `basic_ostream` definisce inoltre diversi operatori di inserimento. Per altre informazioni, vedere [basic_ostream::operator&lt;&lt;](../standard-library/basic-ostream-class.md#basic_ostream_operator_lt_lt).

La funzione modello

```cpp
template <class _Elem, class _Tr>
basic_ostream<Elem, _Tr>& operator<<(
    basic_ostream<Elem, _Tr>& _ostr,
    const Elem *str);
```

Determina la lunghezza N = `traits_type::` [lunghezza](../standard-library/char-traits-struct.md#length)(`str`) della sequenza che inizia da *str*e inserisce la sequenza. Se N < `_Ostr.`[width](../standard-library/ios-base-class.md#width), la funzione inserisce anche una ripetizione di caratteri di riempimento `_Ostr.width` - N. La ripetizione precede la sequenza se (`_Ostr`. [flags](../standard-library/ios-base-class.md#flags) & `adjustfield` != [left](../standard-library/ios-functions.md#left). In caso contrario, la ripetizione segue la sequenza. La funzione restituisce *_Ostr*.

La funzione modello

```cpp
template <class _Elem, class _Tr>
basic_ostream<Elem, _Tr>& operator<<(
    basic_ostream<Elem, _Tr>& _Ostr,
    Elem _Ch);
```

inserisce l'elemento `_Ch`. Se 1 < `_Ostr.width`, la funzione inserisce anche una ripetizione di caratteri di riempimento `_Ostr.width` - 1. La ripetizione precede la sequenza se `_Ostr.flags & adjustfield != left`. In caso contrario, la ripetizione segue la sequenza. Viene restituito *_Ostr*.

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

ad eccezione del fatto che ogni elemento *CH* della sequenza che inizia da *str* viene convertito in un oggetto di tipo `Elem` chiamando `_Ostr.` [put](../standard-library/basic-ostream-class.md#put)(`_Ostr.` [widen](../standard-library/basic-ios-class.md#widen)(`_Ch`)).

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

con la differenza che *CH* viene convertito in un oggetto di tipo `Elem` chiamando `_Ostr.put`( `_Ostr.widen`( `_Ch`)).

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

(Che è necessario ampliare *CH* prima di inserirlo.)

La funzione modello

```cpp
template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    const signed char *str);
```

Restituisce `_Ostr` << (`const char *`) `str`.

La funzione modello

```cpp
template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    signed char _Ch);
```

Restituisce `_Ostr` << (`char`) `_Ch`.

La funzione modello:

```cpp
template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    const unsigned char *str);
```

Restituisce `_Ostr` << (`const char *`) `str`.

La funzione modello:

```cpp
template <class _Tr>
basic_ostream<char, _Tr>& operator<<(
    basic_ostream<char, _Tr>& _Ostr,
    unsigned char _Ch);
```

Restituisce `_Ostr` << (`char`) `_Ch`.

La funzione modello:

```cpp
template <class _Elem, class _Tr, class T>
basic_ostream<_Elem, _Tr>& operator<<(
    basic_ostream<char, _Tr>&& _Ostr,
    T val);
```

restituisce `_Ostr` `<<` `val` e converte un [riferimento RValue](../cpp/rvalue-reference-declarator-amp-amp.md) in `_Ostr` in un oggetto lvalue nel processo.

### <a name="example"></a>Esempio

Vedere [flush](../standard-library/ostream-functions.md#flush) per indicazioni su come usare `operator<<`.

## <a name="see-also"></a>Vedere anche

[\<ostream>](../standard-library/ostream.md)<br/>
