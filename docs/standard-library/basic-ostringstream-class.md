---
title: Classe basic_ostringstream
ms.date: 11/04/2016
f1_keywords:
- sstream/std::basic_ostringstream
- sstream/std::basic_ostringstream::allocator_type
- sstream/std::basic_ostringstream::rdbuf
- sstream/std::basic_ostringstream::str
helpviewer_keywords:
- std::basic_ostringstream [C++]
- std::basic_ostringstream [C++], allocator_type
- std::basic_ostringstream [C++], rdbuf
- std::basic_ostringstream [C++], str
ms.assetid: aea699f7-350f-432a-acca-adbae7b483fb
ms.openlocfilehash: 9e10474d3e4fb2a37e8ab52f77495758c37e8a5b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376772"
---
# <a name="basic_ostringstream-class"></a>Classe basic_ostringstream

Descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati `Alloc` in un buffer di flusso della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**> .

## <a name="syntax"></a>Sintassi

```cpp
template <class Elem, class Tr = char_traits<Elem>, class Alloc = allocator<Elem>>
class basic_ostringstream : public basic_ostream<Elem, Tr>
```

### <a name="parameters"></a>Parametri

*Alloc*\
Classe Allocator.

*Elem*\
Tipo di elemento di base della stringa.

*Tr*\
Tratti di carattere specializzati sull'elemento di base della stringa.

## <a name="remarks"></a>Osservazioni

La classe descrive un oggetto che controlla l'inserimento di elementi `Elem`e oggetti codificati in un `Tr`buffer del flusso, con elementi `Alloc`di tipo , i cui tratti di carattere sono determinati dalla classe e i cui elementi sono allocati da un allocatore di classe . L'oggetto archivia un oggetto della classe basic_stringbuf< **Elem**, **Tr**, `Alloc`>.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_ostringstream](#basic_ostringstream)|Costruisce un oggetto di tipo `basic_ostringstream`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[allocator_type](#allocator_type)|Il tipo è un sinonimo del parametro di modello *Alloc*.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[rdbuf](#rdbuf)|Restituisce l'indirizzo del buffer `pointer` del flusso archiviato di tipo [da basic_stringbuf](../standard-library/basic-stringbuf-class.md)< `Elem`, `Tr`, `Alloc`>.|
|[Str](#str)|Imposta o recupera il testo in un buffer di stringa senza modificare la posizione di scrittura.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<sstream>

**Spazio dei nomi:** std

## <a name="basic_ostringstreamallocator_type"></a><a name="allocator_type"></a>basic_ostringstream::allocator_type

Il tipo è un sinonimo del parametro di modello *Alloc*.

```cpp
typedef Alloc allocator_type;
```

## <a name="basic_ostringstreambasic_ostringstream"></a><a name="basic_ostringstream"></a>basic_ostringstream::basic_ostringstream

Costruisce un oggetto di tipo basic_ostringstream.

```cpp
explicit basic_ostringstream(ios_base::openmode _Mode = ios_base::out);

explicit basic_ostringstream(const basic_string<Elem, Tr, Alloc>& str, ios_base::openmode _Mode = ios_base::out);
```

### <a name="parameters"></a>Parametri

*_Mode*\
Una delle enumerazioni in [ios_base::openmode](../standard-library/ios-base-class.md#openmode).

*Str*\
Oggetto di tipo `basic_string`.

### <a name="remarks"></a>Osservazioni

Il primo costruttore inizializza la classe base chiamando `sb` [basic_ostream](../standard-library/basic-ostream-class.md)( **sb**), dove è `Alloc` l'oggetto archiviato della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**>. Inizializza anche **sb** chiamando basic_stringbuf< **Elem**, **Tr**, `Alloc`>( `_Mode` &#124; `ios_base::out`).

Il secondo costruttore inizializza la classe base chiamando basic_ostream( **sb**). Viene inoltre `sb` inizializzato chiamando basic_stringbuf< **Elem**, `_Mode` **Tr** `Alloc` ,>(_ *Str*, &#124; `ios_base::out`).

## <a name="basic_ostringstreamrdbuf"></a><a name="rdbuf"></a>basic_ostringstream::rdbuf

Restituisce l'indirizzo del buffer `pointer` di flusso archiviato `Alloc` di tipo per [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**,>.

```cpp
basic_stringbuf<Elem, Tr, Alloc> *rdbuf() const;
```

### <a name="return-value"></a>Valore restituito

L'indirizzo del buffer del `pointer` flusso archiviato, di tipo `Alloc` per basic_stringbuf< **Elem**, **Tr**,>.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce l'indirizzo `pointer` del buffer del flusso archiviato di tipo a basic_stringbuf< **Elem**, **Tr**, `Alloc`>.

### <a name="example"></a>Esempio

Vedere [basic_filebuf::close](../standard-library/basic-filebuf-class.md#close) per un esempio di utilizzo di `rdbuf`.

## <a name="basic_ostringstreamstr"></a><a name="str"></a>basic_ostringstream::str

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
