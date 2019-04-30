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
ms.openlocfilehash: 6763f2a96b771fadbec311cf8740352fff53e29a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62413846"
---
# <a name="directoryiterator-class"></a>Classe directory_iterator

Descrive un iteratore di input sequenziato attraverso i nomi file in una directory. Per un iteratore `X`, l'espressione `*X` restituisce un oggetto della classe `directory_entry` che include il nome del file e qualsiasi valore conosce sul relativo stato.

La classe archivia un oggetto di tipo `path`, denominato `mydir` qui per a scopo illustrativo, che rappresenta il nome della directory da sequenziare, e un oggetto di tipo `directory_entry` chiamato `myentry` qui, che rappresenta l'oggetto corrente nome del file nella sequenza di directory. Un oggetto costruito predefinito di tipo `directory_entry` dispone di un oggetto vuoto `mydir` pathname e rappresenta l'iteratore di fine sequenza.

Si consideri ad esempio la directory `abc` con le voci `def` e `ghi`, il codice:

`for (directory_iterator next(path("abc")), end; next != end; ++next)     visit(next->path());`

chiamerà `visit` con gli argomenti `path("abc/def")` e `path("abc/ghi")`.

Per altre informazioni ed esempi di codice, vedere [File System Navigation (C++)](../standard-library/file-system-navigation.md) (Esplorazione del file system (C++)).

## <a name="syntax"></a>Sintassi

```cpp
class directory_iterator;
```

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[directory_iterator](#directory_iterator)|Costruisce un iteratore di input sequenziato attraverso i nomi di file in una directory.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[increment](#increment)|Prova ad avanzare al nome file successivo nella directory.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator!=](#op_neq)|Restituisce `!(*this == right)`.|
|[operator=](#op_as)|Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.|
|[operator==](#op_eq)|Restituisce **true** solo se entrambi `*this` e *a destra* sono iteratori di fine sequenza o entrambi sono non fine-di--iteratori di sequenza.|
|[operator*](#op_star)|Restituisce `myentry`.|
|[operator->](#op_cast)|Restituisce `&**this`.|
|[operator++](#op_increment)|Le chiamate `increment()`, quindi restituisce `*this`, o crea una copia dell'oggetto, le chiamate `increment()`, quindi restituisce la copia.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<experimental/filesystem>

**Spazio nomi:** std::experimental::filesystem

## <a name="directory_iterator"></a> directory_iterator::directory_iterator

Il primo costruttore produce un iteratore di fine sequenza. L'archivio di secondo e terzo costruttore *pval* nelle `mydir`, quindi provano ad aprire e leggere `mydir` come una directory. Se ha esito positivo, archiviano il primo nome file nella directory in `myentry`; in caso contrario, producono un iteratore di fine sequenza.

I costruttori impostati come predefiniti si comportano come previsto.

```cpp
directory_iterator() noexcept;
explicit directory_iterator(const path& pval);

directory_iterator(const path& pval, error_code& ec) noexcept;
directory_iterator(const directory_iterator&) = default;
directory_iterator(directory_iterator&&) noexcept = default;
```

### <a name="parameters"></a>Parametri

*pval*<br/>
Il percorso del nome file archiviato.

*ec*<br/>
Il codice di errore di stato.

*directory_iterator*<br/>
L'oggetto archiviato.

## <a name="increment"></a> directory_iterator::increment

La funzione prova a avanzare al nome file successivo nella directory. Se ha esito positivo, archivia il nome del file in `myentry`; in caso contrario, produce un iteratore di fine sequenza.

```cpp
directory_iterator& increment(error_code& ec) noexcept;
```

## <a name="op_neq"></a> directory_iterator::operator!=

L'operatore membro restituisce `!(*this == right)`.

```cpp
bool operator!=(const directory_iterator& right) const;
```

### <a name="parameters"></a>Parametri

*right*<br/>
Il [directory_iterator](../standard-library/directory-iterator-class.md) cui è confrontato il `directory_iterator`.

## <a name="op_as"></a> directory_iterator::operator=

Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.

```cpp
directory_iterator& operator=(const directory_iterator&) = default;
directory_iterator& operator=(directory_iterator&&) noexcept = default;
```

### <a name="parameters"></a>Parametri

*right*<br/>
Il [directory_iterator](../standard-library/directory-iterator-class.md) copiata nel `directory_iterator`.

## <a name="op_eq"></a> directory_iterator::operator==

L'operatore membro restituisce **true** solo se entrambi `*this` e *a destra* sono iteratori di fine sequenza o entrambi sono non fine-di--iteratori di sequenza.

```cpp
bool operator==(const directory_iterator& right) const;
```

### <a name="parameters"></a>Parametri

*right*<br/>
Il [directory_iterator](../standard-library/directory-iterator-class.md) cui è confrontato il `directory_iterator`.

## <a name="op_star"></a> directory_iterator::operator*

L'operatore membro restituisce `myentry`.

```cpp
const directory_entry& operator*() const;
```

## <a name="op_cast"></a> directory_iterator::operator->

La funzione membro restituisce `&**this`.

```cpp
const directory_entry * operator->() const;
```

## <a name="op_increment"></a> directory_iterator::operator++

La prima funzione membro chiama `increment()`, quindi restituisce `*this`. La seconda funzione membro esegue una copia dell'oggetto, le chiamate `increment()`, quindi restituisce la copia.

```cpp
directory_iterator& operator++();
directory_iterator& operator++(int);
```

### <a name="parameters"></a>Parametri

*int*<br/>
Il numero di incrementi.

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<filesystem>](../standard-library/filesystem.md)<br/>
[Esplorazione del file system (C++)](../standard-library/file-system-navigation.md)<br/>
