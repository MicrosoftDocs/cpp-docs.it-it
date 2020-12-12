---
description: 'Altre informazioni su: classe istrstream'
title: Classe istrstream
ms.date: 11/04/2016
f1_keywords:
- strstream/std::istrstream::rdbuf
- strstream/std::istrstream::str
helpviewer_keywords:
- istrstream class
ms.assetid: c2d41c75-bd2c-4437-bd77-5939ce1b97af
ms.openlocfilehash: 45e60878c63c30daca85924a9d0091e202387b55
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97306651"
---
# <a name="istrstream-class"></a>Classe istrstream

Descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).

## <a name="syntax"></a>Sintassi

```cpp
class istrstream : public istream
```

## <a name="remarks"></a>Osservazioni

L'oggetto archivia un oggetto della classe `strstreambuf`.

> [!NOTE]
> Questa classe è deprecata. Provare a usare in alternativa [istringstream](../standard-library/sstream-typedefs.md#istringstream) o [wistringstream](../standard-library/sstream-typedefs.md#wistringstream).

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[istrstream](#istrstream)|Costruisce un oggetto di tipo `istrstream`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[rdbuf](#rdbuf)|Restituisce un puntatore all'oggetto `strstreambuf` associato del flusso.|
|[str](#str)|Chiama [freeze](../standard-library/strstreambuf-class.md#freeze) e quindi restituisce un puntatore all'inizio della sequenza controllata.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<strstream>

**Spazio dei nomi:** std

## <a name="istrstreamistrstream"></a><a name="istrstream"></a> istrstream:: istrstream

Costruisce un oggetto di tipo `istrstream`.

```cpp
explicit istrstream(
    const char* ptr);

explicit istrstream(
    char* ptr);

istrstream(
    const char* ptr,
    streamsize count);

istrstream(
    char* ptr,
    int count);
```

### <a name="parameters"></a>Parametri

*conteggio*\
Lunghezza del buffer (*ptr*).

*PTR*\
Contenuto con cui viene inizializzato il buffer.

### <a name="remarks"></a>Commenti

Tutti i costruttori inizializzano la classe base chiamando [IStream](../standard-library/istream-typedefs.md#istream)(**SB**), dove `sb` è l'oggetto archiviato della classe [strstreambuf](../standard-library/strstreambuf-class.md). I primi due costruttori inizializzano anche chiamando `sb` `strstreambuf( ( const char *) ptr, 0 )` . I due costruttori rimanenti chiamano invece `strstreambuf( ( const char *) ptr, count )` .

## <a name="istrstreamrdbuf"></a><a name="rdbuf"></a> istrstream:: rdbuf

Restituisce un puntatore all'oggetto strstreambuf associato del flusso.

```cpp
strstreambuf *rdbuf() const
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto strstreambuf associato del flusso.

### <a name="remarks"></a>Commenti

La funzione membro restituisce l'indirizzo del buffer del flusso archiviato di tipo pointer a [strstreambuf](../standard-library/strstreambuf-class.md).

### <a name="example"></a>Esempio

Vedere[strstreambuf::pcount](../standard-library/strstreambuf-class.md#pcount) per un esempio d'uso di `rdbuf`.

## <a name="istrstreamstr"></a><a name="str"></a> istrstream:: Str

Chiama [freeze](../standard-library/strstreambuf-class.md#freeze) e quindi restituisce un puntatore all'inizio della sequenza controllata.

```cpp
char *str();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'inizio della sequenza controllata.

### <a name="remarks"></a>Commenti

La funzione membro restituisce [rdbuf](#rdbuf)  ->  [Str](../standard-library/strstreambuf-class.md#str).

### <a name="example"></a>Esempio

Vedere [strstream:: Str](../standard-library/strstreambuf-class.md#str) per un esempio che usa `str` .

## <a name="see-also"></a>Vedi anche

[IStream](../standard-library/istream-typedefs.md#istream)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[convenzioni di iostreams](../standard-library/iostreams-conventions.md)
