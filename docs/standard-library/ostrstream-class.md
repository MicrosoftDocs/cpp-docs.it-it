---
title: Classe ostrstream | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- strstream/std::ostrstream::freeze
- strstream/std::ostrstream::pcount
- strstream/std::ostrstream::rdbuf
- strstream/std::ostrstream::str
dev_langs:
- C++
helpviewer_keywords:
- std::ostrstream [C++], freeze
- std::ostrstream [C++], pcount
- std::ostrstream [C++], rdbuf
- std::ostrstream [C++], str
ms.assetid: e2e34679-b266-4728-a8e1-8eda5d400e46
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6ea34ac38b70defc873278ce964ff10b8383dcc5
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38966582"
---
# <a name="ostrstream-class"></a>Classe ostrstream

Descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).

## <a name="syntax"></a>Sintassi

```cpp
class ostrstream : public ostream
```

## <a name="remarks"></a>Note

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
|[freeze](#freeze)|Fa sì che un buffer del flusso non sia disponibile tramite le operazioni di buffer del flusso.|
|[pcount](#pcount)|Restituisce un conteggio del numero di elementi scritti nella sequenza controllata.|
|[rdbuf](#rdbuf)|Restituisce un puntatore all'oggetto `strstreambuf` associato del flusso.|
|[str](#str)|Chiama [freeze](../standard-library/strstreambuf-class.md#freeze) e quindi restituisce un puntatore all'inizio della sequenza controllata.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<strstream>

**Spazio dei nomi:** std

## <a name="freeze"></a>  ostrstream::freeze

Fa sì che un buffer del flusso non sia disponibile tramite le operazioni di buffer del flusso.

```cpp
void freeze(bool _Freezeit = true);
```

### <a name="parameters"></a>Parametri

*_Freezeit* un' **bool** che indica se si desidera che il flusso per essere bloccato.

### <a name="remarks"></a>Note

La funzione membro chiama [rdbuf](#rdbuf) -> [freeze](../standard-library/strstreambuf-class.md#freeze)(_ *Freezeit*).

### <a name="example"></a>Esempio

Visualizzare [strstream:: Freeze](../standard-library/strstreambuf-class.md#freeze) per un esempio che usa `freeze`.

## <a name="ostrstream"></a>  ostrstream::ostrstream

Costruisce un oggetto di tipo `ostrstream`.

```cpp
ostrstream();

ostrstream(char* ptr,
    streamsize count,
    ios_base::openmode _Mode = ios_base::out);
```

### <a name="parameters"></a>Parametri

*PTR* nel buffer.

*conteggio* le dimensioni del buffer in byte.

*Modalità* la modalità di input e output del buffer. Per altre informazioni, vedere [ios_base::openmode](../standard-library/ios-base-class.md#openmode).

### <a name="remarks"></a>Note

Entrambi i costruttori inizializzano la classe base chiamando [ostream](../standard-library/ostream-typedefs.md#ostream)(**sb**), dove `sb` è l'oggetto archiviato della classe [strstreambuf](../standard-library/strstreambuf-class.md). Il primo costruttore inizializza inoltre `sb` chiamando `strstreambuf`. Il secondo costruttore inizializza la classe di base in uno dei due modi seguenti:

- Se `_Mode`  &  **ios_base:: app**= = 0, quindi `ptr` deve designare il primo elemento della matrice di `count` elementi e il costruttore chiama `strstreambuf`(`ptr`, `count`, `ptr`).

- In caso contrario, `ptr` deve designare il primo elemento della matrice di elementi di conteggio contenente una stringa C il cui primo elemento designato dal `ptr`e il costruttore chiama `strstreambuf`(`ptr`, `count`, `ptr` + `strlen`( `ptr`) ).

## <a name="pcount"></a>  ostrstream::pcount

Restituisce un conteggio del numero di elementi scritti nella sequenza controllata.

```cpp
streamsize pcount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi scritti nella sequenza controllata.

### <a name="remarks"></a>Note

La funzione membro restituisce [rdbuf](#rdbuf) -> [pcount](../standard-library/strstreambuf-class.md#pcount).

### <a name="example"></a>Esempio

Vedere [strstream::pcount](../standard-library/strstreambuf-class.md#pcount) per un esempio d'uso di `pcount`.

## <a name="rdbuf"></a>  ostrstream::rdbuf

Restituisce un puntatore all'oggetto strstreambuf associato del flusso.

```cpp
strstreambuf *rdbuf() const
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto strstreambuf associato del flusso.

### <a name="remarks"></a>Note

La funzione membro restituisce l'indirizzo del buffer del flusso archiviato di tipo `pointer` al [strstreambuf](../standard-library/strstreambuf-class.md).

### <a name="example"></a>Esempio

Vedere[strstreambuf::pcount](../standard-library/strstreambuf-class.md#pcount) per un esempio d'uso di `rdbuf`.

## <a name="str"></a>  ostrstream::str

Chiama [freeze](../standard-library/strstreambuf-class.md#freeze), quindi restituisce un puntatore all'inizio della sequenza controllata.

```cpp
char *str();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'inizio della sequenza controllata.

### <a name="remarks"></a>Note

La funzione membro restituisce [rdbuf](#rdbuf) -> [str](../standard-library/strstreambuf-class.md#str).

### <a name="example"></a>Esempio

Visualizzare [strstream](../standard-library/strstreambuf-class.md#str) per un esempio che usa `str`.

## <a name="see-also"></a>Vedere anche

[ostream](../standard-library/ostream-typedefs.md#ostream)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)<br/>
