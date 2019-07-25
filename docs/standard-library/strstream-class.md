---
title: Classe strstream
ms.date: 11/04/2016
f1_keywords:
- strstream/std::strstream::freeze
- strstream/std::strstream::pcount
- strstream/std::strstream::rdbuf
- strstream/std::strstream::str
helpviewer_keywords:
- std::strstream [C++], freeze
- std::strstream [C++], pcount
- std::strstream [C++], rdbuf
- std::strstream [C++], str
ms.assetid: 63f3be31-9e36-42b1-9715-a474a5997e2a
ms.openlocfilehash: 53baa350121796d5198211e1fdb08f4341df6b80
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68459107"
---
# <a name="strstream-class"></a>Classe strstream

Descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati usando un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).

## <a name="syntax"></a>Sintassi

```cpp
class strstream : public iostream
```

## <a name="remarks"></a>Note

L'oggetto archivia un oggetto della classe `strstreambuf`.

> [!NOTE]
> Questa classe è deprecata. Provare a usare [stringstream](../standard-library/sstream-typedefs.md#stringstream) o [wstringstream](../standard-library/sstream-typedefs.md#wstringstream).

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[strstream](#strstream)|Costruisce un oggetto di tipo `strstream`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[freeze](#freeze)|Fa sì che un buffer del flusso non sia disponibile tramite le operazioni di buffer del flusso.|
|[pcount](#pcount)|Restituisce un conteggio del numero di elementi scritti nella sequenza controllata.|
|[rdbuf](#rdbuf)|Restituisce un puntatore all'oggetto `strstreambuf` associato del flusso.|
|[str](#str)|Chiama [freeze](../standard-library/strstreambuf-class.md#freeze) e quindi restituisce un puntatore all'inizio della sequenza controllata.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<strstream>

**Spazio dei nomi:** std

## <a name="freeze"></a>  strstream::freeze

Fa sì che un buffer del flusso non sia disponibile tramite le operazioni di buffer del flusso.

```cpp
void freeze(bool _Freezeit = true);
```

### <a name="parameters"></a>Parametri

*_Freezeit*\
**Bool** che indica se si desidera che il flusso venga bloccato.

### <a name="remarks"></a>Note

La funzione membro chiama [rdbuf](#rdbuf) -> [freeze](../standard-library/strstreambuf-class.md#freeze)(_ *Freezeit*).

### <a name="example"></a>Esempio

Vedere [strstreambuf:: Freeze](../standard-library/strstreambuf-class.md#freeze) per un esempio che usa `freeze`.

## <a name="pcount"></a>  strstream::pcount

Restituisce un conteggio del numero di elementi scritti nella sequenza controllata.

```cpp
streamsize pcount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi scritti nella sequenza controllata.

### <a name="remarks"></a>Note

La funzione membro restituisce [rdbuf](#rdbuf) -> [pcount](../standard-library/strstreambuf-class.md#pcount).

### <a name="example"></a>Esempio

Vedere [strstreambuf::pcount](../standard-library/strstreambuf-class.md#pcount) per un esempio d'uso di pcount.

## <a name="rdbuf"></a>  strstream::rdbuf

Restituisce un puntatore all'oggetto strstreambuf associato del flusso.

```cpp
strstreambuf *rdbuf() const
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto strstreambuf associato del flusso.

### <a name="remarks"></a>Note

La funzione membro restituisce l'indirizzo del buffer del flusso archiviato di tipo `pointer` a [strstreambuf](../standard-library/strstreambuf-class.md).

### <a name="example"></a>Esempio

Vedere [strstreambuf::pcount](../standard-library/strstreambuf-class.md#pcount) per un esempio d'uso di `rdbuf`.

## <a name="str"></a>  strstream::str

Chiama [freeze](../standard-library/strstreambuf-class.md#freeze) e quindi restituisce un puntatore all'inizio della sequenza controllata.

```cpp
char *str();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'inizio della sequenza controllata.

### <a name="remarks"></a>Note

La funzione membro restituisce [rdbuf](#rdbuf) -> [str](../standard-library/strstreambuf-class.md#str).

### <a name="example"></a>Esempio

Vedere [strstreambuf:: Str](../standard-library/strstreambuf-class.md#str) per un esempio che usa `str`.

## <a name="strstream"></a>  strstream::strstream

Costruisce un oggetto di tipo `strstream`.

```cpp
strstream();

strstream(char* ptr,
    streamsize count,
    ios_base::openmode _Mode = ios_base::in | ios_base::out);
```

### <a name="parameters"></a>Parametri

*conteggio*\
Dimensione del buffer.

*_Mode*\
Modalità di input e output del buffer. Per altre informazioni, vedere [ios_base::openmode](../standard-library/ios-base-class.md#openmode).

*PTR*\
Buffer.

### <a name="remarks"></a>Note

Entrambi i costruttori inizializzano la classe base chiamando [streambuf](../standard-library/streambuf-typedefs.md#streambuf)( **SB**), dove `sb` è l'oggetto archiviato della classe [strstreambuf](../standard-library/strstreambuf-class.md). Il primo costruttore inizializza `sb` anche chiamando [strstreambuf](../standard-library/strstreambuf-class.md#strstreambuf). Il secondo costruttore inizializza la classe di base in uno dei due modi seguenti:

- Se `_Mode` `strstreambuf` `ptr` `count` `count` `ptr`  ios_base:: app = = 0, ptr deve designare il primo elemento di una matrice di elementi e il costruttore chiama (,,)  &  .

- In caso contrario, *ptr* deve designare il primo elemento di una matrice di elementi count che contiene una stringa C il cui primo elemento è designato da *ptr*e `strstreambuf`il `ptr`costruttore chiama `ptr` (, `count`,  +  `strlen`( `ptr`) ).

## <a name="see-also"></a>Vedere anche

[iostream](../standard-library/istream-typedefs.md#iostream)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\ (Sicurezza dei thread nella libreria standard C++)
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)
