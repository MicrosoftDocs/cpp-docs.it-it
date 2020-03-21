---
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
ms.openlocfilehash: 3ed2eceb60c2efa78181faea58a256b0e35d489f
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80076605"
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

## <a name="members"></a>Members

### <a name="typedefs"></a>Typedef

|||
|-|-|
|[value_type](#value_type)|Tipo che rappresenta il valore del codice di errore archiviato.|

### <a name="functions"></a>Funzioni

|||
|-|-|
|[default_error_condition](#default_error_condition)|Archivia il valore di codice di errore per un oggetto condizione di errore.|
|[equivalent](#equivalent)|Restituisce un valore che specifica se gli oggetti di errore sono equivalenti.|
|[generic_category](#generic)||
|[message](#message)|Restituisce il nome del codice di errore specificato.|
|[nome](#name)|Restituisce il nome della categoria.|
|[system_category](#system)||

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator=](#op_as)||
|[operator==](#op_eq_eq)|Verifica l'uguaglianza tra oggetti `error_category`.|
|[operator!=](#op_neq)|Verifica la disuguaglianza tra oggetti `error_category`.|
|[operator<](#op_lt)|Verifica se l'oggetto [error_category](../standard-library/error-category-class.md) è più piccolo dell'oggetto `error_category` passato per il confronto.|

## <a name="default_error_condition"></a><a name="default_error_condition"></a>default_error_condition

Archivia il valore di codice di errore per un oggetto condizione di errore.

```cpp
virtual error_condition default_error_condition(int _Errval) const;
```

### <a name="parameters"></a>Parametri

*_Errval*\
Valore del codice di errore da archiviare nella [error_condition](../standard-library/error-condition-class.md).

### <a name="return-value"></a>Valore restituito

Restituisce `error_condition(_Errval, *this)`.

### <a name="remarks"></a>Osservazioni

### <a name="equivalent"></a><a name="equivalent"></a>equivalente

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

**true** se la categoria e il valore sono uguali. in caso contrario, **false**.

#### <a name="remarks"></a>Osservazioni

La prima funzione membro restituisce `*this == _Cond.category() && _Cond.value() == _Errval`.

La seconda funzione membro restituisce `*this == _Code.category() && _Code.value() == _Errval`.

### <a name="generic_category"></a><a name="generic"></a>generic_category

```cpp
const error_category& generic_category();
```

### <a name="message"></a><a name="message"></a>Messaggio

Restituisce il nome del codice di errore specificato.

```cpp
virtual string message(error_code::value_type val) const = 0;
```

#### <a name="parameters"></a>Parametri

\ *Val*
Il valore del codice di errore da confrontare.

#### <a name="return-value"></a>Valore restituito

Restituisce un nome descrittivo del codice di errore *Val* per la categoria.

#### <a name="remarks"></a>Osservazioni

### <a name="name"></a><a name="name"></a>nome

Restituisce il nome della categoria.

```cpp
virtual const char *name() const = 0;
```

#### <a name="return-value"></a>Valore restituito

Restituisce il nome della categoria come una stringa di byte che termina con Null.

### <a name="operator"></a><a name="op_as"></a>operatore =

```cpp
error_category& operator=(const error_category&) = delete;
```

### <a name="operator"></a><a name="op_eq_eq"></a>operatore = =

Verifica l'uguaglianza tra oggetti `error_category`.

```cpp
bool operator==(const error_category& right) const;
```

#### <a name="parameters"></a>Parametri

\ a *destra*
L'oggetto di cui verificare l'uguaglianza.

#### <a name="return-value"></a>Valore restituito

**true** se gli oggetti sono uguali; **false** se gli oggetti non sono uguali.

#### <a name="remarks"></a>Osservazioni

Questo operatore membro restituisce `this == &right`.

### <a name="operator"></a><a name="op_neq"></a>operatore! =

Verifica la disuguaglianza tra oggetti `error_category`.

```cpp
bool operator!=(const error_category& right) const;
```

#### <a name="parameters"></a>Parametri

\ a *destra*
Oggetto di cui verificare la disuguaglianza.

#### <a name="return-value"></a>Valore restituito

**true** se l'oggetto `error_category` non è uguale all'oggetto `error_category` passato a *destra*; in caso contrario, **false**.

#### <a name="remarks"></a>Osservazioni

L'operatore membro restituisce `(!*this == right)`.

### <a name="operatorlt"></a><a name="op_lt">Operatore </a>&lt;

Verifica se l'oggetto [error_category](../standard-library/error-category-class.md) è più piccolo dell'oggetto `error_category` passato per il confronto.

```cpp
bool operator<(const error_category& right) const;
```

#### <a name="parameters"></a>Parametri

\ a *destra*
L'oggetto `error_category` da confrontare.

#### <a name="return-value"></a>Valore restituito

**true** se l'oggetto `error_category` è più piccolo dell'oggetto `error_category` passato per il confronto; in caso contrario **false**.

#### <a name="remarks"></a>Osservazioni

L'operatore membro restituisce `this < &right`.

### <a name="system_category"></a><a name="system"></a>system_category

```cpp
const error_category& system_category();
```

### <a name="value_type"></a><a name="value_type"></a>value_type

Tipo che rappresenta il valore del codice di errore archiviato.

```cpp
typedef int value_type;
```

#### <a name="remarks"></a>Osservazioni

Questa definizione di tipo è un sinonimo di **int**.
