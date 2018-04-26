---
title: Classe istrstream | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- strstream/std::istrstream::rdbuf
- strstream/std::istrstream::str
dev_langs:
- C++
helpviewer_keywords:
- istrstream class
ms.assetid: c2d41c75-bd2c-4437-bd77-5939ce1b97af
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d6be9c5d9a305032a61677c820832a76c464db4c
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="istrstream-class"></a>Classe istrstream

Descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).

## <a name="syntax"></a>Sintassi

```cpp
class istrstream : public istream
```

## <a name="remarks"></a>Note

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

**Intestazione:** \<strstream>

**Spazio dei nomi:** std

## <a name="istrstream"></a>  istrstream::istrstream

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

`count` La lunghezza del buffer ( `ptr`).

`ptr` Il contenuto con cui viene inizializzato il buffer.

### <a name="remarks"></a>Note

Tutti i costruttori inizializzano la classe di base chiamando [istream](../standard-library/istream-typedefs.md#istream)( **sb**), dove **sb** è l'oggetto archiviato della classe [strstreambuf](../standard-library/strstreambuf-class.md). I primi due costruttori inizializzano anche **sb** chiamando `strstreambuf`( ( **const**`char` \*) `ptr`, 0 ). I due costruttori rimanenti chiamano invece `strstreambuf`( ( **const**`char` *) `ptr`, `count` ).

## <a name="rdbuf"></a>  istrstream::rdbuf

Restituisce un puntatore all'oggetto strstreambuf associato del flusso.

```cpp
strstreambuf *rdbuf() const
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto strstreambuf associato del flusso.

### <a name="remarks"></a>Note

La funzione membro restituisce l'indirizzo del buffer del flusso archiviato di tipo pointer a [strstreambuf](../standard-library/strstreambuf-class.md).

### <a name="example"></a>Esempio

Vedere[strstreambuf::pcount](../standard-library/strstreambuf-class.md#pcount) per un esempio d'uso di `rdbuf`.

## <a name="str"></a>  istrstream::str

Chiama [freeze](../standard-library/strstreambuf-class.md#freeze) e quindi restituisce un puntatore all'inizio della sequenza controllata.

```cpp
char *str();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'inizio della sequenza controllata.

### <a name="remarks"></a>Note

La funzione membro restituisce [rdbuf](#rdbuf) -> [str](../standard-library/strstreambuf-class.md#str).

### <a name="example"></a>Esempio

Vedere [strstream::str](../standard-library/strstreambuf-class.md#str) per un esempio d'uso di **str**.

## <a name="see-also"></a>Vedere anche

[istream](../standard-library/istream-typedefs.md#istream)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)<br/>
