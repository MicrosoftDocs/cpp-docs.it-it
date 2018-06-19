---
title: Classe directory_entry | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 9a55109683a18415638cacd9cd15dbcaa3164fc8
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33846932"
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

## <a name="assign"></a>assign

```cpp
void assign(const std::experimental::filesystem::path& pval,
    file_status stat_arg = file_status(),
    file_status symstat_arg = file_status());
```

La funzione membro assegna pval a mypath, stat a mystat e symstat a mysymstat.

## <a name="directoryentry"></a>directory_entry

```cpp
directory_entry() = default;
directory_entry(const directory_entry&) = default;
directory_entry(directory_entry&&) noexcept = default;
explicit directory_entry(const std::experimental::filesystem::path& pval,
    file_status stat_arg = file_status(),
    file_status symstat_arg = file_status());
```

I costruttori impostati come predefiniti si comportano come previsto. Il quarto costruttore inizializza mypath in pval, mystat in stat_arg e mysymstat in symstat_arg.

## <a name="operator"></a>operator!=

```cpp
bool operator!=(const directory_entry& right) const noexcept;
```

La funzione membro restituisce !(*this == right).

## <a name="operator"></a>operator=

```cpp
directory_entry& operator=(const directory_entry&) = default;
directory_entry& operator=(directory_entry&&) noexcept = default;
```

Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.

## <a name="operator"></a>operator==

```cpp
bool operator==(const directory_entry& right) const noexcept;
```

La funzione membro restituisce mypath == right.mypath.

## <a name="operatorlt"></a>(operatore)&lt;

```cpp
bool operator<(const directory_entry& right) const noexcept;
```

La funzione membro restituisce mypath &lt; myPath.

## <a name="operatorlt"></a>operator&lt;=

```cpp
bool operator&lt;=(const directory_entry& right) const noexcept;
```

La funzione membro restituisce !(right \< *this).

## <a name="operatorgt"></a>(operatore)&gt;

```cpp
bool operator&gt;(const directory_entry& right) const noexcept;
```

La funzione membro restituisce right \< *this.

## <a name="operatorgt"></a>operator&gt;=

```cpp
bool operator&gt;=(const directory_entry& right) const noexcept;
```

La funzione membro restituisce! (* questo \< destra).

## <a name="operator-const-pathtype"></a>operator const path_type&

```cpp
operator const std::experimental::filesystem::path&() const;
```

L'operatore membro restituisce mypath.

## <a name="path"></a>path

```cpp
const std::experimental::filesystem::path& path() const noexcept;
```

La funzione membro restituisce mypath.

## <a name="replacefilename"></a>replace_filename

```cpp
void replace_filename(
    const std::experimental::filesystem::path& pval,
    file_status stat_arg = file_status(),
    file_status symstat_arg = file_status());
```

La funzione membro sostituisce mypath con mypath.parent_path() / pval, mystat con stat_arg e mysymstat con symstat_arg

## <a name="status"></a>status

```cpp
file_status status() const;
file_status status(error_code& ec) const noexcept;
```

Entrambe le funzioni membro restituiscono mystat probabilmente prima modificato nel modo seguente:

1. If status_known(mystat) then do nothing.

1. In caso contrario, if !status_known(mysymstat) && !is_symlink(mysymstat) then mystat = mysymstat.

## <a name="symlinkstatus"></a>symlink_status

```cpp
file_status symlink_status() const;
file_status symlink_status(error_code& ec) const noexcept;
```

Entrambe le funzioni membro restituiscono mysymstat probabilmente prima modificato nel modo seguente:If status_known(mysymstat) then do nothing. In caso contrario, mysymstat = symlink_status(mypval).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<sperimentale/filesystem&gt;

**Spazio nomi:** std::experimental::filesystem

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<filesystem&gt;](../standard-library/filesystem.md)<br/>
