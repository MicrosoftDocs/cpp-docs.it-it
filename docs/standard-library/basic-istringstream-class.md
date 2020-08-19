---
title: Classe basic_istringstream
ms.date: 11/04/2016
f1_keywords:
- sstream/std::basic_istringstream
- sstream/std::basic_istringstream::allocator_type
- sstream/std::basic_istringstream::rdbuf
- sstream/std::basic_istringstream::str
- sstream/std::basic_istringstream::swap
helpviewer_keywords:
- std::basic_istringstream [C++]
- std::basic_istringstream [C++], allocator_type
- std::basic_istringstream [C++], rdbuf
- std::basic_istringstream [C++], str
- std::basic_istringstream [C++], swap
ms.assetid: 1d5bb4b5-793d-4833-98e5-14676c451915
ms.openlocfilehash: fd2ab79466c01343cbdadbcb649e3b05eee3c2a0
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88561778"
---
# <a name="basic_istringstream-class"></a>Classe basic_istringstream

Descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer del flusso della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md) <  **elem**, **TR**, `Alloc`>.

## <a name="syntax"></a>Sintassi

```cpp
template <class Elem, class Tr = char_traits<Elem>, class Alloc = allocator<Elem>>
class basic_istringstream : public basic_istream<Elem, Tr>
```

### <a name="parameters"></a>Parametri

*Alloc*\
Classe Allocator.

*Elem*\
Tipo di elemento di base della stringa.

*TR*\
Tratti di carattere specializzati sull'elemento di base della stringa.

## <a name="remarks"></a>Osservazioni

Il modello di classe descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer del flusso della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md) <  **elem**, **TR**, `Alloc`>, con elementi di tipo *elem*, i cui tratti di carattere sono determinati dalla classe *TR*e i cui elementi sono allocati da un allocatore della classe *Alloc*. L'oggetto archivia un oggetto della classe basic_stringbuf< **Elem**, **Tr**, `Alloc`>.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_istringstream](#basic_istringstream)|Costruisce un oggetto di tipo `basic_istringstream`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[allocator_type](#allocator_type)|Il tipo è un sinonimo del parametro di modello `Alloc`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[rdbuf](#rdbuf)|Restituisce l'indirizzo del buffer del flusso archiviato di tipo `pointer` in [basic_stringbuf](../standard-library/basic-stringbuf-class.md) <  `Elem` , `Tr` , `Alloc`>.|
|[Str](#str)|Imposta o recupera il testo in un buffer di stringa senza modificare la posizione di scrittura.|
|[scambio](#swap)|Scambia i valori in questo oggetto `basic_istringstream` con quelli dell'oggetto fornito.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore =](#op_eq)|Assegna i valori a questo oggetto `basic_istringstream` dal parametro dell'oggetto.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<sstream>

**Spazio dei nomi:** std

## <a name="basic_istringstreamallocator_type"></a><a name="allocator_type"></a> basic_istringstream:: allocator_type

Il tipo è un sinonimo del parametro di modello `Alloc`.

```cpp
typedef Alloc allocator_type;
```

## <a name="basic_istringstreambasic_istringstream"></a><a name="basic_istringstream"></a> basic_istringstream:: basic_istringstream

Costruisce un oggetto di tipo `basic_istringstream`.

```cpp
explicit basic_istringstream(
    ios_base::openmode _Mode = ios_base::in);

explicit basic_istringstream(
    const basic_string<Elem, Tr, Alloc>& str,
    ios_base::openmode _Mode = ios_base::in);

basic_istringstream(
    basic_istringstream&& right);
```

### <a name="parameters"></a>Parametri

*_Mode*\
Una delle enumerazioni in [ios_base::openmode](../standard-library/ios-base-class.md#openmode).

*Str*\
Oggetto di tipo `basic_string`.

*Ok*\
Riferimento rvalue di un oggetto `basic_istringstream`.

### <a name="remarks"></a>Osservazioni

Il primo costruttore inizializza la classe base chiamando [basic_istream](../standard-library/basic-istream-class.md)( `sb` ), dove `sb` è l'oggetto archiviato della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md) <  `Elem` , `Tr` `Alloc`>. Inizializza anche `sb` chiamando `basic_stringbuf`< `Elem`, `Tr`, `Alloc`>( `_Mode` &#124; `ios_base::in`).

Il secondo costruttore inizializza la classe base chiamando `basic_istream(sb)`. Inizializza anche `sb` chiamando `basic_stringbuf`< `Elem`, `Tr`, `Alloc`>( `str`, `_Mode` &#124; `ios_base::in`).

Il terzo costruttore inizializza l'oggetto con il contenuto di *right*, considerato come un riferimento rvalue.

## <a name="basic_istringstreamoperator"></a><a name="op_eq"></a> basic_istringstream:: operator =

Assegna i valori a questo oggetto `basic_istringstream` dal parametro dell'oggetto.

```cpp
basic_istringstream& operator=(basic_istringstream&& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Riferimento rvalue a un oggetto `basic_istringstream`.

### <a name="remarks"></a>Osservazioni

L'operatore membro sostituisce il contenuto dell'oggetto con il contenuto di *right*, considerato come un'assegnazione di spostamento del riferimento rvalue.

## <a name="basic_istringstreamrdbuf"></a><a name="rdbuf"></a> basic_istringstream:: rdbuf

Restituisce l'indirizzo del buffer del flusso archiviato di tipo `pointer` in [basic_stringbuf](../standard-library/basic-stringbuf-class.md) <  **elem**, **TR**, `Alloc`>.

```cpp
basic_stringbuf<Elem, Tr, Alloc> *rdbuf() const;
```

### <a name="return-value"></a>Valore restituito

Indirizzo del buffer del flusso archiviato di tipo `pointer` in basic_stringbuf< **elem**, **TR**, `Alloc`>.

### <a name="example"></a>Esempio

Vedere [basic_filebuf::close](../standard-library/basic-filebuf-class.md#close) per un esempio di utilizzo di `rdbuf`.

## <a name="basic_istringstreamstr"></a><a name="str"></a> basic_istringstream:: Str

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

Restituisce un oggetto della classe [basic_string](../standard-library/basic-string-class.md) <  **elem**, **TR**, `Alloc`>, la cui sequenza controllata è una copia della sequenza controllata da ** \* questo**oggetto.

### <a name="remarks"></a>Osservazioni

La prima funzione membro restituisce [rdbuf](#rdbuf)  ->  [Str](../standard-library/basic-stringbuf-class.md#str). La seconda funzione membro chiama `rdbuf`  ->  **Str**( `_Newstr` ).

### <a name="example"></a>Esempio

Vedere [basic_stringbuf:: Str](../standard-library/basic-stringbuf-class.md#str) per un esempio che usa `str` .

## <a name="basic_istringstreamswap"></a><a name="swap"></a> basic_istringstream:: swap

Scambia i valori di due oggetti `basic_istringstream`.

```cpp
void swap(basic_istringstream& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Riferimento lvalue a un oggetto `basic_istringstream`.

### <a name="remarks"></a>Osservazioni

La funzione membro scambia i valori di questo oggetto e i valori di *right*.

## <a name="see-also"></a>Vedere anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[convenzioni di iostreams](../standard-library/iostreams-conventions.md)
