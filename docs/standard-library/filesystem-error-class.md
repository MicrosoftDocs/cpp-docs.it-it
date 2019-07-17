---
title: Classe filesystem_error
ms.date: 09/10/2018
f1_keywords:
- filesystem/std::experimental::filesystem::filesystem_error
ms.assetid: c53aac27-c1fa-43e4-8967-48ea8ba1f172
ms.openlocfilehash: c3dbfc080f0a1494950016f42189d932be05b0f1
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68240737"
---
# <a name="filesystemerror-class"></a>Classe filesystem_error

Classe base per tutte le eccezioni generate per segnalare un overflow del sistema di basso livello.

## <a name="syntax"></a>Sintassi

```cpp
class filesystem_error    : public system_error;
```

## <a name="remarks"></a>Note

La classe funge da classe base per tutte le eccezioni generate per segnalare un errore nelle funzioni \<filesystem>. Archivia un oggetto di tipo `string`, denominato `mymesg` qui come a scopo illustrativo. Archivia anche due oggetti di tipo `path`, denominato `mypval1` e `mypval2`.

## <a name="members"></a>Members

### <a name="constructors"></a>Costruttori

|||
|-|-|
|[filesystem_error](#filesystem_error)|Costruisce un `filesystem_error` messaggio.|

### <a name="functions"></a>Funzioni

|||
|-|-|
|[path1](#path1)|Restituisce `mypval1`.|
|[path2](#path2)|Restituisce `mypval2`.|
|[what](#what)|Rappresenta un puntatore a un oggetto `NTBS`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<filesystem >

**Spazio nomi:** std::experimental::filesystem

## <a name="filesystem_error"></a> filesystem_error

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

*what_arg*\
Messaggio specificato.

*CE*\
Codice di errore specificato.

*mypval1*\
Un'ulteriore parametro del messaggio specificato.

*mypval2*\
Un'ulteriore parametro del messaggio specificato.

## <a name="path1"></a> percorso 1

La funzione membro restituisce `mypval1`

```cpp
const path& path1() const noexcept;
```

## <a name="path2"></a> path2

La funzione membro restituisce `mypval2`

```cpp
const path& path2() const noexcept;
```

## <a name="what"></a> Novità

La funzione membro restituisce un puntatore a un `NTBS`, preferibilmente composto da `runtime_error::what()`, `system_error::what()`, `mymesg`, `mypval1.native_string()`, e `mypval2.native_string()`.

```cpp
const char *what() const noexcept;
```
