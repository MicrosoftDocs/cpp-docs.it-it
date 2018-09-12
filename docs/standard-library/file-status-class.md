---
title: Classe file_status | Microsoft Docs
ms.custom: ''
ms.date: 09/10/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- filesystem/std::experimental::filesystem::file_status
- filesystem/std::experimental::filesystem::file_status::operator=
- filesystem/std::experimental::filesystem::file_status::type
- filesystem/std::experimental::filesystem::file_status::permissions
dev_langs:
- C++
ms.assetid: 9781840e-ad22-44dd-ad79-0fabaa94bac4
author: corob-msft
ms.author: corob
helpviewer_keywords:
- std::experimental::filesystem::file_status
- std::experimental::filesystem::file_status::operator=
- std::experimental::filesystem::file_status::type
- std::experimental::filesystem::file_status::permissions
ms.workload:
- cplusplus
ms.openlocfilehash: cc45e785b6a3aeefd9e2cf5d0539b5d387af7143
ms.sourcegitcommit: fb9448eb96c6351a77df04af16ec5c0fb9457d9e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2018
ms.locfileid: "44691666"
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

## <a name="file_status"></a> file_status:: file_status

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

*Maschera*<br/>
File specificato `perms`, per impostazione predefinita `perms::unknown`.

*file_status*<br/>
L'oggetto archiviato.

## <a name="op_as"></a> file_status::operator =

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

*Maschera*<br/>
`perms`specificato.

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Classe path](../standard-library/path-class.md)<br/>
[\<filesystem>](../standard-library/filesystem.md)<br/>
