---
title: Classe basic_stringstream
ms.date: 11/04/2016
f1_keywords:
- sstream/std::basic_stringstream
- sstream/std::basic_stringstream::allocator_type
- sstream/std::basic_stringstream::rdbuf
- sstream/std::basic_stringstream::str
helpviewer_keywords:
- std::basic_stringstream [C++]
- std::basic_stringstream [C++], allocator_type
- std::basic_stringstream [C++], rdbuf
- std::basic_stringstream [C++], str
ms.assetid: 49629814-ca37-45c5-931b-4ff894e6ebd2
ms.openlocfilehash: f08689b1080837f042abfb3c4c52bb0ad558a448
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364866"
---
# <a name="basic_stringstream-class"></a>Classe basic_stringstream

Descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e `Alloc` oggetti codificati utilizzando un buffer di flusso della classe basic_stringbuf Classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**>.

## <a name="syntax"></a>Sintassi

```cpp
template <class Elem, class Tr = char_traits<Elem>, class Alloc = allocator<Elem>>
class basic_stringstream : public basic_iostream<Elem, Tr>
```

### <a name="parameters"></a>Parametri

*Alloc*\
Classe Allocator.

*Elem*\
Tipo di elemento di base della stringa.

*Tr*\
Tratti di carattere specializzati sull'elemento di base della stringa.

## <a name="remarks"></a>Osservazioni

Il modello di classe descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti `Elem`codificati utilizzando un buffer `Tr`di flusso della classe `Alloc` [basic_stringbuf,](../standard-library/basic-stringbuf-class.md)< **Elem** **Tr** `Alloc`>, con elementi di tipo , i cui tratti di carattere sono determinati dalla classe e i cui elementi sono allocati da un allocatore di classe . L'oggetto archivia un oggetto della classe basic_stringbuf< **Elem**, **Tr**, `Alloc`>.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_stringstream](#basic_stringstream)|Costruisce un oggetto di tipo `basic_stringstream`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[allocator_type](#allocator_type)|Il tipo è un sinonimo del parametro di modello `Alloc`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[rdbuf](#rdbuf)|Restituisce l'indirizzo del buffer `pointer` del flusso archiviato di tipo [da basic_stringbuf](../standard-library/basic-stringbuf-class.md)< `Elem`, `Tr`, `Alloc`>.|
|[Str](#str)|Imposta o recupera il testo in un buffer di stringa senza modificare la posizione di scrittura.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<sstream>

**Spazio dei nomi:** std

## <a name="basic_stringstreamallocator_type"></a><a name="allocator_type"></a>basic_stringstream::allocator_type

Il tipo è un sinonimo del parametro di modello `Alloc`.

```cpp
typedef Alloc allocator_type;
```

## <a name="basic_stringstreambasic_stringstream"></a><a name="basic_stringstream"></a>basic_stringstream::basic_stringstream

Costruisce un oggetto di tipo `basic_stringstream`.

```cpp
explicit basic_stringstream(ios_base::openmode _Mode = ios_base::in | ios_base::out);

explicit basic_stringstream(const basic_string<Elem, Tr, Alloc>& str, ios_base::openmode _Mode = ios_base::in | ios_base::out);
```

### <a name="parameters"></a>Parametri

*_Mode*\
Una delle enumerazioni in [ios_base::openmode](../standard-library/ios-base-class.md#openmode).

*Str*\
Oggetto di tipo `basic_string`.

### <a name="remarks"></a>Osservazioni

Il primo costruttore inizializza la classe base chiamando `sb` [basic_iostream](../standard-library/basic-iostream-class.md)( **sb**), dove è `Alloc` l'oggetto archiviato della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**,> . Viene inoltre `sb` inizializzato chiamando basic_stringbuf< **Elem**, **Tr**, `Alloc`>( `_Mode`).

Il secondo costruttore inizializza la classe base chiamando basic_iostream( **sb**). Viene inoltre `sb` inizializzato chiamando basic_stringbuf< **Elem**, `_Mode` **Tr**, `Alloc`>( _ *Str*, ).

## <a name="basic_stringstreamrdbuf"></a><a name="rdbuf"></a>basic_stringstream::rdbuf

Restituisce l'indirizzo del buffer di flusso archiviato di tipo **pointer** in [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>.

```cpp
basic_stringbuf<Elem, Tr, Alloc> *rdbuf() const;
```

### <a name="return-value"></a>Valore restituito

L'indirizzo del buffer di `pointer` flusso memorizzato di tipo `Alloc` da basic_stringbuf< **Elem**, **Tr**,>.

### <a name="example"></a>Esempio

Vedere [basic_filebuf::close](../standard-library/basic-filebuf-class.md#close) per un esempio di utilizzo di `rdbuf`.

## <a name="basic_stringstreamstr"></a><a name="str"></a>basic_stringstream::str

Imposta o recupera il testo in un buffer di stringa senza modificare la posizione di scrittura.

```cpp
basic_string<Elem, Tr, Alloc> str() const;

void str(
    const basic_string<Elem, Tr, Alloc>& _Newstr);
```

### <a name="parameters"></a>Parametri

*_Newstr*\
La nuova stringa.

### <a name="return-value"></a>Valore restituito

Restituisce un [basic_string](../standard-library/basic-string-class.md)< oggetto della classe basic_string `Alloc` **Elem**, **Tr**>, la cui sequenza controllata è una copia della sequenza controllata da ** \*this**.

### <a name="remarks"></a>Osservazioni

La prima funzione membro restituisce [rdbuf](#rdbuf) -> [str](../standard-library/basic-stringbuf-class.md#str). La seconda funzione `rdbuf`  -> membro `_Newstr`chiama **str**( ).

### <a name="example"></a>Esempio

Vedere [basic_stringbuf::str](../standard-library/basic-stringbuf-class.md#str) per un `str`esempio che utilizza .

## <a name="see-also"></a>Vedere anche

[Sicurezza dei filettatura nella libreria standard di C](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione iostream](../standard-library/iostream-programming.md)\
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)
