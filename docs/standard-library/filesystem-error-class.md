---
title: Classe filesystem_error | Microsoft Docs
ms.custom: ''
ms.date: 09/10/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- filesystem/std::experimental::filesystem::filesystem_error
dev_langs:
- C++
ms.assetid: c53aac27-c1fa-43e4-8967-48ea8ba1f172
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a5756c01969dba0773e0327e1a34a0c7492b972a
ms.sourcegitcommit: fb9448eb96c6351a77df04af16ec5c0fb9457d9e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2018
ms.locfileid: "44691523"
---
# <a name="filesystemerror-class"></a>Classe filesystem_error

Classe base per tutte le eccezioni generate per segnalare un overflow del sistema di basso livello.

## <a name="syntax"></a>Sintassi

```cpp
class filesystem_error    : public system_error;
```

## <a name="remarks"></a>Note

La classe funge da classe base per tutte le eccezioni generate per segnalare un errore nelle funzioni \<filesystem>. Archivia un oggetto di tipo `string`, denominato `mymesg` qui come a scopo illustrativo. Archivia anche due oggetti di tipo `path`, denominato `mypval1` e `mypval2`.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[filesystem_error](#filesystem_error)|Costruisce un `filesystem_error` messaggio.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[percorso 1](#path1)|Restituisce `mypval1`.|
|[path2](#path2)|Restituisce `mypval2`.|
|[Novità](#what)|Rappresenta un puntatore a un oggetto `NTBS`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<filesystem >

**Spazio nomi:** std::experimental::filesystem

## <a name="filesystem_error"></a> filesystem_error:: filesystem_error

Il primo costruttore crea il messaggio da *what_arg* e *ec*. Il secondo costruttore crea anche il messaggio dal *pval1*, che viene archiviato in `mypval1`. Il terzo costruttore crea anche il messaggio dal *pval1*, che viene archiviato in `mypval1`e dal *pval2*, che viene archiviato in `mypval2`.

```cpp
filesystem_error(const string& what_arg,
    error_code ec);

filesystem_error(const string& what_arg,
    const path& pval1,
    error_code ec);

filesystem_error(const string& what_arg,
    const path& pval1,
    const path& pval2,
    error_code ec);
```

### <a name="parameters"></a>Parametri

*what_arg*<br/>
Messaggio specificato.

*CE*<br/>
Codice di errore specificato.

*mypval1*<br/>
Un'ulteriore parametro del messaggio specificato.

*mypval2*<br/>
Un'ulteriore parametro del messaggio specificato.

## <a name="path1"></a> filesystem_error::path1

La funzione membro restituisce `mypval1`

```cpp
const path& path1() const noexcept;
```

## <a name="path2"></a> filesystem_error::path2

La funzione membro restituisce `mypval2`

```cpp
const path& path2() const noexcept;
```

## <a name="what"></a> filesystem_error::What

La funzione membro restituisce un puntatore a un `NTBS`, preferibilmente composto da `runtime_error::what()`, `system_error::what()`, `mymesg`, `mypval1.native_string()`, e `mypval2.native_string()`.

```cpp
const char *what() const noexcept;
```

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Classe system_error](../standard-library/system-error-class.md)<br/>
[\<filesystem>](../standard-library/filesystem.md)<br/>
[\<exception>](../standard-library/exception.md)<br/>
