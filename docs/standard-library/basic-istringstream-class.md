---
title: Classe basic_istringstream | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- sstream/std::basic_istringstream
- sstream/std::basic_istringstream::allocator_type
- sstream/std::basic_istringstream::rdbuf
- sstream/std::basic_istringstream::str
- sstream/std::basic_istringstream::swap
dev_langs:
- C++
helpviewer_keywords:
- std::basic_istringstream [C++]
- std::basic_istringstream [C++], allocator_type
- std::basic_istringstream [C++], rdbuf
- std::basic_istringstream [C++], str
- std::basic_istringstream [C++], swap
ms.assetid: 1d5bb4b5-793d-4833-98e5-14676c451915
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 53760cd2d69067fd93a76a35b0ba29fcc82a4664
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38960069"
---
# <a name="basicistringstream-class"></a>Classe basic_istringstream

Descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer di flusso della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>.

## <a name="syntax"></a>Sintassi

```cpp
template <class Elem, class Tr = char_traits<Elem>, class Alloc = allocator<Elem>>
class basic_istringstream : public basic_istream<Elem, Tr>
```

### <a name="parameters"></a>Parametri

*Alloc* la classe allocator.

*Elem* il tipo di elemento di base della stringa.

*TR* tratti di carattere specializzati sull'elemento di base della stringa.

## <a name="remarks"></a>Note

La classe modello descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer del flusso della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>, con elementi di tipo *Elem*, cui tratti di carattere sono determinati dalla classe *Tr*, e i cui elementi sono allocati da un allocatore della classe  *Alloc*. L'oggetto archivia un oggetto della classe basic_stringbuf< **Elem**, **Tr**, `Alloc`>.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_istringstream](#basic_istringstream)|Costruisce un oggetto di tipo `basic_istringstream`.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[allocator_type](#allocator_type)|Il tipo è un sinonimo del parametro di modello `Alloc`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[rdbuf](#rdbuf)|Restituisce l'indirizzo del buffer di flusso archiviato di tipo `pointer` in [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< `Elem`, `Tr`, `Alloc`>.|
|[str](#str)|Imposta o recupera il testo in un buffer di stringa senza modificare la posizione di scrittura.|
|[swap](#swap)|Scambia i valori in questo oggetto `basic_istringstream` con quelli dell'oggetto fornito.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator=](#op_eq)|Assegna i valori a questo oggetto `basic_istringstream` dal parametro dell'oggetto.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<sstream>

**Spazio dei nomi:** std

## <a name="allocator_type"></a>  basic_istringstream::allocator_type

Il tipo è un sinonimo del parametro di modello `Alloc`.

```cpp
typedef Alloc allocator_type;
```

## <a name="basic_istringstream"></a>  basic_istringstream::basic_istringstream

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

*Modalità* una delle enumerazioni nello [ios_base:: OpenMode](../standard-library/ios-base-class.md#openmode).

*str* un oggetto di tipo `basic_string`.

*a destra* riferimento rvalue di un `basic_istringstream` oggetto.

### <a name="remarks"></a>Note

Il primo costruttore inizializza la classe base chiamando [basic_istream](../standard-library/basic-istream-class.md)(`sb`), dove `sb` è l'oggetto archiviato della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md) <  `Elem`, `Tr`, `Alloc`>. Inizializza anche `sb` chiamando `basic_stringbuf`< `Elem`, `Tr`, `Alloc`>( `_Mode` &#124; `ios_base::in`).

Il secondo costruttore inizializza la classe base chiamando `basic_istream(sb)`. Inizializza anche `sb` chiamando `basic_stringbuf`< `Elem`, `Tr`, `Alloc`>( `str`, `_Mode` &#124; `ios_base::in`).

Il terzo costruttore inizializza l'oggetto con il contenuto della *a destra*, considerato come riferimento rvalue.

## <a name="op_eq"></a>  basic_istringstream::operator=

Assegna i valori a questo oggetto `basic_istringstream` dal parametro dell'oggetto.

```cpp
basic_istringstream& operator=(basic_istringstream&& right);
```

### <a name="parameters"></a>Parametri

*a destra* riferimento rvalue a un `basic_istringstream` oggetto.

### <a name="remarks"></a>Note

L'operatore membro sostituisce il contenuto dell'oggetto con il contenuto del *a destra*, gestiti come assegnazione di spostamento di un riferimento rvalue.

## <a name="rdbuf"></a>  basic_istringstream::rdbuf

Restituisce l'indirizzo del buffer del flusso archiviato di tipo `pointer` al [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>.

```cpp
basic_stringbuf<Elem, Tr, Alloc> *rdbuf() const;
```

### <a name="return-value"></a>Valore restituito

L'indirizzo del buffer del flusso archiviato di tipo `pointer` in basic_stringbuf < **Elem**, **Tr**, `Alloc`>.

### <a name="example"></a>Esempio

Vedere [basic_filebuf::close](../standard-library/basic-filebuf-class.md#close) per un esempio di utilizzo di `rdbuf`.

## <a name="str"></a>  basic_istringstream::str

Imposta o recupera il testo in un buffer di stringa senza modificare la posizione di scrittura.

```cpp
basic_string<Elem, Tr, Alloc> str() const;


void str(
    const basic_string<Elem, Tr, Alloc>& _Newstr);
```

### <a name="parameters"></a>Parametri

*_Newstr* la nuova stringa.

### <a name="return-value"></a>Valore restituito

Restituisce un oggetto della classe [basic_string](../standard-library/basic-string-class.md)< **Elem**, **Tr**, `Alloc`>, la cui sequenza controllata è una copia della sequenza controllata da **\*this**.

### <a name="remarks"></a>Note

La prima funzione membro restituisce [rdbuf](#rdbuf) -> [str](../standard-library/basic-stringbuf-class.md#str). La seconda funzione membro chiama `rdbuf` -> **str**( `_Newstr`).

### <a name="example"></a>Esempio

Visualizzare [basic_stringbuf:: str](../standard-library/basic-stringbuf-class.md#str) per un esempio che usa `str`.

## <a name="swap"></a>  basic_istringstream::swap

Scambia i valori di due oggetti `basic_istringstream`.

```cpp
void swap(basic_istringstream& right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*right*|Riferimento `lvalue` a un oggetto `basic_istringstream`.|

### <a name="remarks"></a>Note

La funzione membro Scambia i valori di questo oggetto e i valori della *a destra*.

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)<br/>
