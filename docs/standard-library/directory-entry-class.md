---
description: 'Altre informazioni su: directory_entry Class'
title: Classe directory_entry
ms.date: 09/10/2018
f1_keywords:
- filesystem/std::experimental::filesystem::directory_entry
- filesystem/std::experimental::filesystem::directory_entry::operator const std::experimental::filesystem::path &
- filesystem/std::experimental::filesystem::directory_entry::directory_entry
- filesystem/std::experimental::filesystem::directory_entry::operator=
- filesystem/std::experimental::filesystem::directory_entry::assign
- filesystem/std::experimental::filesystem::directory_entry::replace_filename
- filesystem/std::experimental::filesystem::directory_entry::path
- filesystem/std::experimental::filesystem::directory_entry::status
- filesystem/std::experimental::filesystem::directory_entry::symlink_status
- filesystem/std::experimental::filesystem::directory_entry::operator&lt;
- filesystem/std::experimental::filesystem::directory_entry::operator==
- filesystem/std::experimental::filesystem::directory_entry::operator!=
- filesystem/std::experimental::filesystem::directory_entry::operator&lt;=
- filesystem/std::experimental::filesystem::directory_entry::operator&gt;
- filesystem/std::experimental::filesystem::directory_entry::operator&gt;=
ms.assetid: 1827c67b-4137-4548-adb0-f955f7acaf08
helpviewer_keywords:
- std::experimental::filesystem::directory_entry
- std::experimental::filesystem::directory_entry::operator const std::experimental::filesystem::path &
- std::experimental::filesystem::directory_entry::directory_entry
- std::experimental::filesystem::directory_entry::operator=
- std::experimental::filesystem::directory_entry::assign
- std::experimental::filesystem::directory_entry::replace_filename
- std::experimental::filesystem::directory_entry::path
- std::experimental::filesystem::directory_entry::status
- std::experimental::filesystem::directory_entry::symlink_status
- std::experimental::filesystem::directory_entry::operator&lt;
- std::experimental::filesystem::directory_entry::operator==
- std::experimental::filesystem::directory_entry::operator!=
- std::experimental::filesystem::directory_entry::operator&lt;=
- std::experimental::filesystem::directory_entry::operator&gt;
- std::experimental::filesystem::directory_entry::operator&gt;=
ms.openlocfilehash: a4a4b69e9f568c19eefae79554838fac5781f3f8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324548"
---
# <a name="directory_entry-class"></a>Classe directory_entry

Descrive un oggetto restituito da `*X`, dove *X* è una classe [directory_iterator](../standard-library/directory-iterator-class.md) o [recursive_directory_iterator](../standard-library/recursive-directory-iterator-class.md).

## <a name="syntax"></a>Sintassi

```cpp
class directory_entry;
```

## <a name="remarks"></a>Osservazioni

La classe archivia un oggetto di tipo [path](../standard-library/path-class.md). Il tipo `path` archiviato può essere un'istanza della [classe path](../standard-library/path-class.md) o del tipo derivato da `path`. Archivia anche due valori [file_type](../standard-library/filesystem-enumerations.md#file_type). Uno rappresenta ciò che si conosce sullo stato del nome file archiviato e uno rappresenta ciò che si conosce sullo stato del collegamento simbolico del nome file.

Per altre informazioni ed esempi di codice, vedere [Esplorazione del file system](../standard-library/file-system-navigation.md).

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[directory_entry](#directory_entry)|I costruttori impostati come predefiniti si comportano come previsto. Il quarto costruttore inizializza `mypath` *pval*, `mystat` per *stat_arg* e `mysymstat` per *symstat_arg*.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[assign](#assign)|La funzione membro assegna *pval* a `mypath` , *Stat* a `mystat` e *symstat* a `mysymstat` .|
|[path](#path)|La funzione membro restituisce`mypath`.|
|[replace_filename](#replace_filename)|La funzione membro sostituisce `mypath` con `mypath.parent_path()`  /  *pval*, `mystat` con *stat_arg* e `mysymstat` con *symstat_arg*|
|[Stato](#status)|Entrambe le funzioni membro restituiscono `mystat` probabilmente prima modificate.|
|[symlink_status](#symlink_status)|Entrambe le funzioni membro restituiscono `mysymstat` probabilmente prima modificate.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore! =](#op_neq)|Sostituisce gli elementi dell'elenco con una copia di un altro elenco.|
|[operatore =](#op_as)|Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.|
|[operatore = =](#op_eq)|Restituisce `mypath == right.mypath`.|
|[operatore<](#op_lt)|Restituisce `mypath < right.mypath`.|
|[operatore<=](#op_lteq)|Restituisce `!(right < *this)`.|
|[operatore>](#op_gt)|Restituisce `right < *this`.|
|[operatore>=](#op_gteq)|Restituisce `!(*this < right)`.|
|[operatore const path_type&](#path_type)|Restituisce `mypath`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \< Experimental/filesystem&gt;

**Spazio dei nomi:** std::experimental::filesystem

## <a name="assign"></a><a name="assign"></a> assegnare

La funzione membro assegna *pval* a `mypath` , *stat_arg* `mystat` e *symstat_arg* a `mysymstat` .

```cpp
void assign(const std::experimental::filesystem::path& pval,
    file_status stat_arg = file_status(),
    file_status symstat_arg = file_status());
```

### <a name="parameters"></a>Parametri

*Pval*\
Percorso del nome file archiviato.

*stat_arg*\
Stato del nome file archiviato.

*symstat_arg*\
Stato del collegamento simbolico del nome file archiviato.

## <a name="directory_entry"></a><a name="directory_entry"></a> directory_entry

I costruttori impostati come predefiniti si comportano come previsto. Il quarto costruttore inizializza `mypath` *pval*, `mystat` per *stat_arg* e `mysymstat` per *symstat_arg*.

```cpp
directory_entry() = default;
directory_entry(const directory_entry&) = default;
directory_entry(directory_entry&&) noexcept = default;
explicit directory_entry(const std::experimental::filesystem::path& pval,
    file_status stat_arg = file_status(),
    file_status symstat_arg = file_status());
```

### <a name="parameters"></a>Parametri

*Pval*\
Percorso del nome file archiviato.

*stat_arg*\
Stato del nome file archiviato.

*symstat_arg*\
Stato del collegamento simbolico del nome file archiviato.

## <a name="operator"></a><a name="op_neq"></a> operatore! =

La funzione membro restituisce`!(*this == right)`.

```cpp
bool operator!=(const directory_entry& right) const noexcept;
```

### <a name="parameters"></a>Parametri

*Ok*\
[Directory_entry](../standard-library/directory-entry-class.md) da confrontare con `directory_entry` .

## <a name="operator"></a><a name="op_as"></a> operatore =

Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.

```cpp
directory_entry& operator=(const directory_entry&) = default;
directory_entry& operator=(directory_entry&&) noexcept = default;
```

### <a name="parameters"></a>Parametri

*Ok*\
[Directory_entry](../standard-library/directory-entry-class.md) copiato nell'oggetto `directory_entry` .

## <a name="operator"></a><a name="op_eq"></a> operatore = =

La funzione membro restituisce`mypath == right.mypath`.

```cpp
bool operator==(const directory_entry& right) const noexcept;
```

### <a name="parameters"></a>Parametri

*Ok*\
[Directory_entry](../standard-library/directory-entry-class.md) da confrontare con `directory_entry` .

## <a name="operatorlt"></a><a name="op_lt"></a> operatore&lt;

La funzione membro restituisce`mypath < right.mypath`.

```cpp
bool operator<(const directory_entry& right) const noexcept;
```

### <a name="parameters"></a>Parametri

*Ok*\
[Directory_entry](../standard-library/directory-entry-class.md) da confrontare con `directory_entry` .

## <a name="operatorlt"></a><a name="op_lteq"></a> operatore&lt;=

La funzione membro restituisce`!(right < *this)`.

```cpp
bool operator&lt;=(const directory_entry& right) const noexcept;
```

### <a name="parameters"></a>Parametri

*Ok*\
[Directory_entry](../standard-library/directory-entry-class.md) da confrontare con `directory_entry` .

## <a name="operatorgt"></a><a name="op_gt"></a> operatore&gt;

La funzione membro restituisce`right < *this`.

```cpp
bool operator&gt;(const directory_entry& right) const noexcept;
```

### <a name="parameters"></a>Parametri

*Ok*\
[Directory_entry](../standard-library/directory-entry-class.md) da confrontare con `directory_entry` .

## <a name="operatorgt"></a><a name="op_gteq"></a> operatore&gt;=

La funzione membro restituisce`!(*this < right)`.

```cpp
bool operator&gt;=(const directory_entry& right) const noexcept;
```

### <a name="parameters"></a>Parametri

*Ok*\
[Directory_entry](../standard-library/directory-entry-class.md) da confrontare con `directory_entry` .

## <a name="operator-const-path_type"></a><a name="path_type"></a> operatore const path_type&

L'operatore membro restituisce `mypath`.

```cpp
operator const std::experimental::filesystem::path&() const;
```

## <a name="path"></a><a name="path"></a> percorso

La funzione membro restituisce`mypath`.

```cpp
const std::experimental::filesystem::path& path() const noexcept;
```

## <a name="replace_filename"></a><a name="replace_filename"></a> replace_filename

La funzione membro sostituisce `mypath` con `mypath.parent_path()`  /  *pval*, `mystat` con *stat_arg* e `mysymstat` con *symstat_arg*

```cpp
void replace_filename(
    const std::experimental::filesystem::path& pval,
    file_status stat_arg = file_status(),
    file_status symstat_arg = file_status());
```

### <a name="parameters"></a>Parametri

*Pval*\
Percorso del nome file archiviato.

*stat_arg*\
Stato del nome file archiviato.

*symstat_arg*\
Stato del collegamento simbolico del nome file archiviato.

## <a name="status"></a><a name="status"></a> stato

Entrambe le funzioni membro restituiscono `mystat` probabilmente prima modificate nel modo seguente:

1. Se `status_known(mystat)` non eseguire alcuna operazione.

1. In caso contrario, se `!status_known(mysymstat) && !is_symlink(mysymstat)` quindi `mystat = mysymstat` .

```cpp
file_status status() const;
file_status status(error_code& ec) const noexcept;
```

### <a name="parameters"></a>Parametri

*EC*\
Codice di errore dello stato.

## <a name="symlink_status"></a><a name="symlink_status"></a> symlink_status

Entrambe le funzioni membro restituiscono `mysymstat` probabilmente prima modificate nel modo seguente: se `status_known(mysymstat)` non eseguono alcuna operazione. In caso contrario, `mysymstat = symlink_status(mypval)`.

```cpp
file_status symlink_status() const;
file_status symlink_status(error_code& ec) const noexcept;
```

### <a name="parameters"></a>Parametri

*EC*\
Codice di errore dello stato.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<filesystem&gt;](../standard-library/filesystem.md)
