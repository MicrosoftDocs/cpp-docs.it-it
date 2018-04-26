---
title: Classe basic_ostringstream | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- sstream/std::basic_ostringstream
- sstream/std::basic_ostringstream::allocator_type
- sstream/std::basic_ostringstream::rdbuf
- sstream/std::basic_ostringstream::str
dev_langs:
- C++
helpviewer_keywords:
- std::basic_ostringstream [C++]
- std::basic_ostringstream [C++], allocator_type
- std::basic_ostringstream [C++], rdbuf
- std::basic_ostringstream [C++], str
ms.assetid: aea699f7-350f-432a-acca-adbae7b483fb
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 54f510e88cd824273fbfdf2a0ae76d5c884dc5dc
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="basicostringstream-class"></a>Classe basic_ostringstream

Descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer di flusso della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>.

## <a name="syntax"></a>Sintassi

```cpp
template <class Elem, class Tr = char_traits<Elem>, class Alloc = allocator<Elem>>
class basic_ostringstream : public basic_ostream<Elem, Tr>
```

### <a name="parameters"></a>Parametri

`Alloc` Classe allocator.

`Elem` Il tipo di elemento di base della stringa.

*TR* tratti di carattere specializzati sull'elemento di base della stringa.

## <a name="remarks"></a>Note

La classe descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer di flusso con elementi di tipo **Elem** i cui tratti di carattere sono determinati dalla classe **Tr** e i cui elementi sono allocati da un allocatore della classe `Alloc`. L'oggetto archivia un oggetto della classe basic_stringbuf< **Elem**, **Tr**, `Alloc`>.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_ostringstream](#basic_ostringstream)|Costruisce un oggetto di tipo `basic_ostringstream`.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[allocator_type](#allocator_type)|Il tipo è un sinonimo del parametro di modello `Alloc`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[rdbuf](#rdbuf)|Restituisce l'indirizzo del buffer di flusso archiviato di tipo `pointer` in [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< `Elem`, `Tr`, `Alloc`>.|
|[str](#str)|Imposta o recupera il testo in un buffer di stringa senza modificare la posizione di scrittura.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<sstream>

**Spazio dei nomi:** std

## <a name="allocator_type"></a>  basic_ostringstream::allocator_type

Il tipo è un sinonimo del parametro di modello `Alloc`.

```cpp
typedef Alloc allocator_type;
```

## <a name="basic_ostringstream"></a>  basic_ostringstream::basic_ostringstream

Costruisce un oggetto di tipo basic_ostringstream.

```cpp
explicit basic_ostringstream(ios_base::openmode _Mode = ios_base::out);

explicit basic_ostringstream(const basic_string<Elem, Tr, Alloc>& str, ios_base::openmode _Mode = ios_base::out);
```

### <a name="parameters"></a>Parametri

`_Mode` Una delle enumerazioni negli [ios_base:: OpenMode](../standard-library/ios-base-class.md#openmode).

`str` Un oggetto di tipo `basic_string`.

### <a name="remarks"></a>Note

Il primo costruttore inizializza la classe base chiamando [basic_ostream](../standard-library/basic-ostream-class.md)( **sb**), dove **sb** è l'oggetto archiviato della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>. Inizializza anche **sb** chiamando basic_stringbuf< **Elem**, **Tr**, `Alloc`>( `_Mode` &#124; `ios_base::out`).

Il secondo costruttore inizializza la classe base chiamando basic_ostream( **sb**). Inizializza anche **sb** chiamando basic_stringbuf< **Elem**, **Tr**, `Alloc`>(_ *Str*, `_Mode` &#124; `ios_base::out`).

## <a name="rdbuf"></a>  basic_ostringstream::rdbuf

Restituisce l'indirizzo del buffer di flusso archiviato di tipo **pointer** in [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>.

```cpp
basic_stringbuf<Elem, Tr, Alloc> *rdbuf() const;
```

### <a name="return-value"></a>Valore restituito

L'indirizzo del buffer di flusso archiviato di tipo **pointer** in basic_stringbuf< **Elem**, **Tr**, `Alloc`>.

### <a name="remarks"></a>Note

La funzione membro restituisce l'indirizzo del buffer di flusso archiviato di tipo **pointer** in basic_stringbuf< **Elem**, **Tr**, `Alloc`>.

### <a name="example"></a>Esempio

Vedere [basic_filebuf::close](../standard-library/basic-filebuf-class.md#close) per un esempio di utilizzo di `rdbuf`.

## <a name="str"></a>  basic_ostringstream::str

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

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)<br/>
