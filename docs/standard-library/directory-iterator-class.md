---
title: Classe directory_iterator
ms.date: 09/10/2018
f1_keywords:
- filesystem/std::experimental::filesystem::directory_iterator
- filesystem/std::experimental::filesystem::_Directory_iterator::_Directory_iterator
- filesystem/std::experimental::filesystem::directory_iterator::directory_iterator
- filesystem/std::experimental::filesystem::directory_iterator::increment
- filesystem/std::experimental::filesystem::directory_iterator::operator=
- filesystem/std::experimental::filesystem::directory_iterator::operator==
- filesystem/std::experimental::filesystem::directory_iterator::operator!=
- filesystem/std::experimental::filesystem::directory_iterator::operator*
- filesystem/std::experimental::filesystem::directory_iterator::operator-&gt;
- filesystem/std::experimental::filesystem::directory_iterator::operator++
ms.assetid: dca2ecf8-3e69-4644-a83d-705061e10cc8
helpviewer_keywords:
- std::experimental::filesystem::directory_iterator
- std::experimental::filesystem::_Directory_iterator::_Directory_iterator
- std::experimental::filesystem::directory_iterator
- std::experimental::filesystem::directory_iterator::directory_iterator
- std::experimental::filesystem::directory_iterator::increment
- std::experimental::filesystem::directory_iterator::operator=
- std::experimental::filesystem::directory_iterator::operator==
- std::experimental::filesystem::directory_iterator::operator!=
- std::experimental::filesystem::directory_iterator::operator*
- std::experimental::filesystem::directory_iterator::operator-&gt;
- std::experimental::filesystem::directory_iterator::operator++
ms.openlocfilehash: a7ccc2a941da079e14092af5b81dc537db4a48c0
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215777"
---
# <a name="directory_iterator-class"></a>Classe directory_iterator

Descrive un iteratore di input sequenziato attraverso i nomi file in una directory. Per un iteratore `X` , l'espressione `*X` restituisce un oggetto della classe `directory_entry` che esegue il wrapping del nome del file e qualsiasi elemento noto sullo stato.

La classe archivia un oggetto di tipo `path` , chiamato `mydir` qui per gli scopi di Exposition, che rappresenta il nome della directory da sequenziare e un oggetto di tipo `directory_entry` chiamato `myentry` , che rappresenta il nome di file corrente nella sequenza di directory. Un oggetto costruito predefinito di tipo `directory_entry` ha un `mydir` percorso vuoto e rappresenta l'iteratore di fine sequenza.

Ad esempio, data la directory `abc` con `def` le voci e `ghi` , il codice:

`for (directory_iterator next(path("abc")), end; next != end; ++next)     visit(next->path());`

chiamerà `visit` con gli argomenti `path("abc/def")` e `path("abc/ghi")` .

Per altre informazioni ed esempi di codice, vedere [Esplorazione del file system](../standard-library/file-system-navigation.md).

## <a name="syntax"></a>Sintassi

```cpp
class directory_iterator;
```

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[directory_iterator](#directory_iterator)|Costruisce un iteratore di input che viene sequenziato attraverso i nomi file in una directory.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[increment](#increment)|Tenta di passare al nome file successivo nella directory.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore! =](#op_neq)|Restituisce `!(*this == right)`.|
|[operatore =](#op_as)|Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.|
|[operatore = =](#op_eq)|Restituisce **`true`** solo se sia **`*this`** che *right* sono iteratori di fine sequenza oppure non sono iteratori di fine sequenza.|
|[operatore](#op_star)|Restituisce `myentry`.|
|[operatore->](#op_cast)|Restituisce `&**this`.|
|[operatore + +](#op_increment)|Chiama, `increment()` quindi restituisce **`*this`** o crea una copia dell'oggetto, chiama `increment()` e quindi restituisce la copia.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<experimental/filesystem>

**Spazio dei nomi:** std::experimental::filesystem

## <a name="directory_iteratordirectory_iterator"></a><a name="directory_iterator"></a>directory_iterator::d irectory_iterator

Il primo costruttore produce un iteratore di fine sequenza. Il secondo e il terzo costruttore archiviano *pval* in `mydir` , quindi tentano di aprire e leggere `mydir` come una directory. Se l'esito è positivo, archiviano il primo nome file nella directory in. in `myentry` caso contrario, producono un iteratore di fine sequenza.

I costruttori impostati come predefiniti si comportano come previsto.

```cpp
directory_iterator() noexcept;
explicit directory_iterator(const path& pval);

directory_iterator(const path& pval, error_code& ec) noexcept;
directory_iterator(const directory_iterator&) = default;
directory_iterator(directory_iterator&&) noexcept = default;
```

### <a name="parameters"></a>Parametri

*Pval*\
Percorso del nome file archiviato.

*EC*\
Codice di errore dello stato.

*directory_iterator*\
Oggetto archiviato.

## <a name="directory_iteratorincrement"></a><a name="increment"></a>directory_iterator:: Increment

La funzione prova a avanzare al nome file successivo nella directory. Se ha esito positivo, archivia il nome del file in `myentry` ; in caso contrario, produce un iteratore di fine sequenza.

```cpp
directory_iterator& increment(error_code& ec) noexcept;
```

## <a name="directory_iteratoroperator"></a><a name="op_neq"></a>directory_iterator:: operator! =

L'operatore membro restituisce `!(*this == right)`.

```cpp
bool operator!=(const directory_iterator& right) const;
```

### <a name="parameters"></a>Parametri

*Ok*\
[Directory_iterator](../standard-library/directory-iterator-class.md) da confrontare con `directory_iterator` .

## <a name="directory_iteratoroperator"></a><a name="op_as"></a>directory_iterator:: operator =

Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.

```cpp
directory_iterator& operator=(const directory_iterator&) = default;
directory_iterator& operator=(directory_iterator&&) noexcept = default;
```

### <a name="parameters"></a>Parametri

*Ok*\
[Directory_iterator](../standard-library/directory-iterator-class.md) copiato nell'oggetto `directory_iterator` .

## <a name="directory_iteratoroperator"></a><a name="op_eq"></a>directory_iterator:: operator = =

L'operatore membro restituisce **`true`** solo se sia **`*this`** che *right* sono iteratori di fine sequenza o se entrambi non sono iteratori di fine sequenza.

```cpp
bool operator==(const directory_iterator& right) const;
```

### <a name="parameters"></a>Parametri

*Ok*\
[Directory_iterator](../standard-library/directory-iterator-class.md) da confrontare con `directory_iterator` .

## <a name="directory_iteratoroperator"></a><a name="op_star"></a>directory_iterator:: operator *

L'operatore membro restituisce `myentry`.

```cpp
const directory_entry& operator*() const;
```

## <a name="directory_iteratoroperator-"></a><a name="op_cast"></a>directory_iterator:: operator->

La funzione membro restituisce`&**this`.

```cpp
const directory_entry * operator->() const;
```

## <a name="directory_iteratoroperator"></a><a name="op_increment"></a>directory_iterator:: operator + +

La prima funzione membro chiama `increment()` , quindi restituisce **`*this`** . La seconda funzione membro esegue una copia dell'oggetto, chiama `increment()` e quindi restituisce la copia.

```cpp
directory_iterator& operator++();
directory_iterator& operator++(int);
```

### <a name="parameters"></a>Parametri

*int*\
Il numero di incrementi.

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<filesystem>](../standard-library/filesystem.md)\
[File System Navigation (C++)](../standard-library/file-system-navigation.md) (Esplorazione del file system (C++))
