---
title: Classe ostrstream
ms.date: 11/04/2016
f1_keywords:
- strstream/std::ostrstream::freeze
- strstream/std::ostrstream::pcount
- strstream/std::ostrstream::rdbuf
- strstream/std::ostrstream::str
helpviewer_keywords:
- std::ostrstream [C++], freeze
- std::ostrstream [C++], pcount
- std::ostrstream [C++], rdbuf
- std::ostrstream [C++], str
ms.assetid: e2e34679-b266-4728-a8e1-8eda5d400e46
ms.openlocfilehash: f17d8006aea6c5467f8de270318386bb12df264a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87222225"
---
# <a name="ostrstream-class"></a>Classe ostrstream

Descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).

## <a name="syntax"></a>Sintassi

```cpp
class ostrstream : public ostream
```

## <a name="remarks"></a>Osservazioni

L'oggetto archivia un oggetto della classe `strstreambuf`.

> [!NOTE]
> Questa classe è deprecata. Provare a usare [ostringstream](../standard-library/sstream-typedefs.md#ostringstream) o [wostringstream](../standard-library/sstream-typedefs.md#wostringstream).

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[ostrstream](#ostrstream)|Costruisce un oggetto di tipo `ostrstream`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[congelare](#freeze)|Fa sì che un buffer del flusso non sia disponibile tramite le operazioni di buffer del flusso.|
|[pcount](#pcount)|Restituisce un conteggio del numero di elementi scritti nella sequenza controllata.|
|[rdbuf](#rdbuf)|Restituisce un puntatore all'oggetto `strstreambuf` associato del flusso.|
|[str](#str)|Chiama [freeze](../standard-library/strstreambuf-class.md#freeze) e quindi restituisce un puntatore all'inizio della sequenza controllata.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<strstream>

**Spazio dei nomi:** std

## <a name="ostrstreamfreeze"></a><a name="freeze"></a>ostrstream:: Freeze

Fa sì che un buffer del flusso non sia disponibile tramite le operazioni di buffer del flusso.

```cpp
void freeze(bool _Freezeit = true);
```

### <a name="parameters"></a>Parametri

*_Freezeit*\
Valore **`bool`** che indica se si desidera che il flusso venga bloccato.

### <a name="remarks"></a>Osservazioni

La funzione membro chiama [rdbuf](#rdbuf)  ->  [Freeze](../standard-library/strstreambuf-class.md#freeze)(_ *Freezeit*).

### <a name="example"></a>Esempio

Vedere [strstream:: Freeze](../standard-library/strstreambuf-class.md#freeze) per un esempio che usa `freeze` .

## <a name="ostrstreamostrstream"></a><a name="ostrstream"></a>ostrstream:: ostrstream

Costruisce un oggetto di tipo `ostrstream`.

```cpp
ostrstream();

ostrstream(char* ptr,
    streamsize count,
    ios_base::openmode _Mode = ios_base::out);
```

### <a name="parameters"></a>Parametri

*PTR*\
Buffer.

*conteggio*\
Dimensioni del buffer in byte.

*_Mode*\
Modalità di input e output del buffer. Per altre informazioni, vedere [ios_base::openmode](../standard-library/ios-base-class.md#openmode).

### <a name="remarks"></a>Osservazioni

Entrambi i costruttori inizializzano la classe base chiamando [ostream](../standard-library/ostream-typedefs.md#ostream)(**SB**), dove `sb` è l'oggetto archiviato della classe [strstreambuf](../standard-library/strstreambuf-class.md). Il primo costruttore inizializza anche chiamando `sb` `strstreambuf` . Il secondo costruttore inizializza la classe di base in uno dei due modi seguenti:

- Se `_Mode`  &  **ios_base:: app**= = 0, `ptr` deve designare il primo elemento di una matrice di `count` elementi e il costruttore chiama `strstreambuf` ( `ptr` , `count` , `ptr` ).

- In caso contrario, `ptr` deve designare il primo elemento di una matrice di elementi count che contiene una stringa C il cui primo elemento è designato da `ptr` e il costruttore chiama `strstreambuf` ( `ptr` , `count` , `ptr`  +  `strlen` ( `ptr` )).

## <a name="ostrstreampcount"></a><a name="pcount"></a>ostrstream: conteggio:p

Restituisce un conteggio del numero di elementi scritti nella sequenza controllata.

```cpp
streamsize pcount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi scritti nella sequenza controllata.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [rdbuf](#rdbuf)  ->  [pcount](../standard-library/strstreambuf-class.md#pcount).

### <a name="example"></a>Esempio

Vedere [strstream::pcount](../standard-library/strstreambuf-class.md#pcount) per un esempio d'uso di `pcount`.

## <a name="ostrstreamrdbuf"></a><a name="rdbuf"></a>ostrstream:: rdbuf

Restituisce un puntatore all'oggetto strstreambuf associato del flusso.

```cpp
strstreambuf *rdbuf() const
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto strstreambuf associato del flusso.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce l'indirizzo del buffer del flusso archiviato di tipo `pointer` a [strstreambuf](../standard-library/strstreambuf-class.md).

### <a name="example"></a>Esempio

Vedere[strstreambuf::pcount](../standard-library/strstreambuf-class.md#pcount) per un esempio d'uso di `rdbuf`.

## <a name="ostrstreamstr"></a><a name="str"></a>ostrstream:: Str

Chiama [freeze](../standard-library/strstreambuf-class.md#freeze) e quindi restituisce un puntatore all'inizio della sequenza controllata.

```cpp
char *str();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'inizio della sequenza controllata.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [rdbuf](#rdbuf)  ->  [Str](../standard-library/strstreambuf-class.md#str).

### <a name="example"></a>Esempio

Vedere [strstream:: Str](../standard-library/strstreambuf-class.md#str) per un esempio che usa `str` .

## <a name="see-also"></a>Vedere anche

[ostream](../standard-library/ostream-typedefs.md#ostream)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[convenzioni di iostreams](../standard-library/iostreams-conventions.md)
