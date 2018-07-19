---
title: Operatori &lt;system_error&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- system_error/std::operator!=
- system_error/std::operator==
dev_langs:
- C++
ms.assetid: c14edefb-bd8a-4e90-88d3-c59c98e6f73c
ms.openlocfilehash: 974b1294f8ef23936d79e64926595779a9019368
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38963693"
---
# <a name="ltsystemerrorgt-operators"></a>Operatori &lt;system_error&gt;

||||
|-|-|-|
|[operator!=](#op_neq)|[operator&lt;](#op_lt)|[operator==](#op_eq_eq)|

## <a name="op_eq_eq"></a>  operator==

Verifica se l'oggetto a sinistra dell'operatore è uguale all'oggetto a destra.

```cpp
bool operator==(const error_code& left,
    const error_condition& right);

bool operator==(const error_condition& left,
    const error_code& right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*left*|Oggetto di cui verificare l'uguaglianza.|
|*right*|Oggetto di cui verificare l'uguaglianza.|

### <a name="return-value"></a>Valore restituito

**true** se gli oggetti sono uguali; in caso contrario, **false**.

### <a name="remarks"></a>Note

Questa funzione restituisce `left.category() == right.category() && left.value() == right.value()`.

## <a name="op_neq"></a>  operator!=

Verifica se l'oggetto a sinistra dell'operatore non è uguale all'oggetto a destra.

```cpp
bool operator!=(const error_code& left,
    const error_condition& right);

bool operator!=(const error_condition& left,
    const error_code& right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*left*|Oggetto di cui verificare la disuguaglianza.|
|*right*|Oggetto di cui verificare la disuguaglianza.|

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto passato in *a sinistra* non è uguale all'oggetto passato *a destra*; in caso contrario **false**.

### <a name="remarks"></a>Note

Questa funzione restituisce `!(left == right)`.

## <a name="op_lt"></a>  operator&lt;

Verifica se un oggetto è più piccolo dell'oggetto passato per il confronto.

```cpp
template <class _Enum>
inline bool operator<(
    _Enum left,
    typename enable_if<is_error_code_enum<_Enum>::value,
    const error_code&>::type right);

template <class _Enum>
inline bool operator<(
    typename enable_if<is_error_code_enum<_Enum>::value,
    const error_code&>::type left, _Enum right);

template <class _Enum>
inline bool operator<(
    _Enum left,
    typename enable_if<is_error_condition_enum<_Enum>::value,
    const error_condition&>::type right);

template <class _Enum>
inline bool operator<(
    typename enable_if<is_error_condition_enum<_Enum>::value,
    const error_condition&>::type left, _Enum right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*left*|Oggetto da confrontare.|
|*right*|Oggetto da confrontare.|

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto passato in *a sinistra* è minore dell'oggetto passato in *a destra*; In caso contrario, **false**.

### <a name="remarks"></a>Note

Questa funzione consente di verificare l'ordine degli errori.

## <a name="see-also"></a>Vedere anche

[<system_error>](../standard-library/system-error.md)<br/>
