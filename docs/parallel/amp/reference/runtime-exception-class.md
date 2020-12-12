---
description: 'Altre informazioni su: runtime_exception Class'
title: runtime_exception (classe)
ms.date: 03/27/2019
f1_keywords:
- runtime_exception
- AMPRT/runtime_exception
- AMPRT/Concurrency::runtime_exception
- AMPRT/Concurrency::runtime_exception::get_error_code
helpviewer_keywords:
- runtime_exception class
ms.assetid: 8fe3ce2c-3d4c-4b9c-95e8-e592f37adefd
ms.openlocfilehash: 8fa5750473ee5a9b84255313832bbcbbba406394
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329938"
---
# <a name="runtime_exception-class"></a>runtime_exception (classe)

Tipo di base per le eccezioni nella libreria C++ Accelerated Massive Parallelism (AMP).

### <a name="syntax"></a>Sintassi

```cpp
class runtime_exception : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[Costruttore runtime_exception](#ctor)|Inizializza una nuova istanza della classe `runtime_exception`.|
|[Distruttore ~ runtime_exception](#dtor)|Elimina definitivamente l' `runtime_exception` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[get_error_code](#get_error_code)|Restituisce il codice di errore che ha causato l'eccezione.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[operatore =](#operator_eq)|Copia il contenuto dell'oggetto specificato `runtime_exception` in questo.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`runtime_exception`

## <a name="requirements"></a>Requisiti

**Intestazione:** amprt. h

**Spazio dei nomi:** Concorrenza

## <a name="runtime_exception-constructor"></a><a name="ctor"></a> Costruttore runtime_exception

Inizializza una nuova istanza della classe.

### <a name="syntax"></a>Sintassi

```cpp
runtime_exception(
    const char * _Message,
    HRESULT _Hresult ) throw();

explicit runtime_exception(
    HRESULT _Hresult ) throw();

runtime_exception(
    const runtime_exception & _Other ) throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Descrizione dell'errore che ha causato l'eccezione.

*_Hresult*<br/>
HRESULT di errore che ha causato l'eccezione.

*_Other*<br/>
Oggetto `runtime_exception` da copiare.

### <a name="return-value"></a>Valore restituito

Oggetto `runtime_exception`.

## <a name="runtime_exception-destructor"></a><a name="dtor"></a>  Distruttore ~ runtime_exception

Elimina l'oggetto.

### <a name="syntax"></a>Sintassi

```cpp
virtual ~runtime_exception() throw();
```

## <a name="get_error_code"></a><a name="get_error_code"></a> get_error_code

Restituisce il codice di errore che ha causato l'eccezione.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT get_error_code() const throw();
```

### <a name="return-value"></a>Valore restituito

HRESULT di errore che ha causato l'eccezione.

## <a name="operator"></a><a name="operator_eq"></a> operatore =

Copia il contenuto dell'oggetto specificato `runtime_exception` in questo.

### <a name="syntax"></a>Sintassi

```cpp
runtime_exception & operator= (    const runtime_exception & _Other ) throw();
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Oggetto `runtime_exception` da copiare.

### <a name="return-value"></a>Valore restituito

Riferimento a questo `runtime_exception` oggetto.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
