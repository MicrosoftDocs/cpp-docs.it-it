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
ms.openlocfilehash: 047b7e9d7fdece75137980b013d43abf1d5e3ec3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376625"
---
# <a name="strstream-class"></a>Classe strstream

Descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati usando un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).

## <a name="syntax"></a>Sintassi

```cpp
class strstream : public iostream
```

## <a name="remarks"></a>Osservazioni

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
|[Congelare](#freeze)|Fa sì che un buffer del flusso non sia disponibile tramite le operazioni di buffer del flusso.|
|[pcount](#pcount)|Restituisce un conteggio del numero di elementi scritti nella sequenza controllata.|
|[rdbuf](#rdbuf)|Restituisce un puntatore all'oggetto `strstreambuf` associato del flusso.|
|[Str](#str)|Chiama [freeze](../standard-library/strstreambuf-class.md#freeze) e quindi restituisce un puntatore all'inizio della sequenza controllata.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<strstream>

**Spazio dei nomi:** std

## <a name="strstreamfreeze"></a><a name="freeze"></a>strstream::congelamento

Fa sì che un buffer del flusso non sia disponibile tramite le operazioni di buffer del flusso.

```cpp
void freeze(bool _Freezeit = true);
```

### <a name="parameters"></a>Parametri

*_Freezeit*\
Oggetto **bool** che indica se si desidera che il flusso venga bloccato.

### <a name="remarks"></a>Osservazioni

La funzione membro chiama [rdbuf](#rdbuf) -> [freeze](../standard-library/strstreambuf-class.md#freeze)(_ *Freezeit*).

### <a name="example"></a>Esempio

Vedere [strstreambuf::freeze](../standard-library/strstreambuf-class.md#freeze) per un `freeze`esempio che utilizza .

## <a name="strstreampcount"></a><a name="pcount"></a>strstream::pcount

Restituisce un conteggio del numero di elementi scritti nella sequenza controllata.

```cpp
streamsize pcount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi scritti nella sequenza controllata.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [rdbuf](#rdbuf) -> [pcount](../standard-library/strstreambuf-class.md#pcount).

### <a name="example"></a>Esempio

Vedere [strstreambuf::pcount](../standard-library/strstreambuf-class.md#pcount) per un esempio d'uso di pcount.

## <a name="strstreamrdbuf"></a><a name="rdbuf"></a>strstream::rdbuf

Restituisce un puntatore all'oggetto strstreambuf associato del flusso.

```cpp
strstreambuf *rdbuf() const
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto strstreambuf associato del flusso.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce l'indirizzo `pointer` del buffer del flusso archiviato di tipo a [strstreambuf](../standard-library/strstreambuf-class.md).

### <a name="example"></a>Esempio

Vedere[strstreambuf::pcount](../standard-library/strstreambuf-class.md#pcount) per un esempio d'uso di `rdbuf`.

## <a name="strstreamstr"></a><a name="str"></a>strstream::str

Chiama [freeze](../standard-library/strstreambuf-class.md#freeze) e quindi restituisce un puntatore all'inizio della sequenza controllata.

```cpp
char *str();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'inizio della sequenza controllata.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [rdbuf](#rdbuf) -> [str](../standard-library/strstreambuf-class.md#str).

### <a name="example"></a>Esempio

Vedere [strstreambuf::str](../standard-library/strstreambuf-class.md#str) per un `str`esempio che utilizza .

## <a name="strstreamstrstream"></a><a name="strstream"></a>strstream::strstream

Costruisce un oggetto di tipo `strstream`.

```cpp
strstream();

strstream(char* ptr,
    streamsize count,
    ios_base::openmode _Mode = ios_base::in | ios_base::out);
```

### <a name="parameters"></a>Parametri

*Conteggio*\
Dimensione del buffer.

*_Mode*\
Modalità di input e output del buffer. Per altre informazioni, vedere [ios_base::openmode](../standard-library/ios-base-class.md#openmode).

*Ptr*\
Buffer.

### <a name="remarks"></a>Osservazioni

Entrambi i costruttori inizializzano la classe base chiamando `sb` [streambuf](../standard-library/streambuf-typedefs.md#streambuf)( **sb**), dove è l'oggetto archiviato della classe [strstreambuf](../standard-library/strstreambuf-class.md). Il primo costruttore `sb` viene inizializzato anche chiamando [strstreambuf](../standard-library/strstreambuf-class.md#strstreambuf). Il secondo costruttore inizializza la classe di base in uno dei due modi seguenti:

- Se `_Mode`  &  **ios_base::app**è uguale a 0, *ptr* deve `count` designare il `strstreambuf`primo `ptr` `count`elemento `ptr`di una matrice di elementi e le chiamate al costruttore ( , , ).

- In caso contrario, *ptr* deve designare il primo elemento di una matrice di elementi count `strstreambuf`che contiene una stringa C il cui primo elemento è designato da *ptr*e le chiamate al costruttore ( `ptr`, `count`, `ptr`  +  `strlen`( `ptr`) .

## <a name="see-also"></a>Vedere anche

[Iostream](../standard-library/istream-typedefs.md#iostream)\
[Sicurezza dei filettatura nella libreria standard di C](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione iostream](../standard-library/iostream-programming.md)\
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)
