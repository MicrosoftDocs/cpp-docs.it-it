---
description: 'Altre informazioni su: file_status Class'
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
ms.openlocfilehash: 8bc789d97f9b90b18214407fadab19e9644012a1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324361"
---
# <a name="file_status-class"></a>Classe file_status

Esegue il wrapping di [file_type](../standard-library/filesystem-enumerations.md#file_type) e [perms](../standard-library/filesystem-enumerations.md#perms) del file.

## <a name="syntax"></a>Sintassi

```cpp
class file_status;
```

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[file_status](#file_status)|Costruisce un wrapper per [file_type](../standard-library/filesystem-enumerations.md#file_type) e [perms](../standard-library/filesystem-enumerations.md#perms)del file.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[type](#type)|Ottiene o imposta `file_type`.|
|[autorizzazioni](#permissions)|Ottiene o imposta le autorizzazioni del file.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore =](#op_as)|Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<filesystem>

**Spazio dei nomi:** std:: Experimental:: filesystem, std:: Experimental:: filesystem

## <a name="file_statusfile_status"></a><a name="file_status"></a> file_status:: file_status

Costruisce un wrapper per [file_type](../standard-library/filesystem-enumerations.md#file_type) e [perms](../standard-library/filesystem-enumerations.md#perms)del file.

```cpp
explicit file_status(
   file_type ftype = file_type::none,
   perms mask = perms::unknown) noexcept;

file_status(const file_status&) noexcept = default;

file_status(file_status&&) noexcept = default;

~file_status() noexcept = default;
```

### <a name="parameters"></a>Parametri

*FTYPE*\
Specificata `file_type` , il valore predefinito è `file_type::none` .

*maschera*\
File specificato `perms` . il valore predefinito è `perms::unknown` .

*file_status*\
Oggetto archiviato.

## <a name="file_statusoperator"></a><a name="op_as"></a> file_status:: operator =

Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.

```cpp
file_status& operator=(const file_status&) noexcept = default;
file_status& operator=(file_status&&) nexcept = default;
```

### <a name="parameters"></a>Parametri

*file_status*\
[File_status](../standard-library/file-status-class.md) copiato nell'oggetto `file_status` .

## <a name="type"></a>Tipo di<a name="type"></a>

Ottiene o imposta `file_type`.

```cpp
file_type type() const noexcept
void type(file_type ftype) noexcept
```

### <a name="parameters"></a>Parametri

*FTYPE*\
`file_type`specificato.

## <a name="permissions"></a><a name="permissions"></a> autorizzazioni

Ottiene o imposta le autorizzazioni del file.

Usare il setter per creare un file `readonly` o rimuovere l' `readonly` attributo.

```cpp
perms permissions() const noexcept
void permissions(perms mask) noexcept
```

### <a name="parameters"></a>Parametri

*maschera*\
`perms`specificato.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Classe Path](../standard-library/path-class.md)\
[\<filesystem>](../standard-library/filesystem.md)
