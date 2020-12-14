---
description: 'Altre informazioni su: error_category Class'
title: Classe error_category
ms.date: 11/04/2016
f1_keywords:
- system_error/std::error_category
- system_error/std::error_category::value_type
- system_error/std::error_category::default_error_condition
- system_error/std::error_category::equivalent
- system_error/std::error_category::message
- system_error/std::error_category::name
helpviewer_keywords:
- std::error_category
- std::error_category::value_type
- std::error_category::default_error_condition
- std::error_category::equivalent
- std::error_category::message
- std::error_category::name
ms.assetid: e0a71e14-852d-4905-acd6-5f8ed426706d
ms.openlocfilehash: 25ad7f6acfe50cdcc0c4b9df44fb3b8b6244f569
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97232655"
---
# <a name="error_category-class"></a>Classe error_category

Rappresenta la base comune astratta per gli oggetti che descrive una categoria di codici di errore.

## <a name="syntax"></a>Sintassi

```cpp
class error_category;

constexpr error_category() noexcept;
virtual ~error_category();
error_category(const error_category&) = delete
```

## <a name="remarks"></a>Osservazioni

Due oggetti predefiniti implementano `error_category`: [generic_category](../standard-library/system-error-functions.md#generic_category) e [system_category](../standard-library/system-error-functions.md#system_category).

## <a name="members"></a>Membri

### <a name="typedefs"></a>Typedef

|Nome|Description|
|-|-|
|[value_type](#value_type)|Tipo che rappresenta il valore del codice di errore archiviato.|

### <a name="functions"></a>Funzioni

|Nome|Description|
|-|-|
|[default_error_condition](#default_error_condition)|Archivia il valore di codice di errore per un oggetto condizione di errore.|
|[equivalente](#equivalent)|Restituisce un valore che specifica se gli oggetti di errore sono equivalenti.|
|[generic_category](#generic)||
|[message](#message)|Restituisce il nome del codice di errore specificato.|
|[nome](#name)|Restituisce il nome della categoria.|
|[system_category](#system)||

### <a name="operators"></a>Operatori

|Nome|Description|
|-|-|
|[operatore =](#op_as)|Operatore di assegnazione.|
|[operatore = =](#op_eq_eq)|Verifica l'uguaglianza tra oggetti `error_category`.|
|[operatore! =](#op_neq)|Verifica la disuguaglianza tra oggetti `error_category`.|
|[operatore<](#op_lt)|Verifica se l'oggetto [error_category](../standard-library/error-category-class.md) è più piccolo dell'oggetto `error_category` passato per il confronto.|

## <a name="default_error_condition"></a><a name="default_error_condition"></a> default_error_condition

Archivia il valore di codice di errore per un oggetto condizione di errore.

```cpp
virtual error_condition default_error_condition(int _Errval) const;
```

### <a name="parameters"></a>Parametri

`_Errval`\
Valore del codice di errore da archiviare nella [error_condition](../standard-library/error-condition-class.md).

### <a name="return-value"></a>Valore restituito

Restituisce `error_condition(_Errval, *this)`.

### <a name="remarks"></a>Commenti

### <a name="equivalent"></a><a name="equivalent"></a> equivalente

Restituisce un valore che specifica se gli oggetti di errore sono equivalenti.

```cpp
virtual bool equivalent(value_type _Errval,
    const error_condition& _Cond) const;

virtual bool equivalent(const error_code& _Code,
    value_type _Errval) const;
```

#### <a name="parameters"></a>Parametri

*_Errval*\
Il valore del codice di errore da confrontare.

*_Cond*\
L'oggetto [error_condition](../standard-library/error-condition-class.md) da confrontare.

*_Code*\
L'oggetto [error_code](../standard-library/error-code-class.md) da confrontare.

#### <a name="return-value"></a>Valore restituito

**`true`** Se la categoria e il valore sono uguali. in caso contrario, **`false`** .

#### <a name="remarks"></a>Commenti

La prima funzione membro restituisce `*this == _Cond.category() && _Cond.value() == _Errval`.

La seconda funzione membro restituisce `*this == _Code.category() && _Code.value() == _Errval`.

### <a name="generic_category"></a><a name="generic"></a> generic_category

```cpp
const error_category& generic_category();
```

### <a name="message"></a><a name="message"></a> Messaggio

Restituisce il nome del codice di errore specificato.

```cpp
virtual string message(error_code::value_type val) const = 0;
```

#### <a name="parameters"></a>Parametri

*Val*\
Il valore del codice di errore da confrontare.

#### <a name="return-value"></a>Valore restituito

Restituisce un nome descrittivo del codice di errore *Val* per la categoria. Se il codice di errore non è riconosciuto, restituisce `"unknown error"` .

#### <a name="remarks"></a>Commenti

### <a name="name"></a>Nome in <a name="name"></a>

Restituisce il nome della categoria.

```cpp
virtual const char *name() const = 0;
```

#### <a name="return-value"></a>Valore restituito

Restituisce il nome della categoria come una stringa di byte che termina con Null.

### <a name="operator"></a><a name="op_as"></a> operatore =

```cpp
error_category& operator=(const error_category&) = delete;
```

### <a name="operator"></a><a name="op_eq_eq"></a> operatore = =

Verifica l'uguaglianza tra oggetti `error_category`.

```cpp
bool operator==(const error_category& right) const;
```

#### <a name="parameters"></a>Parametri

*Ok*\
Oggetto di cui verificare l'uguaglianza.

#### <a name="return-value"></a>Valore restituito

**`true`** Se gli oggetti sono uguali; **`false`** se gli oggetti non sono uguali.

#### <a name="remarks"></a>Commenti

Questo operatore membro restituisce `this == &right`.

### <a name="operator"></a><a name="op_neq"></a> operatore! =

Verifica la disuguaglianza tra oggetti `error_category`.

```cpp
bool operator!=(const error_category& right) const;
```

#### <a name="parameters"></a>Parametri

*Ok*\
L'oggetto di cui verificare la disuguaglianza.

#### <a name="return-value"></a>Valore restituito

**`true`** Se l' `error_category` oggetto non è uguale all' `error_category` oggetto passato a *destra*; in caso contrario, **`false`** .

#### <a name="remarks"></a>Commenti

L'operatore membro restituisce `(!*this == right)`.

### <a name="operatorlt"></a><a name="op_lt"></a> operatore&lt;

Verifica se l'oggetto [error_category](../standard-library/error-category-class.md) è più piccolo dell'oggetto `error_category` passato per il confronto.

```cpp
bool operator<(const error_category& right) const;
```

#### <a name="parameters"></a>Parametri

*Ok*\
L'oggetto `error_category` da confrontare.

#### <a name="return-value"></a>Valore restituito

**`true`** Se l' `error_category` oggetto è minore dell' `error_category` oggetto passato per il confronto. In caso contrario, **`false`** .

#### <a name="remarks"></a>Commenti

L'operatore membro restituisce `this < &right`.

### <a name="system_category"></a><a name="system"></a> system_category

```cpp
const error_category& system_category();
```

### <a name="value_type"></a><a name="value_type"></a> value_type

Tipo che rappresenta il valore del codice di errore archiviato.

```cpp
typedef int value_type;
```

#### <a name="remarks"></a>Commenti

Questa definizione di tipo è un sinonimo di **`int`** .
