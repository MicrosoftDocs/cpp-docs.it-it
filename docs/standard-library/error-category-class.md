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
ms.openlocfilehash: 55ff55b2026b741a2b7062d815fe43d6d19b078b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62413710"
---
# <a name="errorcategory-class"></a>Classe error_category

Rappresenta la base comune astratta per gli oggetti che descrive una categoria di codici di errore.

## <a name="syntax"></a>Sintassi

```cpp
class error_category;
```

## <a name="remarks"></a>Note

Due oggetti predefiniti implementano `error_category`: [generic_category](../standard-library/system-error-functions.md#generic_category) e [system_category](../standard-library/system-error-functions.md#system_category).

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[value_type](#value_type)|Tipo che rappresenta il valore del codice di errore archiviato.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[default_error_condition](#default_error_condition)|Archivia il valore di codice di errore per un oggetto condizione di errore.|
|[equivalent](#equivalent)|Restituisce un valore che specifica se gli oggetti di errore sono equivalenti.|
|[message](#message)|Restituisce il nome del codice di errore specificato.|
|[name](#name)|Restituisce il nome della categoria.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator==](#op_eq_eq)|Verifica l'uguaglianza tra oggetti `error_category`.|
|[operator!=](#op_neq)|Verifica la disuguaglianza tra oggetti `error_category`.|
|[operator<](#op_lt)|Verifica se l'oggetto [error_category](../standard-library/error-category-class.md) è più piccolo dell'oggetto `error_category` passato per il confronto.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<system_error>

**Spazio dei nomi:** std

## <a name="default_error_condition"></a>  error_category::default_error_condition

Archivia il valore di codice di errore per un oggetto condizione di errore.

```cpp
virtual error_condition default_error_condition(int _Errval) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*_Errval*|Valore del codice di errore da archiviare nella [error_condition](../standard-library/error-condition-class.md).|

### <a name="return-value"></a>Valore restituito

Restituisce `error_condition(_Errval, *this)`.

### <a name="remarks"></a>Note

## <a name="equivalent"></a>  error_category::equivalent

Restituisce un valore che specifica se gli oggetti di errore sono equivalenti.

```cpp
virtual bool equivalent(value_type _Errval,
    const error_condition& _Cond) const;

virtual bool equivalent(const error_code& _Code,
    value_type _Errval) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*_Errval*|Il valore del codice di errore da confrontare.|
|*_Cond*|L'oggetto [error_condition](../standard-library/error-condition-class.md) da confrontare.|
|*_Code*|L'oggetto [error_code](../standard-library/error-code-class.md) da confrontare.|

### <a name="return-value"></a>Valore restituito

**true** se la categoria e valore sono uguali; in caso contrario, **false**.

### <a name="remarks"></a>Note

La prima funzione membro restituisce `*this == _Cond.category() && _Cond.value() == _Errval`.

La seconda funzione membro restituisce `*this == _Code.category() && _Code.value() == _Errval`.

## <a name="message"></a>  error_category::message

Restituisce il nome del codice di errore specificato.

```cpp
virtual string message(error_code::value_type val) const = 0;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*val*|Il valore del codice di errore da confrontare.|

### <a name="return-value"></a>Valore restituito

Restituisce un nome descrittivo del codice di errore *val* per la categoria.

### <a name="remarks"></a>Note

## <a name="name"></a>  error_category::name

Restituisce il nome della categoria.

```cpp
virtual const char *name() const = 0;
```

### <a name="return-value"></a>Valore restituito

Restituisce il nome della categoria come una stringa di byte che termina con Null.

### <a name="remarks"></a>Note

## <a name="op_eq_eq"></a>  error_category::operator==

Verifica l'uguaglianza tra oggetti `error_category`.

```cpp
bool operator==(const error_category& right) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*right*|Oggetto di cui verificare l'uguaglianza.|

### <a name="return-value"></a>Valore restituito

**true** se gli oggetti sono uguali; **false** se gli oggetti non sono uguali.

### <a name="remarks"></a>Note

Questo operatore membro restituisce `this == &right`.

## <a name="op_neq"></a>  error_category::operator!=

Verifica la disuguaglianza tra oggetti `error_category`.

```cpp
bool operator!=(const error_category& right) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*right*|Oggetto di cui verificare la disuguaglianza.|

### <a name="return-value"></a>Valore restituito

**true** se il `error_category` non è uguale all'oggetto il `error_category` oggetto passato in *a destra*; in caso contrario **false**.

### <a name="remarks"></a>Note

L'operatore membro restituisce `(!*this == right)`.

## <a name="op_lt"></a>  error_category::operator&lt;

Verifica se l'oggetto [error_category](../standard-library/error-category-class.md) è più piccolo dell'oggetto `error_category` passato per il confronto.

```cpp
bool operator<(const error_category& right) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*right*|L'oggetto `error_category` da confrontare.|

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto `error_category` è più piccolo dell'oggetto `error_category` passato per il confronto; in caso contrario **false**.

### <a name="remarks"></a>Note

L'operatore membro restituisce `this < &right`.

## <a name="value_type"></a>  error_category::value_type

Tipo che rappresenta il valore del codice di errore archiviato.

```cpp
typedef int value_type;
```

### <a name="remarks"></a>Note

Definizione del tipo è un sinonimo **int**.

## <a name="see-also"></a>Vedere anche

[<system_error>](../standard-library/system-error.md)<br/>
