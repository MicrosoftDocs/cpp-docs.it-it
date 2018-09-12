---
title: Classe directory_entry | Microsoft Docs
ms.custom: ''
ms.date: 09/10/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
ms.assetid: 1827c67b-4137-4548-adb0-f955f7acaf08
author: corob-msft
ms.author: corob
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
ms.workload:
- cplusplus
ms.openlocfilehash: 3c61d69c1ee5ad40191771dabd829514e3381e88
ms.sourcegitcommit: fb9448eb96c6351a77df04af16ec5c0fb9457d9e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2018
ms.locfileid: "44691406"
---
# <a name="directoryentry-class"></a>Classe directory_entry

Descrive un oggetto restituito da `*X`, dove *X* è una classe [directory_iterator](../standard-library/directory-iterator-class.md) o [recursive_directory_iterator](../standard-library/recursive-directory-iterator-class.md).

## <a name="syntax"></a>Sintassi

```cpp
class directory_entry;
```

## <a name="remarks"></a>Note

La classe archivia un oggetto di tipo [path](../standard-library/path-class.md). Il tipo `path` archiviato può essere un'istanza della [classe path](../standard-library/path-class.md) o del tipo derivato da `path`. Archivia anche due valori [file_type](../standard-library/filesystem-enumerations.md#file_type). Uno rappresenta ciò che si conosce sullo stato del nome file archiviato e uno rappresenta ciò che si conosce sullo stato del collegamento simbolico del nome file.

Per altre informazioni ed esempi di codice, vedere [File System Navigation (C++)](../standard-library/file-system-navigation.md) (Esplorazione del file system (C++)).

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[directory_entry](#directory_entry)|I costruttori impostati come predefiniti si comportano come previsto. Il quarto costruttore inizializza `mypath` al *pval*, `mystat` al *stat_arg*, e `mysymstat` a *symstat_arg*.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[assign](#assign)|La funzione membro assegna *pval* al `mypath`, *stat* alla `mystat`, e *symstat* a `mysymstat`.|
|[path](#path)|La funzione membro restituisce `mypath`.|
|[replace_filename](#replace_filename)|La funzione membro sostituisce `mypath` con `mypath.parent_path()`  /  *pval*, `mystat` con *stat_arg*, e `mysymstat` con *symstat_arg*|
|[status](#status)|Entrambe le funzioni membro restituiscono `mystat` probabilmente prima modificato.|
|[symlink_status](#symlink_status)|Entrambe le funzioni membro restituiscono `mysymstat` probabilmente prima modificato.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator!=](#op_neq)|Sostituisce gli elementi dell'elenco con una copia di un altro elenco.|
|[operator=](#op_as)|Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.|
|[operator==](#op_eq)|Restituisce `mypath == right.mypath`.|
|[operator<](#op_lt)|Restituisce `mypath < right.mypath`.|
|[operator<=](#op_lteq)|Restituisce `!(right < *this)`.|
|[operator>](#op_gt)|Restituisce `right < *this`.|
|[operator>=](#op_gteq)|Restituisce `!(*this < right)`.|
|[operator const path_type &](#path_type)|Restituisce `mypath`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<sperimentale/filesystem&gt;

**Spazio nomi:** std::experimental::filesystem

## <a name="assign"></a> assegnare

La funzione membro assegna *pval* al `mypath`, *stat_arg* alla `mystat`, e *symstat_arg* a `mysymstat`.

```cpp
void assign(const std::experimental::filesystem::path& pval,
    file_status stat_arg = file_status(),
    file_status symstat_arg = file_status());
```

### <a name="parameters"></a>Parametri

*PVal*<br/>
Il percorso del nome file archiviato.  

*stat_arg*<br/>
Lo stato del nome file archiviato.  

*symstat_arg*<br/>
Lo stato del collegamento simbolico del nome file archiviato.  

## <a name="directory_entry"></a> directory_entry

I costruttori impostati come predefiniti si comportano come previsto. Il quarto costruttore inizializza `mypath` al *pval*, `mystat` al *stat_arg*, e `mysymstat` a *symstat_arg*.

```cpp
directory_entry() = default;
directory_entry(const directory_entry&) = default;
directory_entry(directory_entry&&) noexcept = default;
explicit directory_entry(const std::experimental::filesystem::path& pval,
    file_status stat_arg = file_status(),
    file_status symstat_arg = file_status());
```

### <a name="parameters"></a>Parametri

*PVal*<br/>
Il percorso del nome file archiviato.  

*stat_arg*<br/>
Lo stato del nome file archiviato.  

*symstat_arg*<br/>
Lo stato del collegamento simbolico del nome file archiviato.  

## <a name="op_neq"></a> operatore! =

La funzione membro restituisce `!(*this == right)`.

```cpp
bool operator!=(const directory_entry& right) const noexcept;
```

### <a name="parameters"></a>Parametri

*right*<br/>
Il [directory_entry](../standard-library/directory-entry-class.md) cui è confrontato il `directory_entry`.  

## <a name="op_as"></a> operator=

Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.

```cpp
directory_entry& operator=(const directory_entry&) = default;
directory_entry& operator=(directory_entry&&) noexcept = default;
```

### <a name="parameters"></a>Parametri

*right*<br/>
Il [directory_entry](../standard-library/directory-entry-class.md) copiata nel `directory_entry`.  

## <a name="op_eq"></a> operator==

La funzione membro restituisce `mypath == right.mypath`.

```cpp
bool operator==(const directory_entry& right) const noexcept;
```

### <a name="parameters"></a>Parametri

*right*<br/>
Il [directory_entry](../standard-library/directory-entry-class.md) cui è confrontato il `directory_entry`.  

## <a name="op_lt"></a> Operatore&lt;

La funzione membro restituisce `mypath < right.mypath`.

```cpp
bool operator<(const directory_entry& right) const noexcept;
```

### <a name="parameters"></a>Parametri

*right*<br/>
Il [directory_entry](../standard-library/directory-entry-class.md) cui è confrontato il `directory_entry`.  

## <a name="op_lteq"></a> Operatore&lt;=

La funzione membro restituisce `!(right < *this)`.

```cpp
bool operator&lt;=(const directory_entry& right) const noexcept;
```

### <a name="parameters"></a>Parametri

*right*<br/>
Il [directory_entry](../standard-library/directory-entry-class.md) cui è confrontato il `directory_entry`.  

## <a name="op_gt"></a> Operatore&gt;

La funzione membro restituisce `right < *this`.

```cpp
bool operator&gt;(const directory_entry& right) const noexcept;
```

### <a name="parameters"></a>Parametri

*right*<br/>
Il [directory_entry](../standard-library/directory-entry-class.md) cui è confrontato il `directory_entry`.  

## <a name="op_gteq"></a> Operatore&gt;=

La funzione membro restituisce `!(*this < right)`.

```cpp
bool operator&gt;=(const directory_entry& right) const noexcept;
```

### <a name="parameters"></a>Parametri

*right*<br/>
Il [directory_entry](../standard-library/directory-entry-class.md) cui è confrontato il `directory_entry`.  

## <a name="path_type"></a> operator const path_type &

L'operatore membro restituisce `mypath`.

```cpp
operator const std::experimental::filesystem::path&() const;
```

## <a name="path"></a> Percorso

La funzione membro restituisce `mypath`.

```cpp
const std::experimental::filesystem::path& path() const noexcept;
```

## <a name="replace_filename"></a> replace_filename

La funzione membro sostituisce `mypath` con `mypath.parent_path()`  /  *pval*, `mystat` con *stat_arg*, e `mysymstat` con *symstat_arg*

```cpp
void replace_filename(
    const std::experimental::filesystem::path& pval,
    file_status stat_arg = file_status(),
    file_status symstat_arg = file_status());
```

### <a name="parameters"></a>Parametri

*PVal*<br/>
Il percorso del nome file archiviato.  

*stat_arg*<br/>
Lo stato del nome file archiviato.  

*symstat_arg*<br/>
Lo stato del collegamento simbolico del nome file archiviato.  

## <a name="status"></a> Stato

Entrambe le funzioni membro restituiscono `mystat` probabilmente prima modificato nel modo seguente:

1. Se `status_known(mystat)` quindi non fare nulla.

1. In caso contrario, se `!status_known(mysymstat) && !is_symlink(mysymstat)` quindi `mystat = mysymstat`.

```cpp
file_status status() const;
file_status status(error_code& ec) const noexcept;
```

### <a name="parameters"></a>Parametri

*CE*<br/>
Il codice di errore di stato.  

## <a name="symlink_status"></a> symlink_status

Entrambe le funzioni membro restituiscono `mysymstat` probabilmente prima modificato nel modo seguente: se `status_known(mysymstat)` quindi non fare nulla. In caso contrario, `mysymstat = symlink_status(mypval)`.

```cpp
file_status symlink_status() const;
file_status symlink_status(error_code& ec) const noexcept;
```

### <a name="parameters"></a>Parametri

*CE*<br/>
Il codice di errore di stato.  

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<filesystem&gt;](../standard-library/filesystem.md)<br/>
