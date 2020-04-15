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
ms.openlocfilehash: ff54357055d373db98f469b071edc75fce75e0b4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81336788"
---
# <a name="runtime_exception-class"></a>runtime_exception (classe)

Il tipo di base per le eccezioni nella libreria AMP (Accelerated Massive Parallelism) di C.

### <a name="syntax"></a>Sintassi

```cpp
class runtime_exception : public std::exception;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore runtime_exception](#ctor)|Inizializza una nuova istanza della classe `runtime_exception`.|
|[Destructor runtime_exception](#dtor)|Distrugge l'oggetto. `runtime_exception`|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[get_error_code](#get_error_code)|Restituisce il codice di errore che ha causato l'eccezione.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operatore di comando](#operator_eq)|Copia il contenuto dell'oggetto specificato `runtime_exception` in questo.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`runtime_exception`

## <a name="requirements"></a>Requisiti

**Intestazione:** amprt.h

**Spazio dei nomi:** Concorrenza

## <a name="runtime_exception-constructor"></a><a name="ctor"></a>Costruttore runtime_exception

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
HRESULT dell'errore che ha causato l'eccezione.

*_Other*<br/>
Oggetto `runtime_exception` da copiare.

### <a name="return-value"></a>Valore restituito

Oggetto `runtime_exception`.

## <a name="runtime_exception-destructor"></a><a name="dtor"></a>Destructor runtime_exception

Elimina l'oggetto.

### <a name="syntax"></a>Sintassi

```cpp
virtual ~runtime_exception() throw();
```

## <a name="get_error_code"></a><a name="get_error_code"></a>get_error_code

Restituisce il codice di errore che ha causato l'eccezione.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT get_error_code() const throw();
```

### <a name="return-value"></a>Valore restituito

HRESULT dell'errore che ha causato l'eccezione.

## <a name="operator"></a><a name="operator_eq"></a>operatore di comando

Copia il contenuto dell'oggetto specificato `runtime_exception` in questo.

### <a name="syntax"></a>Sintassi

```cpp
runtime_exception & operator= (    const runtime_exception & _Other ) throw();
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Oggetto `runtime_exception` da copiare.

### <a name="return-value"></a>Valore restituito

Un riferimento `runtime_exception` a questo oggetto.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (AMP)](concurrency-namespace-cpp-amp.md)
