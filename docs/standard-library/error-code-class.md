---
title: Classe error_code | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- system_error/std::error_code
- system_error/std::error_code::value_type
- system_error/std::error_code::assign
- system_error/std::error_code::category
- system_error/std::error_code::clear
- system_error/std::error_code::default_error_condition
- system_error/std::error_code::message
- system_error/std::error_code::operator bool
dev_langs:
- C++
helpviewer_keywords:
- std::error_code
- std::error_code::value_type
- std::error_code::assign
- std::error_code::category
- std::error_code::clear
- std::error_code::default_error_condition
- std::error_code::message
ms.assetid: c09b4a96-cb14-4281-a319-63543f9b2b4a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 44de89891f3380f71e4fa590626ba4e275782f9c
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="errorcode-class"></a>Classe error_code

Rappresenta gli errori di sistema di basso livello che sono specifici dell'implementazione.

## <a name="syntax"></a>Sintassi

```cpp
class error_code;
```

## <a name="remarks"></a>Note

Un oggetto di tipo classe `error_code` archivia un valore di codice di errore e un puntatore a un oggetto che rappresenta una [categoria](../standard-library/error-category-class.md) di codici di errore che descrive gli errori di basso livello segnalati.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[error_code](#error_code)|Costruisce un oggetto di tipo `error_code`.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[value_type](#value_type)|Tipo che rappresenta il valore del codice di errore archiviato.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[assign](#assign)|Assegna un valore di codice di errore e una categoria a un codice di errore.|
|[category](#category)|Restituisce la categoria dell'errore.|
|[clear](#clear)|Cancella il valore del codice di errore e la categoria.|
|[default_error_condition](#default_error_condition)|Restituisce la condizione di errore predefinita.|
|[message](#message)|Restituisce il nome del codice di errore.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator==](#op_eq_eq)|Verifica l'uguaglianza tra oggetti `error_code`.|
|[operator!=](#op_neq)|Verifica la disuguaglianza tra oggetti `error_code`.|
|[operator<](#op_lt)|Verifica se l'oggetto `error_code` è più piccolo dell'oggetto `error_code` passato per il confronto.|
|[operator=](#op_eq)|Assegna un nuovo valore di enumerazione all'oggetto `error_code`.|
|[operator bool](#op_bool)|Crea una variabile di tipo `error_code`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<system_error>

**Spazio dei nomi:** std

## <a name="assign"></a>  error_code::assign

Assegna un valore di codice di errore e una categoria a un codice di errore.

```cpp
void assign(value_type val, const error_category& _Cat);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`val`|Il valore del codice di errore da archiviare nell'`error_code`.|
|`_Cat`|La categoria dell'errore da archiviare nell'`error_code`.|

### <a name="remarks"></a>Note

La funzione membro archivia `val` come il valore del codice di errore e un puntatore a `_Cat`.

## <a name="category"></a>  error_code::category

Restituisce la categoria dell'errore.

```cpp
const error_category& category() const;
```

### <a name="remarks"></a>Note

## <a name="clear"></a>  error_code::clear

Cancella il valore del codice di errore e la categoria.

```cpp
clear();
```

### <a name="remarks"></a>Note

La funzione membro archivia un valore del codice di errore zero e un puntatore all'oggetto [generic_category](../standard-library/system-error-functions.md#generic_category).

## <a name="default_error_condition"></a>  error_code::default_error_condition

Restituisce la condizione di errore predefinita.

```cpp
error_condition default_error_condition() const;
```

### <a name="return-value"></a>Valore restituito

La [error_condition](../standard-library/error-condition-class.md) specificata dalla [default_error_condition](../standard-library/error-category-class.md#default_error_condition).

### <a name="remarks"></a>Note

Questa funzione membro restituisce `category().default_error_condition(value())`.

## <a name="error_code"></a>  error_code::error_code

Costruisce un oggetto di tipo `error_code`.

```cpp
error_code();

error_code(value_type val, const error_category& _Cat);

template <class _Enum>
error_code(_Enum _Errcode,
    typename enable_if<is_error_code_enum<_Enum>::value,
    error_code>::type* = 0);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`val`|Il valore del codice di errore da archiviare nell'`error_code`.|
|`_Cat`|La categoria dell'errore da archiviare nell'`error_code`.|
|`_Errcode`|Il valore di enumerazione da archiviare nell'`error_code`.|

### <a name="remarks"></a>Note

Il primo costruttore archivia un valore del codice di errore zero e un puntatore alla [generic_category](../standard-library/system-error-functions.md#generic_category).

Il secondo costruttore archivia `val` come valore del codice di errore e un puntatore alla [generic_category](http://msdn.microsoft.com/en-us/6fe57a15-63a1-4e79-8af4-6738e43e19c8).

Il terzo costruttore archivia `(value_type)_Errcode` come valore del codice di errore e un puntatore alla [generic_category](../standard-library/system-error-functions.md#generic_category).

## <a name="message"></a>  error_code::message

Restituisce il nome del codice di errore.

```cpp
string message() const;
```

### <a name="return-value"></a>Valore restituito

`string` che rappresenta il nome del codice di errore.

### <a name="remarks"></a>Note

Questa funzione membro restituisce `category().message(value())`.

## <a name="op_eq_eq"></a>  error_code::operator==

Verifica l'uguaglianza tra oggetti `error_code`.

```cpp
bool operator==(const error_code& right) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`right`|L'oggetto di cui verificare l'uguaglianza.|

### <a name="return-value"></a>Valore restituito

**true** se gli oggetti sono uguali; in caso contrario, **false**.

### <a name="remarks"></a>Note

L'operatore membro restituisce `category() == right.category() && value == right.value()`.

## <a name="op_neq"></a>  error_code::operator!=

Verifica la disuguaglianza tra oggetti `error_code`.

```cpp
bool operator!=(const error_code& right) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`right`|L'oggetto di cui verificare la disuguaglianza.|

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto `error_code` non è uguale all'oggetto `error_code` passato in `right`; in caso contrario **false**.

### <a name="remarks"></a>Note

L'operatore membro restituisce `!(*this == right)`.

## <a name="op_lt"></a>  error_code::operator&lt;

Verifica se l'oggetto [error_code](http://msdn.microsoft.com/en-us/09c6ef90-b6f8-430a-b584-e168716c7e31) è più piccolo dell'oggetto `error_code` passato per il confronto.

```cpp
bool operator<(const error_code& right) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`right`|L'oggetto error_code da confrontare.|

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto `error_code` è più piccolo dell'oggetto `error_code` passato per il confronto; in caso contrario **false**.

### <a name="remarks"></a>Note

L'operatore membro restituisce `category() < right.category() || category() == right.category() && value < right.value()`.

## <a name="op_eq"></a>  error_code::operator=

Assegna un nuovo valore di enumerazione all'oggetto [error_code](http://msdn.microsoft.com/en-us/09c6ef90-b6f8-430a-b584-e168716c7e31).

```cpp
template <class _Enum>
typename enable_if<is_error_code_enum<_Enum>::value,
    error_code>::type&
 operator=(_Enum _Errcode);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`_Errcode`|Il valore di enumerazione da assegnare all'oggetto `error_code`.|

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto `error_code` a cui viene assegnato il nuovo valore di enumerazione dalla funzione membro.

### <a name="remarks"></a>Note

L'operatore membro archivia `(value_type)_Errcode` come valore del codice di errore e un puntatore alla [generic_category](../standard-library/system-error-functions.md#generic_category). Restituisce `*this`.

## <a name="op_bool"></a>  error_code::operator bool

Crea una variabile di tipo `error_code`.

```cpp
explicit operator bool() const;
```

### <a name="return-value"></a>Valore restituito

Il valore booleano dell'oggetto `error_code`.

### <a name="remarks"></a>Note

L'operatore restituisce un valore convertibile in `true` solo se [value](#value) non è uguale a zero. Il tipo restituito è convertibile solo in `bool`, non in `void *` o altri tipi scalari noti.

## <a name="value"></a>  error_code::value

Restituisce il valore del codice di errore archiviato.

```cpp
value_type value() const;
```

### <a name="return-value"></a>Valore restituito

Il valore del codice di errore archiviato di tipo [value_type](#value_type).

### <a name="remarks"></a>Note

## <a name="value_type"></a>  error_code::value_type

Tipo che rappresenta il valore del codice di errore archiviato.

```cpp
typedef int value_type;
```

### <a name="remarks"></a>Note

La definizione del tipo è un sinonimo di `int`.

## <a name="see-also"></a>Vedere anche

[Classe error_category](../standard-library/error-category-class.md)<br/>
[<system_error>](../standard-library/system-error.md)<br/>
