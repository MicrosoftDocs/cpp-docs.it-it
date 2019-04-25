---
title: Classe file_status
ms.date: 09/10/2018
f1_keywords:
- filesystem/std::experimental::filesystem::file_status
- filesystem/std::experimental::filesystem::file_status::operator=
- filesystem/std::experimental::filesystem::file_status::type
- filesystem/std::experimental::filesystem::file_status::permissions
ms.assetid: 9781840e-ad22-44dd-ad79-0fabaa94bac4
helpviewer_keywords:
- std::experimental::filesystem::file_status
- std::experimental::filesystem::file_status::operator=
- std::experimental::filesystem::file_status::type
- std::experimental::filesystem::file_status::permissions
ms.openlocfilehash: 81ce4ecc1673087db8e985f94e297798dd712a6e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62160017"
---
# <a name="filestatus-class"></a>Classe file_status

Esegue il wrapping di [file_type](../standard-library/filesystem-enumerations.md#file_type) e [perms](../standard-library/filesystem-enumerations.md#perms) del file.

## <a name="syntax"></a>Sintassi

```cpp
class file_status;
```

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[file_status](#file_status)|Costruisce un wrapper per [file_type](../standard-library/filesystem-enumerations.md#file_type) e il file [perms](../standard-library/filesystem-enumerations.md#perms).|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[type](#type)|Ottiene o imposta `file_type`.|
|[permissions](#permissions)|Ottiene o imposta le autorizzazioni del file.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator=](#op_as)|Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<filesystem >

**Namespace:** std::experimental::filesystem, std::experimental::filesystem

## <a name="file_status"></a> file_status::file_status

Costruisce un wrapper per [file_type](../standard-library/filesystem-enumerations.md#file_type) e il file [perms](../standard-library/filesystem-enumerations.md#perms).

```cpp
explicit file_status(
   file_type ftype = file_type::none,
   perms mask = perms::unknown) noexcept;

file_status(const file_status&) noexcept = default;

file_status(file_status&&) noexcept = default;

~file_status() noexcept = default;
```

### <a name="parameters"></a>Parametri

*ftype*<br/>
Specificato `file_type`, per impostazione predefinita `file_type::none`.

*mask*<br/>
File specificato `perms`, per impostazione predefinita `perms::unknown`.

*file_status*<br/>
L'oggetto archiviato.

## <a name="op_as"></a> file_status::operator=

Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.

```cpp
file_status& operator=(const file_status&) noexcept = default;
file_status& operator=(file_status&&) nexcept = default;
```

### <a name="parameters"></a>Parametri

*file_status*<br/>
Il [file_status](../standard-library/file-status-class.md) copiata nel `file_status`.

## <a name="type"></a> Tipo

Ottiene o imposta `file_type`.

```cpp
file_type type() const noexcept
void type(file_type ftype) noexcept
```

### <a name="parameters"></a>Parametri

*ftype*<br/>
`file_type`specificato.

## <a name="permissions"></a> Autorizzazioni

Ottiene o imposta le autorizzazioni del file.

Usare il metodo di impostazione per rendere un file `readonly` o rimuovere il `readonly` attributo.

```cpp
perms permissions() const noexcept
void permissions(perms mask) noexcept
```

### <a name="parameters"></a>Parametri

*mask*<br/>
`perms`specificato.

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Classe path](../standard-library/path-class.md)<br/>
[\<filesystem>](../standard-library/filesystem.md)<br/>
