---
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
ms.openlocfilehash: 6ad784720833d2ae5de7d653d132ba144aec2677
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77126378"
---
# <a name="runtime_exception-class"></a>runtime_exception (classe)

Tipo di base per le eccezioni nella C++ libreria amp (Accelerated Massive Parallelism).

### <a name="syntax"></a>Sintassi

```cpp
class runtime_exception : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore runtime_exception](#ctor)|Inizializza una nuova istanza della classe `runtime_exception`.|
|[Distruttore ~ runtime_exception](#dtor)|Elimina definitivamente l'oggetto `runtime_exception`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[get_error_code](#get_error_code)|Restituisce il codice di errore che ha causato l'eccezione.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator=](#operator_eq)|Copia il contenuto dell'oggetto `runtime_exception` specificato in questo oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`runtime_exception`

## <a name="requirements"></a>Requisiti

**Intestazione:** amprt. h

**Spazio dei nomi:** Concurrency

## <a name="ctor"></a>Costruttore runtime_exception

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

## <a name="dtor"></a>Distruttore ~ runtime_exception

Elimina l'oggetto.

### <a name="syntax"></a>Sintassi

```cpp
virtual ~runtime_exception() throw();
```

## <a name="get_error_code"></a>get_error_code

Restituisce il codice di errore che ha causato l'eccezione.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT get_error_code() const throw();
```

### <a name="return-value"></a>Valore restituito

HRESULT di errore che ha causato l'eccezione.

## <a name="operator_eq"></a>  operator=
  Copia il contenuto dell'oggetto `runtime_exception` specificato in questo oggetto.

### <a name="syntax"></a>Sintassi

```cpp
runtime_exception & operator= (    const runtime_exception & _Other ) throw();
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Oggetto `runtime_exception` da copiare.

### <a name="return-value"></a>Valore restituito

Riferimento a questo oggetto `runtime_exception`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
