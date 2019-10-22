---
title: '&lt;sstream&gt;'
ms.date: 11/04/2016
f1_keywords:
- <sstream>
helpviewer_keywords:
- sstream header
ms.assetid: 56f55bc5-549d-4e7f-aaad-99e0ffa49c9e
ms.openlocfilehash: 3f1fb202692d09fa87eb775677e46e1c3f36dbad
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72688952"
---
# <a name="ltsstreamgt"></a>&lt;sstream&gt;

Definisce diversi modelli di classe che supportano operazioni iostreams su sequenze archiviate in un oggetto matrice allocato. Queste sequenze vengono facilmente convertite in e da oggetti della classe modello [basic_string](../standard-library/basic-string-class.md).

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

|Parametro|Descrizione|
|---------------|-----------------|
|*left*|Riferimento a un oggetto `sstream`.|
|*right*|Riferimento a un oggetto `sstream`.|

## <a name="remarks"></a>Note

Gli oggetti di tipo `char *` possono usare la funzionalità in [\<strstream>](../standard-library/strstream.md) per lo streaming. Tuttavia, \<strstream > è deprecata e l'utilizzo di \<sstream > è consigliato.

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[istringstream](../standard-library/sstream-typedefs.md#istringstream)|Crea un tipo `basic_istringstream` specializzato in un parametro di modello **char** .|
|[ostringstream](../standard-library/sstream-typedefs.md#ostringstream)|Crea un tipo `basic_ostringstream` specializzato in un parametro di modello **char** .|
|[stringbuf](../standard-library/sstream-typedefs.md#stringbuf)|Crea un tipo `basic_stringbuf` specializzato in un parametro di modello **char** .|
|[stringstream](../standard-library/sstream-typedefs.md#stringstream)|Crea un tipo `basic_stringstream` specializzato in un parametro di modello **char** .|
|[wistringstream](../standard-library/sstream-typedefs.md#wistringstream)|Crea un tipo `basic_istringstream` specializzato in un parametro di modello **wchar_t** .|
|[wostringstream](../standard-library/sstream-typedefs.md#wostringstream)|Crea un tipo `basic_ostringstream` specializzato in un parametro di modello **wchar_t** .|
|[wstringbuf](../standard-library/sstream-typedefs.md#wstringbuf)|Crea un tipo `basic_stringbuf` specializzato in un parametro di modello **wchar_t** .|
|[wstringstream](../standard-library/sstream-typedefs.md#wstringstream)|Crea un tipo `basic_stringstream` specializzato in un parametro di modello **wchar_t** .|

### <a name="manipulators"></a>Manipolatori

|||
|-|-|
|[swap](../standard-library/sstream-functions.md#sstream_swap)|Scambia i valori tra due oggetti `sstream`.|

### <a name="classes"></a>Classi

|Class|Descrizione|
|-|-|
|[basic_stringbuf](../standard-library/basic-stringbuf-class.md)|Descrive un buffer del flusso che controlla la trasmissione di elementi di tipo `Elem`, i cui tratti di carattere sono determinati dalla classe `Tr`, verso e da una sequenza di elementi archiviati in un oggetto matrice.|
|[basic_istringstream](../standard-library/basic-istringstream-class.md)|Descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer di flusso della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md) <**elem**, **TR**, `Alloc` >, con elementi di tipo `Elem`, i cui tratti di carattere sono determinati da la classe `Tr` e i cui elementi sono allocati da un allocatore della classe `Alloc`.|
|[basic_ostringstream](../standard-library/basic-ostringstream-class.md)|Descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer di flusso della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md) <**elem**, **TR**, `Alloc` >, con elementi di tipo `Elem`, i cui tratti di carattere sono determinati dal `Tr` della classe e i cui elementi sono allocati da un allocatore della classe `Alloc`.|
|[basic_stringstream](../standard-library/basic-stringstream-class.md)|Descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati usando un buffer di flusso della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md) <**elem**, **TR**, `Alloc` >, con elementi di tipo `Elem`, i cui tratti di carattere sono determinato dalla classe `Tr` e i cui elementi sono allocati da un allocatore della classe `Alloc`.|

## <a name="requirements"></a>Requisiti

- **Intestazione:** \<sstream>

- **Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\ (Sicurezza dei thread nella libreria standard C++)
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)
