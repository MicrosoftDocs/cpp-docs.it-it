---
description: 'Altre informazioni su: &lt; sstream&gt;'
title: '&lt;sstream&gt;'
ms.date: 11/04/2016
f1_keywords:
- <sstream>
helpviewer_keywords:
- sstream header
ms.assetid: 56f55bc5-549d-4e7f-aaad-99e0ffa49c9e
ms.openlocfilehash: 5f0c5307073c2296f20df0adb663bce9b4b97d59
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97169099"
---
# <a name="ltsstreamgt"></a>&lt;sstream&gt;

Definisce diversi modelli di classe che supportano operazioni iostreams su sequenze archiviate in un oggetto matrice allocato. Queste sequenze vengono facilmente convertite in e da oggetti di modello di classe [basic_string](../standard-library/basic-string-class.md).

## <a name="syntax"></a>Sintassi

```cpp
namespace std {
template <class CharType, class Traits = char_traits<CharType>, class Allocator = allocator<CharType>>
class basic_stringbuf;
typedef basic_stringbuf<char>
stringbuf;
typedef basic_stringbuf<wchar_t> wstringbuf;

template <class CharType, class Traits = char_traits<CharType>, class Allocator = allocator<CharType>>
class basic_istringstream;
typedef basic_istringstream<char>
istringstream;
typedef basic_istringstream<wchar_t> wistringstream;

template <class CharType, class Traits = char_traits<CharType>, class Allocator = allocator<CharType>>
class basic_ostringstream;
typedef basic_ostringstream<char>
ostringstream;
typedef basic_ostringstream<wchar_t> wostringstream;

template <class CharType, class Traits = char_traits<CharType>, class Allocator = allocator<CharType>>
class basic_stringstream;
typedef basic_stringstream<char>
stringstream;
typedef basic_stringstream<wchar_t> wstringstream;
// TEMPLATE FUNCTIONS
template <class CharType, class Traits, class Allocator>
void swap(
    basic_stringbuf<CharType, Traits, Allocator>& left,
    basic_stringbuf<CharType, Traits, Allocator>& right);

template <class CharType, class Traits, class Allocator>
void swap(
    basic_istringstream<CharType, Traits, Allocator>& left,
    basic_istringstream<CharType, Traits, Allocator>& right);

template <class CharType, class Traits, class Allocator>
void swap(
    basic_ostringstream<CharType, Traits, Allocator>& left,
    basic_ostringstream<CharType, Traits, Allocator>& right);

template <class CharType, class Traits, class Allocator>
void swap (
    basic_stringstream<CharType, Traits, Allocator>& left,
    basic_stringstream<CharType, Traits, Allocator>& right);

}  // namespace std
```

### <a name="parameters"></a>Parametri

*sinistra*\
Riferimento a un oggetto `sstream`.

*Ok*\
Riferimento a un oggetto `sstream`.

## <a name="remarks"></a>Commenti

Gli oggetti di tipo `char *` possono usare la funzionalità in [\<strstream>](../standard-library/strstream.md) per il flusso. Tuttavia, \<strstream> è deprecato ed è preferibile l'uso di \<sstream>.

### <a name="typedefs"></a>Typedef

|Nome tipo|Description|
|-|-|
|[istringstream](../standard-library/sstream-typedefs.md#istringstream)|Crea un tipo `basic_istringstream` specializzato in un **`char`** parametro di modello.|
|[ostringstream](../standard-library/sstream-typedefs.md#ostringstream)|Crea un tipo `basic_ostringstream` specializzato in un **`char`** parametro di modello.|
|[stringbuf](../standard-library/sstream-typedefs.md#stringbuf)|Crea un tipo `basic_stringbuf` specializzato in un **`char`** parametro di modello.|
|[stringstream](../standard-library/sstream-typedefs.md#stringstream)|Crea un tipo `basic_stringstream` specializzato in un **`char`** parametro di modello.|
|[wistringstream](../standard-library/sstream-typedefs.md#wistringstream)|Crea un tipo `basic_istringstream` specializzato in un **`wchar_t`** parametro di modello.|
|[wostringstream](../standard-library/sstream-typedefs.md#wostringstream)|Crea un tipo `basic_ostringstream` specializzato in un **`wchar_t`** parametro di modello.|
|[wstringbuf](../standard-library/sstream-typedefs.md#wstringbuf)|Crea un tipo `basic_stringbuf` specializzato in un **`wchar_t`** parametro di modello.|
|[wstringstream](../standard-library/sstream-typedefs.md#wstringstream)|Crea un tipo `basic_stringstream` specializzato in un **`wchar_t`** parametro di modello.|

### <a name="manipulators"></a>Manipolatori

|Nome|Description|
|-|-|
|[scambio](../standard-library/sstream-functions.md#sstream_swap)|Scambia i valori tra due oggetti `sstream`.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[basic_stringbuf](../standard-library/basic-stringbuf-class.md)|Descrive un buffer del flusso che controlla la trasmissione di elementi di tipo `Elem`, i cui tratti di carattere sono determinati dalla classe `Tr`, verso e da una sequenza di elementi archiviati in un oggetto matrice.|
|[basic_istringstream](../standard-library/basic-istringstream-class.md)|Descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer del flusso della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md) < **elem**, **TR**, `Alloc`>, con elementi di tipo `Elem` , i cui tratti di carattere sono determinati dalla classe `Tr` e i cui elementi sono allocati da un allocatore della classe `Alloc` .|
|[basic_ostringstream](../standard-library/basic-ostringstream-class.md)|Descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer di flusso della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md) < **elem**, **TR**, `Alloc`>, con elementi di tipo `Elem` , i cui tratti di carattere sono determinati dalla classe `Tr` e i cui elementi sono allocati da un allocatore della classe `Alloc` .|
|[basic_stringstream](../standard-library/basic-stringstream-class.md)|Descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati usando un buffer di flusso della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md) < **elem**, **TR**, `Alloc`>, con elementi di tipo `Elem` , i cui tratti di carattere sono determinati dalla classe `Tr` e i cui elementi sono allocati da un allocatore della classe `Alloc` .|

## <a name="requirements"></a>Requisiti

- **Intestazione:**\<sstream>

- **Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[convenzioni di iostreams](../standard-library/iostreams-conventions.md)
