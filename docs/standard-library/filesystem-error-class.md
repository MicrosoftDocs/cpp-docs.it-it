---
description: 'Altre informazioni su: filesystem_error Class'
title: Classe filesystem_error
ms.date: 09/10/2018
f1_keywords:
- filesystem/std::experimental::filesystem::filesystem_error
ms.assetid: c53aac27-c1fa-43e4-8967-48ea8ba1f172
ms.openlocfilehash: 8165bfbc0d59dbbdab17d910e2e2f7973988049d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97232434"
---
# <a name="filesystem_error-class"></a>Classe filesystem_error

Classe base per tutte le eccezioni generate per segnalare un overflow del sistema di basso livello.

## <a name="syntax"></a>Sintassi

```cpp
class filesystem_error    : public system_error;
```

## <a name="remarks"></a>Osservazioni

La classe funge da classe di base per tutte le eccezioni generate per segnalare un errore nelle \<filesystem> funzioni. Archivia un oggetto di tipo `string` , chiamato `mymesg` qui per le finalità di esposizione. Archivia anche due oggetti di tipo `path` , denominati `mypval1` e `mypval2` .

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|Nome|Description|
|-|-|
|[filesystem_error](#filesystem_error)|Costruisce un `filesystem_error` messaggio.|

### <a name="functions"></a>Funzioni

|Nome|Description|
|-|-|
|[path1](#path1)|Restituisce `mypval1`.|
|[path2](#path2)|Restituisce `mypval2`.|
|[cosa](#what)|Rappresenta un puntatore a un oggetto `NTBS`.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<filesystem>

**Spazio dei nomi:** std::experimental::filesystem

## <a name="filesystem_error"></a><a name="filesystem_error"></a> filesystem_error

Il primo costruttore crea il messaggio da *what_arg* e da *EC*. Il secondo costruttore crea anche il messaggio da *Pval1*, che archivia in `mypval1` . Il terzo costruttore crea anche il messaggio da *Pval1*, archiviato in `mypval1` e da *Pval2*, in cui viene archiviato `mypval2` .

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

*EC*\
Codice di errore specificato.

*mypval1*\
Parametro del messaggio specificato.

*mypval2*\
Parametro del messaggio specificato.

## <a name="path1"></a><a name="path1"></a> path1

La funzione membro restituisce `mypval1`

```cpp
const path& path1() const noexcept;
```

## <a name="path2"></a><a name="path2"></a> path2

La funzione membro restituisce `mypval2`

```cpp
const path& path2() const noexcept;
```

## <a name="what"></a><a name="what"></a> cosa

La funzione membro restituisce un puntatore a un oggetto `NTBS` , preferibilmente composto da `runtime_error::what()` , `system_error::what()` , `mymesg` , `mypval1.native_string()` e `mypval2.native_string()` .

```cpp
const char *what() const noexcept;
```
