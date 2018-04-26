---
title: Classe basic_istringstream | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
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
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: fc7c774651d10b87c808b7dc4d2b21978dab3dce
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="basicistringstream-class"></a>Classe basic_istringstream

Descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer di flusso della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>.

## <a name="syntax"></a>Sintassi

```cpp
template <class Elem, class Tr = char_traits<Elem>, class Alloc = allocator<Elem>>
class basic_istringstream : public basic_istream<Elem, Tr>
```

### <a name="parameters"></a>Parametri

`Alloc` Classe allocator.

`Elem` Il tipo di elemento di base della stringa.

*TR* tratti di carattere specializzati sull'elemento di base della stringa.

## <a name="remarks"></a>Note

La classe di modello descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer di flusso della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`> con elementi di tipo **Elem**, i cui tratti di carattere sono determinati dalla classe **Tr** e i cui elementi sono allocati da un allocatore della classe `Alloc`. L'oggetto archivia un oggetto della classe basic_stringbuf< **Elem**, **Tr**, `Alloc`>.

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

`_Mode` Una delle enumerazioni negli [ios_base:: OpenMode](../standard-library/ios-base-class.md#openmode).

`str` Un oggetto di tipo `basic_string`.

`right` Un riferimento rvalue di una `basic_istringstream` oggetto.

### <a name="remarks"></a>Note

Il primo costruttore inizializza la classe base chiamando [basic_istream](../standard-library/basic-istream-class.md)( `sb`), dove `sb` è l'oggetto archiviato della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< `Elem`, `Tr`, `Alloc`>. Inizializza anche `sb` chiamando `basic_stringbuf`< `Elem`, `Tr`, `Alloc`>( `_Mode` &#124; `ios_base::in`).

Il secondo costruttore inizializza la classe base chiamando `basic_istream(sb)`. Inizializza anche `sb` chiamando `basic_stringbuf`< `Elem`, `Tr`, `Alloc`>( `str`, `_Mode` &#124; `ios_base::in`).

Il terzo costruttore inizializza l'oggetto con il contenuto di `right`, considerato come riferimento rvalue.

## <a name="op_eq"></a>  basic_istringstream::operator=

Assegna i valori a questo oggetto `basic_istringstream` dal parametro dell'oggetto.

```cpp
basic_istringstream& operator=(basic_istringstream&& right);
```

### <a name="parameters"></a>Parametri

`right` Un riferimento rvalue a un `basic_istringstream` oggetto.

### <a name="remarks"></a>Note

L'operatore membro sostituisce i contenuti dell'oggetto usando i contenuti di `right`, gestiti come un'assegnazione di spostamento del riferimento rvalue.

## <a name="rdbuf"></a>  basic_istringstream::rdbuf

Restituisce l'indirizzo del buffer di flusso archiviato di tipo **pointer** in [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>.

```cpp
basic_stringbuf<Elem, Tr, Alloc> *rdbuf() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce l'indirizzo del buffer di flusso archiviato di tipo **pointer** in basic_stringbuf< **Elem**, **Tr**, `Alloc`>.

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

`_Newstr` La nuova stringa.

### <a name="return-value"></a>Valore restituito

Restituisce un oggetto della classe [basic_string](../standard-library/basic-string-class.md)< **Elem**, **Tr**, `Alloc`>, la cui sequenza controllata è una copia della sequenza controllata da **\*this**.

### <a name="remarks"></a>Note

La prima funzione membro restituisce [rdbuf](#rdbuf) -> [str](../standard-library/basic-stringbuf-class.md#str). La seconda funzione membro chiama `rdbuf` -> **str**( `_Newstr`).

### <a name="example"></a>Esempio

Vedere [basic_stringbuf::str](../standard-library/basic-stringbuf-class.md#str) per un esempio di utilizzo di **str**.

## <a name="swap"></a>  basic_istringstream::swap

Scambia i valori di due oggetti `basic_istringstream`.

```cpp
void swap(basic_istringstream& right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`right`|Riferimento `lvalue` a un oggetto `basic_istringstream`.|

### <a name="remarks"></a>Note

La funzione membro scambia i valori di questo oggetto con i valori di `right`.

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)<br/>
