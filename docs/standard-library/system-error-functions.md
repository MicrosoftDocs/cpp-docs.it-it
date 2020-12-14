---
description: 'Altre informazioni su: &lt; &gt; funzioni system_error'
title: Funzioni &lt;system_error&gt;
ms.date: 03/15/2019
f1_keywords:
- system_error/std::generic_category
- system_error/std::make_error_code
- system_error/std::make_error_condition
- system_error/std::system_category
ms.assetid: 57d6f15f-f0b7-4e2f-80fe-31d3c320ee33
helpviewer_keywords:
- std::generic_category
- std::make_error_code
- std::make_error_condition
- std::system_category
ms.openlocfilehash: 6d0283ca2a094e6257841569fcf7043b51ba4b1b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97259435"
---
# <a name="ltsystem_errorgt-functions"></a>Funzioni &lt;system_error&gt;

## <a name="generic_category"></a><a name="generic_category"></a> generic_category

Rappresenta la categoria di errori generici.

```cpp
const error_category& generic_category() noexcept;
```

### <a name="remarks"></a>Commenti

L' `generic_category` oggetto è un'implementazione di [error_category](../standard-library/error-category-class.md).

## <a name="is_error_code_enum_v"></a><a name="is_error_code_enum_v"></a> is_error_code_enum_v

```cpp
template <class T>
    inline constexpr bool is_error_code_enum_v = is_error_code_enum<T>::value;
```

## <a name="is_error_condition_enum_v"></a><a name="is_error_condition_enum_v"></a> is_error_condition_enum_v

```cpp
template <class T>
    inline constexpr bool is_error_condition_enum_v = is_error_condition_enum<T>::value;
```

## <a name="make_error_code"></a><a name="make_error_code"></a> make_error_code

Crea un oggetto codice di errore.

```cpp
error_code make_error_code(std::errc error) noexcept;
```

### <a name="parameters"></a>Parametri

*errore*\
`std::errc`Valore di enumerazione da archiviare nell'oggetto codice di errore.

### <a name="return-value"></a>Valore restituito

Oggetto codice di errore.

### <a name="remarks"></a>Commenti

## <a name="make_error_condition"></a><a name="make_error_condition"></a> make_error_condition

Crea un oggetto condizione di errore.

```cpp
error_condition make_error_condition(std::errc error) noexcept;
```

### <a name="parameters"></a>Parametri

*errore*\
`std::errc`Valore di enumerazione da archiviare nell'oggetto codice di errore.

### <a name="return-value"></a>Valore restituito

Oggetto condizione di errore.

### <a name="remarks"></a>Commenti

## <a name="system_category"></a><a name="system_category"></a> system_category

Rappresenta la categoria di errori causati da un overflow di basso livello del sistema.

```cpp
const error_category& system_category() noexcept;
```

### <a name="remarks"></a>Commenti

L' `system_category` oggetto è un'implementazione di [error_category](../standard-library/error-category-class.md).
