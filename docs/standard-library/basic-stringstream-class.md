---
description: 'Altre informazioni su: basic_stringstream Class'
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
ms.openlocfilehash: a236f8b382a2c0f8d77f971493fc16b9ac9da81f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325586"
---
# <a name="basic_stringstream-class"></a>Classe basic_stringstream

Descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati usando un buffer di flusso della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md) <  **elem**, **TR**, `Alloc`>.

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

*TR*\
Tratti di carattere specializzati sull'elemento di base della stringa.

## <a name="remarks"></a>Commenti

Il modello di classe descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati usando un buffer di flusso della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md) <  **elem**, **TR**, `Alloc`>, con elementi di tipo `Elem` , i cui tratti di carattere sono determinati dalla classe `Tr` e i cui elementi sono allocati da un allocatore della classe `Alloc` . L'oggetto archivia un oggetto della classe basic_stringbuf< **Elem**, **Tr**, `Alloc`>.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_stringstream](#basic_stringstream)|Costruisce un oggetto di tipo `basic_stringstream`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Description|
|-|-|
|[allocator_type](#allocator_type)|Il tipo è un sinonimo del parametro di modello `Alloc`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[rdbuf](#rdbuf)|Restituisce l'indirizzo del buffer del flusso archiviato di tipo `pointer` in [basic_stringbuf](../standard-library/basic-stringbuf-class.md) <  `Elem` , `Tr` , `Alloc`>.|
|[str](#str)|Imposta o recupera il testo in un buffer di stringa senza modificare la posizione di scrittura.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<sstream>

**Spazio dei nomi:** std

## <a name="basic_stringstreamallocator_type"></a><a name="allocator_type"></a> basic_stringstream:: allocator_type

Il tipo è un sinonimo del parametro di modello `Alloc`.

```cpp
typedef Alloc allocator_type;
```

## <a name="basic_stringstreambasic_stringstream"></a><a name="basic_stringstream"></a> basic_stringstream:: basic_stringstream

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

### <a name="remarks"></a>Commenti

Il primo costruttore inizializza la classe base chiamando [basic_iostream](../standard-library/basic-iostream-class.md)( **SB**), dove `sb` è l'oggetto archiviato della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md) <  **elem**, **TR**, `Alloc`>. Inizializza anche chiamando `sb` basic_stringbuf< **elem**, **TR**, `Alloc`> ( `_Mode` ).

Il secondo costruttore inizializza la classe base chiamando basic_iostream( **sb**). Inizializza anche chiamando `sb` basic_stringbuf< **elem**, **TR**, `Alloc`> (_ *Str*, `_Mode` ).

## <a name="basic_stringstreamrdbuf"></a><a name="rdbuf"></a> basic_stringstream:: rdbuf

Restituisce l'indirizzo del buffer di flusso archiviato di tipo **pointer** in [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>.

```cpp
basic_stringbuf<Elem, Tr, Alloc> *rdbuf() const;
```

### <a name="return-value"></a>Valore restituito

Indirizzo del buffer del flusso archiviato di tipo `pointer` in basic_stringbuf< **elem**, **TR**, `Alloc`>.

### <a name="example"></a>Esempio

Vedere [basic_filebuf::close](../standard-library/basic-filebuf-class.md#close) per un esempio di utilizzo di `rdbuf`.

## <a name="basic_stringstreamstr"></a><a name="str"></a> basic_stringstream:: Str

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

Restituisce un oggetto della classe [basic_string](../standard-library/basic-string-class.md) <  **elem**, **TR**, `Alloc`>, la cui sequenza controllata è una copia della sequenza controllata da **\* questo** oggetto.

### <a name="remarks"></a>Commenti

La prima funzione membro restituisce [rdbuf](#rdbuf)  ->  [Str](../standard-library/basic-stringbuf-class.md#str). La seconda funzione membro chiama `rdbuf`  ->  **Str**( `_Newstr` ).

### <a name="example"></a>Esempio

Vedere [basic_stringbuf:: Str](../standard-library/basic-stringbuf-class.md#str) per un esempio che usa `str` .

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[convenzioni di iostreams](../standard-library/iostreams-conventions.md)
